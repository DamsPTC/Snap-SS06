/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f1057c; end: 105f1074f; -[SCMapNotificationPresenter _createAndCompleteNotificationWithPushType:title:resultHandler:] */

void FUN_105f1057c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105f10750;
  puStack_80 = &UNK_1108f82a0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  ppuVar2 = &puStack_98;
  uStack_78 = param_5;
  _objc_retainBlock(ppuVar2);
  puVar1 = PTR_PTR_1126b1370;
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (param_4 == 0) {
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf574a0(puVar1);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf574c0(puVar1);
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105f10750; end: 105f107ab;  */

void FUN_105f10750(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bde2e80(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f107ac; end: 105f1087b; -[SCMapNotificationPresenter _completeNotification:resultHandler:] */

void FUN_105f107ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2c7c0();
  if (iVar1 == 0) {
    if (param_4 == 0) goto LAB_105f10860;
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    pcVar5 = *(code **)(param_4 + 0x10);
    if (puVar3 == (undefined *)0x0) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    func_0x00010befa0a0();
    _objc_release(param_1);
    if (param_4 == 0) goto LAB_105f10860;
    pcVar5 = *(code **)(param_4 + 0x10);
    uVar4 = 0;
  }
  (*pcVar5)(param_4,uVar4);
LAB_105f10860:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f1087c; end: 105f108d3; -[SCMapNotificationPresenter .cxx_destruct] */

void FUN_105f1087c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f108d4; end: 105f10987; +[SCLocationShareWithFriendHelpers unionOfArrays:array2:] */

void FUN_105f108d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_4);
  func_0x00010c225c20(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c280520(puVar2,param_2,puVar1);
  puVar3 = puVar2;
  func_0x00010bf00560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f10988; end: 105f10a5b; +[SCLocationShareWithFriendHelpers arrayByRemovingItemsFromArray:itemsToRemove:] */

void FUN_105f10988(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ce860(puVar2,param_2,puVar3);
    puVar4 = puVar2;
    func_0x00010bf00560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f10a5c; end: 105f10b0f; -[SCStreamingLocationSharingPreferencesCachedObject initWithLocationPreferences:fetchedDate:forceInvalidate:] */

undefined1 *
FUN_105f10a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126edfb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f10b10; end: 105f10ba7; -[SCStreamingLocationSharingPreferencesCachedObject encodeWithCoder:] */

void FUN_105f10b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar2,&PTR____CFConstantStringClassReference_110e31438);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e31458);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e31478);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f10ba8; end: 105f10bd3; -[SCStreamingLocationSharingPreferencesCachedObject copyWithZone:] */

void FUN_105f10ba8(void)

{
  _objc_opt_class();
  _objc_alloc();
                    /* WARNING: Could not recover jumptable at 0x00010c026e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105f10bd4; end: 105f10bdb; -[SCStreamingLocationSharingPreferencesCachedObject locationPreferencesFetchedDate] */

undefined8 FUN_105f10bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f10bdc; end: 105f10be3; -[SCStreamingLocationSharingPreferencesCachedObject forceInvalidate] */

undefined1 FUN_105f10bdc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105f10be4; end: 105f10c13; -[SCStreamingLocationSharingPreferencesCachedObject .cxx_destruct] */

void FUN_105f10be4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105f10c14; end: 105f10d03; -[SCStreamingLocationSharingPreferencesProvider _setCachedPreferencesObjectWithPreference:forceInvalidate:] */

void FUN_105f10c14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5e60;
  _objc_alloc(PTR_PTR_1126c5e60);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026e00(puVar1,param_2,param_3,puVar2,param_4);
  _objc_release(puVar2);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f10d04; end: 105f10e2b; -[SCStreamingLocationSharingPreferencesProvider _updatePreferences:forceInvalidate:] */

void FUN_105f10d04(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c1af800(param_2,param_3,0);
  func_0x00010c1dfdc0(param_2,param_3,param_4);
  if (param_4 != 0) {
    func_0x00010c1a5e20(param_2,param_3,1);
  }
  func_0x00010bea2780(param_2,param_3,param_4,param_5);
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar1 = param_2;
  func_0x00010c1067a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bfcc660();
  if ((int)lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010bfcc6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_4;
      func_0x00010bfcc6c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      _objc_release(lVar1);
      if (0.0 <= param_1) {
        if (0.0 < param_1) {
          func_0x00010c2510a0(param_1,*(undefined8 *)(param_2 + 0x18));
        }
      }
      else {
        func_0x00010c06a200(*(undefined8 *)(param_2 + 0x18));
        func_0x00010bf9b7a0(*(undefined8 *)(param_2 + 0x18));
      }
      goto LAB_105f10e00;
    }
  }
  func_0x00010c06a200(*(undefined8 *)(param_2 + 0x18));
LAB_105f10e00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f10e2c; end: 105f10f4b; -[SCStreamingLocationSharingPreferencesProvider ensureHasPreferencesWithSource:completionQueue:completion:] */

void FUN_105f10e2c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be1d840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = uVar1;
    FUN_105f10f4c(uVar1,*(undefined4 *)(param_1 + 0x84));
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105f10fe4;
      puStack_60 = &UNK_110849530;
      _objc_retain(param_5);
      uStack_58 = param_5;
      func_0x00010007380c(param_4,&puStack_78);
      _objc_release(uStack_58);
      goto LAB_105f10f18;
    }
  }
  func_0x00010bee4960(param_1);
LAB_105f10f18:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105f10f4c; end: 105f10fe3;  */

uint FUN_105f10f4c(double param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bfb4c80(param_2);
    uVar3 = (uint)lVar2 ^ 1;
  }
  lVar2 = param_2;
  func_0x00010c09f240(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(lVar2);
  uVar1 = 0;
  if ((double)(param_3 * 0x3c) < -param_1) {
    uVar1 = uVar3;
  }
  _objc_release(param_2);
  return uVar1 | uVar3 ^ 1;
}



/* Entry: 105f10fe4; end: 105f10ff3;  */

void FUN_105f10fe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105f10ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105f10ff4; end: 105f1110b; -[SCStreamingLocationSharingPreferencesProvider revalidateCachedPreferencesWithSource:forced:] */

void FUN_105f10ff4(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  byte bStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010be1d840();
  _objc_retainAutoreleasedReturnValue();
  if (((param_4 & 1) != 0) ||
     (lVar2 = lVar1, FUN_105f10f4c(lVar1,*(undefined4 *)(param_1 + 0x84)), (int)lVar2 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_60,auStack_48);
    uStack_58 = param_3;
    bStack_50 = param_4;
    func_0x00010bee4960(param_1);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105f1110c; end: 105f11167;  */

void FUN_105f1110c(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x78) = 0x3ff0000000000000;
    }
    else {
      func_0x00010be97060(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f11168; end: 105f111a7; -[SCStreamingLocationSharingPreferencesProvider hasFetchedLocationPreferences] */

byte FUN_105f11168(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 0x80);
  }
  else {
    bVar2 = 1;
  }
  _objc_release();
  return bVar2 & 1;
}



/* Entry: 105f111a8; end: 105f114af; -[SCStreamingLocationSharingPreferencesProvider locationVisibleToFriendsCount] */

void FUN_105f111a8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  long lStack_238;
  undefined1 uStack_230;
  undefined1 auStack_228 [8];
  ulong uStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0xb0);
  func_0x00010bfcc660();
  if (iVar1 != 0) {
    lVar6 = 0;
    goto LAB_105f11468;
  }
  lVar6 = *(long *)(param_1 + 0xb0);
  func_0x00010c22c5c0();
  if (lVar6 == 1) {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = lVar2;
    func_0x00010bf00100();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = unaff_x21;
    func_0x00010bf529e0();
LAB_105f11440:
    _objc_release(unaff_x21);
    param_1 = lVar2;
  }
  else {
    if (lVar6 == 3) {
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      lVar2 = *(long *)(param_1 + 0xb0);
      func_0x00010bf1c9a0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = SUB81(auStack_170,0);
      lVar6 = lVar2;
      func_0x00010bf52a60();
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        lVar8 = *plStack_1e0;
        do {
          lVar9 = 0;
          do {
            if (*plStack_1e0 != lVar8) {
              _objc_enumerationMutation(lVar2);
            }
            uVar4 = *(ulong *)(param_1 + 0x38);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            unaff_x22 = uVar4;
            func_0x00010bfb9020();
            _objc_release(uVar4);
            if (4 < unaff_x22 || (1L << (unaff_x22 & 0x3f) & 0x19U) == 0) {
              lVar7 = lVar7 + 1;
            }
            lVar9 = lVar9 + 1;
          } while (lVar6 != lVar9);
          param_4 = SUB81(auStack_170,0);
          lVar6 = lVar2;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar2);
      lVar2 = *(long *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = lVar2;
      func_0x00010bf00100();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = unaff_x21;
      func_0x00010bf529e0();
      lVar6 = lVar6 - lVar7;
      goto LAB_105f11440;
    }
    if (lVar6 != 2) {
      lVar6 = 0;
      unaff_x20 = lVar6;
      goto LAB_105f11468;
    }
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 0xb0);
    func_0x00010c2a4ba0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = SUB81(auStack_f0,0);
    lVar7 = lVar2;
    func_0x00010bf52a60();
    unaff_x21 = lVar2;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      lVar8 = *plStack_1a0;
      do {
        lVar9 = 0;
        do {
          if (*plStack_1a0 != lVar8) {
            _objc_enumerationMutation(lVar2);
          }
          uVar3 = *(ulong *)(param_1 + 0x38);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfb9020();
          _objc_release(uVar3);
          if (4 < uVar4 || (1L << (uVar4 & 0x3f) & 0x19U) == 0) {
            lVar6 = lVar6 + 1;
          }
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
        param_4 = SUB81(auStack_f0,0);
        lVar7 = lVar2;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
      unaff_x22 = 0;
    }
  }
  _objc_release(lVar2);
  unaff_x20 = lVar6;
LAB_105f11468:
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_105f114b0;
  uVar10 = NEON_fminnm(*(double *)(puVar5 + 0x78) + *(double *)(puVar5 + 0x78),0x404e000000000000);
  *(undefined8 *)(puVar5 + 0x78) = uVar10;
  uStack_220 = unaff_x22;
  lStack_218 = unaff_x21;
  lStack_210 = unaff_x20;
  lStack_208 = param_1;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_228,puVar5);
  uVar10 = 0;
  _dispatch_time(0,(long)(*(double *)(puVar5 + 0x78) * 1000000000.0));
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_105f11590;
  puStack_248 = &UNK_11085da78;
  _objc_copyWeak(auStack_240,auStack_228);
  lStack_238 = lVar6;
  uStack_230 = param_4;
  func_0x00010058c530(uVar10,PTR___dispatch_main_q_11034be20,&puStack_260);
  _objc_destroyWeak(auStack_240);
  _objc_destroyWeak(auStack_228);
  return;
}



/* Entry: 105f114b0; end: 105f1158f; -[SCStreamingLocationSharingPreferencesProvider _retryRevalidateCachedPreferencesWithSource:forced:] */

void FUN_105f114b0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = NEON_fminnm(*(double *)(param_1 + 0x78) + *(double *)(param_1 + 0x78),0x404e000000000000);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  _dispatch_time(0,(long)(*(double *)(param_1 + 0x78) * 1000000000.0));
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105f11590;
  puStack_58 = &UNK_11085da78;
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010058c530(uVar1,PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f11590; end: 105f115c7;  */

void FUN_105f11590(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c13fe40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f115c8; end: 105f1170b; -[SCStreamingLocationSharingPreferencesProvider _updateWithLatestServerPreferencesWithFetchType:source:completionQueue:completion:] */

void FUN_105f115c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c1af800(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfc72c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105f1170c; end: 105f11807;  */

void FUN_105f1170c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  if (param_4 == 0) {
    func_0x00010bdfdf60(lVar2);
  }
  else {
    func_0x00010bdfdb40(lVar2);
  }
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 != 0) && (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105f11808;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x00010007380c(lVar2,&puStack_60);
    _objc_release(lStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 105f11808; end: 105f11817;  */

void FUN_105f11808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105f11814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105f11818; end: 105f11927; -[SCStreamingLocationSharingPreferencesProvider _didFetchLatestServerPreferences:fetchType:source:] */

void FUN_105f11818(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined1 *)(param_2 + 0x80) = 0;
  _objc_retain(param_4);
  func_0x00010bedda00(param_2,param_3,param_4,0);
  puVar1 = PTR_PTR_1126c5e70;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b9660();
  uVar4 = param_4;
  func_0x00010bfcc6c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  func_0x000105f0baa8(param_6);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09f5e0(param_1,puVar1,param_3,param_5,param_4,uVar3,param_6,uVar6,uVar5);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f11928; end: 105f1193b; -[SCStreamingLocationSharingPreferencesProvider _didFailToFetchPreferencesWithError:] */

void FUN_105f11928(long param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bedda10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updatePreferences_forceInvalida_112595028,0,1);
  return;
}



/* Entry: 105f1193c; end: 105f1197f; -[SCStreamingLocationSharingPreferencesProvider setDidOnboard] */

void FUN_105f1193c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f11980; end: 105f11df7; -[SCStreamingLocationSharingPreferencesProvider stopSharingLocationWithUserIds:source:completionQueue:completion:] */

void FUN_105f11980(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010c22c5c0();
  puVar6 = puVar2;
  if ((long)puVar1 < 2) {
    if (puVar1 == (undefined *)0x0) {
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x105f12098;
      puStack_f0 = &UNK_110849530;
      _objc_retain(param_6);
      puStack_e8 = param_6;
      func_0x00010007380c(param_5,&puStack_108);
      puVar3 = puStack_e8;
    }
    else {
      if (puVar1 != (undefined *)0x1) goto LAB_105f11d94;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_105f11df8;
      puStack_78 = &UNK_110849530;
      _objc_retain(param_6);
      puStack_70 = param_6;
      func_0x00010007380c(param_5,&puStack_90);
      puVar3 = puStack_70;
    }
LAB_105f11cd0:
    _objc_release(puVar3);
  }
  else {
    puVar7 = puVar2;
    if (puVar1 == (undefined *)0x2) {
      puVar1 = puVar2;
      func_0x00010c2a4ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0d3c80();
      _objc_release(puVar1);
      func_0x00010c12d500(puVar3);
      puVar1 = puVar3;
      func_0x00010bf529e0();
      puVar4 = puVar2;
      func_0x00010c2a4ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf529e0();
      _objc_release(puVar4);
      if (puVar5 <= puVar1) {
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        uStack_a8 = 0x105f11ed8;
        puStack_a0 = &UNK_110849530;
        _objc_retain(param_6);
        puStack_98 = param_6;
        func_0x00010007380c(param_5,&puStack_b8);
        puVar1 = puStack_98;
LAB_105f11cc8:
        _objc_release(puVar1);
        goto LAB_105f11cd0;
      }
      puVar1 = puVar3;
      func_0x00010bf529e0();
      if (puVar1 != (undefined *)0x0) {
        func_0x00010bfcc660();
      }
      puVar6 = PTR_PTR_1126bf2d8;
      _objc_alloc();
      func_0x00010c22c5c0(puVar2);
      func_0x00010bfcc6c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010c12c080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf1c9a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e7d40(puVar2);
    }
    else {
      if (puVar1 != (undefined *)0x3) goto LAB_105f11d94;
      puVar1 = puVar2;
      func_0x00010bf1c9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0d3c80();
      _objc_release(puVar1);
      func_0x00010befa160(puVar3);
      puVar1 = puVar3;
      func_0x00010bf529e0();
      puVar4 = puVar2;
      func_0x00010bf1c9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf529e0();
      _objc_release(puVar4);
      if (puVar1 <= puVar5) {
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        uStack_d0 = 0x105f11fb8;
        puStack_c8 = &UNK_110849530;
        _objc_retain(param_6);
        puStack_c0 = param_6;
        func_0x00010007380c(param_5,&puStack_e0);
        puVar1 = puStack_c0;
        goto LAB_105f11cc8;
      }
      puVar6 = PTR_PTR_1126bf2d8;
      _objc_alloc();
      func_0x00010c22c5c0();
      func_0x00010bfcc660(puVar2);
      func_0x00010bfcc6c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c2a4ba0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c12c080(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e7d40(puVar2);
    }
    func_0x00010c045c80(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar3);
LAB_105f11d94:
    func_0x00010c287680(param_1);
  }
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105f11df8; end: 105f12177;  */

void FUN_105f11df8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *in_x5;
  long lVar9;
  long lVar10;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0();
  (**(code **)(lVar10 + 0x10))(lVar10,puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(puVar2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0();
  (**(code **)(lVar10 + 0x10))(lVar10,puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(puVar2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e2e0();
  (**(code **)(lVar10 + 0x10))(lVar10,puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(puVar2 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c00e2e0();
  (**(code **)(lVar10 + 0x10))(lVar10,puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  _objc_retain(in_x5);
  puVar1 = puVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bfcc660();
  if ((int)puVar1 == 0) {
    puVar1 = puVar2;
    func_0x00010be0c560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf2d8;
    _objc_alloc(PTR_PTR_1126bf2d8);
    func_0x00010c22c5c0(puVar3);
    puVar5 = puVar3;
    func_0x00010c2a4ba0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf1c9a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7d40(puVar3);
    func_0x00010c045c80(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010c287680(puVar2);
    if (puVar1 == (undefined *)0x0) {
      uVar7 = *(undefined8 *)(puVar2 + 0x30);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2140();
      _objc_release(uVar7);
    }
    _objc_release(puVar4);
  }
  else {
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    pcStack_1b8 = FUN_105f1235c;
    puStack_1b0 = &UNK_110849530;
    _objc_retain(in_x5);
    puStack_1a8 = in_x5;
    func_0x00010007380c(puVar8,&puStack_1c8);
    puVar1 = puStack_1a8;
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(in_x5);
  _objc_release(puVar8);
  return;
}



/* Entry: 105f12178; end: 105f1235b; -[SCStreamingLocationSharingPreferencesProvider enterGhostModeWithDuration:source:completionQueue:completion:] */

void FUN_105f12178(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_x4;
  long in_x5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  lVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfcc660();
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010be0c560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bf2d8;
    _objc_alloc(PTR_PTR_1126bf2d8);
    func_0x00010c22c5c0(lVar2);
    lVar4 = lVar2;
    func_0x00010c2a4ba0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf1c9a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7d40(lVar2);
    func_0x00010c045c80(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c287680(param_1);
    if (lVar1 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2140();
      _objc_release(uVar6);
    }
    _objc_release(puVar3);
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105f1235c;
    puStack_70 = &UNK_110849530;
    _objc_retain(in_x5);
    lStack_68 = in_x5;
    func_0x00010007380c(in_x4,&puStack_88);
    lVar1 = lStack_68;
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(in_x5);
  _objc_release(in_x4);
  return;
}



/* Entry: 105f1235c; end: 105f123af;  */

void FUN_105f1235c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f123b0; end: 105f1240b; -[SCStreamingLocationSharingPreferencesProvider _expirationDateFromDuration:] */

void FUN_105f123b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x40c5180000000000;
  }
  else if (param_3 == 3) {
    uVar1 = 0;
  }
  else {
    if (param_3 != 1) goto _objc_autoreleaseReturnValue;
    uVar1 = 0x40f5180000000000;
  }
  func_0x00010bf65600(uVar1,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f1240c; end: 105f125a3; -[SCStreamingLocationSharingPreferencesProvider exitGhostModeWithSource:completionQueue:completion:] */

void FUN_105f1240c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfcc660();
  if ((uVar1 & 1) == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105f125a4;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_68 = param_5;
    func_0x00010007380c(param_4,&puStack_88);
    puVar3 = puStack_68;
  }
  else {
    puVar3 = PTR_PTR_1126bf2d8;
    _objc_alloc(PTR_PTR_1126bf2d8);
    func_0x00010c22c5c0(uVar2);
    uVar1 = uVar2;
    func_0x00010c2a4ba0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1c9a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7d40(uVar2);
    func_0x00010c045c80(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar1);
    func_0x00010c287680(param_1);
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105f125a4; end: 105f125f7;  */

void FUN_105f125a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f125f8; end: 105f1277b; -[SCStreamingLocationSharingPreferencesProvider overrideSimplifiedOnboardingWithTweakValue] */

void FUN_105f125f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = param_1;
  func_0x000109022004();
  if (lVar2 != 0) {
    func_0x000109022004();
    puVar3 = PTR_PTR_1126bf2d8;
    _objc_alloc(PTR_PTR_1126bf2d8);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c22c5c0(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bfcc660(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bfcc6c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c2a4ba0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bf1c9a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045c80(puVar3,param_2,uVar4,uVar5,uVar6,uVar7,uVar8,lVar2 == 1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar1 = PTR_PTR_1126c5e70;
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf00100();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    func_0x00010c0b2b60(puVar1,param_2,uVar7,puVar3,uVar5,*(undefined8 *)(param_1 + 0x28),1);
    _objc_release(uVar4);
    _objc_release(uVar6);
    func_0x00010c287680(param_1,param_2,puVar3,0xffffffffffffffff,0,PTR___dispatch_main_q_11034be20,
                        0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 105f1277c; end: 105f12a5b; -[SCStreamingLocationSharingPreferencesProvider updateLocationSharingPreferences:source:updateType:completionQueue:completion:] */

void FUN_105f1277c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_98,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105f12a5c;
  puStack_b0 = &UNK_1108538b0;
  _objc_retain(param_6);
  uStack_a8 = param_6;
  _objc_retain(param_7);
  ppuVar2 = &puStack_c8;
  uStack_a0 = param_7;
  _objc_retainBlock();
  if (param_3 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e31578;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0(puVar3);
    (*(code *)ppuVar2[2])(ppuVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  lVar8 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2780(param_1);
  func_0x00010c1af800(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105f12b1c;
  puStack_108 = &UNK_1108f8330;
  puVar6 = auStack_98;
  _objc_copyWeak(auStack_e0);
  _objc_retain(ppuVar2);
  ppuStack_e8 = ppuVar2;
  _objc_retain(param_3);
  lStack_100 = param_3;
  _objc_retain(lVar8);
  lStack_f8 = lVar8;
  uStack_d8 = param_4;
  uStack_d0 = param_5;
  _objc_retain(param_6);
  uStack_f0 = param_6;
  func_0x00010bfc72c0(uVar5);
  _objc_release(uVar5);
  _objc_release(uStack_f0);
  _objc_release(lStack_f8);
  _objc_release(lStack_100);
  _objc_release(ppuStack_e8);
  _objc_destroyWeak(auStack_e0);
  _objc_release(lVar8);
  _objc_release(ppuVar2);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_98);
  lVar8 = param_3;
  __Unwind_Resume();
  pcStack_128 = FUN_105f12a5c;
  ppuStack_150 = ppuVar2;
  uStack_148 = param_7;
  uStack_140 = param_6;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  lVar7 = *(long *)(lVar8 + 0x20);
  if ((lVar7 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_105f12b0c;
    puStack_168 = &UNK_11084aaa8;
    _objc_retain(lVar8);
    lStack_158 = lVar8;
    _objc_retain(puVar6);
    puStack_160 = puVar6;
    func_0x00010007380c(lVar7,&puStack_180);
    _objc_release(puStack_160);
    _objc_release(lStack_158);
  }
  _objc_release(puVar6);
  return;
}



/* Entry: 105f12a5c; end: 105f12b0b;  */

void FUN_105f12a5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105f12b0c;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_2);
    uStack_40 = param_2;
    func_0x00010007380c(lVar1,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105f12b0c; end: 105f12b1b;  */

void FUN_105f12b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105f12b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105f12b1c; end: 105f12bc3;  */

void FUN_105f12b1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_4);
  }
  else {
    func_0x000105f0bac8(*(undefined8 *)(param_1 + 0x50));
    func_0x00010bedaf20(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f12bc4; end: 105f12d9f; -[SCStreamingLocationSharingPreferencesProvider _updateLocationSharingPreferences:lastLocationPreference:source:updateType:completionQueue:completionWrapper:error:version:] */

void FUN_105f12bc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_9 == 0) {
    *(undefined1 *)(param_1 + 0x80) = 0;
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_78 = param_5;
    uStack_70 = param_6;
    func_0x00010c1bfcc0(uVar1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010bdfdb40(param_1);
    func_0x00010c1af800(param_1);
    (**(code **)(param_8 + 0x10))(param_8,param_9);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f12da0; end: 105f12e17;  */

void FUN_105f12da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_3);
  }
  else {
    func_0x00010bee5360(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f12e18; end: 105f12fb3; -[SCStreamingLocationSharingPreferencesProvider _updatedLocationSharingPreferencesWithLocalPreferences:lastLocationPreference:source:updateType:completionWrapper:error:] */

void FUN_105f12e18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010bedda00(param_2);
  if (param_9 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    lVar2 = param_2;
    func_0x00010c1067a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126c5e70;
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b9660();
    uVar5 = param_4;
    func_0x00010bfcc6c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    func_0x000105f0baa8(param_6);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09f620(param_1,puVar1);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,param_9);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f12fb4; end: 105f130cb; -[SCStreamingLocationSharingPreferencesProvider _syncLocalPreferencesToServerWithCompletion:] */

void FUN_105f12fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfc72c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105f130cc; end: 105f131f7;  */

void FUN_105f130cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      *(undefined1 *)(lVar1 + 0x80) = 0;
      uVar2 = *(undefined8 *)(lVar1 + 0x60);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c1067a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      func_0x00010c1bfcc0(uVar2);
      _objc_release(lVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
    }
    else {
      func_0x00010bdfdb40(lVar1);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105f131f8; end: 105f1326b;  */

void FUN_105f131f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f1326c; end: 105f1335b; -[SCStreamingLocationSharingPreferencesProvider updateSharingPreferencesWithType:userIds:permissionsPromptPresentationDelegate:source:completion:] */

void FUN_105f1326c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105f1335c;
  puStack_78 = &UNK_1108e3258;
  uStack_70 = param_1;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_7;
  uStack_50 = param_3;
  uStack_48 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105f1335c; end: 105f13423;  */

void FUN_105f1335c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)(param_1 + 0x40);
  if (lVar7 < 2) {
    if (lVar7 == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = 0;
      goto LAB_105f13414;
    }
    if (lVar7 != 1) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = 0;
LAB_105f133c8:
    uVar3 = 1;
  }
  else {
    if (lVar7 != 2) {
      if (lVar7 != 3) {
        return;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      uVar1 = 0;
      uVar2 = 1;
      goto LAB_105f133c8;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = 0;
    uVar3 = 0;
  }
  uVar4 = 1;
LAB_105f13414:
  func_0x00010be915e0(uVar8,param_2,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar9);
  return;
}



/* Entry: 105f13424; end: 105f13517; -[SCStreamingLocationSharingPreferencesProvider shouldForceGhostModeForUnderAgeCompliance] */

uint FUN_105f13424(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c081ca0();
  if ((int)uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c06f220();
    if ((int)uVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110df1c18);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf1f320(uVar4,param_2,puVar5);
      uVar6 = (uint)uVar2 ^ 1;
      _objc_release(puVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 105f13518; end: 105f1379b; -[SCStreamingLocationSharingPreferencesProvider forceGhostModeForUKUnder18OnFirstDeviceLoginIfNecessary] */

void FUN_105f13518(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c081ca0();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c06f220();
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      uVar2 = param_1;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((uVar2 != 0) && (uVar2 = param_1, func_0x00010c06d1c0(), (uVar2 & 1) == 0)) {
        uVar3 = *(ulong *)(param_1 + 0x70);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010bf1f320();
        _objc_release(puVar4);
        _objc_release(uVar3);
        if ((uVar2 & 1) == 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x70);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c172fe0(uVar5);
          _objc_release(puVar4);
          _objc_release(uVar5);
          uVar2 = param_1;
          func_0x00010c1067a0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bfcc660();
          _objc_release(uVar2);
          if ((uVar3 & 1) == 0) {
            uVar2 = param_1;
            func_0x00010c1067a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bea2780(param_1);
            _objc_initWeak(auStack_48,param_1);
            uVar5 = *(undefined8 *)(param_1 + 0x60);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(PTR___dispatch_main_q_11034be20);
            _objc_copyWeak(auStack_50,auStack_48);
            func_0x00010bfc72c0(uVar5);
            _objc_release(PTR___dispatch_main_q_11034be20);
            _objc_release(uVar5);
            _objc_destroyWeak(auStack_50);
            _objc_destroyWeak(auStack_48);
            _objc_release(uVar2);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 105f1379c; end: 105f13927;  */

void FUN_105f1379c(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_4 == 0) && (param_1 != 0)) {
    func_0x00010bdfdf60(param_1);
    uVar1 = param_2;
    func_0x00010bfcc660();
    if ((uVar1 & 1) != 0) goto LAB_105f13900;
    puVar3 = PTR_PTR_1126bf2d8;
    _objc_alloc(PTR_PTR_1126bf2d8);
    func_0x00010c22c5c0(param_2);
    uVar1 = param_2;
    func_0x00010c2a4ba0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf1c9a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7d40(param_2);
    func_0x00010c045c80(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010be18800(param_1);
  }
  else {
    if (param_1 == 0) goto LAB_105f13900;
    puVar3 = *(undefined **)(param_1 + 0x70);
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172fe0(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_105f13900:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f13928; end: 105f13a4f; -[SCStreamingLocationSharingPreferencesProvider _forceGhostModeForUnderAgeComplianceWithPreferences:version:] */

void FUN_105f13928(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010c1af800(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1bfcc0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105f13a50; end: 105f13b63;  */

void FUN_105f13a50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    func_0x00010bedda00(param_1);
    func_0x00010c1af800(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010c1067a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
  }
  else {
    if (param_1 == 0) goto LAB_105f13b44;
    func_0x00010c1af800(param_1);
    lVar1 = *(long *)(param_1 + 0x70);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172fe0(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
LAB_105f13b44:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f13b64; end: 105f13d7b; -[SCStreamingLocationSharingPreferencesProvider forceOnboardToSimplifiedSharingIfNecessary] */

void FUN_105f13b64(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e7d40();
    _objc_release(uVar1);
    if (((uVar2 & 1) == 0) && (uVar1 = param_1, func_0x00010c06d1c0(), (uVar1 & 1) == 0)) {
      puVar3 = PTR_PTR_1126bf2d8;
      _objc_alloc();
      func_0x00010c22c5c0(*(undefined8 *)(param_1 + 0xb0));
      uVar4 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c2a4ba0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010bf1c9a0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c045c80();
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar1 = param_1;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea2780(param_1);
      _objc_initWeak(auStack_48,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(puVar3);
      _objc_retain(uVar1);
      func_0x00010bfc72c0(uVar4);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar4);
      _objc_release(uVar1);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar1);
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 105f13d7c; end: 105f13e23;  */

void FUN_105f13d7c(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_4 == 0) && (lVar1 != 0)) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfdf60();
    _objc_release(param_1);
    uVar2 = param_2;
    func_0x00010c0e7d40();
    if ((uVar2 & 1) == 0) {
      func_0x00010be18860(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f13e24; end: 105f13f9b; -[SCStreamingLocationSharingPreferencesProvider _forceOnboardWithLocationSharingPreferences:lastLocationPreference:source:updateType:version:] */

void FUN_105f13e24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1af800(param_1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_68 = param_5;
  uStack_60 = param_6;
  func_0x00010c1bfcc0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f13f9c; end: 105f14003;  */

void FUN_105f13f9c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    func_0x00010be18880(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f14004; end: 105f141bb; -[SCStreamingLocationSharingPreferencesProvider _forceOnboardedWithLocationSharingPreferences:preferencesResponseFromServer:lastLocationPreference:source:updateType:] */

void FUN_105f14004(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010bedda00(param_2);
  func_0x00010c1af800(param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = param_2;
  func_0x00010c1067a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126c5e70;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b9660();
  uVar5 = param_4;
  func_0x00010bfcc6c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  func_0x000105f0baa8(param_7);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09f620(param_1,puVar1);
  _objc_release(param_6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105f141bc;
  puStack_88 = &UNK_110841f80;
  lStack_80 = param_2;
  uStack_78 = param_4;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_a0);
  _objc_release(uStack_78);
  _objc_release(param_4);
  return;
}



/* Entry: 105f141bc; end: 105f141c7;  */

void FUN_105f141bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfe450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didForceSimplifiedOnboardingWit_11255d2b0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f141c8; end: 105f1433f; -[SCStreamingLocationSharingPreferencesProvider _didForceSimplifiedOnboardingWithPreferences:] */

void FUN_105f141c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5e70;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf00100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0b2b60(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb4da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010be46800(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c10d3a0(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105f14340; end: 105f14377;  */

void FUN_105f14340(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f14378; end: 105f1439f; -[SCStreamingLocationSharingPreferencesProvider preferencesChangeObservable] */

void FUN_105f14378(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f143a0; end: 105f143ab; -[SCStreamingLocationSharingPreferencesProvider clearCache] */

void FUN_105f143a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setCachedPreferencesObjectWithP_112586388,0,1);
  return;
}



/* Entry: 105f143ac; end: 105f144c3; -[SCStreamingLocationSharingPreferencesProvider ghostModeTimerController:wantsToRefreshLocationSharingPreferencesWithCompletion:] */

void FUN_105f143ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bee4960(param_1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f144c4; end: 105f14587;  */

void FUN_105f144c4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (lVar1 != 0)) {
    lVar2 = lVar1;
    func_0x00010c1067a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfcc6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar3 = *(long *)(param_2 + 0x20);
    pcVar4 = *(code **)(lVar3 + 0x10);
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x20);
    pcVar4 = *(code **)(lVar3 + 0x10);
    param_1 = 0;
    lVar2 = param_3;
  }
  (*pcVar4)(param_1,lVar3,lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f14588; end: 105f146df; -[SCStreamingLocationSharingPreferencesProvider ghostModeTimerControllerWantsToExitGhostMode:completion:] */

void FUN_105f14588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  func_0x00010c06a200(*(undefined8 *)(param_1 + 0x18));
  lVar1 = param_1;
  func_0x00010c1067a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bf2d8;
  _objc_alloc(PTR_PTR_1126bf2d8);
  lVar3 = lVar1;
  func_0x00010c22c5c0(lVar1);
  lVar4 = lVar1;
  func_0x00010c2a4ba0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf1c9a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0e7d40(lVar1);
  func_0x00010c045c80(puVar2,param_2,lVar3,0,0,lVar4,lVar5,lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bedda00(param_1,param_2,puVar2,0);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f146e0;
  puStack_60 = &UNK_110859a38;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010bec9b60(param_1,param_2,&puStack_78);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105f146e0; end: 105f146eb;  */

void FUN_105f146e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105f146e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105f146ec; end: 105f149c3; -[SCStreamingLocationSharingPreferencesProvider locationSharingStatusForFriendWithUserId:] */

undefined8 FUN_105f146ec(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar9 = 0xb;
    goto LAB_105f149a4;
  }
  uVar2 = param_1;
  func_0x00010be40980(param_1,param_2,param_3);
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar9 = 0xb;
  if (((int)uVar2 != 0) && (lVar1 != 0)) {
    uVar2 = param_1;
    func_0x00010bfd7100();
    if ((int)uVar2 == 0) {
      uVar9 = 0xb;
    }
    else {
      uVar2 = param_1;
      func_0x00010bfd6d40();
      if ((int)uVar2 == 0) {
        uVar9 = 1;
      }
      else {
        uVar2 = param_1;
        func_0x00010c1067a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bfcc660();
        if ((int)uVar4 == 0) {
          _objc_release(uVar2);
LAB_105f147d8:
          uVar2 = param_1;
          func_0x00010c1067a0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          func_0x00010c22c5c0();
          _objc_release(uVar2);
          if (uVar4 != 0) {
            uVar2 = param_1;
            if (uVar4 == 3) {
              uVar4 = param_1;
              func_0x00010c1067a0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010bf1c9a0();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010bf4b900();
              _objc_release(uVar5);
              _objc_release(uVar4);
              func_0x00010c1067a0();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar2;
              func_0x00010bfcc660();
              iVar8 = (int)uVar4;
              if ((int)uVar6 != 0) {
                uVar7 = 3;
                uVar9 = 8;
LAB_105f14988:
                if (iVar8 == 0) {
                  uVar9 = uVar7;
                }
                _objc_release(uVar2);
                goto LAB_105f1499c;
              }
              _objc_release(uVar2);
              if ((uVar4 & 1) != 0) {
                uVar9 = 9;
                goto LAB_105f1499c;
              }
            }
            else if (uVar4 == 2) {
              uVar4 = param_1;
              func_0x00010c1067a0();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010c2a4ba0();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010bf4b900();
              _objc_release(uVar5);
              _objc_release(uVar4);
              func_0x00010c1067a0();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar2;
              func_0x00010bfcc660();
              iVar8 = (int)uVar4;
              if ((uVar6 & 1) == 0) {
                uVar7 = 2;
                uVar9 = 7;
                goto LAB_105f14988;
              }
              _objc_release(uVar2);
              if ((uVar4 & 1) != 0) {
                uVar9 = 5;
                goto LAB_105f1499c;
              }
            }
            uVar2 = param_1;
            func_0x00010c1067a0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            func_0x00010bfcc660();
            _objc_release(uVar2);
            if ((uVar4 & 1) == 0) {
              uVar4 = *(ulong *)(param_1 + 0x40);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar4;
              func_0x00010bf10fa0();
              _objc_release(uVar4);
              if (uVar2 < 5) {
                uVar9 = *(undefined8 *)(&UNK_10ddd17d8 + uVar2 * 8);
              }
              else {
                uVar9 = 0;
              }
            }
            else {
              uVar9 = 4;
            }
            goto LAB_105f1499c;
          }
        }
        else {
          uVar4 = *(ulong *)(param_1 + 0x48);
          func_0x00010beff680();
          _objc_release(uVar2);
          if ((uVar4 & 1) == 0) goto LAB_105f147d8;
        }
        uVar9 = 6;
      }
    }
  }
LAB_105f1499c:
  _objc_release(lVar1);
LAB_105f149a4:
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 105f149c4; end: 105f14aef; -[SCStreamingLocationSharingPreferencesProvider locationSharingStatus] */

undefined8 FUN_105f149c4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010bfd7100();
  if ((int)uVar1 == 0) {
    return 0xb;
  }
  uVar1 = param_1;
  func_0x00010bfd6d40();
  if ((int)uVar1 == 0) {
    return 1;
  }
  uVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcc660();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x48);
    func_0x00010beff680();
    if ((uVar1 & 1) != 0) {
      return 6;
    }
  }
  uVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22c5c0();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    return 6;
  }
  if (uVar2 == 3) {
    uVar4 = 3;
    uVar5 = 8;
  }
  else {
    if (uVar2 != 2) {
      if ((uVar3 & 1) != 0) {
        return 4;
      }
      uVar3 = *(ulong *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf10fa0();
      _objc_release(uVar3);
      if (4 < uVar1) {
        return 0;
      }
      return *(undefined8 *)(&UNK_10ddd17d8 + uVar1 * 8);
    }
    uVar4 = 2;
    uVar5 = 7;
  }
  if ((int)uVar3 == 0) {
    return uVar4;
  }
  return uVar5;
}



/* Entry: 105f14af0; end: 105f14b97; -[SCStreamingLocationSharingPreferencesProvider _isFriendEligibleForShare:] */

bool FUN_105f14af0(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (((uVar2 == 0) ||
      (uVar2 = param_3, func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x50)),
      (uVar2 & 1) != 0)) ||
     (uVar2 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e12b38),
     (uVar2 & 1) != 0)) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb9020();
    _objc_release(lVar3);
    bVar1 = lVar4 == 1;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105f14b98; end: 105f14cdf; -[SCStreamingLocationSharingPreferencesProvider _keyWindow] */

void FUN_105f14b98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined1 auStack_178 [8];
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar7 = auStack_c8;
  uVar9 = 0x10;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  uVar10 = (undefined1)in_x5;
  uVar8 = (undefined1)uVar9;
  uVar6 = SUB81(puVar7,0);
  if (puVar1 != (undefined *)0x0) {
    lVar12 = *plStack_100;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar12) {
          _objc_enumerationMutation(puVar2);
        }
        puVar11 = *(undefined **)(lStack_108 + (long)puVar13 * 8);
        puVar3 = puVar11;
        func_0x00010c075e80();
        uVar10 = (undefined1)in_x5;
        uVar8 = (undefined1)uVar9;
        uVar6 = SUB81(puVar7,0);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_retain(puVar11);
          _objc_release();
          if (puVar11 == (undefined *)0x0) goto LAB_105f14c98;
          goto LAB_105f14ca8;
        }
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar13);
      puVar7 = auStack_c8;
      uVar9 = 0x10;
      puVar1 = puVar2;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
      uVar10 = (undefined1)in_x5;
      uVar8 = (undefined1)uVar9;
      uVar6 = SUB81(puVar7,0);
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release();
LAB_105f14c98:
  func_0x00010bd863c8();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
LAB_105f14ca8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  uVar9 = uStack_110;
  _objc_retain(puVar5);
  _objc_retain(in_x6);
  _objc_retain(uVar9);
  _objc_initWeak(auStack_178,puVar2);
  uVar4 = *(undefined8 *)(puVar2 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar9);
  _objc_copyWeak(auStack_190,auStack_178);
  _objc_retain(puVar5);
  uStack_188 = in_x7;
  uStack_180 = uVar6;
  uStack_17f = uVar8;
  uStack_17e = uVar10;
  func_0x00010c135c40(uVar4);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_190);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_178);
  _objc_release(uVar9);
  _objc_release(in_x6);
  _objc_release(puVar5);
  return;
}



/* Entry: 105f14ce0; end: 105f14e53; -[SCStreamingLocationSharingPreferencesProvider _requestPermissionsAndUpdatePreferencesWithSelectPeopleList:shouldChangeToAllFriends:needsSetDidOnboard:isInitialPeopleList:permissionsPromptPresentationDelegate:source:completion:] */

void FUN_105f14ce0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_9);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  uStack_78 = param_8;
  uStack_70 = param_4;
  uStack_6f = param_5;
  uStack_6e = param_6;
  func_0x00010c135c40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 105f14e54; end: 105f14eb7;  */

void FUN_105f14e54(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bedda60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105f14eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1,0);
  return;
}



/* Entry: 105f14eb8; end: 105f151cb; -[SCStreamingLocationSharingPreferencesProvider _updatePreferencesWithSelectPeopleList:shouldChangeToAllFriends:needsSetDidOnboard:isInitialPeopleList:source:completion:] */

void FUN_105f14eb8(undefined *param_1,undefined8 param_2,undefined *param_3,int param_4,int param_5,
                  int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  puVar1 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  puVar3 = puVar1;
  puVar4 = puVar1;
  if (param_4 == 0) {
    func_0x00010c2a4ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1c9a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (param_6 == 0) {
      puVar6 = puVar1;
      func_0x00010c22c5c0();
      puVar5 = PTR_PTR_1126c5e78;
      if (puVar6 == (undefined *)0x3) {
        puVar6 = puVar1;
        func_0x00010bf1c9a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09fc0(puVar5,param_2,puVar6,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar6);
        puVar3 = puVar5;
        func_0x00010bf529e0();
        if (puVar3 == (undefined *)0x0) {
          puVar3 = puVar1;
          func_0x00010bf1c9a0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          puVar6 = (undefined *)0x1;
        }
        else {
          puVar6 = (undefined *)0x3;
          puVar3 = puVar5;
        }
      }
      else if (puVar6 == (undefined *)0x2) {
        puVar6 = puVar1;
        func_0x00010c2a4ba0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2804e0(puVar5,param_2,puVar6,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar6);
        puVar6 = (undefined *)0x2;
        puVar2 = puVar5;
      }
    }
    else {
      if (param_3 == (undefined *)0x0) {
        puVar5 = puVar1;
        func_0x00010c2a4ba0(puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(param_3);
        puVar5 = param_3;
      }
      _objc_release(puVar2);
      func_0x00010c166b40(*(undefined8 *)(param_1 + 0x48),param_2,0);
      puVar6 = (undefined *)0x2;
      puVar2 = puVar5;
    }
    puVar5 = PTR_PTR_1126bf2d8;
    _objc_alloc(PTR_PTR_1126bf2d8);
    func_0x00010c0e7d40(puVar1);
  }
  else {
    puVar5 = PTR_PTR_1126bf2d8;
    _objc_alloc(PTR_PTR_1126bf2d8);
    func_0x00010c2a4ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1c9a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7d40(puVar1);
    puVar6 = (undefined *)0x1;
  }
  func_0x00010c045c80(puVar5,param_2,puVar6,0,0,puVar2,puVar3,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105f151cc;
  puStack_70 = &UNK_110859a38;
  _objc_retain(param_8);
  uStack_68 = param_8;
  func_0x00010c287680(param_1,param_2,puVar5,param_7,1,PTR___dispatch_main_q_11034be20,&puStack_88);
  if (param_5 != 0) {
    func_0x00010c18d980(param_1);
  }
  _objc_release(uStack_68);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_3);
  return;
}



/* Entry: 105f151cc; end: 105f151e7;  */

void FUN_105f151cc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000105f151e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,param_2);
  return;
}



/* Entry: 105f151e8; end: 105f15283;  */

uint FUN_105f151e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb9020();
    _objc_release(lVar1);
    if (lVar2 == 1) {
      uVar3 = param_2;
      func_0x00010c0720c0(param_2);
      uVar4 = (uint)uVar3 ^ 1;
      goto LAB_105f15260;
    }
  }
  uVar4 = 0;
LAB_105f15260:
  _objc_release(param_1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 105f15284; end: 105f1528f; -[SCStreamingLocationSharingPreferencesProvider isBeingMutated] */

byte FUN_105f15284(long param_1)

{
  return *(byte *)(param_1 + 0x98) & 1;
}



/* Entry: 105f15290; end: 105f15297; -[SCStreamingLocationSharingPreferencesProvider setIsBeingMutated:] */

void FUN_105f15290(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 105f15298; end: 105f152a3; -[SCStreamingLocationSharingPreferencesProvider hasEverSetPreferences] */

byte FUN_105f15298(long param_1)

{
  return *(byte *)(param_1 + 0x99) & 1;
}



/* Entry: 105f152a4; end: 105f1539f; -[SCStreamingLocationSharingPreferencesProvider .cxx_destruct] */

void FUN_105f152a4(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f153a0; end: 105f155f7; -[SCMapValisViewportPublisher initWithViewport:personLocationProvider:preferencesProvider:valisService:] */

undefined8 *
FUN_105f153a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126edfc8;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[1];
    func_0x00010c29f500();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c26d5a0(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar7 = uVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[5];
    puVar1[5] = uVar7;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f155f8; end: 105f15727;  */

undefined1 FUN_105f155f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bec60(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105f15728; end: 105f15787;  */

void FUN_105f15728(void)

{
  return;
}



/* Entry: 105f15788; end: 105f157b3;  */

void FUN_105f15788(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be845c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f157b4; end: 105f158af; -[SCMapValisViewportPublisher _publishViewportUpdateToValis] */

void FUN_105f157b4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x00010c2bf200(*(undefined8 *)(param_5 + 8));
  uStack_78 = 0x4018000000000000;
  if (6.0 < param_1) {
    func_0x00010c29fd40(*(undefined8 *)(param_5 + 8));
    _objc_initWeak(auStack_58,param_5);
    uVar1 = *(undefined8 *)(param_5 + 0x30);
    _objc_copyWeak(auStack_88,auStack_58);
    dStack_80 = param_1;
    uStack_70 = param_2;
    uStack_68 = param_3;
    uStack_60 = param_4;
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105f158b0; end: 105f158eb;  */

void FUN_105f158b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be845e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f158ec; end: 105f15c27; -[SCMapValisViewportPublisher _publishViewportUpdateWithZoomLevel:bounds:] */

void FUN_105f158ec(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  long param_6,undefined8 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [128];
  undefined1 auStack_120 [128];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar21 = param_2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar20 = 0.0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lVar6 = *(long *)(param_6 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf00640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar7;
  func_0x00010bf52a60(lVar7,param_7,&uStack_1e0,auStack_120,0x10);
  if (lVar6 != 0) {
    lVar17 = *plStack_1d0;
    do {
      lVar18 = 0;
      do {
        if (*plStack_1d0 != lVar17) {
          _objc_enumerationMutation(lVar7);
        }
        lVar16 = *(long *)(lStack_1d8 + lVar18 * 8);
        func_0x00010bf51c80(lVar16);
        bVar2 = false;
        bVar3 = true;
        if (param_2 <= dVar20) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar20) && !NAN(param_4)) {
            bVar2 = dVar20 == param_4;
            bVar3 = param_4 <= dVar20;
          }
        }
        bVar1 = true;
        bVar4 = false;
        if (!bVar3 || bVar2) {
          bVar1 = false;
          bVar4 = true;
          if (!NAN(dVar21) && !NAN(param_3)) {
            bVar1 = dVar21 < param_3;
            bVar4 = false;
          }
        }
        bVar2 = false;
        bVar3 = true;
        if (bVar1 == bVar4) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar21) && !NAN(param_5)) {
            bVar2 = dVar21 == param_5;
            bVar3 = param_5 <= dVar21;
          }
        }
        if (!bVar3 || bVar2) {
          dVar20 = 0.0;
          uStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          lStack_218 = 0;
          uStack_220 = 0;
          uStack_208 = 0;
          plStack_210 = (long *)0x0;
          func_0x00010c0fa5e0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar16;
          func_0x00010bf52a60();
          if (lVar8 != 0) {
            lVar19 = *plStack_210;
            do {
              lVar15 = 0;
              do {
                if (*plStack_210 != lVar19) {
                  _objc_enumerationMutation(lVar16);
                }
                uVar9 = *(undefined8 *)(lStack_218 + lVar15 * 8);
                func_0x00010c2923e0(uVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar5,param_7,uVar9);
                _objc_release(uVar9);
                lVar15 = lVar15 + 1;
              } while (lVar8 != lVar15);
              lVar8 = lVar16;
              func_0x00010bf52a60(lVar16,param_7,&uStack_220,auStack_1a0,0x10);
            } while (lVar8 != 0);
          }
          _objc_release(lVar16);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar6);
      lVar6 = lVar7;
      func_0x00010bf52a60(lVar7,param_7,&uStack_1e0,auStack_120,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar7);
  puVar10 = puVar5;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    puVar10 = PTR_PTR_1126c5e80;
    _objc_alloc(PTR_PTR_1126c5e80);
    func_0x00010c015640(param_1,param_2,param_3,param_4,param_5);
    puVar11 = PTR_PTR_1126c5e48;
    _objc_alloc(PTR_PTR_1126c5e48);
    uVar12 = *(undefined8 *)(param_6 + 0x18);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar12;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010bfcc660();
    func_0x00010c017c60(puVar11,param_7,uVar13);
    _objc_release(uVar9);
    _objc_release(uVar12);
    puVar14 = PTR_PTR_1126c5e30;
    func_0x00010c29f760(PTR_PTR_1126c5e30,param_7,puVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_6 + 0x20);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c5a0();
    _objc_release(uVar9);
    _objc_release(puVar14);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105f15c28; end: 105f15c2b;  */

void FUN_105f15c28(void)

{
  return;
}



/* Entry: 105f15c2c; end: 105f15cff; -[SCMapValisViewportPublisher .cxx_destruct] */

void FUN_105f15c2c(long param_1)

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



/* Entry: 105f15d00; end: 105f15edb; -[SCLocationSharingServiceProvider _createLocationMonitor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f15d00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126c5ea8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a514);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273a518);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11273a54c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0ba3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11273a550;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11273a510);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11273a554;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273a538;
  _objc_loadWeakRetained();
  lVar12 = param_1;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027000(puVar1,param_2,uVar2,uVar3,lVar6,lVar8,uVar9,lVar11,lVar13);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f15edc; end: 105f1602b; -[SCLocationSharingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f15edc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273a528);
  _objc_destroyWeak(param_1 + _DAT_11273a540);
  _objc_destroyWeak(param_1 + _DAT_11273a564);
  _objc_destroyWeak(param_1 + _DAT_11273a544);
  _objc_destroyWeak(param_1 + _DAT_11273a568);
  _objc_destroyWeak(param_1 + _DAT_11273a54c);
  _objc_destroyWeak(param_1 + _DAT_11273a56c);
  _objc_destroyWeak(param_1 + _DAT_11273a53c);
  _objc_destroyWeak(param_1 + _DAT_11273a52c);
  _objc_destroyWeak(param_1 + _DAT_11273a538);
  _objc_destroyWeak(param_1 + _DAT_11273a55c);
  _objc_destroyWeak(param_1 + _DAT_11273a554);
  _objc_destroyWeak(param_1 + _DAT_11273a534);
  _objc_destroyWeak(param_1 + _DAT_11273a550);
  _objc_destroyWeak(param_1 + _DAT_11273a530);
  _objc_destroyWeak(param_1 + _DAT_11273a524);
  _objc_destroyWeak(param_1 + _DAT_11273a558);
  _objc_destroyWeak(param_1 + _DAT_11273a560);
  _objc_destroyWeak(param_1 + _DAT_11273a548);
  _objc_destroyWeak(param_1 + _DAT_11273a520);
  _objc_storeStrong(param_1 + _DAT_11273a51c,0);
  _objc_storeStrong(param_1 + _DAT_11273a514,0);
  _objc_storeStrong(param_1 + _DAT_11273a518,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273a510,0);
  return;
}



/* Entry: 105f1602c; end: 105f1619f; -[SCMapValisViewportPublishingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1602c(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126c5eb8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273a570;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273a574;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11273a578;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11273a57c;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c296d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0623c0(puVar1,param_2,lVar5,lVar7,lVar9,lVar11);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11273a580);
  *(undefined **)(param_1 + _DAT_11273a580) = puVar1;
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105f161a0; end: 105f1620b; -[SCMapValisViewportPublishingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f161a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273a578);
  _objc_destroyWeak(param_1 + _DAT_11273a574);
  _objc_destroyWeak(param_1 + _DAT_11273a57c);
  _objc_destroyWeak(param_1 + _DAT_11273a570);
  _objc_destroyWeak(param_1 + _DAT_11273a584);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273a580,0);
  return;
}



/* Entry: 105f1620c; end: 105f1623b;  */

void FUN_105f1620c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e315f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e315f8,
                      &PTR____CFConstantStringClassReference_110e315d8,0);
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



/* Entry: 105f1623c; end: 105f16267; +[SCGrapheneLocationMetric accuracyStartedInBroad] */

void FUN_105f1623c(void)

{
  _objc_alloc(PTR_PTR_1126c5e58);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f16268; end: 105f16293; +[SCGrapheneLocationMetric accuracyStartedInPrecise] */

void FUN_105f16268(void)

{
  _objc_alloc(PTR_PTR_1126c5e58);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f16294; end: 105f162bf; +[SCGrapheneLocationMetric accuracyChangedToBroad] */

void FUN_105f16294(void)

{
  _objc_alloc(PTR_PTR_1126c5e58);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f162c0; end: 105f162eb; +[SCGrapheneLocationMetric accuracyChangedToPrecise] */

void FUN_105f162c0(void)

{
  _objc_alloc(PTR_PTR_1126c5e58);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f162ec; end: 105f1638b; -[SCGrapheneLocationMetric description] */

void FUN_105f162ec(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e135f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e135f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126edfd0;
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


