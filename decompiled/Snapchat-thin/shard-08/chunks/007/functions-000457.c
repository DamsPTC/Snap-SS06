/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10648b68c; end: 10648b7af; -[SCContextRepliesSubscribeUpsellDataManager _fetchUrlFromProfileManager:] */

void FUN_10648b68c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_3;
  func_0x00010bfc93a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10648b7b0; end: 10648b847;  */

void FUN_10648b7b0(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0b46a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be0fe80(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0b46a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be11bc0(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10648b848; end: 10648ba6f; -[SCContextRepliesSubscribeUpsellDataManager _fetchImageFromUrl:] */

void FUN_10648b848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  func_0x00010c1c5440();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar4 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126b85a0;
  puVar5 = puVar2;
  func_0x00010bf220e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar5);
  _objc_release(puVar7);
  _objc_initWeak(auStack_58,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfa7900(uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10648ba70; end: 10648bb2b;  */

void FUN_10648ba70(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10648bb2c;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10648bb2c; end: 10648bc07;  */

void FUN_10648bb2c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10648bc08;
  puStack_50 = &UNK_110924610;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  func_0x00010c0c0800(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10648bc08; end: 10648bc77;  */

void FUN_10648bc08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be844e0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648bc78; end: 10648bca3;  */

void FUN_10648bc78(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0fe80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648bca4; end: 10648bde7; -[SCContextRepliesSubscribeUpsellDataManager _fetchBitmojiAvatar] */

void FUN_10648bca4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar1 = PTR_PTR_1126b4bc0;
    _objc_alloc(PTR_PTR_1126b4bc0);
    func_0x00010c05ace0();
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfaa020(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10648bde8; end: 10648be37;  */

void FUN_10648bde8(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be844e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10648be38; end: 10648be8b; -[SCContextRepliesSubscribeUpsellDataManager _defaultBitmojiAvatar] */

void FUN_10648be38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x000108ffe710(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x000108ffef38(0,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10648be8c; end: 10648be93; -[SCContextRepliesSubscribeUpsellDataManager _publishToProfileImageBehaviourSubject:] */

void FUN_10648be8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_next__112614028);
  return;
}



/* Entry: 10648be94; end: 10648be9b; -[SCContextRepliesSubscribeUpsellDataManager businessProfileId] */

undefined8 FUN_10648be94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10648be9c; end: 10648bea3; -[SCContextRepliesSubscribeUpsellDataManager userId] */

undefined8 FUN_10648be9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10648bea4; end: 10648beab; -[SCContextRepliesSubscribeUpsellDataManager profileImageSubject] */

undefined8 FUN_10648bea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10648beac; end: 10648bf83; -[SCContextRepliesSubscribeUpsellDataManager .cxx_destruct] */

void FUN_10648beac(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 10648bf84; end: 10648c06b; -[SCContextV2StoriesFetcher initWithSnapchatterDataFetcher:remoteStoriesDataProvider:] */

undefined1 *
FUN_10648bf84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1558;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10648c06c; end: 10648c1af; -[SCContextV2StoriesFetcher fetchStoryForUserIdIfAppropriate:completion:] */

void FUN_10648c06c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10648c1b0; end: 10648c29f;  */

void FUN_10648c1b0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (lVar2 = param_2, func_0x000100bf119c(), (int)lVar2 == 0)) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    func_0x00010bfaa780(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0,0);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10648c2a0; end: 10648c347;  */

void FUN_10648c2a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_2;
    func_0x00010c0ddc60();
    if (lVar1 == 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
    }
    else {
      lVar1 = param_2;
      func_0x00010c26d760(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000107d227d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,lVar2);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10648c348; end: 10648c52b; -[SCContextV2StoriesFetcher fetchStoriesForUserId:completion:] */

void FUN_10648c348(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    dVar3 = param_1;
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    if (param_1 - dVar3 <= 300.0) {
      if (param_5 != 0) {
        uVar2 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c0e00e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_5 + 0x10))(param_5,uVar2);
        _objc_release(uVar2);
      }
      goto LAB_10648c4dc;
    }
  }
  _objc_initWeak(auStack_58,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bfaa9a0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
LAB_10648c4dc:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10648c52c; end: 10648c5b3;  */

void FUN_10648c52c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
    }
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed4940();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10648c5b4; end: 10648c6bb; -[SCContextV2StoriesFetcher _updateCachedSummaryInfoWithSummaryInfo:completion:] */

void FUN_10648c5b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,param_3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648c6bc; end: 10648c703; -[SCContextV2StoriesFetcher .cxx_destruct] */

void FUN_10648c6bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10648c704; end: 10648d283; -[SCContextV2Presenter initWithSessionParams:logger:baseViewController:messagingScopeExposer:chatLogger:actionHandlingProvider:operaNavigationStyle:operaEventAnnouncer:operaPage:operaPageObservable:birthdayProvider:bitmojiAvatarProvider:imageDownloader:storiesFetcher:contextStoryPlaybackScopeExposer:cardsDataFetcher:composerRuntime:alertPresenterFactory:musicServices:musicFavoritesComposerServices:snapchatterServices:userSession:circumstanceEngine:placesContextCardContextCreator:boostCoordinator:contextExperimentService:bloopsContextServices:contextDrivenSwipePresentationEnabled:ctpItemViewService:pageLauncher:valdiRuntimeProvider:snapProServices:repliesSubscribeUpsellScopeExposer:repliesSubscribeUpsellScopeServices:bitmojiSelfieFetcher:imageFetchingService:gestureTracker:appStartExperimentReader:] */

undefined8 *
FUN_10648c704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,char param_30,undefined4 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  puStack_88 = PTR_PTR_1126f1560;
  puVar1 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_28);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_28;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    uVar2 = param_3;
    FUN_1065ee048();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf51e00();
    uVar6 = puVar1[4];
    puVar1[4] = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_3;
    FUN_1065ed754();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar7);
    uVar2 = puVar1[7];
    puVar1[7] = 0;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfa29a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10648d284;
    puStack_a0 = &UNK_1109246a0;
    _objc_retain(puVar1);
    puStack_98 = puVar1;
    func_0x00010c0bed40(uVar2);
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    puVar1[0x10] = param_9;
    _objc_retain(param_10);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_27;
    _objc_release(uVar2);
    _objc_initWeak(auStack_c0,puVar1);
    puVar4 = PTR_PTR_1126ae720;
    puStack_f8 = puVar3;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10648d2f4;
    puStack_e0 = &UNK_1109246d0;
    _objc_copyWeak(auStack_c8,auStack_c0);
    _objc_retain(param_4);
    uStack_d8 = param_4;
    _objc_retain(param_18);
    uStack_d0 = param_18;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x0001070be71c();
    if ((int)uVar2 == 0) {
      uVar2 = param_3;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x000108437e88();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar1[0x25];
      puVar1[0x25] = uVar6;
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    else {
      uVar2 = puVar1[0x25];
      puVar1[0x25] = 0;
    }
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[2]);
    puVar5 = auStack_80;
    _objc_loadWeakRetained(puVar5);
    _objc_storeWeak(puVar1 + 0x3c,puVar5);
    _objc_release(puVar5);
    uVar2 = param_3;
    FUN_1065ed63c();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar7);
    _objc_retain(param_40);
    uVar2 = puVar1[9];
    puVar1[9] = param_40;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[9]);
    if (param_30 == '\0') {
      uVar2 = param_3;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010c264740();
      puVar1[0x14] = uVar7;
      _objc_release(uVar2);
      if (puVar1[0x14] != 1) {
        puVar3 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
        _objc_alloc();
        func_0x00010c050900();
        uVar2 = puVar1[10];
        puVar1[10] = puVar3;
        _objc_release(uVar2);
        func_0x00010c18e180(puVar1[10]);
        func_0x00010c18b5e0(puVar1[10]);
        func_0x00010c195460(puVar1[10]);
      }
      puVar3 = PTR_PTR_1126cadc8;
      _objc_alloc();
      func_0x00010c01a9c0();
      uVar2 = puVar1[0x13];
      puVar1[0x13] = puVar3;
      _objc_release(uVar2);
    }
    else {
      puVar1[0x14] = (ulong)(param_9 == 1);
    }
    _objc_retain(param_15);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_29;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x10648d354;
    puStack_108 = &UNK_110924700;
    _objc_copyWeak(auStack_100,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_130,auStack_c0);
    _objc_copyWeak(auStack_128,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_33;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_100);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puStack_98);
  }
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
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
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10648d284; end: 10648d2f3;  */

void FUN_10648d284(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  lVar3 = param_4;
  func_0x00010c08fa60();
  lVar1 = param_2;
  if (lVar3 != 0) {
    lVar1 = param_4;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x38) = lVar1;
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10648d2f4; end: 10648d3a3;  */

void FUN_10648d2f4(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b6210;
    _objc_alloc(PTR_PTR_1126b6210);
    func_0x00010c027200();
    func_0x00010c18b5e0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10648d3a4; end: 10648d467;  */

void FUN_10648d3a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf99b40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010beeed60(lVar1,param_2,lVar3,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10648d468; end: 10648d483;  */

void FUN_10648d468(void)

{
  _objc_opt_new(PTR_PTR_1126b60e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10648d484; end: 10648d9a3; -[SCContextV2Presenter actionParamsForOperaPage:eventAnnouncer:] */

void FUN_10648d484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x28;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126b5ba8;
  _objc_alloc();
  func_0x00010c0044c0();
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972c0(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar5);
  lVar6 = *(long *)(param_1 + 8);
  func_0x00010bf9b320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf9b320(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(uVar7);
  }
  puVar5 = PTR_PTR_1126cadd0;
  _objc_alloc(PTR_PTR_1126cadd0);
  puVar8 = puVar4;
  func_0x00010c241400(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c25b200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c070a00();
  if (((ulong)puVar11 & 1) == 0) {
    puStack_140 = puVar4;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puStack_140;
    func_0x00010c0748c0();
    if (((ulong)puVar12 & 1) != 0) {
      bVar1 = false;
      bVar2 = false;
      goto LAB_10648d644;
    }
    unaff_x28 = *(long *)(param_1 + 8);
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x28 != 0) {
      uStack_148 = *(undefined8 *)(param_1 + 8);
      func_0x00010c25a6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b720();
      bVar1 = true;
      bVar2 = true;
      goto LAB_10648d644;
    }
    unaff_x28 = 0;
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  bVar1 = false;
LAB_10648d644:
  func_0x00010c27ff60(*(undefined8 *)(param_1 + 8));
  func_0x00010c047e00(puVar5);
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar5);
  if (bVar1) {
    _objc_release(uStack_148);
  }
  if (bVar2) {
    _objc_release(unaff_x28);
  }
  if (((ulong)puVar11 & 1) == 0) {
    _objc_release(puStack_140);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  lVar6 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    puStack_140 = (undefined *)0x0;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 8);
    func_0x0001070be71c();
    uVar7 = 0;
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x3032000000;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    pcStack_80 = FUN_10648d9a4;
    uStack_78 = 0x10648d9b4;
    uStack_70 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_10648d9a4;
    uStack_a8 = 0x10648d9b4;
    uStack_a0 = 0;
    if ((uVar13 & 1) == 0) {
      uVar14 = *(undefined8 *)(param_1 + 8);
      func_0x00010c290fa0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar14;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c12a0();
      _objc_release(uVar7);
      _objc_release(uVar14);
      uVar14 = *(undefined8 *)(param_1 + 8);
      func_0x00010c290fa0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar14;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
    }
    puStack_140 = PTR_PTR_1126c2f78;
    _objc_alloc();
    func_0x00010c004fe0();
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uStack_70);
  }
  func_0x00010c08bda0();
  func_0x0001064bcdf4();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010843715c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b5bb0;
  _objc_alloc(PTR_PTR_1126b5bb0);
  func_0x00010c29d360();
  FUN_1064bce14();
  func_0x00010c24b580();
  func_0x00010c24b7a0();
  uVar14 = *(undefined8 *)(param_1 + 0x1c8);
  func_0x00010bf0be80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0275e0(puVar5);
  _objc_release(uVar14);
  _objc_release(uVar7);
  _objc_release(puStack_140);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10648d9a4; end: 10648d9bb;  */

void FUN_10648d9a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10648d9bc; end: 10648da2b;  */

void FUN_10648d9bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10648da2c; end: 10648da53; -[SCContextV2Presenter contextV2Logger] */

void FUN_10648da2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10648da54; end: 10648da5b; -[SCContextV2Presenter snapViewMetrics] */

void FUN_10648da54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c243c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_snapViewMetrics_11266e948);
  return;
}



/* Entry: 10648da5c; end: 10648da83; -[SCContextV2Presenter contextSessionParams] */

void FUN_10648da5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10648da84; end: 10648db8b; -[SCContextV2Presenter dismissSwipeUpContentIfNecessaryAnimated:withCompletion:] */

void FUN_10648da84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf16340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bf16340(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10648db8c;
    puStack_60 = &UNK_1108523f8;
    uStack_48 = (undefined1)param_3;
    lStack_58 = param_1;
    _objc_retain(param_4);
    lStack_50 = param_4;
    func_0x00010bf84b00(lVar1,param_2,param_3,&puStack_78);
    _objc_release(lVar1);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10648db8c; end: 10648db9b;  */

void FUN_10648db8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dismissSwipeUpContentIfNecessary_1125beb40,
             *(undefined1 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10648db9c; end: 10648dc33; -[SCContextV2Presenter viewControllerToPresentViaSwipeUpGesture:source:] */

void FUN_10648db9c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = param_4;
  _objc_retain(param_3);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x48);
  _objc_release(param_3);
  if (param_3 == lVar2) {
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182de0();
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10648dc34; end: 10648dc37; -[SCContextV2Presenter baseViewControllerForSwipeUpPresentation:] */

void FUN_10648dc34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf16350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_baseViewController_1125a3278);
  return;
}



/* Entry: 10648dc38; end: 10648dca3; -[SCContextV2Presenter swipeUpGestureDidPresent:source:] */

void FUN_10648dc38(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c265180();
  if (((uVar1 & 1) == 0) && (param_3 == *(long *)(param_1 + 0x48))) {
    func_0x00010bdfed80(param_1,param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648dca4; end: 10648dd0f; -[SCContextV2Presenter swipeUpGestureDidDismiss:source:] */

void FUN_10648dca4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c265180();
  if (((int)lVar1 != 0) && (param_3 == *(long *)(param_1 + 0x48))) {
    func_0x00010bdfd480(param_1,param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648dd10; end: 10648dd4b; -[SCContextV2Presenter willSwipeToContextCards] */

undefined8 FUN_10648dd10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c265220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a6f40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10648dd4c; end: 10648dd53; -[SCContextV2Presenter gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10648dd4c(void)

{
  return 1;
}



/* Entry: 10648dd54; end: 10648dd5b; -[SCContextV2Presenter gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_10648dd54(void)

{
  return 0;
}



/* Entry: 10648dd5c; end: 10648dd5f; -[SCContextV2Presenter gestureRecognizer:shouldReceiveTouch:] */

void FUN_10648dd5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0806b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isSwipeUpAllowed_1125fdbb8);
  return;
}



/* Entry: 10648dd60; end: 10648dda3; -[SCContextV2Presenter isSwipeUpAllowed] */

undefined8 FUN_10648dd60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4eec0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10648dda4; end: 10648ddcb; -[SCContextV2Presenter contextV3ActionHandlerProvider] */

void FUN_10648dda4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10648ddcc; end: 10648dddf; -[SCContextV2Presenter setCardsPresented:source:animated:completion:] */

void FUN_10648ddcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_setPresented_animated_source_com_112655f00,
             param_3,param_5,param_4);
  return;
}



/* Entry: 10648dde0; end: 10648de17; -[SCContextV2Presenter cardsPresented] */

bool FUN_10648dde0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c10f940(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 10648de18; end: 10648df37; -[SCContextV2Presenter attachSwipeUpGestureToView:] */

void FUN_10648de18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != param_3) {
      func_0x00010bef9040(param_3);
    }
  }
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar1 = *(long *)(param_1 + 0xa0), _objc_release(), lVar1 == 1)) {
    func_0x00010bf0c740(*(undefined8 *)(param_1 + 0x98));
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c1e1060(*(undefined8 *)(param_1 + 0x98));
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10648df38; end: 10648df67;  */

void FUN_10648df38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be743e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648df68; end: 10648dfdb; -[SCContextV2Presenter detatchSwipeUpGestureFromView:] */

void FUN_10648df68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010c12c9c0(param_3);
  }
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar1 = *(long *)(param_1 + 0xa0), _objc_release(), lVar1 == 1)) {
    func_0x00010bf6f320(*(undefined8 *)(param_1 + 0x98),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648dfdc; end: 10648e05f; -[SCContextV2Presenter attachActionBarPanGestureToView:] */

void FUN_10648dfdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010beedf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0xa0) == 1)) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010beedf80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(param_3,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648e060; end: 10648e0e3; -[SCContextV2Presenter detachActionBarPanGestureToView:] */

void FUN_10648e060(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010beedf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0xa0) == 1)) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010beedf80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0(param_3,param_2,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648e0e4; end: 10648e11b; -[SCContextV2Presenter setSwipeUpHandler:] */

void FUN_10648e0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bedd250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlainSwipeUpGestureRecogn_112594e38);
  return;
}



/* Entry: 10648e11c; end: 10648e18b; -[SCContextV2Presenter _updatePlainSwipeUpGestureRecognizer] */

void FUN_10648e11c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x50),param_2,*(long *)(param_1 + 0x1d0) != 0);
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar1 = *(long *)(param_1 + 0xa0), _objc_release(), lVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d8e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x98),PTR_s_setPanGestureEnabled__112653dc8,
               *(long *)(param_1 + 0x1d0) != 0);
    return;
  }
  return;
}



/* Entry: 10648e18c; end: 10648e283; -[SCContextV2Presenter _plainSwipeUpRecognized:] */

void FUN_10648e18c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x1e0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b7e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = param_1;
  func_0x00010c265220();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x1e0;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfd2b60();
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  if ((int)lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be05570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__doHapticFeedbackIfEnabled_11255eef8);
    return;
  }
  return;
}



/* Entry: 10648e284; end: 10648e2f3; -[SCContextV2Presenter setPlaceholderCards:] */

void FUN_10648e284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dca20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10648e2f4; end: 10648e313; -[SCContextV2Presenter canLaunchChat] */

bool FUN_10648e2f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c08fa60(lVar1);
  return lVar1 != 0;
}



/* Entry: 10648e314; end: 10648e477; -[SCContextV2Presenter _didPresentCardsWithSource:] */

void FUN_10648e314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010bf4eb20(param_3);
  func_0x00010c0dd5c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b080();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0cbc20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010be518a0(param_1);
  }
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10648e478; end: 10648e4cf;  */

void FUN_10648e478(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c182de0(param_2);
    func_0x00010bf78620(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10648e4d0; end: 10648e52f; -[SCContextV2Presenter _didDismissCardsWithSource:] */

void FUN_10648e4d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be65140();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0cbc20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10648e530; end: 10648e537;  */

void FUN_10648e530(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf75b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_didEndPresentingInputBarView_1125bb070);
  return;
}



/* Entry: 10648e538; end: 10648e53f; -[SCContextV2Presenter createSwipeUpPresentableReplyCameraVC] */

undefined8 FUN_10648e538(void)

{
  return 0;
}



/* Entry: 10648e540; end: 10648e543; -[SCContextV2Presenter chatWillPresentFullscreen] */

void FUN_10648e540(void)

{
  return;
}



/* Entry: 10648e544; end: 10648e5a7; -[SCContextV2Presenter notifySwipeUpMenuPresentedWithType:source:] */

void FUN_10648e544(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x6a) & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x1c0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4f5a0();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0x6a) = 1;
  param_1 = param_1 + 0x1c0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4e5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648e5a8; end: 10648e683; -[SCContextV2Presenter _notifySwipeUpMenuDismissedWithSource:] */

void FUN_10648e5a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    _objc_retain(param_3);
    lVar1 = param_1 + 0x1c0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4f560();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + 0x6a) = 0;
    lVar1 = param_1 + 0x1c0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4e500();
    _objc_release(lVar1);
    lVar2 = param_3;
    func_0x00010beef1e0();
    _objc_release(param_3);
    lVar1 = 0xc;
    if (lVar2 != 5) {
      lVar1 = -(ulong)(lVar2 != 0);
    }
    func_0x00010c0a3ea0(*(undefined8 *)(param_1 + 0x10),param_2,lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    puVar3 = PTR_PTR_1126b2ce8;
    func_0x00010beeeaa0(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7a0(uVar4,param_2,puVar3,*(undefined8 *)(param_1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10648e684; end: 10648e68b; -[SCContextV2Presenter swipeUpContentPresented] */

undefined1 FUN_10648e684(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6a);
}



/* Entry: 10648e68c; end: 10648e693; -[SCContextV2Presenter contextActionsHandlerDidPresentModalContent:source:] */

void FUN_10648e68c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifySwipeUpMenuPresentedWithTy_112614f88,3)
  ;
  return;
}



/* Entry: 10648e694; end: 10648e69b; -[SCContextV2Presenter contextActionsHandlerDidDismissModalContent:source:] */

void FUN_10648e694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__notifySwipeUpMenuDismissedWithS_112576df0,param_4);
  return;
}



/* Entry: 10648e69c; end: 10648e6cf; -[SCContextV2Presenter contextActionsHandlerDidBeginPresentingMedia:] */

void FUN_10648e69c(long param_1)

{
  param_1 = param_1 + 0x1c0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4e340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648e6d0; end: 10648e703; -[SCContextV2Presenter contextActionsHandlerDidFinishPresentingMedia:] */

void FUN_10648e6d0(long param_1)

{
  param_1 = param_1 + 0x1c0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf4e800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10648e704; end: 10648e73f; -[SCContextV2Presenter _doHapticFeedbackIfEnabled] */

void FUN_10648e704(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10648e740; end: 10648e85f; -[SCContextV2Presenter _topMostPresentedViewController] */

void FUN_10648e740(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf16340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar1 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = lVar2;
  }
  lVar1 = param_1;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  while (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    param_1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10648e860; end: 10648e89b; -[SCContextV2Presenter contextLayerWillFullyAppear] */

void FUN_10648e860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001084365e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aff60(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10648e89c; end: 10648eb33; -[SCContextV2Presenter createSwipeUpViewController] */

void FUN_10648e89c(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10648eb34;
  puStack_90 = &UNK_1109247f0;
  _objc_copyWeak(auStack_88,auStack_80);
  ppuVar1 = &puStack_a8;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126cadd8;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010bfedae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045440(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1c8b80(puVar2);
  func_0x00010c18b5e0(puVar2);
  _objc_initWeak(auStack_b0,puVar2);
  lVar6 = param_1;
  func_0x00010c0cbd80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_b0);
  func_0x00010c297260(lVar6);
  lVar7 = param_1;
  func_0x00010c0fd7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    func_0x00010c0fd7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c239220(puVar2);
    _objc_release(param_1);
  }
  _objc_destroyWeak(auStack_b8);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10648eb34; end: 10648ebb7;  */

void FUN_10648eb34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bf4eb20(*(undefined8 *)(param_1 + 0x1d8));
    lVar1 = param_1;
    func_0x00010bf550a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10648ebb8; end: 10648ec53;  */

void FUN_10648ebb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c065780(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1eb320();
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010c0657a0(param_3);
  _objc_release(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c1eb340(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10648ec54; end: 10648eedb; -[SCContextV2Presenter createCardsViewWithBaseViewController:menuType:expansionStateDelegate:] */

void FUN_10648ec54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bf4f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf54560(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf4f520(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b6220;
  _objc_alloc(PTR_PTR_1126b6220);
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045480(puVar5);
  _objc_release(uVar3);
  func_0x00010c18b5e0(puVar5);
  func_0x00010c198880(puVar5);
  _objc_initWeak(auStack_68,param_1);
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b6228;
  _objc_alloc(PTR_PTR_1126b6228);
  func_0x00010bff0bc0();
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10648eedc; end: 10648ef2b;  */

void FUN_10648eedc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdf3940(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10648ef2c; end: 10648ef7b; -[SCContextV2Presenter cardsDataProvider:didErrorWithRetryBlock:] */

void FUN_10648ef2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  _objc_retain(param_4);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2374c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10648ef7c; end: 10648efff; -[SCContextV2Presenter cardsDataProvider:didGeneratePlaceholderCards:] */

void FUN_10648ef7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x110);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf32280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010c239220(lVar2,param_2,param_4,*(undefined8 *)(param_1 + 0x1d8));
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10648f000; end: 10648f04f; -[SCContextV2Presenter cardsDataProvider:didReceiveContent:] */

void FUN_10648f000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  _objc_retain(param_4);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2367c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10648f050; end: 10648f143; -[SCContextV2Presenter messagingForSwipeUpViewController:] */

void FUN_10648f050(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x58) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    FUN_1065ed714();
    if (iVar1 != 0) {
      puVar2 = PTR_PTR_1126ae560;
      _objc_opt_new(PTR_PTR_1126ae560);
      puVar3 = PTR_PTR_1126cade0;
      _objc_alloc();
      func_0x00010c00ae00();
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      *(undefined **)(param_1 + 0x58) = puVar3;
      _objc_release(uVar5);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa8),param_2,*(undefined8 *)(param_1 + 0x58));
      _objc_release(puVar2);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0cbc20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10648f144; end: 10648f14f; -[SCContextV2Presenter _swipeUpMessagingController] */

void FUN_10648f144(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec93d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__swipeUpMessagingControllerWithC_11258fe98,0,0);
  return;
}



/* Entry: 10648f150; end: 10648f347; -[SCContextV2Presenter _swipeUpMessagingControllerWithContextActionParams:parentViewController:] */

void FUN_10648f150(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = param_3;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c07f4a0();
  if ((int)lVar9 == 0) {
    _objc_release(lVar2);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x60);
    _objc_release(lVar2);
    _objc_release(lVar7);
    if (lVar9 == 0) goto LAB_10648f200;
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0xa8),param_2,*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar7 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  _objc_release(lVar7);
LAB_10648f200:
  if ((*(long *)(param_1 + 0x60) == 0) &&
     (lVar7 = param_1, func_0x00010be43380(param_1,param_2,param_3), (int)lVar7 != 0)) {
    lVar7 = param_3;
    func_0x00010bf4eae0();
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    puVar4 = PTR_PTR_1126cade0;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    lVar2 = param_4;
    if (param_4 == 0) {
      lVar2 = param_1;
      func_0x00010bf16340(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar11 = *(undefined8 *)(param_1 + 0x98);
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x120);
    func_0x000108f4239c();
    uVar1 = uVar1 ^ 1;
    if (lVar7 == 2) {
      uVar1 = 1;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x128);
    uVar10 = *(undefined8 *)(param_1 + 0xa0);
    lVar7 = param_1;
    func_0x00010be8f0e0(param_1,param_2,param_3);
    func_0x00010c00ae00(puVar4,param_2,param_1,uVar6,uVar5,puVar3,lVar2,0,uVar11,uVar1,uVar8,param_3
                        ,uVar10,lVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar4;
    _objc_release(uVar6);
    if (param_4 == 0) {
      _objc_release(lVar2);
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa8),param_2,*(undefined8 *)(param_1 + 0x60));
    _objc_release(puVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0cbc20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10648f348; end: 10648f49b; -[SCContextV2Presenter presentChatWithSource:inputItemDeeplink:contextActionParams:parentViewController:isRepliesSubscribeUpsellEnabled:completion:] */

void FUN_10648f348(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  *(long *)(param_1 + 0x1d8) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010be43380(param_1,param_2,param_5);
  if ((int)lVar2 != 0) {
    uVar3 = param_5;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c070a00();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((((int)param_7 == 0) || ((uVar5 & 1) != 0)) ||
       (lVar2 = param_3, func_0x00010bf4eae0(), lVar2 == 0)) {
      func_0x00010be7aa60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      func_0x00010bde56e0(param_1,param_2,param_5,param_3,param_4,param_6,param_8);
    }
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648f49c; end: 10648f66b; -[SCContextV2Presenter _presentChatWithSource:inputItemDeeplink:contextActionParams:parentViewController:isRepliesSubscribeUpsellEnabled:completion:] */

void FUN_10648f49c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010be43380();
  if ((int)lVar2 != 0) {
    _objc_initWeak(auStack_68,param_1);
    lVar2 = param_1;
    func_0x00010bec93c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_8);
    _objc_retain(param_3);
    func_0x00010c297260(lVar2);
    _objc_release(lVar2);
    if (param_7 != 0) {
      func_0x00010be57280(param_1);
    }
    _objc_release(param_3);
    _objc_release(param_8);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10648f66c; end: 10648f733;  */

void FUN_10648f66c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c182de0(param_2);
    func_0x00010c10c660(param_2);
    func_0x00010c0dd5c0(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf4eae0();
    if (lVar2 == 2) {
      uVar4 = *(undefined8 *)(lVar1 + 0x88);
      puVar3 = PTR_PTR_1126b2ce8;
      func_0x00010c2a68c0(PTR_PTR_1126b2ce8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb780(uVar4);
      _objc_release(puVar3);
    }
    func_0x00010be518a0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10648f734; end: 10648f94f; -[SCContextV2Presenter _logChatFieldPresented] */

void FUN_10648f734(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x0001070be71c();
  if ((uVar1 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x0001070be888(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247d40(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c0ae900(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10648d9a4;
  uStack_50 = 0x10648d9b4;
  uStack_48 = 0;
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c290fa0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 8);
  func_0x000108436154(lVar4,*(undefined8 *)(param_1 + 0x120));
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x00010c290fa0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar3 = lVar5;
  func_0x00010bfe5ec0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c12a0();
  _objc_release(lVar3);
  lVar3 = puStack_68[5];
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c247d40(*(undefined8 *)(param_1 + 0x10));
      func_0x00010c0a2e60(uVar6);
      goto LAB_10648f8f0;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c247d40(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0a2e80(uVar6);
LAB_10648f8f0:
  _objc_release(lVar4);
  _objc_release(lVar5);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  return;
}



/* Entry: 10648f950; end: 10648f987;  */

void FUN_10648f950(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10648f988; end: 10648fbd3; -[SCContextV2Presenter presentCardsWithSource:completion:] */

void FUN_10648f988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar11 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar11);
  lVar1 = param_1;
  func_0x00010bf4f500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa280();
  _objc_release(lVar1);
  func_0x00010c1798a0(param_1);
  _objc_release(param_4);
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  puVar2 = PTR_PTR_1126b2ce8;
  func_0x00010beeeae0(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5cb8;
  func_0x00010bfc1d00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010beef1e0(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b5cb8;
  func_0x00010c068440();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c068440(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b5cb8;
  func_0x00010bf4eb20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf4eb20(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar11);
  _objc_release(param_3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010becd5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10648fbd4; end: 10648fbd7; -[SCContextV2Presenter topMostPresentedViewControllerForMessagingScope:] */

void FUN_10648fbd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becd5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__topMostPresentedViewController_112590f18);
  return;
}



/* Entry: 10648fbd8; end: 10648fcbb; -[SCContextV2Presenter messagingScopeWillTransitionToFullScreen:] */

void FUN_10648fbd8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 == *(long *)(param_1 + 0x58)) {
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179860(0);
    _objc_release(uVar1);
  }
  lVar2 = param_1;
  func_0x00010bf4f500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa280();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf4f500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2a00();
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010beef1e0(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bf4eb20(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bf4eae0(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x00010bf4eb00(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c0a3ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,PTR_s_logContextMenuPresentWithActionT_1126069c0,uVar1,uVar3,uVar4,uVar5);
  return;
}



/* Entry: 10648fcbc; end: 10648fd87; -[SCContextV2Presenter messagingScopeDidLeaveFullScreen:] */

void FUN_10648fcbc(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + 0x58)) {
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179860(0x3ff0000000000000);
    _objc_release(uVar1);
  }
  uVar2 = param_1;
  func_0x00010bf32360();
  if ((uVar2 & 1) == 0) {
    func_0x00010be65140(param_1,param_2,0);
    lVar3 = *(long *)(param_1 + 0x1d8);
    func_0x00010beef1e0();
    if (lVar3 == 8) {
      lVar3 = *(long *)(param_1 + 0x1d8);
      func_0x00010bf4eae0();
      if (lVar3 != 2) goto LAB_10648fd74;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    puVar4 = PTR_PTR_1126b2ce8;
    func_0x00010bf750a0(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780(uVar1,param_2,puVar4);
    _objc_release(puVar4);
  }
LAB_10648fd74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10648fd88; end: 10648fd8b; -[SCContextV2Presenter messagingScope:didChangeFullscreenViewController:] */

void FUN_10648fd88(void)

{
  return;
}



/* Entry: 10648fd8c; end: 10648fe0b; -[SCContextV2Presenter messagingScopeDidWillBeginPresentingSnapAccessoryView:] */

void FUN_10648fd8c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4e580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10648fe0c; end: 10648fea3; -[SCContextV2Presenter messagingScopeDidFinishPresentingSnapAccessoryView:] */

void FUN_10648fe0c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4e520();
    _objc_release(param_1);
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10648fea4; end: 10648feab; -[SCContextV2Presenter contextActionsHandlerCardsShouldBeCollapsed:] */

undefined8 FUN_10648fea4(void)

{
  return 0;
}



/* Entry: 10648feac; end: 10648feaf; -[SCContextV2Presenter contextActionsHandler:wantsToRegisterExpansionStateListener:] */

void FUN_10648feac(void)

{
  return;
}



/* Entry: 10648feb0; end: 10648feb3; -[SCContextV2Presenter contextActionsHandlerWantsToExpandFromCollapsedState:] */

void FUN_10648feb0(void)

{
  return;
}


