/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050fdb68; end: 1050fdbbf;  */

void FUN_1050fdb68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf1b400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf8aa00();
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



/* Entry: 1050fdbc0; end: 1050fdbc7;  */

void FUN_1050fdbc0(void)

{
  return;
}



/* Entry: 1050fdbc8; end: 1050fdcd7; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge getBitmojiFashionBannerURLWithDropId:] */

void FUN_1050fdbc8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_2);
  puVar2 = PTR_PTR_1126ae6b8;
  uStack_50 = param_1;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1050fdcd8; end: 1050fddef;  */

void FUN_1050fdcd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfc55e0(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050fddf0; end: 1050fde5b;  */

void FUN_1050fddf0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a320(lVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050fde5c; end: 1050fdebb; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge hasUserInteracted] */

undefined8 FUN_1050fde5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa2b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde120();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1050fdebc; end: 1050fdf0b; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge updateUserInteracted] */

void FUN_1050fdebc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa2b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e8e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050fdf0c; end: 1050fdfd7; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge _handleGetDropForIdResult:observer:] */

void FUN_1050fdf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1050fdfd8;
  puStack_50 = &UNK_110867c28;
  _objc_retain(param_4);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1050fe060;
  puStack_78 = &UNK_110849810;
  uStack_70 = param_4;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c0c0800(param_3,param_2,&puStack_68,&puStack_90);
  func_0x00010bf436e0(param_4);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050fdfd8; end: 1050fe05f;  */

void FUN_1050fdfd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf15940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050fe060; end: 1050fe0a7;  */

void FUN_1050fe060(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050fe0a8; end: 1050fe13b; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_1050fe0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fe13c; end: 1050fe147; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge pushToValdiMarshaller:] */

void FUN_1050fe13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050fe148; end: 1050fe15f; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge presentingVC] */

void FUN_1050fe148(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050fe160; end: 1050fe16b; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge setPresentingVC:] */

void FUN_1050fe160(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1050fe16c; end: 1050fe1bb; -[SCCommunitiesProfileBitmojiFashionSectionNativeBridge .cxx_destruct] */

void FUN_1050fe16c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050fe1bc; end: 1050fe22f; -[SCCommunitiesProfileFooterSectionNativeBridge initWithCustomStoriesDataFetcher:] */

undefined1 * FUN_1050fe1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6288;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050fe230; end: 1050fe29b; -[SCCommunitiesProfileFooterSectionNativeBridge getGroupDisplayNameWithGroupId:] */

void FUN_1050fe230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fe29c; end: 1050fe2a3;  */

void FUN_1050fe29c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 1050fe2a4; end: 1050fe30f; -[SCCommunitiesProfileFooterSectionNativeBridge getJoinedTimestampMsWithGroupId:] */

void FUN_1050fe2a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fe310; end: 1050fe33b;  */

void FUN_1050fe310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c085be0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 1050fe33c; end: 1050fe3cf; -[SCCommunitiesProfileFooterSectionNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_1050fe33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fe3d0; end: 1050fe3db; -[SCCommunitiesProfileFooterSectionNativeBridge pushToValdiMarshaller:] */

void FUN_1050fe3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050fe3dc; end: 1050fe3e7; -[SCCommunitiesProfileFooterSectionNativeBridge .cxx_destruct] */

void FUN_1050fe3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050fe3e8; end: 1050fe67f; -[SCCommunitiesProfileGroupChatSectionNativeBridge initWithCustomStoriesDataFetcher:composerPeopleBridgeFriendServices:createNewChatsScopeExposer:chatScopeExposer:userInfoServices:snapchatterPublicInfoFetcher:circumstanceEngine:createCommunitiesNewChatScopeExposer:communityGroupChatActionHandler:groupId:chatScopeServices:] */

undefined8 *
FUN_1050fe3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e6290;
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
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 9) = 0;
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 1050fe680; end: 1050fe733; -[SCCommunitiesProfileGroupChatSectionNativeBridge friendStore] */

void FUN_1050fe680(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126b0c98;
    _objc_alloc(PTR_PTR_1126b0c98);
    func_0x00010c0368e0();
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bfb8b80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x80);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1050fe734; end: 1050fe79f; -[SCCommunitiesProfileGroupChatSectionNativeBridge getCommunityDisplayNameWithCommunityId:] */

void FUN_1050fe734(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fe7a0; end: 1050fe7a7;  */

void FUN_1050fe7a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 1050fe7a8; end: 1050fe8ab; -[SCCommunitiesProfileGroupChatSectionNativeBridge getUsersFromIdsWithUserIds:callback:] */

void FUN_1050fe7a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c09d7c0(uVar2);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1050fe8ac; end: 1050feaaf;  */

void FUN_1050fe8ac(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar11 = param_2;
  func_0x00010bf529e0();
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar2 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 != 0) {
        uVar3 = uVar2;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c2923e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((int)uVar5 == 0) {
          puVar9 = PTR_PTR_1126b1440;
          _objc_alloc(PTR_PTR_1126b1440);
          func_0x00010c040f20();
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf1ad00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010bf60aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar6);
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf1c0e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010bf60aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar8);
          puVar9 = PTR_PTR_1126b1440;
          _objc_alloc(PTR_PTR_1126b1440);
          func_0x00010c040f40();
          _objc_release(uVar6);
          _objc_release(uVar7);
        }
        func_0x00010befa120(puVar1);
        _objc_release(puVar9);
      }
      _objc_release(uVar2);
      uVar11 = uVar11 + 1;
      uVar2 = param_2;
      func_0x00010bf529e0();
    } while (uVar11 < uVar2);
  }
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 != 0) {
    (**(code **)(lVar10 + 0x10))(lVar10,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050feab0; end: 1050feaf7; -[SCCommunitiesProfileGroupChatSectionNativeBridge onOpenGroupChatWithConversationId:] */

void FUN_1050feab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010bfcf680(PTR_PTR_1126b01c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7aa40(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050feaf8; end: 1050febdb; -[SCCommunitiesProfileGroupChatSectionNativeBridge onCreateGroupChatWithCommunityId:] */

void FUN_1050feaf8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126aead8;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_1 + 0x88;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b1448;
    _objc_alloc();
    uVar4 = 9;
    func_0x00010bc9107c(9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056800(puVar3,param_2,puVar1,param_1,param_3,uVar4);
    _objc_release(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1050febdc; end: 1050febe3; -[SCCommunitiesProfileGroupChatSectionNativeBridge reloadGroupChatsList] */

void FUN_1050febdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 1050febe4; end: 1050fed33; -[SCCommunitiesProfileGroupChatSectionNativeBridge onJoinGroupChatWithConversationId:communityId:groupChatName:createdTimestampMs:] */

void FUN_1050febe4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(undefined1 *)(param_2 + 0x48) = 1;
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010c0859e0(param_1,uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1050fed34; end: 1050fed6f;  */

void FUN_1050fed34(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e55c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1050fed70; end: 1050fee03; -[SCCommunitiesProfileGroupChatSectionNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_1050fed70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050fee04; end: 1050fef07; -[SCCommunitiesProfileGroupChatSectionNativeBridge _presentChatViewWithChat:dismissViewController:] */

void FUN_1050fee04(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1050fef08;
  puStack_78 = &UNK_110867cb8;
  lStack_70 = lVar1;
  uStack_68 = uVar3;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 1050fef08; end: 1050fefc3;  */

void FUN_1050fef08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x20),param_2,0,0);
  }
  puVar1 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf22b00(uVar3,param_2,*(undefined8 *)(param_1 + 0x30),puVar2,
                      *(undefined8 *)(param_1 + 0x38),puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050fefc4; end: 1050fefcf; -[SCCommunitiesProfileGroupChatSectionNativeBridge pushToValdiMarshaller:] */

void FUN_1050fefc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050fefd0; end: 1050fefd3; -[SCCommunitiesProfileGroupChatSectionNativeBridge createNewChatsPageWantsToDismiss] */

void FUN_1050fefd0(void)

{
  return;
}



/* Entry: 1050fefd4; end: 1050feff3; -[SCCommunitiesProfileGroupChatSectionNativeBridge createNewChatsPageDidDismiss] */

void FUN_1050fefd4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1050feff4; end: 1050ff003; -[SCCommunitiesProfileGroupChatSectionNativeBridge createNewChatsPageWantsToDismissWithNewChat:] */

void FUN_1050feff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be7aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentChatViewWithChat_dismiss_11257c430,param_3,1);
  return;
}



/* Entry: 1050ff004; end: 1050ff00b; -[SCCommunitiesProfileGroupChatSectionNativeBridge createNewChatsPageWantsToDismissForCallWithChatIdentifier:callMediaType:] */

void FUN_1050ff004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentChatViewWithChat_dismiss_11257c430,param_3,1);
  return;
}



/* Entry: 1050ff00c; end: 1050ff057; -[SCCommunitiesProfileGroupChatSectionNativeBridge chatScopeDidDismiss:] */

void FUN_1050ff00c(long param_1,undefined8 param_2)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,
                        &PTR____CFConstantStringClassReference_110dc6078);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1050ff058; end: 1050ff077; -[SCCommunitiesProfileGroupChatSectionNativeBridge createCommunitiesNewChatPageDidDismiss] */

void FUN_1050ff058(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1050ff078; end: 1050ff087; -[SCCommunitiesProfileGroupChatSectionNativeBridge createCommunitiesNewChatPageWantsToDismissWithNewChat:] */

void FUN_1050ff078(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be7aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentChatViewWithChat_dismiss_11257c430,param_3,1);
  return;
}



/* Entry: 1050ff088; end: 1050ff0b7; -[SCCommunitiesProfileGroupChatSectionNativeBridge setFriendStore:] */

void FUN_1050ff088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050ff0b8; end: 1050ff0cf; -[SCCommunitiesProfileGroupChatSectionNativeBridge presentingVC] */

void FUN_1050ff0b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ff0d0; end: 1050ff0db; -[SCCommunitiesProfileGroupChatSectionNativeBridge setPresentingVC:] */

void FUN_1050ff0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 1050ff0dc; end: 1050ff1af; -[SCCommunitiesProfileGroupChatSectionNativeBridge .cxx_destruct] */

void FUN_1050ff0dc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1050ff1b0; end: 1050ff293; -[SCCommunitiesProfileHeaderNativeBridge initWithCustomStoriesDataFetcher:communityActionMenuScopeExposer:communitiesProfileScope:] */

undefined1 *
FUN_1050ff1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6298;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050ff294; end: 1050ff2ff; -[SCCommunitiesProfileHeaderNativeBridge getGroupDisplayNameWithGroupId:] */

void FUN_1050ff294(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050ff300; end: 1050ff307;  */

void FUN_1050ff300(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 1050ff308; end: 1050ff39b; -[SCCommunitiesProfileHeaderNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_1050ff308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050ff39c; end: 1050ff443; -[SCCommunitiesProfileHeaderNativeBridge dismissProfile] */

void FUN_1050ff39c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1050ff444;
  puStack_48 = &UNK_110841f80;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_60);
  _objc_release(lVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 1050ff444; end: 1050ff44f;  */

void FUN_1050ff444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf42dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_communitiesProfileDidDismissWith_1125ae518,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1050ff450; end: 1050ff4db; -[SCCommunitiesProfileHeaderNativeBridge launchGroupActionMenuWithGroupId:] */

void FUN_1050ff450(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b3d40;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c039080(puVar1,param_2,lVar2,param_1,param_3,3);
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050ff4dc; end: 1050ff4e7; -[SCCommunitiesProfileHeaderNativeBridge pushToValdiMarshaller:] */

void FUN_1050ff4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1050ff4e8; end: 1050ff553; -[SCCommunitiesProfileHeaderNativeBridge didCompleteProfileCommunityActionMenuScopeWithDidLeaveCommunity:] */

void FUN_1050ff4e8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissProfile_1125bea68);
    return;
  }
  return;
}



/* Entry: 1050ff554; end: 1050ff56b; -[SCCommunitiesProfileHeaderNativeBridge presentingViewController] */

void FUN_1050ff554(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050ff56c; end: 1050ff577; -[SCCommunitiesProfileHeaderNativeBridge setPresentingViewController:] */

void FUN_1050ff56c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1050ff578; end: 1050ff5c3; -[SCCommunitiesProfileHeaderNativeBridge .cxx_destruct] */

void FUN_1050ff578(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050ff5c4; end: 1050ff763; -[SCCommunitiesProfileIdentitySectionNativeBridge initWithCustomStoriesDataFetcher:myStoriesDataCoordinator:readReceiptCoordinator:startChatDelegate:storiesPlaybackDataProvider:contentProductPlaybackScopeExposer:storiesGrapheneMetricsEmitter:contentProductPlaybackScopeServices:] */

undefined1 *
FUN_1050ff5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126e62a0;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
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



/* Entry: 1050ff764; end: 1050ff7cf; -[SCCommunitiesProfileIdentitySectionNativeBridge getGroupDescriptionWithGroupId:] */

void FUN_1050ff764(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050ff7d0; end: 1050ff8fb;  */

void FUN_1050ff7d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1050ff8fc;
  uStack_40 = 0x1050ff90c;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bfa2680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfcc0();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050ff8fc; end: 1050ff913;  */

void FUN_1050ff8fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050ff914; end: 1050ff993;  */

void FUN_1050ff914(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2597e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050ff994; end: 1050ff99b;  */

void FUN_1050ff994(void)

{
  return;
}



/* Entry: 1050ff99c; end: 1050ffaef; -[SCCommunitiesProfileIdentitySectionNativeBridge getGroupStoryWithGroupId:] */

void FUN_1050ff99c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0d4c40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c258b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(param_3);
  uVar2 = uVar3;
  func_0x00010bf41860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1050ffaf0; end: 1050ffb67;  */

void FUN_1050ffaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1050f5288(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050ffb68; end: 1050ffbd3; -[SCCommunitiesProfileIdentitySectionNativeBridge getGroupImageWithGroupId:] */

void FUN_1050ffb68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be1f840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050ffbd4; end: 1050ffce7;  */

void FUN_1050ffbd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1050ff8fc;
  uStack_40 = 0x1050ff90c;
  uStack_38 = 0;
  uVar1 = param_2;
  func_0x00010bfa2680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfcc0();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050ffce8; end: 1050ffceb;  */

void FUN_1050ffce8(void)

{
  return;
}



/* Entry: 1050ffcec; end: 1050ffe9f;  */

void FUN_1050ffcec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1f040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c120160();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar7 != 0) {
    puVar3 = PTR_PTR_1126b1428;
    _objc_alloc();
    lVar2 = lVar1;
    func_0x00010c120160(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0038e0();
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar3;
    _objc_release(uVar6);
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar2 = lVar1;
    func_0x00010c0c54a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar3);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar2 = param_2;
    func_0x00010bf1f040(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar4);
    _objc_release(lVar7);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126b1430;
    _objc_alloc(PTR_PTR_1126b1430);
    func_0x00010c020ba0();
    func_0x00010c195c60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050ffea0; end: 1050ffea7;  */

void FUN_1050ffea0(void)

{
  return;
}



/* Entry: 1050ffea8; end: 1050fff07; -[SCCommunitiesProfileIdentitySectionNativeBridge playGroupStoryWithGroupId:sourceView:] */

void FUN_1050ffea8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x48) = param_1;
  func_0x00010bde7f60(param_2,param_3,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050fff08; end: 10510016b; -[SCCommunitiesProfileIdentitySectionNativeBridge _contentPlaybackScopePlayGroupStoryWithGroupId:sourceView:] */

void FUN_1050fff08(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c04dcc0();
  puVar2 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c04bca0(puVar2,param_3,7,0x90,(long)(param_1 * 1000.0),8,puVar1,param_4,0,0);
  puVar3 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  uVar5 = param_5;
  func_0x00010b9688dc(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar4 = param_2 + 0x50;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bff7200(puVar3,param_3,uVar5,lVar4,0,param_2,0,1,0,0);
  _objc_release(lVar4);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b4d38;
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42f40(puVar6,param_3,uVar5,param_4,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  dVar10 = *(double *)(param_2 + 0x48);
  func_0x00010bff0a00(dVar10);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bf22a20(uVar5,param_3,puVar2,puVar3,0,7,puVar6,puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  dVar11 = *(double *)(param_2 + 0x48);
  _CACurrentMediaTime();
  uVar8 = 8;
  func_0x000108534a80(8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((dVar10 - dVar11) * 1000.0),uVar9,param_3,
                      &PTR____CFConstantStringClassReference_110dc6038,uVar8);
  _objc_release(uVar8);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x30),param_3,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10510016c; end: 1051001ff; -[SCCommunitiesProfileIdentitySectionNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_10510016c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105100200; end: 10510020b; -[SCCommunitiesProfileIdentitySectionNativeBridge pushToValdiMarshaller:] */

void FUN_105100200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 10510020c; end: 105100253; -[SCCommunitiesProfileIdentitySectionNativeBridge playbackPresenterDidTearDown:playbackScope:] */

void FUN_10510020c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105100254; end: 10510026b; -[SCCommunitiesProfileIdentitySectionNativeBridge presentingViewController] */

void FUN_105100254(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10510026c; end: 105100277; -[SCCommunitiesProfileIdentitySectionNativeBridge setPresentingViewController:] */

void FUN_10510026c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 105100278; end: 1051002f3; -[SCCommunitiesProfileIdentitySectionNativeBridge .cxx_destruct] */

void FUN_105100278(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 1051002f4; end: 1051003bf; -[SCCommunitiesProfileMapSectionNativeBridge initWithPlaceDataFetcher:mapPresenterFactory:composerStaticMapURLGenerator:circumstanceEngine:] */

undefined1 *
FUN_1051002f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_1126e62a8;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051003c0; end: 1051003c7; -[SCCommunitiesProfileMapSectionNativeBridge mapUrlGenerator] */

void FUN_1051003c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1051003c8; end: 105100487; -[SCCommunitiesProfileMapSectionNativeBridge mapPresenter] */

void FUN_1051003c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cfac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c038f40(puVar3,param_2,lVar4,1);
    func_0x00010c21b220(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105100488; end: 105100593; -[SCCommunitiesProfileMapSectionNativeBridge getMapPlaceInfoWithGroupId:] */

void FUN_105100488(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010be21800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar4 = PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105100594;
    puStack_48 = &UNK_11084f340;
    puVar4 = PTR_PTR_1126ae6b8;
    puStack_40 = puVar3;
    lStack_38 = lVar1;
    func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = puVar4;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105100594; end: 10510068b;  */

void FUN_105100594(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa7a60(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10510068c; end: 10510074f;  */

void FUN_10510068c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126af5d0;
  if (param_2 == 0) {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf436e0();
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105100750; end: 105100943; -[SCCommunitiesProfileMapSectionNativeBridge _getPlaceIdByGroupId_DevOnly:] */

ulong FUN_105100750(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  ppuVar7 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dc6098;
  func_0x00010c25d7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c08fa60();
  if (uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain();
    uVar8 = uVar2;
    func_0x00010bf52a60();
    if (uVar8 != 0) {
      lVar9 = *plStack_120;
      do {
        uVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(uVar2);
          }
          uVar3 = *(ulong *)(lStack_128 + uVar10 * 8);
          func_0x00010bf44740();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf529e0();
          if (uVar4 == 2) {
            uVar4 = uVar3;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar4;
            func_0x00010c0720c0();
            _objc_release(uVar4);
            if ((uVar5 & 1) != 0) {
              ppuVar7 = (undefined **)0x1;
              uVar8 = uVar3;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar3);
              goto LAB_1051008e4;
            }
          }
          _objc_release(uVar3);
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
        uVar8 = uVar2;
        ppuVar7 = &puStack_130;
        func_0x00010bf52a60();
      } while (uVar8 != 0);
    }
    uVar8 = 0;
LAB_1051008e4:
    _objc_release(uVar2);
    _objc_release(uVar2);
    ppuVar6 = ppuVar7;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return uVar8;
  }
  ___stack_chk_fail();
  func_0x00010af8e4d4(ppuVar6,param_3);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return uVar1;
}



/* Entry: 105100944; end: 10510094f; -[SCCommunitiesProfileMapSectionNativeBridge pushToValdiMarshaller:] */

void FUN_105100944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 105100950; end: 10510097f; -[SCCommunitiesProfileMapSectionNativeBridge setMapPresenter:] */

void FUN_105100950(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105100980; end: 105100997; -[SCCommunitiesProfileMapSectionNativeBridge presentingViewController] */

void FUN_105100980(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105100998; end: 1051009a3; -[SCCommunitiesProfileMapSectionNativeBridge setPresentingViewController:] */

void FUN_105100998(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1051009a4; end: 1051009ff; -[SCCommunitiesProfileMapSectionNativeBridge .cxx_destruct] */

void FUN_1051009a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105100a00; end: 105100c2b; -[SCCommunitiesProfileMembersSectionNativeBridge initWithValdiRuntimeProvider:customStoriesDataFetcher:snapchattersObservableRepository:snapchattersDataFetcher:snapchattersPublicInfoFetcher:friendscoreProvider:friendmojiProviderFactory:navigationDelegate:snapchatterDataMutator:friendProfileScopeExposer:friendActionSheetScopeExposer:communitySharingScopeExposer:userId:circumstanceEngine:membersDataProvider:] */

undefined8 *
FUN_105100a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000040);
  puStack_68 = PTR_PTR_1126e62b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = in_stack_00000040;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b4d50;
    _objc_alloc();
    func_0x00010c02e880();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126afe50;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040b80();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_opt_class(PTR_PTR_1126b4d58);
    func_0x00010c181960(puVar2);
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105100c2c; end: 105100cbf; -[SCCommunitiesProfileMembersSectionNativeBridge setPresentingViewController:] */

void FUN_105100c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126afe50;
  uVar4 = *(ulong *)(param_1 + 0x18);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010c1c1bc0(uVar1);
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x20,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105100cc0; end: 105100ccb; -[SCCommunitiesProfileMembersSectionNativeBridge pushToValdiMarshaller:] */

void FUN_105100cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 105100ccc; end: 105100cd3; -[SCCommunitiesProfileMembersSectionNativeBridge membersDataProvider] */

undefined8 FUN_105100ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105100cd4; end: 105100d03; -[SCCommunitiesProfileMembersSectionNativeBridge setMembersDataProvider:] */

void FUN_105100cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105100d04; end: 105100d0b; -[SCCommunitiesProfileMembersSectionNativeBridge membersActionHandler] */

undefined8 FUN_105100d04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


