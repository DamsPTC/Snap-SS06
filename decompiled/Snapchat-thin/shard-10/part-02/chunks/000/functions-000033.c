/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107a3a700; end: 107a3a707; -[SCSharedStoryOperaOnboardingViewController shouldAlwaysBeSilentlyPresented] */

undefined8 FUN_107a3a700(void)

{
  return 1;
}



/* Entry: 107a3a708; end: 107a3a727; -[SCSharedStoryOperaOnboardingViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a708(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112768624);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a3a728; end: 107a3a73b; -[SCSharedStoryOperaOnboardingViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a728(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112768624,param_3);
  return;
}



/* Entry: 107a3a73c; end: 107a3a74b; -[SCSharedStoryOperaOnboardingViewController publicationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107a3a73c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112768614);
}



/* Entry: 107a3a74c; end: 107a3a757; -[SCSharedStoryOperaOnboardingViewController setPublicationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a74c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107a3a758; end: 107a3a7b3; -[SCSharedStoryOperaOnboardingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107a3a758(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112768614,0);
  _objc_destroyWeak(param_1 + _DAT_112768624);
  _objc_storeStrong(param_1 + _DAT_11276861c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112768618,0);
  return;
}



/* Entry: 107a3a7b4; end: 107a3ab67; -[SCStoryMembersDataSource initWithPublicationId:customStoriesDataFetcher:customStoriesDataSyncer:snapchattersDataFetcher:snapchattersPublicInfoFetcher:blockedSnapchatterFetcher:snapchattersDataTracker:circumstanceEngine:] */

undefined8 *
FUN_107a3a7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  puStack_68 = PTR_PTR_1126f9730;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 0x10) = 1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    uVar2 = puVar1[0xc];
    puVar1[0xc] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    func_0x00010be10200(puVar1);
    uVar2 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar5 = puVar1[2];
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[10];
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf62580(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar7 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
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



/* Entry: 107a3ab68; end: 107a3abaf;  */

void FUN_107a3ab68(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be142e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3abb0; end: 107a3ac8b; -[SCStoryMembersDataSource membersListSnapchattersObservableWithQuery:] */

void FUN_107a3abb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (lVar1 == 0) {
    func_0x00010bf870a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107a3ac8c;
    puStack_40 = &UNK_110854bd0;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0b8600(uVar3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lStack_38);
    uVar3 = uVar2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107a3ac8c; end: 107a3ad07;  */

void FUN_107a3ac8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107a3ad08;
  puStack_30 = &UNK_11085a548;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x0001006372a4(param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107a3ad08; end: 107a3adab;  */

undefined8 FUN_107a3ad08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108fd6d1c(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108fd6d1c(uVar3,uVar2);
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107a3adac; end: 107a3ae97; -[SCStoryMembersDataSource storyMemberInfoObservableWithQuery:] */

void FUN_107a3adac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (lVar1 == 0) {
    func_0x00010bf870c0(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1109f6df8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107a3b168;
    puStack_40 = &UNK_1109f6e18;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfb2660(uVar3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf870c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lStack_38);
    uVar3 = uVar2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107a3ae98; end: 107a3b167;  */

undefined * FUN_107a3ae98(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar6 == 0) goto LAB_107a3b138;
  puVar1 = param_2;
  func_0x00010c25a6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c25a6a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar6 == 0) goto LAB_107a3b138;
  puVar1 = param_2;
  func_0x00010c25a580();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  puVar6 = param_3;
  func_0x00010c25a580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (puVar2 != puVar3) {
    puVar6 = (undefined *)0x0;
    goto LAB_107a3b138;
  }
  puVar2 = param_2;
  func_0x00010c25a580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar6 = param_3;
  func_0x00010c25a580(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010c072060();
  if ((int)puVar6 == 0) {
LAB_107a3b124:
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = param_2;
    func_0x00010c25a4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf529e0();
    puVar3 = param_3;
    func_0x00010c25a4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if (puVar4 != puVar5) goto LAB_107a3b124;
    puVar6 = param_2;
    func_0x00010c25a4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar6 = param_3;
    func_0x00010c25a4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010c072060(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_107a3b138:
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar6;
}



/* Entry: 107a3b168; end: 107a3b2cf;  */

void FUN_107a3b168(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25a4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107a3b2d0;
  puStack_50 = &UNK_11085a548;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar2 = uVar1;
  uStack_48 = uVar6;
  func_0x0001006372a4(uVar1,&puStack_68);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d5fe8;
  _objc_alloc(PTR_PTR_1126d5fe8);
  uVar1 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c25a6a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c25a580(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04db00(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107a3b2d0; end: 107a3b373;  */

undefined8 FUN_107a3b2d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108fd6d1c(uVar4,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108fd6d1c(uVar3,uVar2);
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 107a3b374; end: 107a3b37b; -[SCStoryMembersDataSource storyMemberCount] */

void FUN_107a3b374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 107a3b37c; end: 107a3b453; -[SCStoryMembersDataSource isBlockedWithUserId:] */

undefined8 FUN_107a3b37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107a3b40c;
  puStack_30 = &UNK_11085a548;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf04920(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107a3b454; end: 107a3b71f; -[SCStoryMembersDataSource fetchRemoteSnapchattersWithUserIds:completionHandler:] */

void FUN_107a3b454(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar7 = param_3;
  func_0x00010bf529e0();
  uVar1 = uVar7;
  _dispatch_group_create();
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_107a3b720;
  uStack_88 = 0x107a3b730;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_107a3b720;
  uStack_b8 = 0x107a3b730;
  uStack_b0 = 0;
  puStack_80 = puVar2;
  if (uVar7 == 0) {
    uVar3 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar3 = *(ulong *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c12a420();
      _objc_release(uVar3);
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      uVar3 = param_3;
      func_0x00010c25e980(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _dispatch_group_enter(uVar1);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c11de00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_107a3b738;
      puStack_f0 = &UNK_110860220;
      puStack_e0 = &uStack_a8;
      _objc_retain(uVar1);
      uStack_e8 = uVar1;
      func_0x00010c244ea0(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar7 = uVar7 - uVar4;
      _objc_release(uStack_e8);
      uVar8 = uVar3;
    } while (uVar7 != 0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_107a3b770;
  puStack_128 = &UNK_110849cb0;
  puStack_118 = &uStack_a8;
  puStack_110 = &uStack_d8;
  uStack_120 = param_4;
  _objc_retain(param_4);
  func_0x000100bc0718(uVar1,uVar5,&puStack_140);
  _objc_release(uVar5);
  _objc_release(uStack_120);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107a3b720; end: 107a3b737;  */

void FUN_107a3b720(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107a3b738; end: 107a3b76f;  */

void FUN_107a3b738(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x00010befa160(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2,
                        param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107a3b770; end: 107a3b7c7;  */

void FUN_107a3b770(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))
            (lVar1,uVar2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a3b7c8; end: 107a3b9db; -[SCStoryMembersDataSource _fetchSnapchattersForCustomStory:] */

void FUN_107a3b7c8(long param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined **unaff_x25;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dd80();
    lVar2 = param_3;
    if (lVar1 == 1) {
      func_0x00010c29ef80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1057e0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      lVar1 = param_3;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_60 = lVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_107a3b9dc;
      puStack_80 = &UNK_110851330;
      _objc_retain(lVar1);
      unaff_x25 = &puStack_98;
      param_2 = auStack_68;
      lStack_78 = lVar1;
      _objc_copyWeak(auStack_70);
      func_0x00010c265ba0(uVar3);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_70);
      _objc_release(lStack_78);
      _objc_destroyWeak(auStack_68);
      _objc_release(lVar1);
    }
    else {
      func_0x00010be14340(param_1);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010c27dd80();
  if (puVar6 == (undefined1 *)0x1) {
    puVar6 = param_2;
    func_0x00010c29ef80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined1 *)0x0) goto LAB_107a3ba30;
    _objc_release();
  }
  else {
LAB_107a3ba30:
    puVar6 = param_2;
    func_0x00010c27dd80();
    if (puVar6 != (undefined1 *)0x2) goto LAB_107a3ba78;
    puVar6 = param_2;
    func_0x00010c1057e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar6 == (undefined1 *)0x0) goto LAB_107a3ba78;
  }
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be142e0();
  _objc_release(param_3);
LAB_107a3ba78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a3b9dc; end: 107a3ba8b;  */

void FUN_107a3b9dc(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    lVar1 = param_2;
    func_0x00010c29ef80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) goto LAB_107a3ba30;
    _objc_release();
  }
  else {
LAB_107a3ba30:
    lVar1 = param_2;
    func_0x00010c27dd80();
    if (lVar1 != 2) goto LAB_107a3ba78;
    lVar1 = param_2;
    func_0x00010c1057e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_107a3ba78;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be142e0();
  _objc_release(param_1);
LAB_107a3ba78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a3ba8c; end: 107a3bbd7; -[SCStoryMembersDataSource _fetchSnapchattersForUserIds:customStory:] */

void FUN_107a3ba8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c244e80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a3bbd8; end: 107a3bc37;  */

void FUN_107a3bbd8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3bc38; end: 107a3be9f; -[SCStoryMembersDataSource _handleFetchedSnapchatters:userIds:customStory:] */

void FUN_107a3bc38(long param_1,undefined1 *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  func_0x00010bede780(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed2380(param_1);
  lVar2 = param_4;
  func_0x00010c0d3c80();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        func_0x00010c2923e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(lVar2);
        _objc_release(uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  ppuVar5 = (undefined **)0x0;
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    _objc_initWeak(auStack_138,param_1);
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_107a3bea0;
    puStack_150 = &UNK_110853590;
    ppuVar5 = &puStack_168;
    param_2 = auStack_138;
    _objc_copyWeak(auStack_140);
    _objc_retain(param_5);
    uStack_148 = param_5;
    func_0x00010bfa9c20(param_1);
    _objc_release(uStack_148);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar5 + 5);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2edc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a3bea0; end: 107a3beff;  */

void FUN_107a3bea0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2edc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3bf00; end: 107a3bf8b; -[SCStoryMembersDataSource _handleRemoteFetchedSnapchatters:customStory:] */

void FUN_107a3bf00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf09f80(uVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed2380(param_1,param_2,uVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a3bf8c; end: 107a3c04f; -[SCStoryMembersDataSource _updataMembersListSnapchatters:] */

void FUN_107a3bf8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010bf51e00();
  lVar1 = param_1;
  func_0x00010c246f80();
  uVar2 = param_3;
  if ((int)lVar1 != 0) {
    func_0x00010901f44c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  _objc_release(uVar5);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x70));
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf529e0(uVar3);
  func_0x00010c0df840(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a3c050; end: 107a3c1e7; -[SCStoryMembersDataSource _updataMembersListSnapchatters:customStory:] */

void FUN_107a3c050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  func_0x00010bf51e00();
  lVar1 = param_1;
  func_0x00010c246f80();
  uVar2 = param_3;
  if ((int)lVar1 != 0) {
    func_0x00010901f44c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar6 = uVar2;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126d5fe8;
  _objc_alloc(PTR_PTR_1126d5fe8);
  uVar6 = param_4;
  func_0x00010c11ac00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf5a820(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0d02e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c04db00(puVar3,param_2,uVar6,uVar4,uVar5,*(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar6);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,puVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf529e0(uVar6);
  func_0x00010c0df840(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x70));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107a3c1e8; end: 107a3c21f; -[SCStoryMembersDataSource _updataMembersListSnapchattersHelper] */

void FUN_107a3c1e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf51e00(uVar1);
  func_0x00010bed2360(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107a3c220; end: 107a3c2bb; -[SCStoryMembersDataSource _updateRemoteSnapchattersWithUserIds:] */

void FUN_107a3c220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107a3c2bc;
  puStack_40 = &UNK_11085a548;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x0001006372a4(uVar2,&puStack_58);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  _objc_release(uVar1);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a3c2bc; end: 107a3c307;  */

undefined8 FUN_107a3c2bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107a3c308; end: 107a3c3fb; -[SCStoryMembersDataSource _fetchBlockedSnapchatters] */

void FUN_107a3c308(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf1d7c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107a3c3fc; end: 107a3c45b;  */

void FUN_107a3c3fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3c45c; end: 107a3c58f; -[SCStoryMembersDataSource didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_107a3c45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107a3c590;
  puStack_58 = &UNK_1108caed8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0bc6c0(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107a3c590; end: 107a3c5e7;  */

void FUN_107a3c590(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be10200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3c5e8; end: 107a3c5eb; -[SCStoryMembersDataSource didStartSnapchattersUpdateDataRequest:] */

void FUN_107a3c5e8(void)

{
  return;
}



/* Entry: 107a3c5ec; end: 107a3c5f3; -[SCStoryMembersDataSource publicationId] */

undefined8 FUN_107a3c5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a3c5f4; end: 107a3c5fb; -[SCStoryMembersDataSource storyOwnerId] */

undefined8 FUN_107a3c5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107a3c5fc; end: 107a3c603; -[SCStoryMembersDataSource sortsAlphabetically] */

undefined1 FUN_107a3c5fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 107a3c604; end: 107a3c60b; -[SCStoryMembersDataSource setSortsAlphabetically:] */

void FUN_107a3c604(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 107a3c60c; end: 107a3c6e3; -[SCStoryMembersDataSource .cxx_destruct] */

void FUN_107a3c60c(long param_1)

{
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



/* Entry: 107a3c6e4; end: 107a3c6eb; -[SCKeyBlockHandling events] */

undefined8 FUN_107a3c6e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107a3c6ec; end: 107a3c71b; -[SCKeyBlockHandling setEvents:] */

void FUN_107a3c6ec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107a3c71c; end: 107a3c723; -[SCKeyBlockHandling block] */

undefined8 FUN_107a3c71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107a3c724; end: 107a3c72b; -[SCKeyBlockHandling setBlock:] */

void FUN_107a3c724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107a3c72c; end: 107a3c75b; -[SCKeyBlockHandling .cxx_destruct] */

void FUN_107a3c72c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a3c75c; end: 107a3c7f3; -[SCSpotlightOperaEventListener initWithEventAnnouncing:] */

undefined1 * FUN_107a3c75c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9738;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar1);
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 107a3c7f4; end: 107a3c8bf; -[SCSpotlightOperaEventListener addHandlings:] */

void FUN_107a3c7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107a3c8c0;
  puStack_40 = &UNK_1109f6e48;
  uStack_38 = param_1;
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_1;
  func_0x00010bf99b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf99d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar1,param_2,param_1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107a3c8c0; end: 107a3ca83;  */

ulong FUN_107a3c8c0(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar1 = param_2;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      uVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(uVar1);
        }
        puVar3 = *(undefined **)(param_1 + 0x20);
        func_0x00010bf99d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        }
        uVar5 = param_2;
        func_0x00010bf1d1e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        _objc_retainBlock();
        func_0x00010befa120(puVar4);
        _objc_release(uVar6);
        _objc_release(uVar5);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf99d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640();
        _objc_release(uVar7);
        _objc_release(puVar4);
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = uVar1;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  func_0x00010bf99d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (ulong)(uVar1 != 0);
}



/* Entry: 107a3ca84; end: 107a3caff; -[SCSpotlightOperaEventListener hasHandlingForEvent:] */

bool FUN_107a3ca84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf99d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 107a3cb00; end: 107a3cc7b; -[SCSpotlightOperaEventListener operaViewDidSendEvent:page:params:] */

void FUN_107a3cb00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf99d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_3,param_4,param_5);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return;
}



/* Entry: 107a3cc7c; end: 107a3cc87; -[SCSpotlightOperaEventListener eventDictionary] */

void FUN_107a3cc7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 107a3cc88; end: 107a3cc8f; -[SCSpotlightOperaEventListener setEventDictionary:] */

void FUN_107a3cc88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 107a3cc90; end: 107a3cca7; -[SCSpotlightOperaEventListener eventAnnouncing] */

void FUN_107a3cc90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107a3cca8; end: 107a3ccb3; -[SCSpotlightOperaEventListener setEventAnnouncing:] */

void FUN_107a3cca8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107a3ccb4; end: 107a3ccdf; -[SCSpotlightOperaEventListener .cxx_destruct] */

void FUN_107a3ccb4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107a3cce0; end: 107a3cf03; -[SCSpotlightOperaPlugin initWithBaseView:mode:ngsV2ResponsiveLayoutEnabled:viewLocation:showTimestamp:showPayToPromoteButton:spotlightConfigProvider:storiesConfigProvider:circumstanceEngine:] */

undefined1 *
FUN_107a3cce0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,long param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f9740;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + 8),param_4);
    *(undefined8 *)((long)puVar2 + 0x10) = param_5;
    *(undefined1 *)((long)puVar2 + 0x18) = param_6;
    *(long *)((long)puVar2 + 0x30) = param_7;
    *(undefined1 *)((long)puVar2 + 0x29) = param_8;
    *(undefined1 *)((long)puVar2 + 0x2a) = param_9;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_12;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined8 *)((long)puVar2 + 0x40) = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined8 *)((long)puVar2 + 0x48) = param_11;
    _objc_release(uVar3);
    uVar3 = param_12;
    func_0x000108f4a24c();
    *(char *)((long)puVar2 + 0x50) = (char)uVar3;
    uVar3 = param_12;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + 0x51) = (char)uVar3;
    uVar3 = param_12;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + 0x52) = (char)uVar3;
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x38);
    func_0x000108f4a444();
    *(undefined1 *)((long)puVar2 + 0x54) = uVar1;
    puVar4 = (undefined1 *)puVar2;
    func_0x00010be40b00();
    *(char *)((long)puVar2 + 0x55) = (char)puVar4;
    puVar5 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + 0x90);
    *(undefined **)((long)puVar2 + 0x90) = puVar5;
    _objc_release(uVar3);
    func_0x000108f4a564(*(undefined8 *)((long)puVar2 + 0x38));
    *(undefined4 *)((long)puVar2 + 0x9c) = param_1;
    func_0x000108f4a57c(*(undefined8 *)((long)puVar2 + 0x38));
    *(undefined4 *)((long)puVar2 + 0xa0) = param_1;
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x38);
    func_0x000108f4a51c();
    *(undefined1 *)((long)puVar2 + 0x99) = uVar1;
    uVar3 = param_12;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + 0x98) = (char)uVar3;
    if ((param_7 == 0x68) || (param_7 == 0x51)) {
      uVar3 = param_12;
      func_0x00010bf1f440();
      uVar1 = (undefined1)uVar3;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)((long)puVar2 + 0xa4) = uVar1;
    func_0x00010c0d9840(*(undefined8 *)((long)puVar2 + 0x90));
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 107a3cf04; end: 107a3cf0f; -[SCSpotlightOperaPlugin type] */

undefined ** FUN_107a3cf04(void)

{
  return &PTR____CFConstantStringClassReference_110eaa538;
}



/* Entry: 107a3cf10; end: 107a3cf37; -[SCSpotlightOperaPlugin isTransitioningBetweenContent] */

void FUN_107a3cf10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a3cf38; end: 107a3cf7b; -[SCSpotlightOperaPlugin operaDidPauseWithModelPresentationEnded] */

void FUN_107a3cf38(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfba0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3cf7c; end: 107a3cfbf; -[SCSpotlightOperaPlugin operaDidPauseWithModelDismissedEnded] */

void FUN_107a3cf7c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3cfc0; end: 107a3cfff; -[SCSpotlightOperaPlugin operaCurrentPageProvider] */

void FUN_107a3cfc0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107a3d000; end: 107a3d07b; -[SCSpotlightOperaPlugin pausePlaybackWithoutOverlay] */

void FUN_107a3d000(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6200(lVar2,param_2,0,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107a3d07c; end: 107a3d0bf; -[SCSpotlightOperaPlugin resumePlayback] */

void FUN_107a3d07c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3d0c0; end: 107a3d0c7; -[SCSpotlightOperaPlugin playlistDataSource] */

undefined8 FUN_107a3d0c0(void)

{
  return 0;
}



/* Entry: 107a3d0c8; end: 107a3d0cb; -[SCSpotlightOperaPlugin setExtraInfo:] */

void FUN_107a3d0c8(void)

{
  return;
}



/* Entry: 107a3d0cc; end: 107a3d1a3; -[SCSpotlightOperaPlugin setOperaControlling:] */

void FUN_107a3d0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x20,param_3);
  uVar4 = param_3;
  func_0x00010c27f040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar4;
  func_0x00010c27f020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x88,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c0eb3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = lVar3;
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 107a3d1a4; end: 107a3d1cb; -[SCSpotlightOperaPlugin currentOperaSessionId] */

void FUN_107a3d1a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107a3d1cc; end: 107a3d263; -[SCSpotlightOperaPlugin addEventListenersWithEventAnnouncing:] */

void FUN_107a3d1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3);
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x58,param_3);
  puVar2 = PTR_PTR_1126d5ff0;
  _objc_alloc();
  func_0x00010c010a80();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be895d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__registerForOperaEventsUsingKeyB_11257ff10);
  return;
}



/* Entry: 107a3d264; end: 107a3d26f; -[SCSpotlightOperaPlugin setPlaylistItemController:] */

void FUN_107a3d264(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 107a3d270; end: 107a3d273; -[SCSpotlightOperaPlugin extraPropertiesProvider] */

void FUN_107a3d270(void)

{
  return;
}



/* Entry: 107a3d274; end: 107a3d2b3; -[SCSpotlightOperaPlugin announceWillSwitchFeed] */

void FUN_107a3d274(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3d2b4; end: 107a3d2eb; -[SCSpotlightOperaPlugin announceFeedSwitcherFeedDidDisappear] */

void FUN_107a3d2b4(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3d2ec; end: 107a3d323; -[SCSpotlightOperaPlugin announceFeedSwitcherFeedDidAppear] */

void FUN_107a3d2ec(long param_1)

{
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a3d324; end: 107a3db3b; -[SCSpotlightOperaPlugin updateOperaConfiguration:] */

void FUN_107a3d324(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar8 != 0) {
    lVar8 = param_5 + 8;
    _objc_loadWeakRetained(lVar8);
    func_0x00010bfb68e0();
    func_0x00010c2a9880(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  uVar3 = *(undefined8 *)(param_5 + 0x38);
  func_0x000108f4b700(uVar3,1);
  iVar1 = 0;
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    func_0x000108f4b9ec(uVar3,*(undefined8 *)(param_5 + 0x48));
    iVar1 = (int)uVar3;
  }
  if (*(char *)(param_5 + 0x55) == '\x01') {
    func_0x00010c2acc20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b48a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000100594f4c();
    func_0x00010c297340(0,0,-param_1,0,puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad8e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126caf60;
    _objc_opt_new(PTR_PTR_1126caf60);
    func_0x00010c2b25c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3720((double)*(float *)(param_5 + 0x9c),puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3660((double)*(float *)(param_5 + 0xa0),puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar11;
    func_0x00010bf21f60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7380(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c2a8d80(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac1c0(0,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    goto LAB_107a3d8c8;
  }
  if (*(long *)(param_5 + 0x10) != 1) {
    func_0x00010c2b48a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar10 = (ulong)*(byte *)(param_5 + 0x18);
    func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
    FUN_107a3db3c(uVar10,*(undefined8 *)(param_5 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7380(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar10);
    func_0x00010c2acc20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000100594f4c();
    func_0x00010c297340(0,0,-param_1,0,puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ad8e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    goto LAB_107a3d8c8;
  }
  lVar8 = *(long *)(param_5 + 0x30);
  if (lVar8 < 0x59) {
    if (lVar8 == 0x51) {
LAB_107a3d5ec:
      if (*(char *)(param_5 + 0xa4) == '\x01') {
        lVar8 = param_5 + 0xe8;
        _objc_loadWeakRetained();
        if (lVar8 == 0) {
          lVar5 = param_5 + 0x88;
          _objc_loadWeakRetained();
          lVar6 = lVar5;
          func_0x00010c29d0c0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 == 0) {
            lVar7 = param_5 + 8;
            _objc_loadWeakRetained(lVar7);
          }
          else {
            _objc_retain(lVar6);
            lVar7 = lVar6;
          }
          _objc_release(lVar6);
          _objc_release(lVar5);
        }
        else {
          _objc_retain(lVar8);
          lVar7 = lVar8;
        }
        _objc_release(lVar8);
        func_0x00010c148fc0(lVar7);
        dVar13 = param_3;
        func_0x000100594f4c();
        param_3 = param_3 + param_1;
        puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14c760();
        _objc_release(puVar11);
        dVar12 = param_1;
        _CGRectGetWidth(param_1,param_2,dVar13,param_4);
        _CGRectGetHeight(param_1,param_2,dVar13,param_4);
        func_0x00010c2a9880(0,0,dVar12,param_1 - param_3,puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b48a0(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2acc20(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297340(0,0,-param_3,0,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ad8e0(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar11);
        func_0x00010c2ac1c0(0,puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar7);
      }
      else {
        func_0x00010c2b48a0(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar11 = (undefined *)(ulong)*(byte *)(param_5 + 0x18);
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      FUN_107a3db3c(puVar11,*(undefined8 *)(param_5 + 0x10));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7380(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_107a3d8c8;
    }
    if (lVar8 == 0x54) goto LAB_107a3d618;
LAB_107a3d650:
    if (iVar1 == 0) {
      func_0x00010c2b48a0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2b48a0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a74e0(0x404f800000000000,puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar11 = PTR_PTR_1126caf60;
    _objc_opt_new(PTR_PTR_1126caf60);
    func_0x00010c2b25c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8d80(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    if (lVar8 != 0x59) {
      if (lVar8 != 0x68) goto LAB_107a3d650;
      goto LAB_107a3d5ec;
    }
LAB_107a3d618:
    func_0x00010c2b48a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126caf60;
    _objc_opt_new(PTR_PTR_1126caf60);
    func_0x00010c2b25c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = puVar11;
  func_0x00010bf21f60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7380(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
LAB_107a3d8c8:
  _objc_release(puVar11);
  func_0x00010c2b5ea0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4880(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5480(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc8c0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((*(long *)(param_5 + 0x30) == 0x62) || (*(long *)(param_5 + 0x30) == 0x49)) {
    func_0x00010c2ac1c0(0,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar11 = PTR_PTR_1126d5ff8;
  uVar3 = param_7;
  func_0x00010bfa0d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea500(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2a81c0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar11;
  func_0x00010bf21f60(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ada80(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar10 = *(long *)(param_5 + 0x30) - 0x49;
  if (((uVar10 < 0x1a) && ((1L << (uVar10 & 0x3f) & 0x2020001U) != 0)) ||
     ((uVar9 = *(long *)(param_5 + 0x30) - 0x57, uVar10 = uVar9 >> 1, (uVar10 | uVar9 << 0x3f) < 8
      && ((1L << (uVar10 & 0x3f) & 0xb1U) != 0)))) {
    func_0x00010c2ac4a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x000108f4b788(*(undefined8 *)(param_5 + 0x38));
    func_0x00010c2a8c60(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107a3db3c; end: 107a3dd37;  */

void FUN_107a3db3c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,int param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  puVar1 = PTR_PTR_1126caf60;
  dVar3 = param_1;
  _objc_opt_new();
  if (param_8 == 1) {
    func_0x00010c2b25c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else if (param_7 == 0) {
    func_0x00010c2b25c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    dVar4 = dVar3;
    _objc_release(puVar2);
    func_0x000100594f4c();
    dVar5 = dVar3;
    _CGRectGetWidth(dVar3,param_2,param_3,param_4);
    _CGRectGetHeight(dVar3,param_2,param_3,param_4);
    if (0.5625 <= dVar5 / ((dVar3 - dVar4) - param_1)) {
      func_0x00010c2b3720(0x3ff147ae20000000,puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b3660(0x3ff4000000000000,puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c2b25c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3720((double)param_5,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    dVar4 = (double)param_6;
    puVar2 = puVar1;
    func_0x00010c2b3660(dVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x0001008522a8();
    dVar3 = 0.0;
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
      dVar3 = dVar4;
    }
    func_0x00010c2ba040(dVar3,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar4 = dVar3;
    func_0x00010c14d680(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x00010c2af660((dVar3 + dVar4) - param_1,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a3dd38; end: 107a3dd83; -[SCSpotlightOperaPlugin updateOperaDependencies:] */

void FUN_107a3dd38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23c8;
  func_0x00010c0ea380(PTR_PTR_1126b23c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107a3dd84; end: 107a3f37f; -[SCSpotlightOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107a3dd84(long param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  undefined *param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  float fVar28;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) goto LAB_107a3f340;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    lVar22 = *(long *)(param_1 + 0x30);
    _objc_retain(param_3);
    if (lVar22 != 0x46) goto LAB_107a3df70;
    puVar25 = PTR_PTR_1126c9870;
    _objc_opt_class(PTR_PTR_1126c9870);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar25);
    if (((ulong)puVar2 & 1) == 0) {
      puVar25 = PTR_PTR_1126c9a80;
      _objc_opt_class(PTR_PTR_1126c9a80);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar25);
      if (((ulong)puVar2 & 1) == 0) {
        puVar25 = PTR_PTR_1126b5bc0;
        _objc_opt_class(PTR_PTR_1126b5bc0);
        puVar2 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar25);
        puVar25 = PTR_PTR_1126b5bc0;
        if (((ulong)puVar2 & 1) != 0) {
          _objc_retain(param_3);
          _objc_opt_class(puVar25);
          puVar2 = param_3;
          _objc_opt_isKindOfClass(param_3,puVar25);
          puVar25 = param_3;
          if (((ulong)puVar2 & 1) == 0) {
            puVar25 = (undefined *)0x0;
          }
          _objc_retain(puVar25);
          _objc_release(param_3);
          puVar2 = puVar25;
          func_0x00010853a704();
          _objc_release(puVar25);
          if (((ulong)puVar2 & 1) != 0) goto LAB_107a3de34;
        }
LAB_107a3df70:
        _objc_release(param_3);
        goto LAB_107a3df78;
      }
    }
LAB_107a3de34:
    _objc_release(param_3);
    if (*(char *)(param_1 + 0x55) == '\x01') {
      puVar25 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010c1d0640();
      func_0x00010c1d0640(puVar25);
      func_0x00010c1d0640(puVar25);
      func_0x00010c1d0640(puVar25);
      func_0x00010c1d0640(puVar25);
    }
    else {
      puVar25 = (undefined *)0x0;
    }
    (**(code **)(param_6 + 0x10))(param_6,puVar25,0);
  }
  else {
LAB_107a3df78:
    uVar21 = param_4;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar21;
    func_0x00010c0720c0();
    _objc_release(puVar25);
    _objc_release(uVar21);
    puVar25 = param_5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2d20;
    func_0x00010c24c3e0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar25;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1f3c0();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar25);
    if ((((int)uVar3 == 0) || (*(long *)(param_1 + 0x30) != 0x1e)) ||
       ((((uint)puVar5 | *(byte *)(param_1 + 0x51) ^ 0xffffffff) & 1) != 0)) {
      _objc_retain(param_3);
      puVar25 = PTR_PTR_1126b5bc0;
      _objc_opt_class(PTR_PTR_1126b5bc0);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar25);
      puVar25 = param_3;
      if (((ulong)puVar2 & 1) == 0) {
        puVar25 = (undefined *)0x0;
      }
      _objc_retain();
      _objc_release(param_3);
      _objc_retain(param_3);
      puVar2 = PTR_PTR_1126c9a80;
      _objc_opt_class(PTR_PTR_1126c9a80);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      puVar2 = param_3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain();
      _objc_release(param_3);
      _objc_retain(param_3);
      puVar4 = PTR_PTR_1126c9870;
      _objc_opt_class(PTR_PTR_1126c9870);
      puVar5 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      puVar4 = param_3;
      if (((ulong)puVar5 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain();
      _objc_release(param_3);
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      if (*(char *)(param_1 + 0x55) == '\x01') {
        if (((puVar25 == (undefined *)0x0) && (puVar2 == (undefined *)0x0)) &&
           ((puVar4 == (undefined *)0x0 && (*(char *)(param_1 + 0x99) != '\x01')))) {
          puVar26 = (undefined *)(ulong)*(byte *)(param_1 + 0x18);
          func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
          FUN_107a3db3c(puVar26,*(undefined8 *)(param_1 + 0x10));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
        }
        else {
          puVar26 = PTR_PTR_1126caf60;
          _objc_opt_new(PTR_PTR_1126caf60);
          func_0x00010c2b25c0();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b3720((double)*(float *)(param_1 + 0x9c),puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b3660((double)*(float *)(param_1 + 0xa0),puVar26);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar27 = puVar26;
          func_0x00010bf21f60(puVar26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(puVar27);
        }
        _objc_release(puVar26);
      }
      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x00010c0df720(puVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar26);
      func_0x00010c1d0640(puVar5);
      func_0x00010c1d0640(puVar5);
      func_0x00010c1d0640(puVar5);
      func_0x00010c1d0640(puVar5);
      func_0x00010c1d0640(puVar5);
      uVar21 = param_4;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR_PTR_1126c9a78;
      func_0x00010c1015e0(PTR_PTR_1126c9a78);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar21;
      func_0x00010c0720c0();
      _objc_release(puVar26);
      _objc_release(uVar21);
      puVar26 = param_5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar26;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar27;
      func_0x00010bf1f3c0();
      _objc_release(puVar27);
      _objc_release(puVar26);
      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar26);
      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      FUN_107a3f380(param_4);
      func_0x00010c0df6e0(puVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar26);
      func_0x00010c1d0640(puVar5);
      puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar22 = *(long *)(param_1 + 0x30);
      _objc_retain(param_3);
      puVar26 = PTR_PTR_1126b5bc0;
      _objc_opt_class(PTR_PTR_1126b5bc0);
      puVar7 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar26);
      puVar26 = param_3;
      if (((ulong)puVar7 & 1) == 0) {
        puVar26 = (undefined *)0x0;
      }
      _objc_retain(puVar26);
      if ((puVar26 != (undefined *)0x0) && ((lVar22 == 0x65 || (lVar22 == 0x57)))) {
        func_0x00010853b5e0(param_3);
      }
      _objc_release(puVar26);
      _objc_release(param_3);
      func_0x00010c0df6e0(puVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar27);
      lVar8 = *(long *)(param_1 + 0xd8);
      func_0x00010c131c00();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar8;
      func_0x00010bf529e0();
      if (lVar22 == 0) {
        lVar22 = *(long *)(param_1 + 0xd8);
        _objc_retain(lVar22);
        puVar26 = PTR_PTR_1126b6060;
      }
      else {
        puVar26 = puVar25;
        func_0x00010bf5b080();
        _objc_retainAutoreleasedReturnValue();
        puVar27 = puVar26;
        func_0x00010bf5b440();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar26);
        puVar26 = puVar27;
        func_0x00010c08fa60();
        if (puVar26 == (undefined *)0x0) {
          lVar22 = 0;
        }
        else {
          lVar22 = lVar8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          _objc_release(lVar22);
        }
        _objc_release(puVar27);
        puVar26 = PTR_PTR_1126b6060;
      }
      PTR_PTR_1126b6060 = puVar26;
      if (lVar22 != 0) {
        func_0x00010bfeb420(puVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar26);
      }
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      func_0x000108f4b700(uVar9,0);
      if ((int)uVar9 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        func_0x000108f4b9ec(uVar9,*(undefined8 *)(param_1 + 0x48));
        if ((int)uVar9 != 0) {
          puVar26 = PTR_PTR_1126b2d20;
          func_0x00010c24ae80(PTR_PTR_1126b2d20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(puVar26);
          if (*(long *)(param_1 + 0x30) == 0x1d && (uVar3 & 1) == 0) {
            lVar19 = lVar22;
            func_0x00010bf50280();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar19;
            func_0x00010c08fa60();
            _objc_release(lVar19);
            if (lVar10 != 0) {
              puVar26 = PTR_PTR_1126b2d20;
              func_0x00010bf7f080(PTR_PTR_1126b2d20);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar5);
              _objc_release(puVar26);
            }
          }
          puVar26 = param_5;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar26;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar27;
          func_0x00010bf1f3c0();
          _objc_release(puVar27);
          _objc_release(puVar26);
          if ((*(long *)(param_1 + 0x30) == 0x1e) && ((int)puVar7 != 0)) {
            func_0x00010c1d0640(puVar5);
          }
        }
      }
      lVar19 = param_1;
      func_0x00010bf5e940(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(lVar19);
      lVar19 = *(long *)(param_1 + 0x30);
      if (lVar19 == 0x62) {
        func_0x00010c1d0640(puVar5);
        func_0x00010c1d0640(puVar5);
        lVar19 = *(long *)(param_1 + 0x30);
      }
      if ((lVar19 - 0x42U < 0x27) && ((1L << (lVar19 - 0x42U & 0x3f) & 0x4000040701U) != 0)) {
        uVar21 = param_4;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar21;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar20;
        func_0x00010bf529e0();
        _objc_release(uVar20);
        if (uVar11 < 2) {
LAB_107a3e9b8:
          func_0x00010c1d0640(puVar5);
        }
        else {
          uVar20 = uVar21;
          func_0x00010c084fc0(uVar21);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar20;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = param_4;
          func_0x00010c071ae0();
          _objc_release(uVar11);
          _objc_release(uVar20);
          func_0x00010c1d0640(puVar5);
          if ((int)uVar12 != 0) goto LAB_107a3e9b8;
        }
        _objc_release(uVar21);
      }
      if (*(char *)(param_1 + 0x54) == '\x01') {
        uVar21 = *(long *)(param_1 + 0x30) - 0x49;
        if (((uVar21 < 0x1a) && ((1L << (uVar21 & 0x3f) & 0x2020001U) != 0)) ||
           ((uVar20 = *(long *)(param_1 + 0x30) - 0x57, uVar21 = uVar20 >> 1,
            (uVar21 | uVar20 << 0x3f) < 8 && ((1L << (uVar21 & 0x3f) & 0xb1U) != 0)))) {
          func_0x00010c1d0640(puVar5);
          func_0x00010c1d0640(puVar5);
        }
      }
      puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = param_5;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar27;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar27);
      if ((puVar7 == (undefined *)0x0) ||
         (puVar27 = puVar7, func_0x0001085394d0(), ((ulong)puVar27 & 1) != 0)) {
        uVar24 = 0;
      }
      else {
        puVar27 = param_5;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar27;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf1f3c0();
        if (((ulong)puVar14 & 1) == 0) {
          puVar14 = param_5;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010bf1f3c0();
          uVar24 = (uint)puVar16;
          _objc_release(puVar15);
          _objc_release(puVar14);
        }
        else {
          uVar24 = 1;
        }
        _objc_release(puVar13);
        _objc_release(puVar27);
      }
      lVar19 = *(long *)(param_1 + 0x30);
      if (lVar19 == 0x1d) {
        if (((int)uVar3 == 0) || (*(char *)(param_1 + 0x52) == '\x01')) {
          puVar13 = param_5;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar14;
          func_0x00010bf1f3c0();
          if ((((uint)puVar27 | uVar24) & 1) == 0) {
            puVar27 = param_5;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar27;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar27);
            puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
            _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
            puVar17 = puVar16;
            _objc_opt_isKindOfClass(puVar16,puVar27);
            puVar15 = puVar16;
            if (((ulong)puVar17 & 1) == 0) {
              puVar15 = (undefined *)0x0;
            }
            _objc_retain(puVar15);
            _objc_release(puVar16);
            _objc_opt_class(PTR_PTR_1126d5e48);
            puVar27 = puVar15;
            func_0x00010bf4b900();
            _objc_release(puVar15);
          }
          else {
            puVar27 = (undefined *)0x1;
          }
          _objc_release(puVar14);
          _objc_release(puVar13);
          lVar19 = *(long *)(param_1 + 0x30);
          goto LAB_107a3ec8c;
        }
      }
      else {
        puVar27 = (undefined *)0x0;
LAB_107a3ec8c:
        if ((((0x3a < lVar19 - 0x17U) || ((1L << (lVar19 - 0x17U & 0x3f) & 0x604000000000081U) == 0)
             ) && (lVar19 != 0x62)) && ((lVar19 != 100 && (((ulong)puVar27 & 1) == 0)))) {
          _objc_opt_class(PTR_PTR_1126d5e48);
          func_0x00010befa120(puVar26);
          if (*(char *)(param_1 + 0x29) == '\x01') {
            func_0x00010c1d0640(puVar5);
          }
        }
      }
      lVar19 = *(long *)(param_1 + 0x30);
      if ((lVar19 == 0x68) || (lVar19 == 0x51)) {
        if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
          _objc_opt_class(PTR_PTR_1126d6000);
          func_0x00010befa120(puVar26);
          lVar19 = *(long *)(param_1 + 0x30);
        }
        if (lVar19 == 0x51) {
          func_0x00010c1d0640(puVar5);
          func_0x00010c1d0640(puVar5);
          lVar19 = *(long *)(param_1 + 0x30);
        }
        if (lVar19 == 0x68) {
          func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x38));
          puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(puVar27);
        }
      }
      puVar27 = puVar26;
      func_0x00010bf529e0();
      if (puVar27 != (undefined *)0x0) {
        func_0x00010c1d0640(puVar5);
      }
      iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x00010c24b3a0();
      uVar21 = param_4;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar21;
      func_0x00010c0720c0();
      _objc_release(uVar21);
      if ((iVar1 != 0) && ((uVar3 & 1) == 0)) {
        lVar19 = *(long *)(param_1 + 0x30);
        puVar27 = PTR_PTR_1126c0e00;
        func_0x00010c100280(PTR_PTR_1126c0e00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f320();
        _objc_release(puVar27);
        puVar27 = PTR_PTR_1126c0e00;
        func_0x00010c1002c0(PTR_PTR_1126c0e00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f320();
        _objc_release(puVar27);
        puVar27 = PTR_PTR_1126c0e00;
        func_0x00010c2829c0(PTR_PTR_1126c0e00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f320();
        _objc_release(puVar27);
        puVar27 = PTR_PTR_1126c0e00;
        func_0x00010c2695c0(PTR_PTR_1126c0e00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f320();
        _objc_release(puVar27);
        bStack_70 = 0;
        if (lVar19 == 0x62) {
          bStack_70 = (byte)puVar6 ^ 1;
        }
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        _objc_retain(uVar9);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        fVar28 = -32.0;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_107a3f468;
        puStack_80 = &UNK_1109f6e78;
        _objc_retain(uVar9);
        ppuVar18 = &puStack_98;
        uStack_78 = uVar9;
        _objc_retainBlock();
        puVar27 = param_5;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar27;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar27);
        puVar27 = PTR_PTR_1126b3af0;
        _objc_opt_class(PTR_PTR_1126b3af0);
        puVar13 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar27);
        puVar27 = puVar6;
        if (((ulong)puVar13 & 1) == 0) {
          puVar27 = (undefined *)0x0;
        }
        _objc_retain();
        _objc_release(puVar6);
        if (puVar25 != (undefined *)0x0) {
          func_0x00010853a4a8(param_3);
        }
        puVar6 = param_5;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar6 = PTR_PTR_1126b2390;
        _objc_opt_class(PTR_PTR_1126b2390);
        puVar14 = puVar13;
        _objc_opt_isKindOfClass(puVar13,puVar6);
        puVar6 = puVar13;
        if (((ulong)puVar14 & 1) == 0) {
          puVar6 = (undefined *)0x0;
        }
        _objc_retain(puVar6);
        _objc_release(puVar13);
        puVar13 = puVar6;
        func_0x00010c25a6e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25b720();
        _objc_release(puVar13);
        func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x38));
        func_0x00010c08bda0();
        puVar13 = param_5;
        func_0x00010c118b40(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR_PTR_1126b2d20;
        func_0x00010bef2840(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar13;
        func_0x00010c0e00e0(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        func_0x00010c276c00(puVar27);
        puVar14 = param_5;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR____NSArray0__struct_11034ab48;
        if (puVar15 != (undefined *)0x0) {
          puVar13 = puVar15;
        }
        _objc_retain(puVar13);
        _objc_release(puVar15);
        _objc_release(puVar14);
        puVar14 = PTR_PTR_1126d6008;
        _objc_alloc(PTR_PTR_1126d6008);
        uVar23 = *(undefined8 *)(param_1 + 0x48);
        puVar15 = PTR_PTR_1126c0e00;
        func_0x00010c2695a0(PTR_PTR_1126c0e00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c20(uVar23);
        func_0x00010c050760(0x3fc99999a0000000,(double)fVar28,puVar14);
        _objc_release(puVar15);
        puVar15 = puVar13;
        func_0x00010bf09f60(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar6);
        _objc_release(puVar27);
        _objc_release(ppuVar18);
        _objc_release(uStack_78);
        _objc_release(uVar9);
      }
      puVar27 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar6 = puVar27;
      func_0x00010c1d0640();
      func_0x0001008522a8();
      if (((ulong)puVar6 & 1) == 0) {
        func_0x00010c1d0640(puVar27);
      }
      (**(code **)(param_6 + 0x10))(param_6,puVar5,puVar27);
      _objc_release(puVar27);
      _objc_release(puVar7);
      _objc_release(puVar26);
      _objc_release(lVar22);
      _objc_release(lVar8);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    else {
      puVar25 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010c1d0640();
      func_0x00010c1d0640(puVar25);
      func_0x00010c1d0640(puVar25);
      puVar2 = param_5;
      func_0x00010c118b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar25);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      FUN_107a3f380(param_4);
      func_0x00010c0df6e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar25);
      _objc_release(puVar2);
      func_0x00010c1d0640(puVar25);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010c1d0640();
      (**(code **)(param_6 + 0x10))(param_6,puVar25,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar25);
LAB_107a3f340:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107a3f380; end: 107a3f467;  */

ulong FUN_107a3f380(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  _objc_retain();
  func_0x000100478f84();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,puVar2);
    if ((int)uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = param_1;
      func_0x00010c0f3aa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107a3f468; end: 107a3f4cb;  */

undefined8 FUN_107a3f468(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126c0e00;
    func_0x00010c24b980(PTR_PTR_1126c0e00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f320(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    return uVar2;
  }
  return 0;
}



/* Entry: 107a3f4cc; end: 107a3f5af; -[SCSpotlightOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_107a3f4cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010bfd7a60(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010bdfad60(param_1,param_2,param_3,param_4,param_5);
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 != 0) {
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a3f5b0; end: 107a3fb73; -[SCSpotlightOperaPlugin _deprecated_handleOperaEvent:page:params:] */

void FUN_107a3f5b0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c9a08;
  func_0x00010c0fc7e0(PTR_PTR_1126c9a08);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar3 != 0) {
    lVar7 = param_1;
    func_0x00010c0fc800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      lVar7 = param_1;
      func_0x00010c0fc800();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar7 + 0x10))();
      _objc_release(lVar7);
    }
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar3 != 0) {
      puVar2 = (undefined *)(param_1 + 0x20);
      _objc_loadWeakRetained(puVar2);
      puVar8 = puVar2;
      func_0x00010c29cc40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c98a0;
      func_0x00010c0689a0(PTR_PTR_1126c98a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf84d40(puVar8);
      _objc_release(puVar10);
LAB_107a3f804:
      _objc_release(puVar8);
      goto LAB_107a3f810;
    }
    uVar6 = 0;
    func_0x000107a5dc98(0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if ((int)uVar3 != 0) {
      func_0x00010be01320(param_1);
      goto LAB_107a3f850;
    }
    uVar6 = 1;
    func_0x000107a5dc98(1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if ((int)uVar3 != 0) {
      puVar2 = (undefined *)(param_1 + 0x20);
      _objc_loadWeakRetained(puVar2);
      puVar8 = puVar2;
      func_0x00010c29e000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ca6a0();
      goto LAB_107a3f804;
    }
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      puVar2 = PTR_PTR_1126b2338;
      func_0x00010c299d40(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar2);
      if ((int)uVar3 == 0) {
        puVar2 = PTR_PTR_1126c9460;
        func_0x00010c2a5c80(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c0720c0();
        if ((uVar3 & 1) == 0) {
          puVar8 = PTR_PTR_1126b2330;
          func_0x00010c2a5ca0(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_3;
          func_0x00010c0720c0();
          if ((int)uVar3 != 0) {
            _objc_release(puVar8);
            goto LAB_107a3fa0c;
          }
          puVar10 = PTR_PTR_1126b2330;
          func_0x00010c2a6a00(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(puVar2);
          if ((uVar3 & 1) == 0) {
            puVar2 = PTR_PTR_1126c9420;
            func_0x00010c126700(PTR_PTR_1126c9420);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)uVar3 == 0) {
              puVar2 = PTR_PTR_1126c9420;
              func_0x00010c282040(PTR_PTR_1126c9420);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar2);
              if ((int)uVar3 != 0) {
                func_0x00010bed1ce0(param_1);
              }
            }
            else {
              func_0x00010be894a0(param_1);
            }
            goto LAB_107a3f850;
          }
        }
        else {
LAB_107a3fa0c:
          _objc_release(puVar2);
        }
        lVar7 = param_1;
        func_0x00010c0ea280();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010c06fc60();
        *(char *)(param_1 + 0x56) = (char)lVar9;
        _objc_release(lVar7);
        lVar7 = param_1;
        func_0x00010c0ea280();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x00010bfd6040();
        *(char *)(param_1 + 0x57) = (char)lVar9;
        _objc_release(lVar7);
        if (*(char *)(param_1 + 0x98) != '\x01') goto LAB_107a3f850;
        puVar2 = PTR_PTR_1126c9460;
        func_0x00010c2a5c80(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c0720c0();
        if ((uVar3 & 1) != 0) {
          cVar1 = *(char *)(param_1 + 0x28);
          _objc_release(puVar2);
          if (cVar1 != '\x01') goto LAB_107a3f850;
          goto LAB_107a3f798;
        }
      }
      else {
        puVar2 = PTR_PTR_1126c9310;
        func_0x00010c259760();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = *(long *)(param_1 + 0xc0);
        if ((lVar7 != 0) && (puVar2 != (undefined *)0x0)) {
          (**(code **)(lVar7 + 0x10))(lVar7,puVar2);
        }
      }
    }
    else {
      puVar2 = (undefined *)(param_1 + 0x20);
      _objc_loadWeakRetained(puVar2);
      puVar8 = puVar2;
      func_0x00010c29e000();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6200(puVar8);
      _objc_release(param_1);
      _objc_release(puVar8);
    }
LAB_107a3f810:
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR_PTR_1126c9a20;
    func_0x00010c06c7e0(PTR_PTR_1126c9a20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    func_0x00010bf1f3c0(uVar3);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c9a20;
    func_0x00010c0725c0(PTR_PTR_1126c9a20);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    func_0x00010bf1f3c0(uVar3);
    _objc_release(uVar3);
LAB_107a3f798:
    func_0x00010bdfe9e0(param_1);
  }
LAB_107a3f850:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107a3fb74; end: 107a3fd4f; -[SCSpotlightOperaPlugin _registerExtendedScrubberTouchArea:] */

void FUN_107a3fb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c9418;
  _objc_retain(param_7);
  func_0x00010bfc1ba0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010c0e00e0(param_7,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9418;
  func_0x00010bf9dbc0(PTR_PTR_1126c9418);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_7;
  func_0x00010c0e00e0(param_7,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2aa0();
  _objc_release(lVar3);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9418;
  func_0x00010bf6aca0(PTR_PTR_1126c9418);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_7;
  func_0x00010c0e00e0(param_7,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bf1f3c0(lVar3);
  _objc_release(lVar3);
  _objc_release(puVar1);
  lVar3 = param_5;
  func_0x00010c23b7a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar4 = param_5;
    func_0x00010c23b7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (**(code **)(lVar4 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((lVar2 != 0) && (lVar5 != 0)) {
      param_5 = param_5 + 0x20;
      _objc_loadWeakRetained(param_5);
      lVar3 = param_5;
      func_0x00010bf9dc60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c126720(param_1,param_2,param_3,param_4);
      _objc_release(lVar3);
      _objc_release(param_5);
    }
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a3fd50; end: 107a3fdff; -[SCSpotlightOperaPlugin _unregisterExtendedScrubberTouchArea:] */

void FUN_107a3fd50(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c9418;
  _objc_retain(param_3);
  func_0x00010bfc1ba0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf9dc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282060();
    _objc_release(lVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107a3fe00; end: 107a408b7; -[SCSpotlightOperaPlugin _registerForOperaEventsUsingKeyBlocks] */

void FUN_107a3fe00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined1 auStack_280 [8];
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined1 auStack_258 [8];
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_138);
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c2a5c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_e8 = puVar1;
  func_0x00010c2a5ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_e0 = puVar2;
  func_0x00010c2a6a00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d8 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_107a408b8;
  puStack_148 = &UNK_1109f6ea8;
  _objc_copyWeak(auStack_140,auStack_138);
  _objc_retain(puVar4);
  _objc_retain(&puStack_160);
  puVar5 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0(puVar5);
  func_0x00010c171c80(puVar5);
  _objc_release(&puStack_160);
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126b2338;
  puStack_d0 = puVar5;
  func_0x00010c299d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar31;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x107a409b8;
  puStack_170 = &UNK_1109f6ea8;
  _objc_copyWeak(auStack_168,auStack_138);
  _objc_retain(puVar7);
  _objc_retain(&puStack_188);
  puVar8 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0();
  func_0x00010c171c80(puVar8);
  _objc_release(&puStack_188);
  _objc_release(puVar7);
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110eaaab8;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar31;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x107a40a44;
  puStack_198 = &UNK_1109f6ea8;
  _objc_copyWeak(auStack_190,auStack_138);
  _objc_retain(puVar9);
  _objc_retain(&puStack_1b0);
  puVar10 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0(puVar10);
  func_0x00010c171c80(puVar10);
  _objc_release(&puStack_1b0);
  _objc_release(puVar9);
  uVar11 = 0;
  puStack_c0 = puVar10;
  func_0x000107a5dc98();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = puVar31;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_107a40ad4;
  puStack_1c0 = &UNK_1109f6ea8;
  _objc_copyWeak(auStack_1b8,auStack_138);
  _objc_retain(puVar12);
  _objc_retain(&puStack_1d8);
  puVar13 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0();
  func_0x00010c171c80(puVar13);
  _objc_release(&puStack_1d8);
  _objc_release(puVar12);
  uVar14 = 1;
  puStack_b8 = puVar13;
  func_0x000107a5dc98();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar14;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = puVar31;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_107a40b08;
  puStack_1e8 = &UNK_1109f6ea8;
  _objc_copyWeak(auStack_1e0,auStack_138);
  _objc_retain(puVar15);
  _objc_retain(&puStack_200);
  puVar16 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0();
  func_0x00010c171c80(puVar16);
  _objc_release(&puStack_200);
  _objc_release(puVar15);
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ebeb78;
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_b0 = puVar16;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_228 = puVar31;
  uStack_220 = 0xc2000000;
  uStack_218 = 0x107a40b70;
  puStack_210 = &UNK_1109f6ea8;
  _objc_copyWeak(auStack_208,auStack_138);
  _objc_retain(puVar17);
  _objc_retain(&puStack_228);
  puVar18 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0();
  func_0x00010c171c80(puVar18);
  _objc_release(&puStack_228);
  _objc_release(puVar17);
  puVar19 = PTR_PTR_1126b2330;
  puStack_a8 = puVar18;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_118 = puVar19;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_250 = puVar31;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_107a40c00;
  puStack_238 = &UNK_1109f6ea8;
  _objc_copyWeak(auStack_230,auStack_138);
  _objc_retain(puVar20);
  _objc_retain(&puStack_250);
  puVar21 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0();
  func_0x00010c171c80(puVar21);
  _objc_release(&puStack_250);
  _objc_release(puVar20);
  puVar22 = PTR_PTR_1126c9a08;
  puStack_a0 = puVar21;
  func_0x00010c0fc7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar22;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_278 = puVar31;
  uStack_270 = 0xc2000000;
  pcStack_268 = FUN_107a40d64;
  puStack_260 = &UNK_1109f6ea8;
  _objc_copyWeak(auStack_258,auStack_138);
  _objc_retain(puVar23);
  _objc_retain(&puStack_278);
  puVar24 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0();
  func_0x00010c171c80(puVar24);
  _objc_release(&puStack_278);
  _objc_release(puVar23);
  puVar25 = PTR_PTR_1126b2638;
  puStack_98 = puVar24;
  func_0x00010bf75b40();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_128 = puVar25;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_2a0 = puVar31;
  uStack_298 = 0xc2000000;
  uStack_290 = 0x107a40dd0;
  puStack_288 = &UNK_1109f6ea8;
  _objc_copyWeak(auStack_280,auStack_138);
  _objc_retain(puVar26);
  _objc_retain(&puStack_2a0);
  puVar27 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0();
  func_0x00010c171c80(puVar27);
  _objc_release(&puStack_2a0);
  _objc_release(puVar26);
  puVar28 = PTR_PTR_1126b2638;
  puStack_90 = puVar27;
  func_0x00010c2a59e0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_130 = puVar28;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_2c8 = puVar31;
  uStack_2c0 = 0xc2000000;
  uStack_2b8 = 0x107a40e0c;
  puStack_2b0 = &UNK_1109f6ea8;
  puVar35 = auStack_138;
  _objc_copyWeak(auStack_2a8);
  _objc_retain(puVar29);
  _objc_retain(&puStack_2c8);
  puVar30 = PTR_PTR_1126d6010;
  _objc_alloc_init();
  func_0x00010c197da0();
  func_0x00010c171c80(puVar30);
  _objc_release(&puStack_2c8);
  _objc_release(puVar29);
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar30;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bef9120(*(undefined8 *)(param_1 + 0x60));
  _objc_release(puVar31);
  _objc_destroyWeak(auStack_2a8);
  _objc_destroyWeak(auStack_280);
  _objc_destroyWeak(auStack_258);
  _objc_destroyWeak(auStack_230);
  _objc_destroyWeak(auStack_208);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_140);
  puVar32 = auStack_138;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_2a8);
  _objc_destroyWeak(auStack_280);
  _objc_destroyWeak(auStack_258);
  _objc_destroyWeak(auStack_230);
  _objc_destroyWeak(auStack_208);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar35);
  puVar32 = puVar32 + 0x20;
  _objc_loadWeakRetained();
  if (puVar32 != (undefined1 *)0x0) {
    puVar33 = puVar32;
    func_0x00010c0ea280();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar33;
    func_0x00010c06fc60();
    puVar32[0x56] = (char)puVar34;
    _objc_release(puVar33);
    puVar33 = puVar32;
    func_0x00010c0ea280();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar33;
    func_0x00010bfd6040();
    puVar32[0x57] = (char)puVar34;
    _objc_release(puVar33);
    puVar31 = PTR_PTR_1126c9460;
    func_0x00010c2a5c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar35;
    func_0x00010c0720c0();
    _objc_release(puVar31);
    if ((((int)puVar33 != 0) &&
        (func_0x00010c0d9840(*(undefined8 *)(puVar32 + 0x90)), puVar32[0x98] == '\x01')) &&
       (puVar32[0x28] == '\x01')) {
      func_0x00010bdfe9e0(puVar32);
    }
  }
  _objc_release(puVar32);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar35);
  return;
}



/* Entry: 107a408b8; end: 107a40ad3;  */

void FUN_107a408b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0ea280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06fc60();
    *(char *)(param_1 + 0x56) = (char)lVar2;
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0ea280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfd6040();
    *(char *)(param_1 + 0x57) = (char)lVar2;
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126c9460;
    func_0x00010c2a5c80(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((((int)uVar4 != 0) &&
        (func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90)), *(char *)(param_1 + 0x98) == '\x01'))
       && (*(char *)(param_1 + 0x28) == '\x01')) {
      func_0x00010bdfe9e0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107a40ad4; end: 107a40b07;  */

void FUN_107a40ad4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be01320(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a40b08; end: 107a40bff;  */

void FUN_107a40b08(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca6a0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a40c00; end: 107a40d63;  */

void FUN_107a40c00(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126c9a20;
    func_0x00010c06c7e0(PTR_PTR_1126c9a20);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126c9a20;
    func_0x00010c0725c0(PTR_PTR_1126c9a20);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
    func_0x00010bdfe9e0(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107a40d64; end: 107a40e47;  */

void FUN_107a40d64(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0fc800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c0fc800();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a40e48; end: 107a40e4f; -[SCSpotlightOperaPlugin operaSpinnerWasVisible] */

undefined1 FUN_107a40e48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x56);
}



/* Entry: 107a40e50; end: 107a40e57; -[SCSpotlightOperaPlugin mediaWasMidPlaybackBeforeDismissing] */

undefined1 FUN_107a40e50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x57);
}



/* Entry: 107a40e58; end: 107a41097; -[SCSpotlightOperaPlugin registeredEventsForOperaSession] */

undefined * FUN_107a40e58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110ebeb78;
  uVar2 = 0;
  puStack_d8 = puVar1;
  func_0x000107a5dc98();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 1;
  uStack_c8 = uVar2;
  func_0x000107a5dc98();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110eaaab8;
  puVar13 = PTR_PTR_1126c9a08;
  uStack_c0 = uVar3;
  func_0x00010c0fc7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2338;
  puStack_b0 = puVar13;
  func_0x00010c299d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9460;
  puStack_a8 = puVar4;
  func_0x00010c2a5c80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2330;
  puStack_a0 = puVar5;
  func_0x00010c2a5ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2330;
  puStack_98 = puVar6;
  func_0x00010c2a6a00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2638;
  puStack_90 = puVar7;
  func_0x00010c2a59e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2638;
  puStack_88 = puVar8;
  func_0x00010bf75b40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9420;
  puStack_80 = puVar9;
  func_0x00010c126700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9420;
  puStack_78 = puVar10;
  func_0x00010c282040();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d8,0xe);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar13);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 0x30) == 0x62) {
    puVar13 = *(undefined **)(puVar1 + 0x38);
    _objc_retain();
    puVar1 = puVar13;
    func_0x00010bf1f440(puVar13,param_2,&PTR____CFConstantStringClassReference_110f0b478,1,0);
    _objc_release(puVar13);
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 107a41098; end: 107a410b3; -[SCSpotlightOperaPlugin _isFullScreenEdgeToEdgeSpotlightExperience] */

undefined8 FUN_107a41098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x30) == 0x62) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain();
    uVar2 = uVar1;
    func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110f0b478,1,0);
    _objc_release(uVar1);
    return uVar2;
  }
  return 0;
}



/* Entry: 107a410b4; end: 107a41153; -[SCSpotlightOperaPlugin _didOpenAttachment:isFullscreenAttachment:] */

void FUN_107a410b4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    if (*(byte *)(param_1 + 0x28) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  lVar1 = param_1;
  func_0x00010c0e8f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    return;
  }
  func_0x00010c0e8f80();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107a41154; end: 107a411b3; -[SCSpotlightOperaPlugin _didTapUseSound] */

void FUN_107a41154(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c290a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c290a80();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107a411b4; end: 107a411bb; -[SCSpotlightOperaPlugin openAttachmentBlock] */

undefined8 FUN_107a411b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107a411bc; end: 107a411c3; -[SCSpotlightOperaPlugin setOpenAttachmentBlock:] */

void FUN_107a411bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


