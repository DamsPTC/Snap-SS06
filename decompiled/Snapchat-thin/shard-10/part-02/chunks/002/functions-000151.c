/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ceaec8; end: 107ceaed7;  */

void FUN_107ceaec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dispatchRemoveFriend_11255e970);
  return;
}



/* Entry: 107ceaed8; end: 107ceb03b; -[SCFriendUnifiedProfileDataSource didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_107ceaed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf0aac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0720c0(lVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 == 0) goto LAB_107ceb01c;
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107ceb03c;
  puStack_60 = &UNK_110855640;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107ceb0c8;
  puStack_88 = &UNK_110851800;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107ceb0d0;
  puStack_b0 = &UNK_110862228;
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_107ceb2e4;
  puStack_d8 = &UNK_110851800;
  lStack_d0 = param_1;
  lStack_a8 = param_1;
  lStack_80 = param_1;
  lStack_58 = param_1;
  func_0x00010c0bc6c0(param_3,param_2,&puStack_78,0,0,&puStack_a0,0,&puStack_c8,&puStack_f0,0,0);
LAB_107ceb01c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ceb03c; end: 107ceb0c7;  */

void FUN_107ceb03c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee04a0(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ceb0c8; end: 107ceb0cf;  */

void FUN_107ceb0c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dispatchIgnoreFriendRequest_11255e940);
  return;
}



/* Entry: 107ceb0d0; end: 107ceb27b;  */

void FUN_107ceb0d0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_initWeak(auStack_58,*(long *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = lVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar5 = auStack_58;
  _objc_copyWeak(auStack_60);
  puVar6 = puVar3;
  func_0x00010c244ea0(uVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_2);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar6 == (undefined *)0x0) && (puVar5 != (undefined1 *)0x0)) {
    param_2 = param_2 + 0x28;
    _objc_loadWeakRetained(param_2);
    func_0x00010bea7b60();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107ceb27c; end: 107ceb2e3;  */

void FUN_107ceb27c(long param_1,long param_2,long param_3)

{
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) && (param_2 != 0)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea7b60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ceb2e4; end: 107ceb327;  */

void FUN_107ceb2e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee04a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ceb328; end: 107ceb42b; -[SCFriendUnifiedProfileDataSource didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_107ceb328(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf0a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf0a780(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c262220();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c0720c0(lVar2,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar6 == 0) goto LAB_107ceb410;
    }
    func_0x00010be03ea0(param_1);
  }
LAB_107ceb410:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ceb42c; end: 107ceb483; -[SCFriendUnifiedProfileDataSource _updateAddFriendStatus:] */

void FUN_107ceb42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_107ceb484;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f9420(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_40);
  return;
}



/* Entry: 107ceb484; end: 107ceb493;  */

void FUN_107ceb484(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0) = *(undefined8 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010be03d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dispatchAddFriendStatusUpdate_11255e8e0);
  return;
}



/* Entry: 107ceb494; end: 107ceb4cf; -[SCFriendUnifiedProfileDataSource didUpdateSummaryInfo:] */

void FUN_107ceb494(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0c20(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ceb4d0; end: 107ceb627; -[SCFriendUnifiedProfileDataSource didUpdateWithAnnouncerIdentifier:] */

void FUN_107ceb4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107ceb628;
    puStack_70 = &UNK_110850cf8;
    uStack_68 = uVar1;
    _objc_retain(uVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    uStack_60 = param_1;
    uStack_58 = uVar2;
    _objc_retain(uVar2);
    func_0x00010007380c(uVar3,&puStack_88);
    _objc_release(uVar3);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_release(uStack_68);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107ceb628; end: 107ceb693;  */

void FUN_107ceb628(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
  if (lVar1 == 0) {
    func_0x00010c2531a0(uVar3,param_2,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    func_0x00010c253180(uVar3,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  func_0x00010bed2ba0(lVar2,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ceb694; end: 107ceb69b; -[SCFriendUnifiedProfileDataSource storiesDataAccess] */

undefined8 FUN_107ceb694(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107ceb69c; end: 107ceb6a3; -[SCFriendUnifiedProfileDataSource remoteStoriesDataProvider] */

undefined8 FUN_107ceb69c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107ceb6a4; end: 107ceb6ab; -[SCFriendUnifiedProfileDataSource configuration] */

undefined8 FUN_107ceb6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 107ceb6ac; end: 107ceb6b3; -[SCFriendUnifiedProfileDataSource sessionId] */

undefined8 FUN_107ceb6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 107ceb6b4; end: 107ceb6bf; -[SCFriendUnifiedProfileDataSource userId] */

void FUN_107ceb6b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x108,1);
  return;
}



/* Entry: 107ceb6c0; end: 107ceb6c7; -[SCFriendUnifiedProfileDataSource setUserId:] */

void FUN_107ceb6c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 107ceb6c8; end: 107ceb6d3; -[SCFriendUnifiedProfileDataSource username] */

void FUN_107ceb6c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x110,1);
  return;
}



/* Entry: 107ceb6d4; end: 107ceb6db; -[SCFriendUnifiedProfileDataSource setUsername:] */

void FUN_107ceb6d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 107ceb6dc; end: 107ceb867; -[SCFriendUnifiedProfileDataSource .cxx_destruct] */

void FUN_107ceb6dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 107ceb868; end: 107cebe3f; -[SCGroupUnifiedProfileDataSource initWithUserSession:groupsDataFetcher:groupsDataMutator:groupId:groupMembers:groupsDataTracker:groupSnapchatterRepository:selfUserId:userInfoProvider:snapchattersDataFetcher:snapchattersDataTracker:friendStatusManagerCreator:snapchatterPublicInfoFetcher:friendsFeedDataAccess:storiesDataAccess:remoteStoriesDataProvider:conversationServices:legacySnapchatterServices:friendStorySettingMutator:] */

undefined8 *
FUN_107ceb868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  puStack_70 = PTR_PTR_1126fa858;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar9 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar9 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar9);
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar9);
    _objc_retain(param_6);
    uVar9 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar9);
    _objc_retain(param_10);
    uVar9 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar9);
    _objc_retain(param_3);
    uVar9 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar9);
    _objc_retain(param_4);
    uVar9 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar9);
    _objc_retain(param_5);
    uVar9 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar9);
    _objc_retain(param_8);
    uVar9 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar9);
    _objc_retain(param_9);
    uVar9 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar9);
    _objc_retain(param_11);
    uVar9 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar9);
    _objc_retain(param_16);
    uVar9 = puVar1[9];
    puVar1[9] = param_16;
    _objc_release(uVar9);
    _objc_retain(param_19);
    uVar9 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar9);
    _objc_retain(param_20);
    uVar9 = puVar1[0x14];
    puVar1[0x14] = param_20;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126b4208;
    _objc_alloc();
    func_0x00010c049a80();
    uVar9 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar9);
    func_0x00010befc780(puVar1[10]);
    func_0x00010bef9980(puVar1[6]);
    lVar4 = puVar1[9];
    if (lVar4 != 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfba060();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010be168a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = puVar1[0x11];
      puVar1[0x11] = puVar6;
      _objc_release(uVar9);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_initWeak(auStack_80,puVar1);
      puVar2 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar9 = puVar1[0x12];
      puVar1[0x12] = puVar2;
      _objc_release(uVar9);
      uVar7 = puVar1[9];
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bfba080();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_80);
      uVar8 = uVar9;
      func_0x00010c25ff60(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    lVar4 = param_7;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      func_0x00010bea59a0(puVar1);
    }
    func_0x00010bed8f20(puVar1);
    func_0x00010bed9ec0(puVar1);
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



/* Entry: 107cebe40; end: 107cebe87;  */

void FUN_107cebe40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed89a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cebe88; end: 107cebf5f; -[SCGroupUnifiedProfileDataSource groupMembers] */

void FUN_107cebe88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cebf60;
  uStack_30 = 0x107cebf70;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107cebf78;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_80);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c280060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cebf60; end: 107cebf77;  */

void FUN_107cebf60(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cebf78; end: 107cebfb3;  */

void FUN_107cebf78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107cebfb4; end: 107cec05b; -[SCGroupUnifiedProfileDataSource groupMembersCount] */

undefined8 FUN_107cebfb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107cec05c;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_70);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107cec05c; end: 107cec08f;  */

void FUN_107cec05c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010bf529e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 107cec090; end: 107cec16b; -[SCGroupUnifiedProfileDataSource groupDisplayName] */

void FUN_107cec090(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    func_0x00010bed8ec0(param_1);
  }
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cebf60;
  uStack_30 = 0x107cebf70;
  uStack_28 = 0;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10));
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cec16c; end: 107cec19f;  */

void FUN_107cec16c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cec1a0; end: 107cec26b; -[SCGroupUnifiedProfileDataSource groupName] */

void FUN_107cec1a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cebf60;
  uStack_30 = 0x107cebf70;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107cec26c;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cec26c; end: 107cec29f;  */

void FUN_107cec26c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cec2a0; end: 107cec673; -[SCGroupUnifiedProfileDataSource groupFormattedDisplayName] */

void FUN_107cec2a0(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bfce980();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    if (puVar3 == (undefined *)0x0) {
      puVar4 = param_1;
      func_0x00010bfcee40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf529e0();
      if (puVar5 == (undefined *)0x1) {
        puVar6 = *(undefined **)(param_1 + 0xa0);
        func_0x00010c2928c0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c293a00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar13;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar6);
        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar10 = &PTR____CFConstantStringClassReference_110eb7778;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7778,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        _objc_retain(puVar4);
        puVar12 = puVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        if (puVar12 == (undefined *)0x0) {
          uVar14 = 0xffffffffffffffff;
        }
        else {
          uVar14 = 0;
          do {
            puVar13 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(puVar4);
              }
              uVar15 = *(ulong *)((long)puVar13 * 8);
              uVar7 = uVar15;
              func_0x00010c244280();
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar7;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar8;
              func_0x00010c0720c0();
              _objc_release(uVar8);
              _objc_release(uVar7);
              if ((uVar9 & 1) == 0) {
                uVar7 = uVar15;
                func_0x00010c244280();
                _objc_retainAutoreleasedReturnValue();
                uVar8 = uVar7;
                func_0x00010901d778();
                func_0x00010c244280(uVar15);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar15;
                if ((uVar8 & 1) == 0) {
                  func_0x00010c294420();
                  _objc_retainAutoreleasedReturnValue();
                }
                else {
                  func_0x00010bf85d80();
                  _objc_retainAutoreleasedReturnValue();
                }
                _objc_release(uVar15);
                _objc_release(uVar7);
                func_0x00010befa120(puVar5);
                uVar14 = uVar14 + 1;
                _objc_release(uVar9);
                if (uVar14 == 3) {
                  uVar14 = 0xfffffffffffffffc;
                  goto LAB_107cec570;
                }
              }
              puVar13 = puVar13 + 1;
            } while (puVar12 != puVar13);
            puVar12 = puVar4;
            func_0x00010bf52a60();
          } while (puVar12 != (undefined *)0x0);
          uVar14 = ~uVar14;
        }
LAB_107cec570:
        _objc_release(puVar4);
        ppuVar10 = &PTR____CFConstantStringClassReference_110dc4178;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4178,0);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar5;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        puVar6 = puVar4;
        func_0x00010bf529e0();
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (0 < (long)(puVar6 + uVar14)) {
          func_0x00010be43140();
          func_0x00010c14de00(puVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          puVar12 = puVar13;
        }
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      _objc_retain(puVar3);
      puVar12 = puVar3;
    }
  }
  else {
    _objc_retain(puVar2);
    puVar12 = puVar2;
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar12 = *(undefined **)(puVar2 + 0x58);
    _objc_retain(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107cec674; end: 107cec69b; -[SCGroupUnifiedProfileDataSource groupId] */

void FUN_107cec674(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cec69c; end: 107cec767; -[SCGroupUnifiedProfileDataSource friendsFeedItem] */

void FUN_107cec69c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107cebf60;
  uStack_30 = 0x107cebf70;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107cec768;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cec768; end: 107cec79b;  */

void FUN_107cec768(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cec79c; end: 107cec7eb; -[SCGroupUnifiedProfileDataSource chatGroup] */

void FUN_107cec79c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107cec7ec; end: 107cec893; -[SCGroupUnifiedProfileDataSource isMuted] */

undefined1 FUN_107cec7ec(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107cec894;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_70);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 107cec894; end: 107cec8a7;  */

void FUN_107cec894(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x80);
  return;
}



/* Entry: 107cec8a8; end: 107cec8b3; +[SCGroupUnifiedProfileDataSource announcerIdentifier] */

undefined ** FUN_107cec8a8(void)

{
  return &PTR____CFConstantStringClassReference_110eb77d8;
}



/* Entry: 107cec8b4; end: 107cec8bb; -[SCGroupUnifiedProfileDataSource addUpdateListener:] */

void FUN_107cec8b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107cec8bc; end: 107cec8c3; -[SCGroupUnifiedProfileDataSource removeUpdateListener:] */

void FUN_107cec8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107cec8c4; end: 107cec9bb; -[SCGroupUnifiedProfileDataSource _updateGroupDisplayName] */

void FUN_107cec8c4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfc6120(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107cec9bc; end: 107ceca03;  */

void FUN_107cec9bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8ee0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ceca04; end: 107cecc07; -[SCGroupUnifiedProfileDataSource _updateGroupDisplayNameContinuation:] */

void FUN_107ceca04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) goto LAB_107cecbd0;
  iVar6 = (int)*(undefined8 *)(param_1 + 0x58);
  lVar1 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  _objc_release(lVar1);
  if (iVar6 == 0) goto LAB_107cecbd0;
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf85ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar1 = param_3;
  func_0x00010bfcef60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107cebf60;
  uStack_50 = 0x107cebf70;
  uStack_48 = 0;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10));
  uVar3 = puStack_68[5];
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  if (uVar3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar5 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((uVar5 & 1) != 0) goto LAB_107cecbac;
    }
    func_0x00010bea43a0(param_1);
  }
LAB_107cecbac:
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(lVar1);
  _objc_release(uVar4);
LAB_107cecbd0:
  _objc_release(param_3);
  return;
}



/* Entry: 107cecc08; end: 107cecc3b;  */

void FUN_107cecc08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cecc3c; end: 107cecd5b; -[SCGroupUnifiedProfileDataSource _setGroupDisplayName:groupName:] */

void FUN_107cecc3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107ceccf4;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cecd5c; end: 107ceced3; -[SCGroupUnifiedProfileDataSource _updateGroupMembers] */

void FUN_107cecd5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c244de0(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107ceced4; end: 107cecf6f;  */

void FUN_107ceced4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  uVar4 = param_2;
  if ((int)uVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar4);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107cecf70; end: 107cecfff; -[SCGroupUnifiedProfileDataSource _setMemberSnapchatters:] */

void FUN_107cecf70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107ced000;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107ced000; end: 107ced047;  */

void FUN_107ced000(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_110a07898);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c205ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),PTR_s_setSnapchatters__11265f1e0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107ced048; end: 107ced04f;  */

void FUN_107ced048(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 107ced050; end: 107ced1af; -[SCGroupUnifiedProfileDataSource _findFriendsFeedItemForGroupId:inFeedItems:] */

void FUN_107ced050(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(param_4);
        }
        uVar4 = *(ulong *)(lStack_128 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar4);
          goto LAB_107ced158;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  uVar4 = 0;
LAB_107ced158:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x48) != 0) {
    lVar1 = param_3;
    func_0x00010be168a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed8980(param_3,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107ced1b0; end: 107ced1ff; -[SCGroupUnifiedProfileDataSource _updateFriendsFeedItemBasedOnFriendsFeedItems:] */

void FUN_107ced1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = param_1;
    func_0x00010be168a0(param_1,param_2,*(undefined8 *)(param_1 + 0x58),param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed8980(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107ced200; end: 107ced34f; -[SCGroupUnifiedProfileDataSource _updateFriendsFeedItem:] */

void FUN_107ced200(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_3);
  if (uVar1 == param_3) {
    _objc_release(param_3);
    uVar2 = uVar1;
  }
  else {
    if (param_3 == 0) {
      _objc_release();
    }
    else {
      uVar2 = uVar1;
      func_0x00010c071ae0(uVar1,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_107ced2e0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x107ced304;
    puStack_48 = &UNK_110841f80;
    uStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0f9420(uVar3,param_2,&puStack_60);
    uVar2 = uStack_38;
  }
  _objc_release(uVar2);
LAB_107ced2e0:
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107ced350; end: 107ced447; -[SCGroupUnifiedProfileDataSource _updateIsMuted] */

void FUN_107ced350(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfc6120(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107ced448; end: 107ced4d3;  */

void FUN_107ced448(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 0x58);
    uVar1 = param_2;
    func_0x00010bfceb20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if (iVar2 != 0) {
      func_0x00010bed9ee0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ced4d4; end: 107ced5e3; -[SCGroupUnifiedProfileDataSource _updateIsMutedWithGroup:] */

void FUN_107ced4d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf37000(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0dca60(param_3);
  lVar4 = param_1;
  func_0x00010be42180(param_1,param_2,uVar2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf28180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf098e0(param_3);
  _objc_release(param_3);
  lVar5 = param_1;
  func_0x00010be42180(param_1,param_2,uVar2,uVar3);
  _objc_release(uVar2);
  uVar1 = ((uint)lVar4 | (uint)lVar5) & 1;
  if (*(byte *)(param_1 + 0x80) != uVar1) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107ced5e4;
    puStack_58 = &UNK_110845ce0;
    uStack_48 = (undefined1)uVar1;
    lStack_50 = param_1;
    func_0x00010c0f9420(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_70);
  }
  return;
}



/* Entry: 107ced5e4; end: 107ced603;  */

void FUN_107ced5e4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x80) = *(undefined1 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010be03db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dispatchAnnounceUpdate__11255e908,
             &PTR____CFConstantStringClassReference_110eb7cf8);
  return;
}



/* Entry: 107ced604; end: 107ced687; -[SCGroupUnifiedProfileDataSource _isMutedWithMuteEndDate:isNotifsEnabled:] */

uint FUN_107ced604(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(param_4,param_3,puVar1);
  _objc_release(param_4);
  param_5 = param_5 ^ 1;
  if (0.0 < param_1) {
    param_5 = 1;
  }
  _objc_release(puVar1);
  return param_5;
}



/* Entry: 107ced688; end: 107ced6eb; -[SCGroupUnifiedProfileDataSource didUpdateGroupsDataRequest:groupId:] */

void FUN_107ced688(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if (param_3 - 1U < 2) {
    func_0x00010bdfc8e0(param_1,param_2,param_4);
  }
  else if (param_3 == 0) {
    func_0x00010bdfc460(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ced6ec; end: 107ced733; -[SCGroupUnifiedProfileDataSource _didChangeInfoForGroupWithId:] */

void FUN_107ced6ec(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    func_0x00010bed8f20(param_1);
    func_0x00010bed8ec0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed9ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateIsMuted_112594158);
    return;
  }
  return;
}



/* Entry: 107ced734; end: 107ced777; -[SCGroupUnifiedProfileDataSource _didBeginLeavingGroupWithId:] */

void FUN_107ced734(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be03db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__dispatchAnnounceUpdate__11255e908,
               &PTR____CFConstantStringClassReference_110eb7cb8);
    return;
  }
  return;
}



/* Entry: 107ced778; end: 107ced7cb; -[SCGroupUnifiedProfileDataSource didUpdateWithAnnouncerIdentifier:] */

void FUN_107ced778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7eb8);
  if ((int)param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be03db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__dispatchAnnounceUpdate__11255e908,
               &PTR____CFConstantStringClassReference_110eb7cd8);
    return;
  }
  return;
}



/* Entry: 107ced7cc; end: 107ced877; -[SCGroupUnifiedProfileDataSource _dispatchAnnounceUpdate:] */

void FUN_107ced7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107ced878;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107ced878; end: 107ced883;  */

void FUN_107ced878(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107ced884; end: 107ced8af; -[SCGroupUnifiedProfileDataSource _isRTL] */

undefined1 FUN_107ced884(void)

{
  func_0x00010006eaa4(PTR___dispatch_main_q_11034be20,&PTR___NSConcreteGlobalBlock_110a078b8);
  return uRam0000000113727a20;
}



/* Entry: 107ced8b0; end: 107ced8f7;  */

void FUN_107ced8b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  uRam0000000113727a20 = puVar2 == (undefined *)0x1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ced8f8; end: 107ced8ff; -[SCGroupUnifiedProfileDataSource sessionId] */

undefined8 FUN_107ced8f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107ced900; end: 107ceda07; -[SCGroupUnifiedProfileDataSource .cxx_destruct] */

void FUN_107ced900(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 107ceda08; end: 107cedd13; -[SCUnifiedProfileSnapchatterProvider initWithSnapchattersDataFetcher:snapchattersDataTracker:friendStatusManagerCreator:snapchatterPublicInfoFetcher:storiesDataAccess:remoteStoriesDataProvider:friendStorySettingMutator:] */

undefined1 *
FUN_107ceda08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  puStack_68 = PTR_PTR_1126fa860;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf562a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010befc780(*(undefined8 *)((long)puVar1 + 8));
    _objc_retain(param_9);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x60);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar5);
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



/* Entry: 107cedd14; end: 107cedf97; -[SCUnifiedProfileSnapchatterProvider setSnapchatters:] */

void FUN_107cedd14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar14 = *(ulong *)(lVar12 * 8);
        uVar5 = uVar14;
        func_0x00010bfb8280();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == 0) {
LAB_107cede40:
          uVar5 = uVar14;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          if ((uVar6 & 1) == 0) {
            func_0x00010c2923e0(uVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(uVar14);
          }
        }
        else {
          uVar6 = uVar14;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c08fa60();
          _objc_release(uVar6);
          _objc_release(uVar5);
          if (uVar7 == 0) goto LAB_107cede40;
          func_0x00010befa120(puVar3);
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar8 = puVar3;
    func_0x00010bf529e0();
    if (puVar8 != (undefined *)0x0) {
      func_0x00010befb740(*(undefined8 *)(param_1 + 8));
    }
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(param_3);
    func_0x00010c0f9420(uVar13);
    func_0x00010be14400(param_1);
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010050471c(uVar9,&PTR___NSConcreteGlobalBlock_110a078d8,
                      &PTR___NSConcreteGlobalBlock_110a078f8);
  uVar13 = uVar9;
  func_0x00010c0d3c80();
  uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x48) = uVar13;
  _objc_release(uVar11);
  _objc_release(uVar9);
  func_0x00010be149e0();
  return;
}



/* Entry: 107cedf98; end: 107cee033;  */

void FUN_107cedf98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010050471c(uVar1,&PTR___NSConcreteGlobalBlock_110a078d8,
                      &PTR___NSConcreteGlobalBlock_110a078f8);
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010be149e0();
  return;
}



/* Entry: 107cee034; end: 107cee03b;  */

void FUN_107cee034(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 107cee03c; end: 107cee063;  */

void FUN_107cee03c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107cee064; end: 107cee06b;  */

void FUN_107cee064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be03d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dispatchAnnounceSnapchatterUpda_11255e900);
  return;
}



/* Entry: 107cee06c; end: 107cee22f; -[SCUnifiedProfileSnapchatterProvider addSnapchatterWithId:] */

void FUN_107cee06c(ulong param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **unaff_x23;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((lVar1 != 0) && (uVar2 = param_1, func_0x00010be41980(), (uVar2 & 1) == 0)) &&
     (uVar2 = param_1, func_0x00010be347c0(), (uVar2 & 1) == 0)) {
    func_0x00010bdc74e0(param_1);
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107cee230;
    puStack_70 = &UNK_110853590;
    _objc_retain(param_3);
    unaff_x23 = &puStack_88;
    param_2 = auStack_58;
    lStack_68 = param_3;
    _objc_copyWeak(auStack_60);
    func_0x00010c09d7c0(uVar3);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != (undefined1 *)0x0) {
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained(param_3);
    func_0x00010bdc84e0();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cee230; end: 107cee283;  */

void FUN_107cee230(long param_1,long param_2)

{
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdc84e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cee284; end: 107cee377; -[SCUnifiedProfileSnapchatterProvider _hasSnapchatterForUserId:] */

byte FUN_107cee284(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar3);
    bVar2 = *(byte *)(puStack_48 + 3);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return bVar2 & 1;
}



/* Entry: 107cee378; end: 107cee3bb;  */

void FUN_107cee378(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107cee3bc; end: 107cee4f3; -[SCUnifiedProfileSnapchatterProvider unifiedProfileSnapchattersForUserIdArray:] */

void FUN_107cee3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2444c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107cee4f4;
  uStack_40 = 0x107cee504;
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0f8240(uVar2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107cee4f4; end: 107cee50b;  */

void FUN_107cee4f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cee50c; end: 107cee5a3;  */

void FUN_107cee50c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107cee5a4;
  puStack_38 = &UNK_110a07918;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_30 = uVar1;
  uStack_28 = uVar4;
  func_0x000100504554(uVar3,&puStack_50);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(uStack_28);
  return;
}



/* Entry: 107cee5a4; end: 107cee6bf;  */

void FUN_107cee5a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x00010c067ec0(lVar2);
      }
      puVar4 = PTR_PTR_1126d7790;
      _objc_alloc(PTR_PTR_1126d7790);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
      func_0x00010c0e00e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c048c20(puVar4);
      _objc_release(uVar3);
      _objc_release(lVar2);
      goto LAB_107cee694;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_107cee694:
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107cee6c0; end: 107cee6cb; +[SCUnifiedProfileSnapchatterProvider announcerIdentifier] */

undefined ** FUN_107cee6c0(void)

{
  return &PTR____CFConstantStringClassReference_110eb77f8;
}



/* Entry: 107cee6cc; end: 107cee6d3; -[SCUnifiedProfileSnapchatterProvider addUpdateListener:] */

void FUN_107cee6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107cee6d4; end: 107cee6db; -[SCUnifiedProfileSnapchatterProvider removeUpdateListener:] */

void FUN_107cee6d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107cee6dc; end: 107cee847; -[SCUnifiedProfileSnapchatterProvider _fetchSnapchattersStoryWithSnapchatters:completion:] */

void FUN_107cee6dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_110a07948,
                      &PTR___NSConcreteGlobalBlock_110a07968);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010c25b4c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cee848; end: 107cee84f;  */

void FUN_107cee848(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 107cee850; end: 107cee877;  */

void FUN_107cee850(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107cee878; end: 107cee8cb;  */

void FUN_107cee878(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be143c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cee8cc; end: 107ceebff; -[SCUnifiedProfileSnapchatterProvider _fetchSnapchattersStoryWithSnapchatterData:summaryData:completion:] */

void FUN_107cee8cc(long param_1,undefined1 *param_2,ulong param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong unaff_x22;
  long unaff_x24;
  undefined **ppuVar13;
  long unaff_x26;
  undefined8 uVar14;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined1 *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 *puStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = param_1;
  _objc_retain(param_3);
  lStack_180 = param_4;
  _objc_retain(param_4);
  uStack_198 = param_5;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uVar2 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = uVar2;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    unaff_x24 = *plStack_130;
    do {
      uVar12 = 0;
      do {
        if (*plStack_130 != unaff_x24) {
          _objc_enumerationMutation(uStack_188);
        }
        uVar14 = *(undefined8 *)(lStack_138 + uVar12 * 8);
        unaff_x26 = lStack_180;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x26 == 0) {
          uVar5 = uVar3;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c08fa60();
          if (uVar6 == 0) {
            _objc_release(uVar5);
          }
          else {
            unaff_x22 = uVar3;
            func_0x000100bf119c();
            _objc_release(uVar5);
            if ((unaff_x22 & 1) == 0) {
              _objc_initWeak(auStack_148,lStack_190);
              uVar7 = *(undefined8 *)(lStack_190 + 0x30);
              func_0x00010c269d40(uVar7);
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = 0;
              func_0x0001000819a8(0,0);
              _objc_retainAutoreleasedReturnValue();
              puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_170 = 0xc2000000;
              pcStack_168 = FUN_107ceec00;
              puStack_160 = &UNK_1109194e0;
              param_2 = auStack_148;
              _objc_copyWeak(auStack_150);
              uStack_158 = uVar14;
              func_0x00010bfaa9c0(uVar7);
              _objc_release(unaff_x22);
              _objc_release(uVar7);
              _objc_destroyWeak(auStack_150);
              _objc_destroyWeak(auStack_148);
            }
          }
        }
        lVar4 = unaff_x26;
        FUN_107ceed74(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(lVar4);
        _objc_release(uVar3);
        _objc_release(unaff_x26);
        uVar12 = uVar12 + 1;
      } while (uVar2 != uVar12);
      uVar2 = uStack_188;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(uStack_188);
  puVar8 = puVar1;
  func_0x00010bf51e00();
  puVar11 = puVar8;
  func_0x00010bed8f40(lStack_190);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(uStack_198);
  _objc_release(lStack_180);
  uVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  uVar12 = uVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_107ceec00;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1f0 = unaff_x26;
  puStack_1e8 = (undefined1 *)0x0;
  lStack_1e0 = unaff_x24;
  puStack_1d8 = puVar1;
  uStack_1d0 = unaff_x22;
  puStack_1c8 = puVar8;
  uStack_1c0 = param_3;
  uStack_1b8 = uVar2;
  puStack_1b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(puVar11);
  puVar9 = param_2;
  func_0x00010c0ddc60();
  ppuVar13 = (undefined **)(undefined1 *)0x0;
  if (0 < (long)puVar9) {
    puVar9 = param_2;
    FUN_107ceed74();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = uVar12 + 0x28;
    _objc_loadWeakRetained();
    uStack_208 = *(undefined8 *)(uVar12 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_200 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_107ceee34;
    puStack_218 = &UNK_1108434b0;
    _objc_copyWeak(auStack_210,uVar12 + 0x28);
    func_0x00010bed8f40(lVar4);
    _objc_release(puVar1);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_210);
    _objc_release(puVar9);
    ppuVar13 = &puStack_230;
  }
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)ppuVar13 + 0x20));
  __Unwind_Resume();
  _objc_retain();
  puVar9 = param_2;
  func_0x00010c0ddc60();
  if (puVar9 == (undefined1 *)0x0) {
    puVar1 = PTR_PTR_1126d7798;
    _objc_alloc(PTR_PTR_1126d7798);
    func_0x00010c051d00();
  }
  else {
    puVar9 = param_2;
    func_0x00010c26d760(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x000107d227d0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar1 = PTR_PTR_1126d7798;
    _objc_alloc(PTR_PTR_1126d7798);
    func_0x00010bfddf20(param_2);
    func_0x00010c051d00(puVar1);
    _objc_release(puVar10);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ceec00; end: 107ceed73;  */

void FUN_107ceec00(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **unaff_x25;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c0ddc60();
  if (0 < lVar1) {
    lVar2 = param_2;
    FUN_107ceed74();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_60 = lVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107ceee34;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,param_1 + 0x28);
    func_0x00010bed8f40(lVar1);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_70);
    _objc_release(lVar2);
    unaff_x25 = &puStack_90;
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x20));
  __Unwind_Resume();
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c0ddc60();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126d7798;
    _objc_alloc(PTR_PTR_1126d7798);
    func_0x00010c051d00();
  }
  else {
    lVar1 = param_2;
    func_0x00010c26d760(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107d227d0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126d7798;
    _objc_alloc(PTR_PTR_1126d7798);
    func_0x00010bfddf20(param_2);
    func_0x00010c051d00(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ceed74; end: 107ceee33;  */

void FUN_107ceed74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0ddc60();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126d7798;
    _objc_alloc(PTR_PTR_1126d7798);
    func_0x00010c051d00();
  }
  else {
    lVar1 = param_1;
    func_0x00010c26d760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107d227d0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126d7798;
    _objc_alloc(PTR_PTR_1126d7798);
    lVar1 = param_1;
    func_0x00010bfddf20(param_1);
    func_0x00010c051d00(puVar3,param_2,lVar2,lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ceee34; end: 107ceee5f;  */

void FUN_107ceee34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ceee60; end: 107cef013; -[SCUnifiedProfileSnapchatterProvider _updateGroupMembersStoryDataModels:completionBlock:] */

void FUN_107ceee60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107ceef18;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cef014; end: 107cef01f;  */

void FUN_107cef014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cef01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107cef020; end: 107cef023; -[SCUnifiedProfileSnapchatterProvider didUpdateSummaryInfo:] */

void FUN_107cef020(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateFriendStoriesDataWithStor_112593bb0);
  return;
}



/* Entry: 107cef024; end: 107cef087; -[SCUnifiedProfileSnapchatterProvider _updateFriendStoriesDataWithStoriesSummaryInfoUpdates:] */

void FUN_107cef024(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107cef08c;
    puStack_20 = &UNK_110842e18;
    uStack_18 = param_1;
    func_0x00010c0bf7c0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a07988,&puStack_38);
  }
  return;
}


