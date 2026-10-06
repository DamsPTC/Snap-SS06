/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1068fc080; end: 1068fc083; -[SCDiscoverFeedFriendStoriesDataCoordinator didUpdatePostableStories] */

void FUN_1068fc080(void)

{
  return;
}



/* Entry: 1068fc084; end: 1068fc0d7; -[SCDiscoverFeedFriendStoriesDataCoordinator didUpdateFriendStorySettingWithUpdateRequest:success:] */

void FUN_1068fc084(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126cee78;
    func_0x00010bfba640(PTR_PTR_1126cee78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14840(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1068fc0d8; end: 1068fc0db; -[SCDiscoverFeedFriendStoriesDataCoordinator didStartSnapchattersUpdateDataRequest:] */

void FUN_1068fc0d8(void)

{
  return;
}



/* Entry: 1068fc0dc; end: 1068fc12f; -[SCDiscoverFeedFriendStoriesDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1068fc0dc(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126cee78;
    func_0x00010bfba640(PTR_PTR_1126cee78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14840(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1068fc130; end: 1068fc183; -[SCDiscoverFeedFriendStoriesDataCoordinator didEndSnapchattersFetchDataRequest:withSuccess:error:] */

void FUN_1068fc130(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar1 = PTR_PTR_1126cee78;
    func_0x00010bfba640(PTR_PTR_1126cee78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14840(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1068fc184; end: 1068fc217; -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchRankedFriendStoriesWithCompletion:] */

void FUN_1068fc184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126cee78;
    func_0x00010c09b280(PTR_PTR_1126cee78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14840(param_1,param_2,puVar1,param_3);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x30);
    func_0x00010bf51e00(puVar1);
    func_0x00010be980e0(param_1,param_2,puVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068fc218; end: 1068fc337; -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchFriendStoriesWithIds:completion:] */

void FUN_1068fc218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1068fc338;
  puStack_58 = &UNK_110858190;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126cee78;
    func_0x00010c09b280(PTR_PTR_1126cee78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14840(param_1);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x30);
    func_0x00010bf51e00(puVar3);
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fc338; end: 1068fc403;  */

void FUN_1068fc338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_2);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1068fc404;
  puStack_40 = &UNK_1109494d0;
  puStack_38 = puVar1;
  _objc_retain();
  uVar2 = param_2;
  func_0x0001006372a4(param_2,&puStack_58);
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2);
  _objc_release(uVar2);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068fc404; end: 1068fc44f;  */

undefined8 FUN_1068fc404(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1068fc450; end: 1068fc62f; -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchStoriesWithDataRequest:rankedStoriesCompletion:] */

void FUN_1068fc450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1068fc630;
  puStack_90 = &UNK_11084e370;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  ppuVar2 = &puStack_a8;
  uStack_88 = param_4;
  _objc_retainBlock();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1068fc6a4;
  puStack_c8 = &UNK_11085b960;
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(ppuVar2);
  ppuStack_b8 = ppuVar2;
  _objc_retain(param_3);
  ppuVar3 = &puStack_e0;
  uStack_c0 = param_3;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar3);
  func_0x00010c11f8c0(uVar4);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  _objc_release(uStack_c0);
  _objc_release(ppuStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fc630; end: 1068fc737;  */

void FUN_1068fc630(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    func_0x00010be980e0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fc738; end: 1068fc743;  */

void FUN_1068fc738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068fc740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1068fc744; end: 1068fc843; -[SCDiscoverFeedFriendStoriesDataCoordinator _updateEmptyStateWithDataRequest:rankedStoriesCompletion:] */

void FUN_1068fc744(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fc844; end: 1068fc8a3;  */

void FUN_1068fc844(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    func_0x00010bee4780(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068fc8a4; end: 1068fc9f7; -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchSummaryInfosWithRankedStoryIds:dataRequest:rankedStoriesCompletion:] */

void FUN_1068fc8a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c25b4c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fc9f8; end: 1068fca6f;  */

void FUN_1068fc9f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    func_0x00010be14420(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fca70; end: 1068fd27f; -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchSnapchattersWithRankedStoryIds:summaryInfoMap:dataRequest:rankedStoriesCompletion:] */

void FUN_1068fca70(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lStack_460;
  undefined *puStack_450;
  undefined8 uStack_448;
  code *pcStack_440;
  undefined *puStack_438;
  long lStack_430;
  long lStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined1 auStack_390 [8];
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined1 auStack_328 [8];
  undefined *puStack_320;
  undefined8 uStack_318;
  code *pcStack_310;
  undefined *puStack_308;
  long lStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  code *pcStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c2320;
  func_0x00010c12bc00(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf1f320();
  _objc_release(puVar5);
  _objc_release(uVar4);
  if ((int)uVar11 == 0) {
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    _objc_retain(param_3);
    lVar8 = param_3;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar9 = *plStack_1f0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_1f0 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          lVar6 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c27dd80();
          if (lVar7 == 5) {
LAB_1068fcce0:
            func_0x00010befa120(puVar3);
          }
          else {
            if (lVar7 == 2) {
LAB_1068fccd4:
              func_0x00010befa120(puVar2);
              goto LAB_1068fcce0;
            }
            if (lVar7 == 1) {
              func_0x00010befa120(puVar1);
              goto LAB_1068fccd4;
            }
          }
          _objc_release(lVar6);
          lVar10 = lVar10 + 1;
        } while (lVar8 != lVar10);
        lVar8 = param_3;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
  }
  else {
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    _objc_retain(param_3);
    lVar8 = param_3;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar9 = *plStack_1b0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_1b0 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          uVar11 = *(undefined8 *)(lStack_1b8 + lVar10 * 8);
          lVar6 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c27dd80();
          puVar5 = puVar1;
          if (((lVar7 == 1) || (puVar5 = puVar2, lVar7 == 2)) || (puVar5 = puVar3, lVar7 == 5)) {
            func_0x00010befa120(puVar5,puVar5,uVar11);
          }
          _objc_release(lVar6);
          lVar10 = lVar10 + 1;
        } while (lVar8 != lVar10);
        lVar8 = param_3;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
  }
  _objc_release(param_3);
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    lStack_460 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar8);
    lStack_460 = lVar8;
  }
  _objc_release();
  _dispatch_group_create();
  _dispatch_group_enter();
  uStack_230 = 0;
  uStack_220 = 0x3032000000;
  pcStack_218 = FUN_1068fd280;
  uStack_210 = 0x1068fd290;
  uStack_208 = 0;
  uVar11 = *(undefined8 *)(param_1 + 8);
  puStack_228 = &uStack_230;
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_1068fd298;
  puStack_248 = &UNK_110860220;
  puStack_238 = &uStack_230;
  _objc_retain(lVar8);
  lStack_240 = lVar8;
  func_0x00010c244e80(uVar11);
  _objc_release(uVar11);
  uStack_290 = 0;
  uStack_280 = 0x3032000000;
  pcStack_278 = FUN_1068fd280;
  uStack_270 = 0x1068fd290;
  uStack_268 = 0;
  puStack_288 = &uStack_290;
  _dispatch_group_enter(lVar8);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_2c0 = puVar5;
  uStack_2b8 = 0xc2000000;
  pcStack_2b0 = FUN_1068fd320;
  puStack_2a8 = &UNK_110853260;
  puStack_298 = &uStack_290;
  _objc_retain(lVar8);
  lStack_2a0 = lVar8;
  func_0x00010bf62520(uVar11);
  _objc_release(uVar11);
  uStack_2f0 = 0;
  uStack_2e0 = 0x3032000000;
  pcStack_2d8 = FUN_1068fd280;
  uStack_2d0 = 0x1068fd290;
  uStack_2c8 = 0;
  puStack_2e8 = &uStack_2f0;
  _dispatch_group_enter(lVar8);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_320 = puVar5;
  uStack_318 = 0xc2000000;
  pcStack_310 = FUN_1068fd37c;
  puStack_308 = &UNK_110853260;
  puStack_2f8 = &uStack_2f0;
  _objc_retain(lVar8);
  lStack_300 = lVar8;
  func_0x00010bfb85a0(uVar11);
  _objc_release(uVar11);
  _objc_initWeak(auStack_328,param_1);
  uStack_358 = 0;
  uStack_348 = 0x3032000000;
  pcStack_340 = FUN_1068fd280;
  uStack_338 = 0x1068fd290;
  puStack_330 = PTR____NSDictionary0__struct_11034ab58;
  puStack_350 = &uStack_358;
  _dispatch_group_enter(lVar8);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_388 = puVar5;
  uStack_380 = 0xc2000000;
  pcStack_378 = FUN_1068fd3f0;
  puStack_370 = &UNK_110860220;
  puStack_360 = &uStack_358;
  _objc_retain(lVar8);
  puStack_3e8 = puVar5;
  uStack_3e0 = 0xc2000000;
  pcStack_3d8 = FUN_1068fd478;
  puStack_3d0 = &UNK_1109495c0;
  puStack_3b0 = &uStack_358;
  lStack_368 = lVar8;
  _objc_copyWeak(auStack_390,auStack_328);
  _objc_retain(param_3);
  lStack_3c8 = param_3;
  _objc_retain(param_4);
  puStack_3a8 = &uStack_230;
  puStack_3a0 = &uStack_290;
  puStack_398 = &uStack_2f0;
  lStack_3c0 = param_4;
  _objc_retain(param_5);
  uStack_3b8 = param_5;
  func_0x00010c244ec0(uVar11);
  _objc_release(uVar11);
  puStack_450 = puVar5;
  uStack_448 = 0xc2000000;
  pcStack_440 = FUN_1068fd6c8;
  puStack_438 = &UNK_1109495f0;
  _objc_copyWeak(auStack_3f0,auStack_328);
  puStack_410 = &uStack_230;
  puStack_408 = &uStack_358;
  puStack_400 = &uStack_290;
  puStack_3f8 = &uStack_2f0;
  lStack_430 = param_3;
  lStack_428 = param_4;
  uStack_420 = param_5;
  uStack_418 = param_6;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x000100bc0718(lVar8,lStack_460,&puStack_450);
  _objc_release(uStack_420);
  _objc_release(lStack_428);
  _objc_release(lStack_430);
  _objc_release(uStack_418);
  _objc_destroyWeak(auStack_3f0);
  _objc_release(uStack_3b8);
  _objc_release(lStack_3c0);
  _objc_release(lStack_3c8);
  _objc_destroyWeak(auStack_390);
  _objc_release(lStack_368);
  __Block_object_dispose(&uStack_358,8);
  _objc_release(puStack_330);
  _objc_destroyWeak(auStack_328);
  _objc_release(lStack_300);
  __Block_object_dispose(&uStack_2f0,8);
  _objc_release(uStack_2c8);
  _objc_release(lStack_2a0);
  __Block_object_dispose(&uStack_290,8);
  _objc_release(uStack_268);
  _objc_release(lStack_240);
  __Block_object_dispose(&uStack_230,8);
  _objc_release(uStack_208);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(lVar8);
  _objc_release(lStack_460);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_390);
    __Block_object_dispose(&uStack_358,8);
    _objc_destroyWeak(auStack_328);
    __Block_object_dispose(&uStack_2f0,8);
    __Block_object_dispose(&uStack_290,8);
    lVar8 = 8;
    __Block_object_dispose(&uStack_230);
    __Unwind_Resume();
    *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
    *(undefined8 *)(lVar8 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 1068fd280; end: 1068fd297;  */

void FUN_1068fd280(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068fd298; end: 1068fd2ef;  */

void FUN_1068fd298(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110949500,
                        &PTR___NSConcreteGlobalBlock_110949520);
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068fd2f0; end: 1068fd2f7;  */

void FUN_1068fd2f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1068fd2f8; end: 1068fd31f;  */

void FUN_1068fd2f8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068fd320; end: 1068fd37b;  */

void FUN_1068fd320(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fd37c; end: 1068fd3ef;  */

void FUN_1068fd37c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fd3f0; end: 1068fd447;  */

void FUN_1068fd3f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110949540,
                        &PTR___NSConcreteGlobalBlock_110949560);
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068fd448; end: 1068fd44f;  */

void FUN_1068fd448(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1068fd450; end: 1068fd477;  */

void FUN_1068fd450(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068fd478; end: 1068fd5af;  */

void FUN_1068fd478(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if ((param_3 == 0) && (lVar4 = param_2, func_0x00010bf529e0(), lVar4 != 0)) {
    lVar1 = param_2;
    func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110949580,
                        &PTR___NSConcreteGlobalBlock_1109495a0);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x0001006decbc(uVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
    lVar4 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar4);
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    func_0x00010bf51e00(uVar2);
    func_0x00010be1e280(lVar4);
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fd5b0; end: 1068fd5b7;  */

void FUN_1068fd5b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1068fd5b8; end: 1068fd6c7;  */

void FUN_1068fd5b8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068fd6c8; end: 1068fd793;  */

void FUN_1068fd6c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    func_0x00010bf51e00(uVar2);
    func_0x00010be1e280(lVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068fd794; end: 1068fd893;  */

void FUN_1068fd794(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 1068fd894; end: 1068fdb3b; -[SCDiscoverFeedFriendStoriesDataCoordinator _getCreatorSubscriptionsAndMakeFriendStoriesWithRankedStoryIds:summaryInfoMap:snapchatterMap:remoteSnapchatterMap:customStoriesData:friendOfGroupFeedDisplayNamesByPublicationId:dataRequest:rankedStoriesCompletion:] */

void FUN_1068fd894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa0b80();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010be5ba00(param_1);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010bfc4340(uVar2);
    _objc_release(uVar2);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fdb3c; end: 1068fdba7;  */

void FUN_1068fdb3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5ba00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068fdba8; end: 1068fe4e7; -[SCDiscoverFeedFriendStoriesDataCoordinator _makeFriendStoriesWithRankedStoryIds:summaryInfoMap:snapchatterMap:remoteSnapchatterMap:customStoriesData:friendOfGroupFeedDisplayNamesByPublicationId:creatorSubscriptions:dataRequest:rankedStoriesCompletion:] */

ulong FUN_1068fdba8(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                   long param_6,ulong param_7,ulong param_8,undefined8 param_9,undefined8 param_10,
                   undefined8 param_11)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  long lStack_268;
  long lStack_260;
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar14 = param_1;
  func_0x00010be349a0();
  lVar13 = param_1;
  func_0x00010bee6980();
  uVar1 = (undefined4)lVar13;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_3);
  uVar15 = param_3;
  func_0x00010bf52a60();
  if (uVar15 == 0) {
    _objc_release(param_3);
  }
  else {
    lStack_268 = 0;
    lStack_260 = 0;
    lVar13 = *plStack_1b0;
    do {
      uVar16 = 0;
      do {
        if (*plStack_1b0 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        lVar18 = *(long *)(lStack_1b8 + uVar16 * 8);
        lVar4 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 == 0) {
          lStack_260 = lStack_260 + 1;
        }
        else {
          lVar5 = lVar4;
          func_0x00010c27dd80();
          if (lVar5 < 3) {
            if (lVar5 == 0) {
LAB_1068fddd8:
              lStack_268 = lStack_268 + 1;
            }
            else if (lVar5 == 1) {
              lVar5 = param_5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c259580(lVar4);
              lVar8 = param_1;
              func_0x00010be70840();
              iVar2 = 0;
              if (lVar5 != 0) {
                iVar2 = (int)lVar8;
              }
              if (iVar2 == 1) {
                lVar8 = lVar5;
                func_0x00010901d7c4(lVar5);
                _objc_retainAutoreleasedReturnValue();
                FUN_1068fba3c(lVar18,lVar5,0,lVar4,lVar8,param_9,uVar1);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar8);
                if (lVar18 != 0) {
                  func_0x00010c1d0640(puVar3);
                }
                _objc_release(lVar18);
              }
              _objc_release(lVar5);
            }
            else if (lVar5 == 2) {
              uVar9 = param_7;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar9;
              FUN_1068fe4e8();
              if ((int)uVar7 != 0) {
                if ((uVar9 == 0) || (uVar7 = uVar9, func_0x00010c27dd80(), uVar7 != 7)) {
LAB_1068fdff0:
                  uVar19 = 0;
                }
                else {
                  iVar2 = (int)*(undefined8 *)(param_1 + 0x50);
                  func_0x000108060890();
                  if (iVar2 == 0) goto LAB_1068fdff0;
                  uVar7 = uVar9;
                  func_0x00010c1057e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar7;
                  func_0x00010bf4b900();
                  if ((uVar6 & 1) == 0) {
                    uVar10 = *(undefined8 *)(param_1 + 0x70);
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    uVar17 = uVar10;
                    func_0x00010bf1f3c0();
                    uVar19 = (uint)uVar17;
                    _objc_release(uVar10);
                  }
                  else {
                    uVar19 = 1;
                  }
                  _objc_release(uVar7);
                }
                uVar7 = uVar9;
                func_0x00010c27dd80();
                if (uVar7 != 2) {
                  uVar7 = uVar9;
                  func_0x00010c27dd80();
                  if ((((uVar19 & 1) == 0 && uVar7 != 6) &&
                      (uVar7 = uVar9, func_0x00010c27dd80(), uVar7 != 10)) &&
                     (lVar5 = lVar4, func_0x00010c259580(), ((uint)lVar5 >> 10 & 1) == 0))
                  goto LAB_1068fe1e8;
                }
                if (uVar9 == 0) {
                  _objc_retain(lVar18);
                  _objc_retain(param_8);
LAB_1068fe134:
                  uVar7 = param_8;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar7;
                  func_0x00010c08fa60();
                  if (uVar6 == 0) {
                    uVar6 = uVar9;
                    func_0x00010bf85d80(uVar9);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    _objc_retain(uVar7);
                    uVar6 = uVar7;
                  }
                  _objc_release(uVar7);
LAB_1068fe180:
                  _objc_release(param_8);
                  _objc_release(uVar9);
                  _objc_release(lVar18);
                  FUN_1068fba3c(lVar18,0,uVar9,lVar4,uVar6,param_9,uVar1);
                  _objc_retainAutoreleasedReturnValue();
                  if (lVar18 != 0) {
                    func_0x00010c1d0640(puVar3);
                  }
                  _objc_release(lVar18);
                }
                else {
                  iVar2 = (int)*(undefined8 *)(param_1 + 0x50);
                  func_0x000108060ea8();
                  if (iVar2 == 0) {
LAB_1068fe0c8:
                    _objc_retain(lVar18);
                    _objc_retain(uVar9);
                    _objc_retain(param_8);
                    uVar7 = uVar9;
                    func_0x00010bf85d80();
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = uVar7;
                    func_0x00010c08fa60();
                    _objc_release(uVar7);
                    if (uVar6 == 0) goto LAB_1068fe134;
                    uVar6 = uVar9;
                    func_0x00010bf85d80(uVar9);
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_1068fe180;
                  }
                  uVar7 = uVar9;
                  func_0x00010bfa2680();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (uVar7 == 0) goto LAB_1068fe0c8;
                  uVar7 = uVar9;
                  func_0x00010bfa2680();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar7;
                  func_0x00010bf0a5c0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar7);
                  uVar7 = uVar6;
                  func_0x00010c0ecf20();
                  if (uVar7 != 2) {
LAB_1068fe0c0:
                    _objc_release(uVar6);
                    goto LAB_1068fe0c8;
                  }
                  uVar7 = uVar9;
                  func_0x00010bf60900();
                  if ((((uint)uVar7 ^ 1) & (uint)lVar14 & 1) == 0) goto LAB_1068fe0c0;
                }
                _objc_release(uVar6);
              }
LAB_1068fe1e8:
              _objc_release(uVar9);
            }
          }
          else if (lVar5 == 6) {
            func_0x000108f599bc();
            _objc_retainAutoreleasedReturnValue();
            FUN_1068fba3c(lVar18,0,0,lVar4,lVar5,param_9,uVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            if (lVar18 != 0) {
              func_0x00010c1d0640(puVar3);
            }
            _objc_release(lVar18);
          }
          else if (lVar5 == 5) {
            lVar5 = param_6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = *(ulong *)(param_1 + 0x80);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar5;
            func_0x00010c2923e0(lVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar7;
            func_0x00010bf5b7e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            _objc_release(uVar7);
            if ((lVar5 != 0) && (uVar7 = uVar9, func_0x00010c074c20(), (uVar7 & 1) == 0)) {
              lVar8 = lVar5;
              func_0x00010901d7c4(lVar5);
              _objc_retainAutoreleasedReturnValue();
              FUN_1068fba3c(lVar18,lVar5,0,lVar4,lVar8,param_9,uVar1);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar8);
              if (lVar18 != 0) {
                func_0x00010c1d0640(puVar3);
              }
              _objc_release(lVar18);
            }
            _objc_release(uVar9);
            _objc_release(lVar5);
          }
          else if (lVar5 == 3) goto LAB_1068fddd8;
        }
        _objc_release(lVar4);
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
      uVar15 = param_3;
      func_0x00010bf52a60();
    } while (uVar15 != 0);
    _objc_release(param_3);
    if (lStack_260 != 0) {
      func_0x00010c0aa5c0(*(undefined8 *)(param_1 + 0x48));
    }
    if (lStack_268 != 0) {
      func_0x00010c0b2220(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(param_3);
  uVar15 = param_3;
  func_0x00010bf52a60();
  if (uVar15 != 0) {
    lVar14 = *plStack_1f0;
    do {
      uVar16 = 0;
      do {
        if (*plStack_1f0 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        puVar12 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar12 != (undefined *)0x0) {
          puVar12 = puVar3;
          func_0x00010c0e00e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(puVar12);
        }
        uVar16 = uVar16 + 1;
      } while (uVar15 != uVar16);
      uVar15 = param_3;
      func_0x00010bf52a60();
    } while (uVar15 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_208,param_1);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  uVar19 = (uint)auStack_208;
  _objc_copyWeak(auStack_210);
  _objc_retain(param_11);
  _objc_retain(puVar11);
  _objc_retain(param_10);
  func_0x00010c0f7fc0(uVar17);
  _objc_release(param_10);
  _objc_release(puVar11);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_208);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_208);
  __Unwind_Resume();
  _objc_retain();
  func_0x00010c259580();
  if ((uVar19 >> 10 & 1) == 0) {
    if (param_3 == 0) {
      uVar15 = 0;
      goto LAB_1068fe544;
    }
    uVar15 = param_3;
    func_0x00010c27dd80();
    if (((uVar15 != 2) && (uVar15 = param_3, func_0x00010c27dd80(), uVar15 != 6)) &&
       (uVar15 = param_3, func_0x00010c27dd80(), uVar15 != 7)) {
      uVar15 = param_3;
      func_0x00010c27dd80(param_3);
      uVar15 = (ulong)(uVar15 == 10);
      goto LAB_1068fe544;
    }
  }
  uVar15 = 1;
LAB_1068fe544:
  _objc_release(param_3);
  return uVar15;
}



/* Entry: 1068fe4e8; end: 1068fe577;  */

bool FUN_1068fe4e8(long param_1,uint param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  func_0x00010c259580();
  if ((param_2 >> 10 & 1) == 0) {
    if (param_1 == 0) {
      bVar1 = false;
      goto LAB_1068fe544;
    }
    lVar2 = param_1;
    func_0x00010c27dd80();
    if (((lVar2 != 2) && (lVar2 = param_1, func_0x00010c27dd80(), lVar2 != 6)) &&
       (lVar2 = param_1, func_0x00010c27dd80(), lVar2 != 7)) {
      lVar2 = param_1;
      func_0x00010c27dd80(param_1);
      bVar1 = lVar2 == 10;
      goto LAB_1068fe544;
    }
  }
  bVar1 = true;
LAB_1068fe544:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1068fe578; end: 1068fe5eb;  */

void FUN_1068fe578(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar2);
    func_0x00010be10180(lVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068fe5ec; end: 1068fe78b; -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchBlockedSnapchatterForDiscoverFeedFriendStories:viewRestrictedStories:dataRequest:rankedStoriesCompletion:] */

void FUN_1068fe5ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf1d7c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fe78c; end: 1068fe81f;  */

void FUN_1068fe78c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
  }
  else {
    uVar2 = param_2;
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110949650);
    func_0x00010bee4780(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068fe820; end: 1068fe827;  */

void FUN_1068fe820(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c242770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapProId_11266e400);
  return;
}



/* Entry: 1068fe828; end: 1068feab3; -[SCDiscoverFeedFriendStoriesDataCoordinator _updateWithDiscoverFeedFriendStories:viewRestrictedStories:dataRequest:rankedStoriesCompletion:blockedSnapchatterIds:] */

void FUN_1068fe828(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1068feab4;
  puStack_90 = &UNK_110949670;
  lStack_88 = param_1;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_7);
  lVar2 = param_3;
  uStack_78 = param_7;
  func_0x0001006372a4(param_3,&puStack_a8);
  lVar5 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar5);
  _objc_retain(lVar2);
  if (lVar5 == lVar2) {
    _objc_release(lVar2);
    _objc_release(lVar5);
joined_r0x0001068fe940:
    if (param_6 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf51e00(uVar4);
      (**(code **)(param_6 + 0x10))(param_6,uVar4);
      _objc_release(uVar4);
    }
  }
  else {
    if (lVar2 == 0) {
      _objc_release(lVar5);
    }
    else {
      lVar3 = lVar5;
      func_0x00010c071ae0();
      _objc_release(lVar2);
      _objc_release(lVar5);
      if ((int)lVar3 != 0) goto joined_r0x0001068fe940;
    }
    lVar5 = lVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar5;
    _objc_release(uVar4);
    if (param_6 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf51e00(uVar4);
      (**(code **)(param_6 + 0x10))(param_6,uVar4);
      _objc_release(uVar4);
    }
    _objc_initWeak(auStack_b0,param_1);
    uVar4 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1068fecb0;
    puStack_c8 = &UNK_110841fb0;
    _objc_copyWeak(auStack_b8,auStack_b0);
    _objc_retain(param_5);
    uStack_c0 = param_5;
    func_0x00010007380c(uVar4,&puStack_e0);
    _objc_release(uVar4);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
  }
  _objc_release(lVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068feab4; end: 1068fecaf;  */

uint FUN_1068feab4(double param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  double dVar12;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c078a60();
  uVar1 = *(ulong *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (param_3 != 0) {
    lVar7 = param_3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0720c0();
    if (((int)lVar8 == 0) ||
       (lVar8 = param_3, func_0x00010bfddf20(), bVar3 = bRam00000001138246c8, (int)uVar6 == 0)) {
LAB_1068feb78:
      _objc_release(lVar7);
    }
    else {
      if ((int)lVar8 != 0) {
        if (lRam00000001138246c0 != -1) {
          func_0x00010002a2fc(0x1138246c0,&PTR___NSConcreteGlobalBlock_110a07558);
        }
        goto LAB_1068feb78;
      }
      _objc_release(lVar7);
      if ((bVar3 & 1) == 0) goto LAB_1068fec3c;
    }
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    lVar7 = param_3;
    dVar12 = param_1;
    func_0x00010bf9c720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(lVar7);
    _objc_release(puVar9);
    if ((param_1 <= dVar12) && (uVar10 = uVar1, func_0x00010bf4b900(), (uVar10 & 1) == 0)) {
      lVar7 = param_3;
      func_0x00010c259580();
      if (lVar7 == 0x80) {
        lVar7 = param_3;
        func_0x00010c259cc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010bf4b900(uVar2);
        _objc_release(lVar7);
        uVar11 = (uint)uVar6 ^ 1;
      }
      else {
        uVar11 = 1;
      }
      goto LAB_1068fec40;
    }
  }
LAB_1068fec3c:
  uVar11 = 0;
LAB_1068fec40:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  return uVar11 & 1;
}



/* Entry: 1068fecb0; end: 1068fece3;  */

void FUN_1068fecb0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcb7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068fece4; end: 1068fed1b; -[SCDiscoverFeedFriendStoriesDataCoordinator _announceDataCoordinatorUpdateWithDataRequest:] */

void FUN_1068fece4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(param_3);
  func_0x00010bf7e9e0(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068fed1c; end: 1068fee4f; -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchStoriesSummaryInfosWithStoryIds:numOfStories:completion:] */

void FUN_1068fed1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uStack_50 = param_4;
  func_0x00010c25b4c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1068fee50; end: 1068feec7;  */

void FUN_1068fee50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    func_0x00010be14480(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068feec8; end: 1068ff353; -[SCDiscoverFeedFriendStoriesDataCoordinator _fetchSnapchattersWithStoryIds:summaryInfoMap:numOfStories:completion:] */

void FUN_1068feec8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_270;
  undefined *puStack_260;
  undefined8 uStack_258;
  code *pcStack_250;
  undefined *puStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c27dd80();
        if (lVar5 == 5) {
LAB_1068feffc:
          func_0x00010befa120(puVar2);
        }
        else {
          if (lVar5 == 2) {
LAB_1068feff0:
            func_0x00010befa120(puVar3);
            goto LAB_1068feffc;
          }
          if (lVar5 == 1) {
            func_0x00010befa120(puVar1);
            goto LAB_1068feff0;
          }
        }
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  lVar6 = *(long *)(param_1 + 0x28);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lStack_270 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar6);
    lStack_270 = lVar6;
  }
  _objc_release();
  _dispatch_group_create();
  _dispatch_group_enter();
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_1068fd280;
  uStack_150 = 0x1068fd290;
  uStack_148 = 0;
  uVar7 = *(undefined8 *)(param_1 + 8);
  puStack_168 = &uStack_170;
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1068ff354;
  puStack_188 = &UNK_110860220;
  puStack_178 = &uStack_170;
  _objc_retain(lVar6);
  lStack_180 = lVar6;
  func_0x00010c244e80(uVar7);
  _objc_release(uVar7);
  uStack_1d0 = 0;
  uStack_1c0 = 0x3032000000;
  pcStack_1b8 = FUN_1068fd280;
  uStack_1b0 = 0x1068fd290;
  uStack_1a8 = 0;
  puStack_1c8 = &uStack_1d0;
  _dispatch_group_enter(lVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_1068ff3dc;
  puStack_1e8 = &UNK_110853260;
  puStack_1d8 = &uStack_1d0;
  _objc_retain(lVar6);
  lStack_1e0 = lVar6;
  func_0x00010bf62520(uVar7);
  _objc_release(uVar7);
  _objc_initWeak(auStack_208,param_1);
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  pcStack_250 = FUN_1068ff438;
  puStack_248 = &UNK_110949710;
  _objc_copyWeak(auStack_218,auStack_208);
  puStack_228 = &uStack_170;
  puStack_220 = &uStack_1d0;
  lStack_240 = param_3;
  lStack_238 = param_4;
  uStack_230 = param_6;
  uStack_210 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  ppuVar8 = &puStack_260;
  func_0x000100bc0718(lVar6,lStack_270);
  _objc_release(lStack_238);
  _objc_release(lStack_240);
  _objc_release(uStack_230);
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_208);
  _objc_release(lStack_1e0);
  __Block_object_dispose(&uStack_1d0,8);
  _objc_release(uStack_1a8);
  _objc_release(lStack_180);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(lVar6);
  _objc_release(lStack_270);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1d0,8);
  uVar7 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  if (ppuVar8 == (undefined **)0x0) {
    func_0x00010050471c(uVar7,&PTR___NSConcreteGlobalBlock_1109496d0,
                        &PTR___NSConcreteGlobalBlock_1109496f0);
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x28);
    *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x28) + 8) + 0x28) = uVar7;
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(puVar1 + 0x20));
  return;
}



/* Entry: 1068ff354; end: 1068ff3ab;  */

void FUN_1068ff354(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_1109496d0,
                        &PTR___NSConcreteGlobalBlock_1109496f0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068ff3ac; end: 1068ff3b3;  */

void FUN_1068ff3ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1068ff3b4; end: 1068ff3db;  */

void FUN_1068ff3b4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1068ff3dc; end: 1068ff437;  */

void FUN_1068ff3dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068ff438; end: 1068ff50f;  */

void FUN_1068ff438(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    func_0x00010be162c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068ff510; end: 1068ff7f3; -[SCDiscoverFeedFriendStoriesDataCoordinator _filterOutViewedAndMutedFriendStoriesWithStoryIds:summaryInfoMap:snapchatterMap:customStoriesData:numOfStories:completion:] */

undefined *
FUN_1068ff510(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
             long param_6,undefined *param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x23;
  long lVar9;
  undefined *puVar10;
  undefined *unaff_x27;
  long unaff_x28;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [128];
  long lStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  int iStack_154;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
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
  uStack_140 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_138 = param_6;
  _objc_retain(param_6);
  lStack_148 = param_8;
  _objc_retain(param_8);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = param_3;
  func_0x00010bf52a60();
  if (puVar7 != (undefined *)0x0) {
    param_8 = *plStack_120;
    unaff_x27 = puVar7;
    lStack_150 = param_5;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_120 != param_8) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(long *)(lStack_128 + (long)puVar7 * 8);
        puVar2 = puVar10;
        func_0x00010bf529e0();
        if (puVar2 == param_7) goto LAB_1068ff770;
        lVar9 = unaff_x23;
        func_0x00010c08fa60();
        if (lVar9 != 0) {
          unaff_x28 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x28 != 0) {
            lVar9 = unaff_x28;
            func_0x00010c27dd80();
            if (lVar9 == 6) {
              lVar9 = unaff_x28;
              func_0x00010bfddf20();
              if ((int)lVar9 != 0) {
                func_0x00010befa120(puVar10);
              }
            }
            else {
              if (lVar9 == 2) {
                unaff_x23 = lStack_138;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = unaff_x23;
                FUN_1068fe4e8();
                if ((int)lVar9 != 0) {
                  lVar9 = unaff_x28;
                  func_0x00010bfddf20();
                  iVar1 = (int)lVar9;
joined_r0x0001068ff6e4:
                  if (iVar1 != 0) {
                    func_0x00010befa120(puVar10);
                  }
                }
              }
              else {
                if (lVar9 != 1) goto LAB_1068ff6fc;
                unaff_x23 = param_5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c259580(unaff_x28);
                uVar3 = uStack_140;
                func_0x00010be70840();
                if (((int)uVar3 != 0) && (unaff_x23 != 0)) {
                  lVar9 = unaff_x23;
                  func_0x00010bfb8280();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar9;
                  func_0x00010c07fc80();
                  if ((int)lVar4 == 0) {
                    lVar4 = unaff_x28;
                    func_0x00010bfddf20();
                    iStack_154 = (int)lVar4;
                    _objc_release(lVar9);
                    param_5 = lStack_150;
                    iVar1 = iStack_154;
                    goto joined_r0x0001068ff6e4;
                  }
                  _objc_release(lVar9);
                  param_5 = lStack_150;
                }
              }
              _objc_release(unaff_x23);
            }
          }
LAB_1068ff6fc:
          _objc_release(unaff_x28);
        }
        puVar7 = puVar7 + 1;
      } while (unaff_x27 != puVar7);
      unaff_x27 = param_3;
      func_0x00010bf52a60();
    } while (unaff_x27 != (undefined *)0x0);
  }
LAB_1068ff770:
  _objc_release(param_3);
  lVar9 = lStack_148;
  puVar7 = puVar10;
  func_0x00010be97e40(uStack_140);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lStack_138);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar10 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar10;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_280;
  lStack_188 = lVar9;
  pcStack_168 = FUN_1068ff7f4;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  lStack_1b0 = unaff_x28;
  puStack_1a8 = unaff_x27;
  lStack_1a0 = param_5;
  lStack_198 = unaff_x23;
  lStack_190 = param_8;
  lStack_180 = param_4;
  puStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_238;
  puVar2 = puVar7;
  func_0x00010bf52a60();
  puVar10 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    lVar9 = *plStack_270;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_270 != lVar9) {
          _objc_enumerationMutation(puVar7);
        }
        lVar8 = *(long *)(lStack_278 + (long)puVar10 * 8);
        lVar4 = lVar8;
        func_0x00010c27dd80();
        if (lVar4 == 7) {
          lVar4 = lVar8;
          func_0x00010bfa2680();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            func_0x00010bfa2680();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar8;
            func_0x00010bf0a5c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            lVar8 = lVar4;
            func_0x00010c0ecf20();
            _objc_release(lVar4);
            if (lVar8 == 1) {
              puVar10 = (undefined *)0x1;
              goto LAB_1068ff928;
            }
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar6 = auStack_238;
      puVar2 = puVar7;
      puVar5 = &uStack_280;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
    puVar10 = (undefined *)0x0;
  }
LAB_1068ff928:
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return puVar10;
  }
  ___stack_chk_fail();
  if (puVar6 != (undefined1 *)0x0) {
    _objc_retain(puVar6);
    func_0x00010bf51e00(puVar5);
    (**(code **)(puVar6 + 0x10))(puVar6,puVar5);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return (undefined *)puVar5;
  }
  return puVar7;
}



/* Entry: 1068ff7f4; end: 1068ff96b; -[SCDiscoverFeedFriendStoriesDataCoordinator _hasUniversityCommunityWithCustomStoriesData:] */

undefined1 * FUN_1068ff7f4(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_d8;
  puVar1 = param_3;
  func_0x00010bf52a60();
  puVar7 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    lVar6 = *plStack_110;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        lVar5 = *(long *)(lStack_118 + (long)puVar7 * 8);
        lVar2 = lVar5;
        func_0x00010c27dd80();
        if (lVar2 == 7) {
          lVar2 = lVar5;
          func_0x00010bfa2680();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar2 != 0) {
            func_0x00010bfa2680();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar5;
            func_0x00010bf0a5c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            lVar5 = lVar2;
            func_0x00010c0ecf20();
            _objc_release(lVar2);
            if (lVar5 == 1) {
              puVar7 = (undefined1 *)0x1;
              goto LAB_1068ff928;
            }
          }
        }
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar4 = auStack_d8;
      puVar1 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
    puVar7 = (undefined1 *)0x0;
  }
LAB_1068ff928:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (puVar4 != (undefined1 *)0x0) {
    _objc_retain(puVar4);
    func_0x00010bf51e00(puVar3);
    (**(code **)(puVar4 + 0x10))(puVar4,puVar3);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return (undefined1 *)puVar3;
  }
  return param_3;
}



/* Entry: 1068ff96c; end: 1068ff9c3; -[SCDiscoverFeedFriendStoriesDataCoordinator _runStoriesFetchCompletionBlockInBackgroundIfNecessaryWithStories:completion:] */

void FUN_1068ff96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010bf51e00(param_3);
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1068ff9c4; end: 1068ffa1b; -[SCDiscoverFeedFriendStoriesDataCoordinator _runStoryFetchCompletionBlockInBackgroundIfNecessaryWithStory:completion:] */

void FUN_1068ff9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010bf51e00(param_3);
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1068ffa1c; end: 1068ffa73; -[SCDiscoverFeedFriendStoriesDataCoordinator _runFetchStoriesSummaryInfoForUnviewedAndUnmutedStories:completion:] */

void FUN_1068ffa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_4);
    func_0x00010bf51e00(param_3);
    (**(code **)(param_4 + 0x10))(param_4,param_3);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1068ffa74; end: 1068ffbaf; -[SCDiscoverFeedFriendStoriesDataCoordinator didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1068ffa74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_2,uVar1);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar5);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126b4030;
    func_0x00010bf5b2a0(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    if ((int)uVar1 == 0) {
      puVar4 = PTR_PTR_1126b4030;
      func_0x00010bf5b320(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      if ((int)uVar1 == 0) goto LAB_1068ffb98;
    }
    else {
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126cee78;
    func_0x00010bfba640(PTR_PTR_1126cee78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14840(param_1,param_2,puVar3,0);
    _objc_release(puVar3);
  }
LAB_1068ffb98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068ffbb0; end: 1068ffce7; -[SCDiscoverFeedFriendStoriesDataCoordinator _passFriendShipCheckForSnapchatter:contentType:] */

undefined8 FUN_1068ffbb0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf92820();
  _objc_release(uVar1);
  if ((((int)uVar4 == 0) || (uVar2 = param_3, func_0x000100bec434(), (uVar2 & 1) != 0)) ||
     (uVar2 = param_3, func_0x000100bf0c60(param_3,0), (uVar2 & 1) != 0)) {
LAB_1068ffc20:
    uVar4 = 1;
  }
  else {
    if ((param_3 != 0) && (uVar2 = param_3, func_0x00010c06d560(), (uVar2 & 1) == 0)) {
      uVar2 = param_3;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((uVar2 != 0) && (uVar2 = param_3, func_0x000100bf119c(), (uVar2 & 1) != 0))
      goto LAB_1068ffc20;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a8e40(uVar4);
    _objc_release(puVar3);
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1068ffce8; end: 1068ffe07; -[SCDiscoverFeedFriendStoriesDataCoordinator .cxx_destruct] */

void FUN_1068ffce8(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
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



/* Entry: 1068ffe08; end: 1068ffeeb; -[SCDiscoverOperaPluginCreatingServiceProvider provide] */

void FUN_1068ffe08(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cee90;
  _objc_alloc(PTR_PTR_1126cee90);
  func_0x00010c00d000();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1068ffeec; end: 1068fff2b;  */

void FUN_1068ffeec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be02140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1068fff2c; end: 1068fff87; -[SCDiscoverOperaPluginCreatingServiceProvider _discoverOperaPluginCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068fff2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cee98;
  _objc_alloc(PTR_PTR_1126cee98);
  param_1 = param_1 + _DAT_1127536b8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c003a00(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068fff88; end: 1068fffbf; -[SCDiscoverOperaPluginCreatingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068fff88(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127536b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127536bc);
  return;
}



/* Entry: 1068fffc0; end: 10690149f;  */

void FUN_1068fffc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined **ppuVar1;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  code *pcStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
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
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
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
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(param_71);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  _objc_retain(in_stack_00000288);
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_000002a0);
  _objc_retain(in_stack_000002a8);
  _objc_retain(in_stack_000002b0);
  _objc_retain(in_stack_000002b8);
  _objc_retain(in_stack_000002c0);
  _objc_retain(in_stack_000002c8);
  _objc_retain(in_stack_000002d0);
  _objc_retain(in_stack_000002d8);
  _objc_retain(in_stack_000002e0);
  _objc_retain(in_stack_000002e8);
  _objc_retain(in_stack_000002f0);
  _objc_retain(in_stack_000002f8);
  _objc_retain(in_stack_00000300);
  _objc_retain(in_stack_00000308);
  _objc_retain(in_stack_00000310);
  _objc_retain(in_stack_00000318);
  _objc_retain(in_stack_00000320);
  _objc_retain(in_stack_00000328);
  _objc_retain(in_stack_00000330);
  _objc_retain(in_stack_00000338);
  _objc_retain(in_stack_00000340);
  puStack_400 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_3f0 = FUN_1069014a0;
  puStack_3e8 = &UNK_110949770;
  uStack_70 = param_19;
  uStack_3f8 = 0xc2000000;
  uStack_3d8 = param_26;
  uStack_3d0 = param_18;
  uStack_3c8 = param_33;
  uStack_3b8 = param_60;
  uStack_3b0 = param_63;
  uStack_3a8 = param_36;
  uStack_388 = param_9;
  uStack_370 = param_10;
  uStack_368 = param_11;
  uStack_360 = param_12;
  uStack_358 = param_13;
  uStack_350 = param_14;
  uStack_348 = param_15;
  uStack_330 = param_28;
  uStack_328 = param_70;
  uStack_2e0 = param_44;
  uStack_2d0 = param_27;
  uStack_2a8 = param_16;
  uStack_2a0 = param_56;
  uStack_298 = param_24;
  uStack_270 = param_52;
  uStack_258 = param_23;
  uStack_250 = param_25;
  uStack_240 = param_17;
  uStack_238 = param_21;
  uStack_230 = param_22;
  uStack_228 = param_29;
  uStack_220 = param_30;
  uStack_218 = param_31;
  uStack_210 = param_32;
  uStack_208 = param_34;
  uStack_200 = param_35;
  uStack_1f8 = param_37;
  uStack_1f0 = param_38;
  uStack_1e8 = param_39;
  uStack_1e0 = param_40;
  uStack_1d8 = param_41;
  uStack_1d0 = param_42;
  uStack_1c8 = param_43;
  uStack_1c0 = param_45;
  uStack_1b8 = param_46;
  uStack_1b0 = param_47;
  uStack_1a8 = param_48;
  uStack_1a0 = param_49;
  uStack_198 = param_50;
  uStack_190 = param_51;
  uStack_188 = param_53;
  uStack_180 = param_54;
  uStack_178 = param_55;
  uStack_170 = param_57;
  uStack_168 = param_58;
  uStack_160 = param_59;
  uStack_158 = param_61;
  uStack_150 = param_62;
  uStack_148 = param_64;
  uStack_140 = param_65;
  uStack_138 = param_66;
  uStack_130 = param_67;
  uStack_128 = param_68;
  uStack_120 = param_69;
  uStack_118 = param_71;
  uStack_3e0 = param_4;
  uStack_3c0 = param_1;
  uStack_3a0 = param_5;
  uStack_398 = param_7;
  uStack_390 = param_8;
  uStack_380 = in_stack_000002b0;
  uStack_378 = in_stack_000002b8;
  uStack_340 = param_6;
  uStack_338 = param_2;
  uStack_320 = in_stack_000001f8;
  uStack_318 = in_stack_00000210;
  uStack_310 = in_stack_00000220;
  uStack_308 = in_stack_00000218;
  uStack_300 = in_stack_00000228;
  uStack_2f8 = in_stack_00000230;
  uStack_2f0 = in_stack_00000238;
  uStack_2e8 = in_stack_00000240;
  uStack_2d8 = in_stack_00000248;
  uStack_2c8 = in_stack_00000280;
  uStack_2c0 = in_stack_000002e0;
  uStack_2b8 = in_stack_000002e8;
  uStack_2b0 = in_stack_000002f0;
  uStack_290 = in_stack_000002f8;
  uStack_288 = in_stack_00000300;
  uStack_280 = in_stack_00000308;
  uStack_278 = in_stack_00000310;
  uStack_268 = in_stack_00000318;
  uStack_260 = in_stack_00000320;
  uStack_248 = param_3;
  uStack_110 = in_stack_000001f0;
  uStack_108 = in_stack_00000200;
  uStack_100 = in_stack_00000208;
  uStack_f8 = in_stack_00000250;
  uStack_f0 = in_stack_00000258;
  uStack_e8 = in_stack_00000260;
  uStack_e0 = in_stack_00000268;
  uStack_d8 = in_stack_00000278;
  uStack_d0 = in_stack_00000288;
  uStack_c8 = in_stack_00000290;
  uStack_c0 = in_stack_000002a0;
  uStack_b8 = in_stack_000002a8;
  uStack_b0 = in_stack_000002c0;
  uStack_a8 = in_stack_000002c8;
  uStack_a0 = in_stack_000002d0;
  uStack_98 = in_stack_000002d8;
  uStack_90 = in_stack_00000328;
  uStack_88 = in_stack_00000330;
  uStack_80 = in_stack_00000338;
  uStack_78 = in_stack_00000340;
  _objc_retain();
  _objc_retain(in_stack_00000338);
  _objc_retain(in_stack_00000330);
  _objc_retain(in_stack_00000328);
  _objc_retain(in_stack_000002d8);
  _objc_retain(in_stack_000002d0);
  _objc_retain(in_stack_000002c8);
  _objc_retain(in_stack_000002c0);
  _objc_retain(in_stack_000002a8);
  _objc_retain(in_stack_000002a0);
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_00000288);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_000001f0);
  _objc_retain(param_71);
  _objc_retain(param_69);
  _objc_retain(param_68);
  _objc_retain(param_67);
  _objc_retain(param_66);
  _objc_retain(param_65);
  _objc_retain(param_64);
  _objc_retain(param_62);
  _objc_retain(param_61);
  _objc_retain(param_59);
  _objc_retain(param_58);
  _objc_retain(param_57);
  _objc_retain(param_55);
  _objc_retain(param_54);
  _objc_retain(param_53);
  _objc_retain(param_51);
  _objc_retain(param_50);
  _objc_retain(param_49);
  _objc_retain(param_48);
  _objc_retain(param_47);
  _objc_retain(param_46);
  _objc_retain(param_45);
  _objc_retain(param_43);
  _objc_retain(param_42);
  _objc_retain(param_41);
  _objc_retain(param_40);
  _objc_retain(param_39);
  _objc_retain(param_38);
  _objc_retain(param_37);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_32);
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_29);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_17);
  _objc_retain(param_3);
  _objc_retain(param_25);
  _objc_retain(param_23);
  _objc_retain(in_stack_00000320);
  _objc_retain(in_stack_00000318);
  _objc_retain(param_52);
  _objc_retain(in_stack_00000310);
  _objc_retain(in_stack_00000308);
  _objc_retain(in_stack_00000300);
  _objc_retain(in_stack_000002f8);
  _objc_retain(param_24);
  _objc_retain(param_56);
  _objc_retain(param_16);
  _objc_retain(in_stack_000002f0);
  _objc_retain(in_stack_000002e8);
  _objc_retain(in_stack_000002e0);
  _objc_retain(in_stack_00000280);
  _objc_retain(param_27);
  _objc_retain(in_stack_00000248);
  _objc_retain(param_44);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_000001f8);
  _objc_retain(param_70);
  _objc_retain(param_28);
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(in_stack_000002b8);
  _objc_retain(in_stack_000002b0);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_36);
  _objc_retain(param_63);
  _objc_retain(param_60);
  _objc_retain(param_1);
  _objc_retain(param_33);
  _objc_retain(param_18);
  _objc_retain(param_26);
  _objc_retain(param_4);
  ppuVar1 = &puStack_400;
  _objc_retainBlock();
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_140);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_release(uStack_198);
  _objc_release(uStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  _objc_release(uStack_1c8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_1d8);
  _objc_release(uStack_1e0);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1f8);
  _objc_release(uStack_200);
  _objc_release(uStack_208);
  _objc_release(uStack_210);
  _objc_release(uStack_218);
  _objc_release(uStack_220);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  _objc_release(uStack_238);
  _objc_release(uStack_240);
  _objc_release(uStack_248);
  _objc_release(uStack_250);
  _objc_release(uStack_258);
  _objc_release(uStack_260);
  _objc_release(uStack_268);
  _objc_release(uStack_270);
  _objc_release(uStack_278);
  _objc_release(uStack_280);
  _objc_release(uStack_288);
  _objc_release(uStack_290);
  _objc_release(uStack_298);
  _objc_release(uStack_2a0);
  _objc_release(uStack_2a8);
  _objc_release(uStack_2b0);
  _objc_release(uStack_2b8);
  _objc_release(uStack_2c0);
  _objc_release(uStack_2c8);
  _objc_release(uStack_2d0);
  _objc_release(uStack_2d8);
  _objc_release(uStack_2e0);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2f0);
  _objc_release(uStack_2f8);
  _objc_release(uStack_300);
  _objc_release(uStack_308);
  _objc_release(uStack_310);
  _objc_release(uStack_318);
  _objc_release(uStack_320);
  _objc_release(uStack_328);
  _objc_release(uStack_330);
  _objc_release(uStack_338);
  _objc_release(uStack_340);
  _objc_release(uStack_348);
  _objc_release(uStack_350);
  _objc_release(uStack_358);
  _objc_release(uStack_360);
  _objc_release(uStack_368);
  _objc_release(uStack_370);
  _objc_release(uStack_378);
  _objc_release(uStack_380);
  _objc_release(uStack_388);
  _objc_release(uStack_390);
  _objc_release(uStack_398);
  _objc_release(uStack_3a0);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3b0);
  _objc_release(uStack_3b8);
  _objc_release(uStack_3c0);
  _objc_release(uStack_3c8);
  _objc_release(uStack_3d0);
  _objc_release(uStack_3d8);
  _objc_release(uStack_3e0);
  _objc_release(in_stack_00000340);
  _objc_release(in_stack_00000338);
  _objc_release(in_stack_00000330);
  _objc_release(in_stack_00000328);
  _objc_release(in_stack_000002d8);
  _objc_release(in_stack_000002d0);
  _objc_release(in_stack_000002c8);
  _objc_release(in_stack_000002c0);
  _objc_release(in_stack_000002a8);
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000290);
  _objc_release(in_stack_00000288);
  _objc_release(in_stack_00000278);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f0);
  _objc_release(param_71);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_17);
  _objc_release(param_3);
  _objc_release(param_25);
  _objc_release(param_23);
  _objc_release(in_stack_00000320);
  _objc_release(in_stack_00000318);
  _objc_release(param_52);
  _objc_release(in_stack_00000310);
  _objc_release(in_stack_00000308);
  _objc_release(in_stack_00000300);
  _objc_release(in_stack_000002f8);
  _objc_release(param_24);
  _objc_release(param_56);
  _objc_release(param_16);
  _objc_release(in_stack_000002f0);
  _objc_release(in_stack_000002e8);
  _objc_release(in_stack_000002e0);
  _objc_release(in_stack_00000280);
  _objc_release(param_27);
  _objc_release(in_stack_00000248);
  _objc_release(param_44);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_000001f8);
  _objc_release(param_70);
  _objc_release(param_28);
  _objc_release(param_2);
  _objc_release(param_6);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(in_stack_000002b8);
  _objc_release(in_stack_000002b0);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_36);
  _objc_release(param_63);
  _objc_release(param_60);
  _objc_release(param_1);
  _objc_release(param_33);
  _objc_release(param_18);
  _objc_release(param_26);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1069014a0; end: 1069032e3;  */

void FUN_1069014a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,long param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  byte bVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined1 *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined *puVar42;
  long lVar43;
  undefined1 *puVar44;
  long lVar45;
  long lVar46;
  undefined1 *puVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  undefined1 *puVar52;
  undefined *puVar53;
  undefined8 uVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  long lVar88;
  long lVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  ulong uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  long lVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  long lVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  undefined8 uVar127;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined1 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined *puStack_3f8;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_100);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_initWeak(auStack_108,param_11);
  _objc_retain(param_12);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000060);
  puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (*(long *)(param_1 + 0x20) == 0) {
    puStack_3f8 = (undefined *)0x0;
  }
  else {
    puStack_3f8 = PTR_PTR_1126cc570;
    _objc_alloc();
    func_0x00010c02ec00();
    uVar23 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980(puStack_3f8);
    _objc_release(uVar23);
    func_0x00010befa120(puVar22);
  }
  uVar24 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = auStack_100;
  _objc_loadWeakRetained();
  uVar28 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = *(undefined8 *)(param_1 + 0x68);
  puVar29 = PTR_PTR_1126c5b38;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + 0x70);
  uVar15 = *(undefined8 *)(param_1 + 0x78);
  uVar59 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar16 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar17 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uVar18 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar19 = *(undefined8 *)(param_1 + 0xb8);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  uVar40 = *(undefined8 *)(param_1 + 200);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  uVar39 = *(undefined8 *)(param_1 + 0xd8);
  uVar7 = *(undefined8 *)(param_1 + 0xe0);
  uVar38 = *(undefined8 *)(param_1 + 0xe8);
  uVar8 = *(undefined8 *)(param_1 + 0xf0);
  uVar36 = *(undefined8 *)(param_1 + 0xf8);
  uVar9 = *(undefined8 *)(param_1 + 0x100);
  uVar60 = *(undefined8 *)(param_1 + 0x108);
  uVar10 = *(undefined8 *)(param_1 + 0x110);
  uVar61 = *(undefined8 *)(param_1 + 0x118);
  uVar11 = *(undefined8 *)(param_1 + 0x120);
  uVar62 = *(undefined8 *)(param_1 + 0x128);
  uVar12 = *(undefined8 *)(param_1 + 0x130);
  uVar63 = *(undefined8 *)(param_1 + 0x138);
  uVar13 = *(undefined8 *)(param_1 + 0x140);
  uVar64 = *(undefined8 *)(param_1 + 0x148);
  uVar14 = *(undefined8 *)(param_1 + 0x150);
  uVar65 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar27;
  puVar53 = puVar29;
  func_0x000107204f20(puVar27,param_8,uVar28,0,uVar58,param_9,0,0,3,param_10,1,4,4,0,puVar29,param_7
                      ,param_6,uVar23,uVar15,uVar59,uVar1,uVar16,&UNK_10796d390,&UNK_10796f9f4,uVar2
                      ,0,uVar17,&UNK_10795e4a0,uVar3,uVar18,uVar4,uVar19,uVar5,uVar40,0,uVar6,
                      in_stack_00000040,uVar39,uVar7,uVar38,uVar8,uVar36,uVar9,uVar60,uVar10,uVar61,
                      uVar11,uVar62,uVar12,in_stack_00000058,param_5,0,uVar63,0,in_stack_00000068,
                      in_stack_00000060,uVar13,uVar64,uVar14,uVar65,0,0,
                      *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
                      *(undefined8 *)(param_1 + 0x30),uVar24,*(undefined8 *)(param_1 + 0x170),uVar25
                      ,uVar26,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar65);
  _objc_release(puVar29);
  _objc_release(uVar28);
  _objc_release(puVar27);
  _objc_retain(puVar30);
  puVar31 = puVar30;
  func_0x00010010fab4(puVar30,PTR_DAT_1126a5260);
  puVar27 = puVar30;
  if ((int)puVar31 == 0) {
    puVar27 = (undefined1 *)0x0;
  }
  _objc_retain(puVar27);
  _objc_release(puVar30);
  if (puVar27 != (undefined1 *)0x0) {
    func_0x00010befa120(puVar22);
  }
  lVar32 = *(long *)(param_1 + 0x1b0);
  func_0x00010c0eb200();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010bf57780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  _objc_release(lVar32);
  lVar33 = lVar34;
  func_0x00010c0f63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar33;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar33);
  if (lVar32 != 0) {
    lVar33 = lVar34;
    func_0x00010c0f63a0(lVar34);
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar33;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar22);
    _objc_release(lVar32);
    _objc_release(lVar33);
  }
  uVar60 = *(undefined8 *)(param_1 + 0x148);
  uVar61 = *(undefined8 *)(param_1 + 0x40);
  puVar31 = auStack_100;
  _objc_loadWeakRetained();
  uVar62 = *(undefined8 *)(param_1 + 0x68);
  uVar63 = *(undefined8 *)(param_1 + 0xc0);
  puVar35 = auStack_108;
  _objc_loadWeakRetained();
  uVar64 = *(undefined8 *)(param_1 + 0x60);
  uVar65 = *(undefined8 *)(param_1 + 0x158);
  uVar28 = *(undefined8 *)(param_1 + 0xb8);
  uVar58 = *(undefined8 *)(param_1 + 200);
  uVar23 = *(undefined8 *)(param_1 + 0x1b8);
  uVar10 = *(undefined8 *)(param_1 + 0x1c0);
  uVar59 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  uVar11 = *(undefined8 *)(param_1 + 0x1d0);
  uVar66 = *(undefined8 *)(param_1 + 0x1a8);
  uVar67 = *(undefined8 *)(param_1 + 0x168);
  lVar32 = lVar34;
  func_0x00010c0f6380();
  _objc_retainAutoreleasedReturnValue();
  uVar68 = *(undefined8 *)(param_1 + 0x28);
  uVar125 = *(undefined8 *)(param_1 + 0x130);
  lVar33 = *(long *)(param_1 + 0x1d8);
  uVar12 = *(undefined8 *)(param_1 + 0x1e0);
  uVar2 = *(undefined8 *)(param_1 + 0x1e8);
  uVar13 = *(undefined8 *)(param_1 + 0x1f0);
  uVar126 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x1f8);
  uVar20 = *(ulong *)(param_1 + 0x200);
  uVar127 = *(undefined8 *)(param_1 + 0x58);
  uVar69 = *(undefined8 *)(param_1 + 0x208);
  uVar70 = *(undefined8 *)(param_1 + 0x210);
  uVar71 = *(undefined8 *)(param_1 + 0x218);
  uVar72 = *(undefined8 *)(param_1 + 0x220);
  uVar73 = *(undefined8 *)(param_1 + 0x228);
  uVar74 = *(undefined8 *)(param_1 + 0x230);
  uVar75 = *(undefined8 *)(param_1 + 0x238);
  uVar76 = *(undefined8 *)(param_1 + 0x120);
  uVar36 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bfe9f40();
  _objc_retainAutoreleasedReturnValue();
  uVar124 = *(undefined8 *)(param_1 + 0x240);
  uVar77 = *(undefined8 *)(param_1 + 0x248);
  uVar78 = *(undefined8 *)(param_1 + 0x250);
  uVar79 = *(undefined8 *)(param_1 + 600);
  uVar80 = *(undefined8 *)(param_1 + 0x260);
  uVar81 = *(undefined8 *)(param_1 + 0x268);
  uVar82 = *(undefined8 *)(param_1 + 0x270);
  uVar83 = *(undefined8 *)(param_1 + 400);
  uVar84 = *(undefined8 *)(param_1 + 0x278);
  uVar85 = *(undefined8 *)(param_1 + 0x280);
  uVar86 = *(undefined8 *)(param_1 + 0x288);
  uVar87 = *(undefined8 *)(param_1 + 0x160);
  lVar88 = *(long *)(param_1 + 0x290);
  lVar89 = *(long *)(param_1 + 0x298);
  uVar90 = *(undefined8 *)(param_1 + 0x2a0);
  uVar91 = *(undefined8 *)(param_1 + 0x2a8);
  uVar92 = *(undefined8 *)(param_1 + 0x2b0);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar93 = *(undefined8 *)(param_1 + 0x2b8);
  uVar94 = *(undefined8 *)(param_1 + 0x2c0);
  uVar95 = *(undefined8 *)(param_1 + 0x2c8);
  uVar96 = *(undefined8 *)(param_1 + 0x2d0);
  uVar97 = *(undefined8 *)(param_1 + 0x2d8);
  uVar98 = *(undefined8 *)(param_1 + 0x2e0);
  uVar99 = *(undefined8 *)(param_1 + 0x2e8);
  uVar100 = *(ulong *)(param_1 + 0x2f0);
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  uVar15 = *(undefined8 *)(param_1 + 0xe0);
  uVar101 = *(undefined8 *)(param_1 + 0x2f8);
  uVar102 = *(undefined8 *)(param_1 + 0x300);
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  uVar16 = *(undefined8 *)(param_1 + 0xf8);
  uVar103 = *(undefined8 *)(param_1 + 0x70);
  uVar104 = *(undefined8 *)(param_1 + 0x128);
  uVar105 = *(undefined8 *)(param_1 + 0x308);
  uVar106 = *(undefined8 *)(param_1 + 0x310);
  uVar107 = *(undefined8 *)(param_1 + 0x318);
  uVar108 = *(undefined8 *)(param_1 + 800);
  uVar109 = *(undefined8 *)(param_1 + 0x328);
  uVar110 = *(undefined8 *)(param_1 + 0x330);
  lVar111 = *(long *)(param_1 + 0x338);
  uVar112 = *(undefined8 *)(param_1 + 0x340);
  uVar113 = *(undefined8 *)(param_1 + 0x348);
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  uVar114 = *(undefined8 *)(param_1 + 0x350);
  uVar115 = *(undefined8 *)(param_1 + 0x358);
  uVar116 = *(undefined8 *)(param_1 + 0x108);
  uVar117 = *(undefined8 *)(param_1 + 0x360);
  uVar118 = *(undefined8 *)(param_1 + 0x368);
  uVar8 = *(undefined8 *)(param_1 + 0x138);
  uVar18 = *(undefined8 *)(param_1 + 0x140);
  uVar119 = *(undefined8 *)(param_1 + 0x1a0);
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  uVar19 = *(undefined8 *)(param_1 + 0xb0);
  uVar120 = *(undefined8 *)(param_1 + 0x370);
  uVar121 = *(undefined8 *)(param_1 + 0x378);
  uVar122 = *(undefined8 *)(param_1 + 0x380);
  lVar123 = *(long *)(param_1 + 0x388);
  _objc_retain(uVar60);
  _objc_retain(uVar61);
  _objc_initWeak(auStack_70,puVar31);
  _objc_retain(uVar62);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(uVar63);
  _objc_initWeak(auStack_78,puVar35);
  _objc_retain(uVar64);
  _objc_retain(uVar65);
  _objc_retain(uVar28);
  _objc_retain(param_12);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(uVar58);
  _objc_retain(uVar23);
  _objc_retain(uVar10);
  _objc_retain(uVar59);
  _objc_retain(uVar1);
  _objc_retain(uVar11);
  _objc_retain(uVar66);
  _objc_retain(uVar67);
  _objc_retain(lVar32);
  _objc_retain(uVar68);
  _objc_retain(uVar125);
  _objc_retain(lVar33);
  _objc_retain(uVar12);
  _objc_retain(uVar2);
  _objc_retain(uVar13);
  _objc_retain(uVar126);
  _objc_retain(uVar3);
  _objc_retain(uVar20);
  _objc_retain(uVar127);
  _objc_retain(uVar69);
  _objc_retain(uVar70);
  _objc_retain(uVar71);
  _objc_retain(uVar72);
  _objc_retain(uVar73);
  _objc_retain(uVar74);
  _objc_retain(uVar75);
  _objc_retain(uVar76);
  _objc_retain(uVar36);
  _objc_retain(uVar124);
  _objc_retain(uVar77);
  _objc_retain(uVar78);
  _objc_retain(uVar79);
  _objc_retain(uVar80);
  _objc_retain(uVar81);
  _objc_retain(uVar82);
  _objc_retain(uVar83);
  _objc_retain(uVar84);
  _objc_retain(uVar85);
  _objc_retain(uVar86);
  _objc_retain(uVar87);
  _objc_retain(lVar88);
  _objc_retain(lVar89);
  _objc_retain(uVar90);
  _objc_retain(uVar4);
  _objc_retain(uVar91);
  _objc_retain(uVar92);
  _objc_retain(uVar14);
  _objc_retain(uVar93);
  _objc_retain(uVar94);
  _objc_retain(uVar95);
  _objc_retain(uVar96);
  _objc_retain(uVar97);
  _objc_retain(uVar98);
  _objc_retain(uVar5);
  _objc_retain(uVar99);
  _objc_retain(uVar100);
  _objc_retain(uVar15);
  _objc_retain(uVar101);
  _objc_retain(uVar102);
  _objc_retain(uVar19);
  _objc_retain(param_8);
  _objc_retain(puVar30);
  _objc_retain(uVar16);
  _objc_retain(uVar6);
  _objc_retain(uVar103);
  _objc_retain(uVar104);
  _objc_retain(uVar105);
  _objc_retain(uVar106);
  _objc_retain(uVar107);
  _objc_retain(uVar108);
  _objc_retain(in_stack_00000040);
  _objc_retain(uVar109);
  _objc_retain(uVar110);
  _objc_retain(lVar111);
  _objc_retain(in_stack_00000060);
  _objc_retain(uVar8);
  _objc_retain(uVar112);
  _objc_retain(uVar113);
  _objc_retain(uVar7);
  _objc_retain(uVar17);
  _objc_retain(uVar114);
  _objc_retain(uVar115);
  _objc_retain(uVar116);
  _objc_retain(uVar117);
  _objc_retain(uVar118);
  _objc_retain(uVar18);
  _objc_retain(uVar119);
  _objc_retain(uVar9);
  _objc_retain(uVar120);
  _objc_retain(uVar121);
  _objc_retain(uVar122);
  _objc_retain(lVar123);
  puVar37 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar29 = PTR_PTR_1126cc578;
  _objc_alloc();
  uVar40 = uVar127;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c800();
  func_0x00010befa120(puVar37);
  _objc_release(puVar29);
  _objc_release(uVar40);
  puVar29 = PTR_PTR_1126cc590;
  _objc_alloc(PTR_PTR_1126cc590);
  uVar38 = uVar82;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar38;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar39;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ec40();
  func_0x00010befa120(puVar37);
  _objc_release(puVar29);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  puVar41 = PTR_PTR_1126ae720;
  puVar29 = PTR___NSConcreteStackBlock_11034bd00;
  if (in_stack_00000060 != 0) {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1069039f4;
    puStack_98 = &UNK_1109497a0;
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(uVar114);
    uStack_90 = uVar114;
    _objc_retain(uVar115);
    uStack_88 = uVar115;
    func_0x00010bf11fe0(puVar41);
    _objc_retainAutoreleasedReturnValue();
    puVar42 = PTR_PTR_1126ceea8;
    _objc_alloc(PTR_PTR_1126ceea8);
    func_0x00010c00d120();
    func_0x00010c18b5e0();
    func_0x00010befa120(puVar37);
    _objc_release(puVar42);
    _objc_release(puVar41);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_80);
    if (lVar111 != 0) {
      puVar41 = PTR_PTR_1126cc5c8;
      _objc_alloc(PTR_PTR_1126cc5c8);
      func_0x00010c002d80();
      func_0x00010c18b5e0();
      func_0x00010befa120(puVar37);
      _objc_release(puVar41);
    }
  }
  if (param_10 == 7) {
    puVar41 = PTR_PTR_1126cc5d0;
    _objc_alloc(PTR_PTR_1126cc5d0);
    func_0x00010c0330e0();
    func_0x00010befa120(puVar37);
    _objc_release(puVar41);
  }
  lVar43 = lVar33;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = auStack_78;
  _objc_loadWeakRetained(puVar44);
  lVar45 = lVar43;
  func_0x00010bf556c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar44);
  _objc_release(lVar43);
  if (lVar45 != 0) {
    func_0x00010befa120(puVar37);
  }
  lVar43 = lVar123;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = lVar43;
  func_0x00010bf57b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar43);
  if (lVar46 != 0) {
    func_0x00010befa120(puVar37);
  }
  puVar47 = auStack_70;
  _objc_loadWeakRetained();
  uVar40 = uVar106;
  func_0x00010c258480(uVar106);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar127;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = puVar47;
  func_0x00010720435c(puVar47,0,uVar62,0,0,param_9,3,param_10,1,4,4,0,0,0xffffffffffffffff,
                      CONCAT62((uint6)((ulong)puVar53 >> 0x10) & 0xffffffffff00,0x100),param_7,
                      uVar68,0,uVar5,uVar15,uVar117,uVar16,uVar63,uVar76,uVar116,uVar64,uVar83,uVar7
                      ,in_stack_00000040,uVar18,uVar67,uVar119,uVar39,uVar9,uVar61,uVar66,uVar28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar39);
  _objc_release(uVar40);
  _objc_release(puVar47);
  func_0x00010befa120(puVar37);
  puStack_d8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  puStack_f8 = puVar29;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x106903a74;
  puStack_e0 = &UNK_110949990;
  puStack_c8 = puStack_d8;
  func_0x00010c0c0500(0);
  uVar48 = uVar100;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar48;
  func_0x00010bf8f100();
  if ((uVar49 & 1) == 0) {
    bVar21 = *(byte *)(puStack_c8 + 3);
    _objc_release(uVar48);
    if ((bVar21 & 1) != 0) goto LAB_106902714;
    if (param_12 != 0) {
      _objc_retain(param_12);
      puVar29 = PTR_PTR_1126b8e08;
      _objc_opt_class(PTR_PTR_1126b8e08);
      _objc_opt_isKindOfClass(param_12,puVar29);
      _objc_release(param_12);
    }
    uVar49 = uVar20;
    func_0x00010bef3d60();
    _objc_retainAutoreleasedReturnValue();
    uVar50 = uVar49;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar48 = uVar50;
    func_0x00010bf55e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar29);
    _objc_release(uVar50);
    _objc_release(uVar49);
    if (uVar48 == 0) {
      uVar40 = uVar98;
      func_0x00010c269d40(uVar98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0640();
      _objc_release(uVar40);
    }
    else {
      func_0x00010befa120(puVar37);
    }
    uVar49 = uVar20;
    func_0x00010bef3d60();
    _objc_retainAutoreleasedReturnValue();
    uVar50 = uVar49;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar51 = uVar50;
    func_0x00010bf54660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar50);
    _objc_release(uVar49);
    if (uVar51 == 0) {
      uVar40 = uVar98;
      func_0x00010c269d40(uVar98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0640();
      _objc_release(uVar40);
    }
    else {
      func_0x00010befa120(puVar37);
    }
    _objc_release(uVar51);
  }
  _objc_release(uVar48);
LAB_106902714:
  puVar29 = PTR_PTR_1126cc580;
  _objc_alloc();
  puVar52 = auStack_70;
  _objc_loadWeakRetained(puVar52);
  puVar47 = puVar52;
  func_0x00010c11b1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c7a0();
  _objc_release(puVar47);
  _objc_release(puVar52);
  puVar53 = PTR_PTR_1126cc588;
  _objc_alloc(PTR_PTR_1126cc588);
  puVar47 = auStack_70;
  _objc_loadWeakRetained(puVar47);
  puVar41 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar75;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar36;
  func_0x00010bfe9f20();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar85;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = uVar127;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e9a0(puVar53);
  _objc_release(uVar54);
  _objc_release(uVar38);
  _objc_release(uVar39);
  _objc_release(uVar40);
  _objc_release(puVar41);
  _objc_release(puVar47);
  func_0x00010befa120(puVar37);
  puVar41 = PTR_PTR_1126ce9c0;
  _objc_alloc(PTR_PTR_1126ce9c0);
  uVar40 = uVar58;
  func_0x00010c269d40(uVar58);
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a7a0(puVar41);
  _objc_release(puVar42);
  _objc_release(uVar40);
  uVar40 = uVar61;
  func_0x00010c269d40(uVar61);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(puVar41);
  _objc_release(uVar40);
  func_0x00010befa120(puVar37);
  lVar43 = lVar88;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar43;
  func_0x00010c297a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar43);
  lVar43 = lVar89;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar43;
  func_0x00010c297aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar43);
  puVar52 = auStack_70;
  _objc_loadWeakRetained(puVar52);
  puVar42 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar127;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar92;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = puVar52;
  func_0x000106903db4(puVar52,param_10,param_7,uVar63,uVar10,uVar59,uVar1,uVar11,puVar42,uVar124,
                      uVar72,uVar90,uVar74,uVar75,uVar76,uVar68,uVar4,uVar40,uVar2,uVar58,uVar86,
                      uVar61,uVar87,uVar77,uVar67,uVar78,uVar79,uVar66,uVar102,uVar23,uVar39,uVar13,
                      uVar83,uVar91,uVar81,uVar5,uVar15,uVar14,uVar101,uVar16,uVar6,uVar104,uVar105,
                      uVar106,uVar109,uVar110,in_stack_00000060,in_stack_00000068,uVar121,uVar122);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar39);
  _objc_release(uVar40);
  _objc_release(puVar42);
  _objc_release(puVar52);
  func_0x00010befa120(puVar37);
  if (lVar55 != 0) {
    func_0x00010befa120(puVar37);
  }
  if (lVar56 != 0) {
    func_0x00010befa120(puVar37);
  }
  if (param_3 != 0) {
    lVar43 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    lVar57 = lVar43;
    func_0x00010c0720c0();
    _objc_release(lVar43);
    if ((int)lVar57 != 0) {
      puVar42 = PTR_PTR_1126cc5b0;
      _objc_alloc(PTR_PTR_1126cc5b0);
      uVar40 = uVar125;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar39 = uVar40;
      func_0x00010c24afa0();
      _objc_retainAutoreleasedReturnValue();
      uVar38 = uVar125;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff71e0(puVar42);
      func_0x00010befa120(puVar37);
      _objc_release(puVar42);
      _objc_release(uVar38);
      _objc_release(uVar39);
      _objc_release(uVar40);
      puVar42 = PTR_PTR_1126ceeb8;
      _objc_alloc(PTR_PTR_1126ceeb8);
      puVar52 = auStack_70;
      _objc_loadWeakRetained(puVar52);
      func_0x00010c05e4a0(puVar42);
      _objc_release(puVar52);
      func_0x00010befa120(puVar37);
      _objc_release(puVar42);
    }
  }
  puVar42 = puVar37;
  func_0x00010bf51e00(puVar37);
  _objc_release(puVar47);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(puVar41);
  _objc_release(puVar53);
  _objc_release(puVar29);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(puVar44);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(puVar37);
  _objc_release(lVar123);
  _objc_release(uVar122);
  _objc_release(uVar121);
  _objc_release(uVar120);
  _objc_release(uVar9);
  _objc_release(uVar119);
  _objc_release(uVar18);
  _objc_release(uVar118);
  _objc_release(uVar117);
  _objc_release(uVar116);
  _objc_release(uVar115);
  _objc_release(uVar114);
  _objc_release(uVar17);
  _objc_release(uVar7);
  _objc_release(uVar113);
  _objc_release(uVar112);
  _objc_release(uVar8);
  _objc_release(in_stack_00000060);
  _objc_release(lVar111);
  _objc_release(uVar110);
  _objc_release(uVar109);
  _objc_release(in_stack_00000040);
  _objc_release(uVar108);
  _objc_release(uVar107);
  _objc_release(uVar106);
  _objc_release(uVar105);
  _objc_release(uVar104);
  _objc_release(uVar103);
  _objc_release(uVar6);
  _objc_release(uVar16);
  _objc_release(puVar30);
  _objc_release(param_8);
  _objc_release(uVar19);
  _objc_release(uVar102);
  _objc_release(uVar101);
  _objc_release(uVar15);
  _objc_release(uVar100);
  _objc_release(uVar99);
  _objc_release(uVar5);
  _objc_release(uVar98);
  _objc_release(uVar97);
  _objc_release(uVar96);
  _objc_release(uVar95);
  _objc_release(uVar94);
  _objc_release(uVar93);
  _objc_release(uVar14);
  _objc_release(uVar92);
  _objc_release(uVar91);
  _objc_release(uVar4);
  _objc_release(uVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(uVar87);
  _objc_release(uVar86);
  _objc_release(uVar85);
  _objc_release(uVar84);
  _objc_release(uVar83);
  _objc_release(uVar82);
  _objc_release(uVar81);
  _objc_release(uVar80);
  _objc_release(uVar79);
  _objc_release(uVar78);
  _objc_release(uVar77);
  _objc_release(uVar124);
  _objc_release(uVar36);
  _objc_release(uVar76);
  _objc_release(uVar75);
  _objc_release(uVar74);
  _objc_release(uVar73);
  _objc_release(uVar72);
  _objc_release(uVar71);
  _objc_release(uVar70);
  _objc_release(uVar69);
  _objc_release(uVar127);
  _objc_release(uVar20);
  _objc_release(uVar3);
  _objc_release(uVar126);
  _objc_release(uVar13);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(lVar33);
  _objc_release(uVar125);
  _objc_release(uVar68);
  _objc_release(lVar32);
  _objc_release(uVar67);
  _objc_release(uVar66);
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar59);
  _objc_release(uVar10);
  _objc_release(uVar23);
  _objc_release(uVar58);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(param_12);
  _objc_release(uVar28);
  _objc_release(uVar65);
  _objc_release(uVar64);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar63);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar62);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar61);
  _objc_release(uVar60);
  func_0x00010befa160(puVar22);
  _objc_release(puVar42);
  _objc_release(uVar36);
  _objc_release(lVar32);
  _objc_release(puVar35);
  _objc_release(puVar31);
  puVar29 = puVar22;
  func_0x00010bf51e00(puVar22);
  _objc_release(lVar34);
  _objc_release(puVar27);
  _objc_release(puVar30);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(puStack_3f8);
  _objc_release(puVar22);
  _objc_release(in_stack_00000060);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(param_12);
  _objc_destroyWeak(auStack_108);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 1069032e4; end: 1069039f3;  */

void FUN_1069032e4(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  _objc_retain(*(undefined8 *)(param_2 + 0x80));
  _objc_retain(*(undefined8 *)(param_2 + 0x88));
  _objc_retain(*(undefined8 *)(param_2 + 0x90));
  _objc_retain(*(undefined8 *)(param_2 + 0x98));
  _objc_retain(*(undefined8 *)(param_2 + 0xa0));
  _objc_retain(*(undefined8 *)(param_2 + 0xa8));
  _objc_retain(*(undefined8 *)(param_2 + 0xb0));
  _objc_retain(*(undefined8 *)(param_2 + 0xb8));
  _objc_retain(*(undefined8 *)(param_2 + 0xc0));
  _objc_retain(*(undefined8 *)(param_2 + 200));
  _objc_retain(*(undefined8 *)(param_2 + 0xd0));
  _objc_retain(*(undefined8 *)(param_2 + 0xd8));
  _objc_retain(*(undefined8 *)(param_2 + 0xe0));
  _objc_retain(*(undefined8 *)(param_2 + 0xe8));
  _objc_retain(*(undefined8 *)(param_2 + 0xf0));
  _objc_retain(*(undefined8 *)(param_2 + 0xf8));
  _objc_retain(*(undefined8 *)(param_2 + 0x100));
  _objc_retain(*(undefined8 *)(param_2 + 0x108));
  _objc_retain(*(undefined8 *)(param_2 + 0x110));
  _objc_retain(*(undefined8 *)(param_2 + 0x118));
  _objc_retain(*(undefined8 *)(param_2 + 0x120));
  _objc_retain(*(undefined8 *)(param_2 + 0x128));
  _objc_retain(*(undefined8 *)(param_2 + 0x130));
  _objc_retain(*(undefined8 *)(param_2 + 0x138));
  _objc_retain(*(undefined8 *)(param_2 + 0x140));
  _objc_retain(*(undefined8 *)(param_2 + 0x148));
  _objc_retain(*(undefined8 *)(param_2 + 0x150));
  _objc_retain(*(undefined8 *)(param_2 + 0x158));
  _objc_retain(*(undefined8 *)(param_2 + 0x160));
  _objc_retain(*(undefined8 *)(param_2 + 0x168));
  _objc_retain(*(undefined8 *)(param_2 + 0x170));
  _objc_retain(*(undefined8 *)(param_2 + 0x178));
  _objc_retain(*(undefined8 *)(param_2 + 0x180));
  _objc_retain(*(undefined8 *)(param_2 + 0x188));
  _objc_retain(*(undefined8 *)(param_2 + 400));
  _objc_retain(*(undefined8 *)(param_2 + 0x198));
  _objc_retain(*(undefined8 *)(param_2 + 0x1a0));
  _objc_retain(*(undefined8 *)(param_2 + 0x1a8));
  _objc_retain(*(undefined8 *)(param_2 + 0x1b0));
  _objc_retain(*(undefined8 *)(param_2 + 0x1b8));
  _objc_retain(*(undefined8 *)(param_2 + 0x1c0));
  _objc_retain(*(undefined8 *)(param_2 + 0x1c8));
  _objc_retain(*(undefined8 *)(param_2 + 0x1d0));
  _objc_retain(*(undefined8 *)(param_2 + 0x1d8));
  _objc_retain(*(undefined8 *)(param_2 + 0x1e0));
  _objc_retain(*(undefined8 *)(param_2 + 0x1e8));
  _objc_retain(*(undefined8 *)(param_2 + 0x1f0));
  _objc_retain(*(undefined8 *)(param_2 + 0x1f8));
  _objc_retain(*(undefined8 *)(param_2 + 0x200));
  _objc_retain(*(undefined8 *)(param_2 + 0x208));
  _objc_retain(*(undefined8 *)(param_2 + 0x210));
  _objc_retain(*(undefined8 *)(param_2 + 0x218));
  _objc_retain(*(undefined8 *)(param_2 + 0x220));
  _objc_retain(*(undefined8 *)(param_2 + 0x228));
  _objc_retain(*(undefined8 *)(param_2 + 0x230));
  _objc_retain(*(undefined8 *)(param_2 + 0x238));
  _objc_retain(*(undefined8 *)(param_2 + 0x240));
  _objc_retain(*(undefined8 *)(param_2 + 0x248));
  _objc_retain(*(undefined8 *)(param_2 + 0x250));
  _objc_retain(*(undefined8 *)(param_2 + 600));
  _objc_retain(*(undefined8 *)(param_2 + 0x260));
  _objc_retain(*(undefined8 *)(param_2 + 0x268));
  _objc_retain(*(undefined8 *)(param_2 + 0x270));
  _objc_retain(*(undefined8 *)(param_2 + 0x278));
  _objc_retain(*(undefined8 *)(param_2 + 0x280));
  _objc_retain(*(undefined8 *)(param_2 + 0x288));
  _objc_retain(*(undefined8 *)(param_2 + 0x290));
  _objc_retain(*(undefined8 *)(param_2 + 0x298));
  _objc_retain(*(undefined8 *)(param_2 + 0x2a0));
  _objc_retain(*(undefined8 *)(param_2 + 0x2a8));
  _objc_retain(*(undefined8 *)(param_2 + 0x2b0));
  _objc_retain(*(undefined8 *)(param_2 + 0x2b8));
  _objc_retain(*(undefined8 *)(param_2 + 0x2c0));
  _objc_retain(*(undefined8 *)(param_2 + 0x2c8));
  _objc_retain(*(undefined8 *)(param_2 + 0x2d0));
  _objc_retain(*(undefined8 *)(param_2 + 0x2d8));
  _objc_retain(*(undefined8 *)(param_2 + 0x2e0));
  _objc_retain(*(undefined8 *)(param_2 + 0x2e8));
  _objc_retain(*(undefined8 *)(param_2 + 0x2f0));
  _objc_retain(*(undefined8 *)(param_2 + 0x2f8));
  _objc_retain(*(undefined8 *)(param_2 + 0x300));
  _objc_retain(*(undefined8 *)(param_2 + 0x308));
  _objc_retain(*(undefined8 *)(param_2 + 0x310));
  _objc_retain(*(undefined8 *)(param_2 + 0x318));
  _objc_retain(*(undefined8 *)(param_2 + 800));
  _objc_retain(*(undefined8 *)(param_2 + 0x328));
  _objc_retain(*(undefined8 *)(param_2 + 0x330));
  _objc_retain(*(undefined8 *)(param_2 + 0x338));
  _objc_retain(*(undefined8 *)(param_2 + 0x340));
  _objc_retain(*(undefined8 *)(param_2 + 0x348));
  _objc_retain(*(undefined8 *)(param_2 + 0x350));
  _objc_retain(*(undefined8 *)(param_2 + 0x358));
  _objc_retain(*(undefined8 *)(param_2 + 0x360));
  _objc_retain(*(undefined8 *)(param_2 + 0x368));
  _objc_retain(*(undefined8 *)(param_2 + 0x370));
  _objc_retain(*(undefined8 *)(param_2 + 0x378));
  _objc_retain(*(undefined8 *)(param_2 + 0x380));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x388));
  return;
}



/* Entry: 1069039f4; end: 106903a53;  */

void FUN_1069039f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ceea0;
  _objc_alloc(PTR_PTR_1126ceea0);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c05dae0(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106903a54; end: 106903a97;  */

void FUN_106903a54(void)

{
  return;
}



/* Entry: 106903a98; end: 106904433;  */

void FUN_106903a98(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar9;
  func_0x00010c0720c0();
  if ((int)puVar1 != 0) {
    _objc_release(puVar9);
    puVar9 = (undefined *)0x0;
  }
  puVar1 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  puVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b04c8;
  _objc_alloc(PTR_PTR_1126b04c8);
  puVar4 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aa40(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b0308;
    _objc_alloc(PTR_PTR_1126b0308);
    puVar4 = puVar1;
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045000(puVar1);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar4 = puVar1;
    func_0x00010c15fb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c1fd880(puVar1);
    }
  }
  lVar8 = param_2;
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    func_0x00010c20c240(puVar1);
  }
  lVar8 = param_3;
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    func_0x00010c1e3bc0(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106904434; end: 1069044a7; -[SCDiscoverFeedOperaPluginCreator initWithContentPluginServices:] */

undefined1 * FUN_106904434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3c48;
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



/* Entry: 1069044a8; end: 1069044b7; -[SCDiscoverFeedOperaPluginCreator discoverStoryCommonPluginsWithSectionKey:navigationStyle:pageType:pageSessionId:storySessionId:storiesPlaybackDataProvider:startingEntryEvent:broadcastViewLocation:contextPluginDelegate:initialGroupDataModel:interactionContext:source:storyLoggingFieldsOverrideDict:debugViewCallback:baseView:isExpandedFeedController:contentRemovalDelegate:triggeringSection:] */

void FUN_1069044a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_discoverStoryCommonPluginsWithSe_1125be438);
  return;
}



/* Entry: 1069044b8; end: 1069044bf; -[SCDiscoverFeedOperaPluginCreator spotlightStoryCommonPluginsWithSectionKey:navigationStyle:pageType:pageSessionId:storySessionId:storiesPlaybackDataProvider:startingEntryEvent:broadcastViewLocation:contextPluginDelegate:initialGroupDataModel:interactionContext:source:storyLoggingFieldsOverrideDict:debugViewCallback:contentRemovalDelegate:loggingSourceLocation:triggeringSection:] */

void FUN_1069044b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24c4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_spotlightStoryCommonPluginsWithS_112670b58);
  return;
}



/* Entry: 1069044c0; end: 106904767; -[SCDiscoverFeedOperaPluginCreator friendAutoAdvanceActionHandlerCommonPluginsWithRankedSummaryData:navigationStyle:storySessionId:broadcastViewLocation:source:layout:storyLoggingFieldsOverrideDict:firstStoryId:storiesPlaybackDataProvider:pageType:pageSessionId:startingEntryEvent:contextPluginDelegate:debugViewCallback:interactionContext:initialClientId:sectionKey:initialGroupDataModel:commerceOriginType:loggingSourceLocation:includeNonFriendStoryManagementPlugins:isJoinedPlayback:isExpandedFeedController:triggeringSection:p2pOptions:managedPlaybackOptions:contentRemovalDelegate:viewLocationSpecificConfigurations:] */

void FUN_1069044c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000020);
  _objc_initWeak(auStack_70,in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000088);
  _objc_initWeak(auStack_78,in_stack_00000090);
  _objc_retain(in_stack_00000098);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = auStack_70;
  _objc_loadWeakRetained();
  puVar2 = auStack_78;
  _objc_loadWeakRetained();
  func_0x00010bfb7ba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_stack_00000098);
  _objc_destroyWeak(auStack_78);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000080);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000038);
  _objc_destroyWeak(auStack_70);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106904768; end: 10690476f; -[SCDiscoverFeedOperaPluginCreator defaultPublisherOperaPluginWithViewLocation:startingEntryEvent:storySessionId:triggeringSection:] */

void FUN_106904768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6a0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_defaultPublisherOperaPluginWithV_1125b81d0);
  return;
}



/* Entry: 106904770; end: 106904777; -[SCDiscoverFeedOperaPluginCreator discoverFeedStoriesLoggingOperaPluginWithSource:layout:interactionContext:storyLoggingFieldsOverrideDict:navigationStyle:loggingSourceLocation:pageTypeToOverride:viewLocation:triggeringSection:] */

void FUN_106904770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf81f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_discoverFeedStoriesLoggingOperaP_1125be188);
  return;
}



/* Entry: 106904778; end: 1069047b7; -[SCDiscoverFeedOperaPluginCreator storyManagementPluginWithStoryId:storyType:variant:playSingleSnap:showManagementOnOpen:isPendingSnapProSnap:operaPageProvider:] */

void FUN_106904778(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x00010c25a300(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069047b8; end: 1069047ff; -[SCDiscoverFeedOperaPluginCreator myStoryPluginWithMyStoryPlaybackSequence:storiesOperaModel:serverIdToViewState:playbackDataProvider:viewLocation:startingClientId:showManagementOnOpen:isForSingleSnap:isForSpotlightManagement:isSpotlightSnap:isPendingSnapProSnap:isManagedPublicStory:operaPageProvider:p2pOptions:shouldAddSharedStoryOnboardingPlugin:shouldAddSpotlightPluginsForCommunityStory:managedPlaybackOptions:triggeringSection:pageType:] */

void FUN_1069047b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_myStoryPluginWithMyStoryPlayback_112612d40);
  return;
}



/* Entry: 106904800; end: 10690480b; -[SCDiscoverFeedOperaPluginCreator remoteStoriesPluginWithStoriesPlaybackDataProvider:broadcastViewLocation:startingEntryEvent:triggeringSection:pageType:storySessionId:playbackViewingType:storyLoggingFieldsOverrideDict:spotlightEnabled:] */

undefined * FUN_106904800(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10690480c; end: 106904813; -[SCDiscoverFeedOperaPluginCreator managedMassSnapPlaybackPlugins] */

void FUN_10690480c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b7f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_managedMassSnapPlaybackPlugins_11260b9e8);
  return;
}



/* Entry: 106904814; end: 10690481b; -[SCDiscoverFeedOperaPluginCreator collectionViewAutoPlayOperaPluginsWithOperaViewSize:storiesPlaybackDataProvider:autoPlayLoggingInfo:initialGroupDataModel:] */

void FUN_106904814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf40650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_collectionViewAutoPlayOperaPlugi_1125adb38);
  return;
}



/* Entry: 10690481c; end: 106904827; -[SCDiscoverFeedOperaPluginCreator .cxx_destruct] */

void FUN_10690481c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106904828; end: 106904a27; -[SCDiscoverFeedFavoritePlugin initWithUserSession:sendAndApplyFavoriteRecommendedUpNextRequestBlock:discoverFeedDataFetcher:discoverFeedDataMutator:circumstanceEngine:] */

undefined1 *
FUN_106904828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f3c50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_3);
    uVar7 = param_4;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar7;
    _objc_release(uVar6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x50),param_6);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar7);
    uVar7 = param_7;
    func_0x000108f4a1f0();
    *(char *)((long)puVar1 + 0x68) = (char)uVar7;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar7);
    puVar3 = (undefined1 *)((long)puVar1 + 0x48);
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf009e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined1 **)((long)puVar1 + 0x28) = puVar5;
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bea3d40(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106904a28; end: 106904b07; -[SCDiscoverFeedFavoritePlugin registeredEventsForOperaSession] */

void FUN_106904a28(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  ulong in_x4;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar16 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126c9830;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126b2330;
  puStack_50 = puVar2;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126b2330;
  puStack_48 = puVar20;
  func_0x00010bfaf7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = 3;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar18;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar16);
  _objc_retain(lVar17);
  _objc_retain(in_x4);
  lVar4 = lVar17;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c9830;
  func_0x00010beedca0(PTR_PTR_1126c9830);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)ppuVar16;
  func_0x00010c0720c0();
  _objc_release(puVar20);
  if ((int)puVar5 == 0) {
    puVar20 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)ppuVar16;
    func_0x00010c0720c0();
    _objc_release(puVar20);
    if ((int)puVar5 == 0) {
      puVar20 = PTR_PTR_1126b2330;
      func_0x00010bfaf7a0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined1 *)ppuVar16;
      func_0x00010c0720c0();
      _objc_release(puVar20);
      if ((int)puVar5 == 0) goto LAB_1069052c0;
      func_0x00010be8dc40(puVar2);
      lVar15 = *(long *)(puVar2 + 0x20);
      func_0x00010bf529e0();
      if (lVar15 == 0) goto LAB_1069052c0;
      puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(puVar2 + 0x20);
      _objc_retain();
      func_0x00010bf97ce0(uVar19);
      puVar20 = puVar2 + 0x50;
      _objc_loadWeakRetained(puVar20);
      puVar3 = puVar20;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a480();
      _objc_release(puVar3);
      _objc_release(puVar20);
      func_0x00010c12adc0(*(undefined8 *)(puVar2 + 0x20));
      _objc_release(puVar18);
    }
    else {
      puVar18 = PTR_PTR_1126c9310;
      func_0x00010c259500();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      func_0x00010c08fa60();
      if (puVar20 != (undefined *)0x0) {
        iVar1 = (int)*(undefined8 *)(puVar2 + 8);
        func_0x00010bf4b900();
        if (iVar1 != 0) {
          uVar13 = *(ulong *)(puVar2 + 0x10);
          func_0x00010bf4b900();
          if ((uVar13 & 1) == 0) {
            func_0x00010c12d360(*(undefined8 *)(puVar2 + 8));
            func_0x00010befa120(*(undefined8 *)(puVar2 + 0x10));
            puVar20 = PTR_PTR_1126c9310;
            func_0x00010c259760(PTR_PTR_1126c9310);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c282800();
            _objc_release(puVar20);
            _objc_initWeak(auStack_b8,puVar2);
            puVar2 = puVar2 + 0x48;
            _objc_loadWeakRetained(puVar2);
            puVar20 = puVar2;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar19 = 0x19;
            _dispatch_get_global_queue(0x19,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_c0,auStack_b8);
            func_0x00010c25bae0(puVar20);
            _objc_release(uVar19);
            _objc_release(puVar20);
            _objc_release(puVar2);
            _objc_destroyWeak(auStack_c0);
            _objc_destroyWeak(auStack_b8);
          }
        }
      }
    }
    _objc_release(puVar18);
    goto LAB_1069052c0;
  }
  puVar20 = PTR_PTR_1126b5cb8;
  func_0x00010beedca0(PTR_PTR_1126b5cb8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = in_x4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar20);
  uVar13 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar13 = 0;
  }
  _objc_retain(uVar13);
  _objc_release(uVar6);
  puVar20 = PTR_PTR_1126b5cb8;
  func_0x00010beee760(PTR_PTR_1126b5cb8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = in_x4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar20);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain();
  _objc_release(uVar7);
  puVar20 = PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126c9310;
  func_0x00010c259760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar18;
  func_0x00010c282800();
  _objc_release(puVar18);
  lVar15 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar15;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar10 = lVar15;
    func_0x00010c25a6e0(lVar15);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c25b720();
    lVar12 = lVar4;
    func_0x000107b28474(lVar4,lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    if ((int)lVar12 != 0) {
      _objc_release(puVar20);
      puVar20 = (undefined *)0x0;
    }
  }
  puVar18 = PTR_PTR_1126b5c68;
  func_0x00010bf1f640(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c0720c0();
  if ((int)uVar7 == 0) {
    puVar14 = PTR_PTR_1126b5c68;
    func_0x00010bfa0ee0(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar13;
    func_0x00010c0720c0();
    _objc_release(puVar14);
    _objc_release(puVar18);
    if ((int)uVar7 != 0) goto LAB_106904f14;
    puVar18 = PTR_PTR_1126b5c68;
    func_0x00010c27f560(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar13;
    func_0x00010c0720c0();
    if ((int)uVar7 == 0) {
      puVar3 = PTR_PTR_1126b5c68;
      func_0x00010c27fa80(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar13;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      _objc_release(puVar18);
      if ((int)uVar7 != 0) goto LAB_106905164;
      puVar18 = PTR_PTR_1126b5c68;
      func_0x00010c1230a0(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar13;
      func_0x00010c0720c0();
      _objc_release(puVar18);
      if ((int)uVar7 == 0) {
        puVar18 = PTR_PTR_1126b5c68;
        func_0x00010c281f40(PTR_PTR_1126b5c68);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar13;
        func_0x00010c0720c0();
        _objc_release(puVar18);
        if ((int)uVar7 != 0) {
          puVar18 = PTR_PTR_1126c9310;
          func_0x00010c259760();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar18 == (undefined *)0x0) goto LAB_10690529c;
          uVar19 = *(undefined8 *)(puVar2 + 0x38);
          goto LAB_10690526c;
        }
        goto LAB_10690529c;
      }
      puVar18 = PTR_PTR_1126c9310;
      func_0x00010c259760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar18 == (undefined *)0x0) goto LAB_10690529c;
      uVar19 = *(undefined8 *)(puVar2 + 0x38);
      goto LAB_106904fe4;
    }
    _objc_release(puVar18);
LAB_106905164:
    uVar7 = uVar6;
    func_0x00010c08fa60();
    if (uVar7 != 0) {
      func_0x00010c12d360(*(undefined8 *)(puVar2 + 8));
    }
    if ((puVar20 != (undefined *)0x0) && (puVar2[0x68] == '\x01')) {
      puVar18 = *(undefined **)(puVar2 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar18 == (undefined *)0x0) {
        puVar18 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010befa120(puVar18);
      uVar19 = *(undefined8 *)(puVar2 + 0x20);
      goto LAB_10690520c;
    }
    puVar18 = PTR_PTR_1126c9310;
    func_0x00010c259760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar18 != (undefined *)0x0) {
      uVar19 = *(undefined8 *)(puVar2 + 0x30);
LAB_10690526c:
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar19);
      goto LAB_106905290;
    }
  }
  else {
    _objc_release(puVar18);
LAB_106904f14:
    uVar7 = uVar6;
    func_0x00010c08fa60();
    if (uVar7 != 0) {
      func_0x00010befa120(*(undefined8 *)(puVar2 + 8));
    }
    if ((puVar20 == (undefined *)0x0) || (puVar2[0x68] != '\x01')) {
      puVar18 = PTR_PTR_1126c9310;
      func_0x00010c259760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((puVar18 == (undefined *)0x0) || (puVar3 == (undefined *)0x0)) goto LAB_10690529c;
      uVar19 = *(undefined8 *)(puVar2 + 0x30);
LAB_106904fe4:
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar19);
    }
    else {
      puVar18 = *(undefined **)(puVar2 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar18 != (undefined *)0x0) {
        func_0x00010c12d360(puVar18);
        uVar19 = *(undefined8 *)(puVar2 + 0x20);
LAB_10690520c:
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar19);
        _objc_release(puVar2);
      }
    }
LAB_106905290:
    _objc_release(puVar18);
  }
LAB_10690529c:
  _objc_release(lVar15);
  _objc_release(puVar20);
  _objc_release(uVar6);
  _objc_release(uVar13);
LAB_1069052c0:
  _objc_release(lVar4);
  _objc_release(in_x4);
  _objc_release(lVar17);
  _objc_release(ppuVar16);
  return;
}



/* Entry: 106904b08; end: 1069053fb; -[SCDiscoverFeedFavoritePlugin operaViewDidSendEvent:page:params:] */

void FUN_106904b08(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126c9830;
  func_0x00010beedca0(PTR_PTR_1126c9830);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar16);
  if ((int)uVar15 == 0) {
    puVar16 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar16);
    if ((int)uVar15 == 0) {
      puVar16 = PTR_PTR_1126b2330;
      func_0x00010bfaf7a0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar16);
      if ((int)uVar15 == 0) goto LAB_1069052c0;
      func_0x00010be8dc40(param_1);
      lVar12 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (lVar12 == 0) goto LAB_1069052c0;
      puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain();
      func_0x00010bf97ce0(uVar15);
      lVar12 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar12);
      lVar13 = lVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a480();
      _objc_release(lVar13);
      _objc_release(lVar12);
      func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar16);
    }
    else {
      puVar16 = PTR_PTR_1126c9310;
      func_0x00010c259500();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar16;
      func_0x00010c08fa60();
      if (puVar14 != (undefined *)0x0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 8);
        func_0x00010bf4b900();
        if (iVar1 != 0) {
          uVar10 = *(ulong *)(param_1 + 0x10);
          func_0x00010bf4b900();
          if ((uVar10 & 1) == 0) {
            func_0x00010c12d360(*(undefined8 *)(param_1 + 8));
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x10));
            puVar14 = PTR_PTR_1126c9310;
            func_0x00010c259760(PTR_PTR_1126c9310);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c282800();
            _objc_release(puVar14);
            _objc_initWeak(auStack_68,param_1);
            param_1 = param_1 + 0x48;
            _objc_loadWeakRetained(param_1);
            lVar12 = param_1;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = 0x19;
            _dispatch_get_global_queue(0x19,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_70,auStack_68);
            func_0x00010c25bae0(lVar12);
            _objc_release(uVar15);
            _objc_release(lVar12);
            _objc_release(param_1);
            _objc_destroyWeak(auStack_70);
            _objc_destroyWeak(auStack_68);
          }
        }
      }
    }
    _objc_release(puVar16);
    goto LAB_1069052c0;
  }
  puVar16 = PTR_PTR_1126b5cb8;
  func_0x00010beedca0(PTR_PTR_1126b5cb8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar16);
  uVar10 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain(uVar10);
  _objc_release(uVar3);
  puVar16 = PTR_PTR_1126b5cb8;
  func_0x00010beee760(PTR_PTR_1126b5cb8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar16);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain();
  _objc_release(uVar4);
  puVar16 = PTR_PTR_1126c9310;
  func_0x00010bf631e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c9310;
  func_0x00010c259760();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar14;
  func_0x00010c282800();
  _objc_release(puVar14);
  lVar12 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 != 0) {
    lVar7 = lVar12;
    func_0x00010c25a6e0(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c25b720();
    lVar9 = lVar2;
    func_0x000107b28474(lVar2,lVar8);
    _objc_release(lVar7);
    _objc_release(lVar13);
    if ((int)lVar9 != 0) {
      _objc_release(puVar16);
      puVar16 = (undefined *)0x0;
    }
  }
  puVar14 = PTR_PTR_1126b5c68;
  func_0x00010bf1f640(PTR_PTR_1126b5c68);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    puVar11 = PTR_PTR_1126b5c68;
    func_0x00010bfa0ee0(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010c0720c0();
    _objc_release(puVar11);
    _objc_release(puVar14);
    if ((int)uVar4 != 0) goto LAB_106904f14;
    puVar14 = PTR_PTR_1126b5c68;
    func_0x00010c27f560(PTR_PTR_1126b5c68);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      puVar6 = PTR_PTR_1126b5c68;
      func_0x00010c27fa80(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010c0720c0();
      _objc_release(puVar6);
      _objc_release(puVar14);
      if ((int)uVar4 != 0) goto LAB_106905164;
      puVar14 = PTR_PTR_1126b5c68;
      func_0x00010c1230a0(PTR_PTR_1126b5c68);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010c0720c0();
      _objc_release(puVar14);
      if ((int)uVar4 == 0) {
        puVar14 = PTR_PTR_1126b5c68;
        func_0x00010c281f40(PTR_PTR_1126b5c68);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar10;
        func_0x00010c0720c0();
        _objc_release(puVar14);
        if ((int)uVar4 != 0) {
          puVar14 = PTR_PTR_1126c9310;
          func_0x00010c259760();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar14 == (undefined *)0x0) goto LAB_10690529c;
          uVar15 = *(undefined8 *)(param_1 + 0x38);
          goto LAB_10690526c;
        }
        goto LAB_10690529c;
      }
      puVar14 = PTR_PTR_1126c9310;
      func_0x00010c259760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar14 == (undefined *)0x0) goto LAB_10690529c;
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      goto LAB_106904fe4;
    }
    _objc_release(puVar14);
LAB_106905164:
    uVar4 = uVar3;
    func_0x00010c08fa60();
    if (uVar4 != 0) {
      func_0x00010c12d360(*(undefined8 *)(param_1 + 8));
    }
    if ((puVar16 != (undefined *)0x0) && (*(char *)(param_1 + 0x68) == '\x01')) {
      puVar14 = *(undefined **)(param_1 + 0x20);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (puVar14 == (undefined *)0x0) {
        puVar14 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010befa120(puVar14);
      uVar15 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_10690520c;
    }
    puVar14 = PTR_PTR_1126c9310;
    func_0x00010c259760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar14 != (undefined *)0x0) {
      uVar15 = *(undefined8 *)(param_1 + 0x30);
LAB_10690526c:
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(uVar15);
      goto LAB_106905290;
    }
  }
  else {
    _objc_release(puVar14);
LAB_106904f14:
    uVar4 = uVar3;
    func_0x00010c08fa60();
    if (uVar4 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 8));
    }
    if ((puVar16 == (undefined *)0x0) || (*(char *)(param_1 + 0x68) != '\x01')) {
      puVar14 = PTR_PTR_1126c9310;
      func_0x00010c259760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((puVar14 == (undefined *)0x0) || (puVar6 == (undefined *)0x0)) goto LAB_10690529c;
      uVar15 = *(undefined8 *)(param_1 + 0x30);
LAB_106904fe4:
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar15);
    }
    else {
      puVar14 = *(undefined **)(param_1 + 0x20);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (puVar14 != (undefined *)0x0) {
        func_0x00010c12d360(puVar14);
        uVar15 = *(undefined8 *)(param_1 + 0x20);
LAB_10690520c:
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar15);
        _objc_release(puVar6);
      }
    }
LAB_106905290:
    _objc_release(puVar14);
  }
LAB_10690529c:
  _objc_release(lVar12);
  _objc_release(puVar16);
  _objc_release(uVar3);
  _objc_release(uVar10);
LAB_1069052c0:
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069053fc; end: 106905443;  */

void FUN_1069053fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9e880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106905444; end: 1069059fb;  */

void FUN_106905444(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
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
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar22 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  puVar1 = (undefined *)(lVar22 + 0x48);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010c282800(param_2);
  _objc_release(param_2);
  puVar4 = puVar2;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar4 != (undefined *)0x0) {
    uVar23 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(puVar4);
    _objc_retain(param_3);
    puVar1 = puVar4;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      _objc_retain(puVar4);
      puVar1 = puVar4;
    }
    else {
      puVar3 = PTR_PTR_1126c6d78;
      func_0x00010bf82080();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ceed0;
      func_0x00010c108e00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x00010bf52a60();
      lVar22 = lRam0000000000000000;
      while (puVar1 != (undefined *)0x0) {
        puVar25 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar22) {
            _objc_enumerationMutation(puVar7);
          }
          lVar24 = *(long *)((long)puVar25 * 8);
          lVar8 = lVar24;
          func_0x00010bf1f720();
          _objc_retainAutoreleasedReturnValue();
          if (lVar8 == 0) {
LAB_106905894:
            func_0x00010befa120(puVar6);
          }
          else {
            lVar9 = lVar24;
            func_0x00010c241220(lVar24);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = param_3;
            func_0x00010bf4b900();
            _objc_release(lVar9);
            _objc_release(lVar8);
            if ((int)uVar10 == 0) goto LAB_106905894;
            puVar11 = PTR_PTR_1126cc730;
            _objc_alloc();
            lVar8 = lVar24;
            func_0x00010c243a40();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar24;
            func_0x00010bfdeae0();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar24;
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            lVar13 = lVar24;
            func_0x00010c2439e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef60a0();
            lVar14 = lVar24;
            func_0x00010bef3ba0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar24;
            func_0x00010c26e920();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c29ea60();
            func_0x00010c15e560();
            func_0x00010c0c6ce0();
            func_0x00010c082620();
            lVar16 = lVar24;
            func_0x00010c0ed940();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c6c20();
            lVar17 = lVar24;
            func_0x00010c23ffa0();
            _objc_retainAutoreleasedReturnValue();
            lVar18 = lVar24;
            func_0x00010bf814c0();
            _objc_retainAutoreleasedReturnValue();
            lVar19 = lVar24;
            func_0x00010c24b260();
            _objc_retainAutoreleasedReturnValue();
            lVar20 = lVar24;
            func_0x00010bfe4640();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1ef80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfbe4e0();
            func_0x00010c048a80(puVar11);
            _objc_release(lVar24);
            _objc_release(lVar20);
            _objc_release(lVar19);
            _objc_release(lVar18);
            _objc_release(lVar17);
            _objc_release(lVar16);
            _objc_release(lVar15);
            _objc_release(lVar14);
            _objc_release(lVar13);
            _objc_release(lVar12);
            _objc_release(lVar9);
            _objc_release(lVar8);
            func_0x00010befa120(puVar6);
            _objc_release(puVar11);
          }
          puVar25 = puVar25 + 1;
        } while (puVar1 != puVar25);
        puVar1 = puVar7;
        func_0x00010bf52a60();
      }
      _objc_release(puVar7);
      func_0x00010c2b9a60(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126c6d88;
      puVar7 = puVar5;
      func_0x00010bf21f60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11b640(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ba3c0(puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar7);
      puVar1 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(puVar4);
    puVar3 = puVar1;
    func_0x00010befa120(uVar23);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar4 + 0x60,puVar3);
  return;
}



/* Entry: 1069059fc; end: 106905a07; -[SCDiscoverFeedFavoritePlugin setPlaylistItemController:] */

void FUN_1069059fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 106905a08; end: 106905a2f; -[SCDiscoverFeedFavoritePlugin updateOperaConfiguration:] */

void FUN_106905a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106905a30; end: 106905a7b; -[SCDiscoverFeedFavoritePlugin _sendAndApplyBoostRecommendedUpNextRequest:] */

void FUN_106905a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfddf60();
  if (((int)uVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x58), lVar2 != 0)) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106905a7c; end: 106905c2f; -[SCDiscoverFeedFavoritePlugin _setFavoritedRecommendSetsWithStories:] */

void FUN_106905a7c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      uVar11 = *(undefined8 *)(lVar15 * 8);
      uVar9 = uVar11;
      func_0x00010848192c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f9a0();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      bVar3 = false;
      bVar4 = false;
      bVar1 = NAN((double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))
                                                  )));
      if (!bVar1) {
        bVar3 = (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))
                                                )) < 0.0;
        bVar4 = (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))
                                                )) == 0.0;
      }
      if (!bVar4 && bVar3 == bVar1) {
        uVar12 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c259740(uVar11);
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar12);
        _objc_release(puVar6);
      }
      func_0x00010c123160(uVar9);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      bVar3 = false;
      bVar4 = false;
      bVar1 = NAN((double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))
                                                  )));
      if (!bVar1) {
        bVar3 = (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))
                                                )) < 0.0;
        bVar4 = (double)CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))
                                                )) == 0.0;
      }
      if (!bVar4 && bVar3 == bVar1) {
        uVar12 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c259740(uVar11);
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar12);
        _objc_release(puVar6);
      }
      _objc_release(uVar9);
      lVar15 = lVar15 + 1;
    } while (lVar5 != lVar15);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar15 = *(long *)(param_3 + 0x28);
  _objc_retain(lVar15);
  lVar5 = lVar15;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar15);
      }
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c259740(*(undefined8 *)(lVar14 * 8));
      func_0x00010c0df880(puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(ulong *)(param_3 + 0x30);
      func_0x00010bf4b900();
      if ((uVar8 & 1) == 0) {
        uVar8 = *(ulong *)(param_3 + 0x38);
        func_0x00010bf4b900();
        if ((uVar8 & 1) == 0) {
          func_0x00010befa120(puVar6);
        }
      }
      _objc_release(puVar7);
      lVar14 = lVar14 + 1;
    } while (lVar5 != lVar14);
    lVar5 = lVar15;
    func_0x00010bf52a60();
  }
  _objc_release(lVar15);
  puVar7 = puVar6;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    _objc_retain(puVar6);
    puVar7 = puVar6;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(puVar6);
        }
        func_0x00010c0e00e0(*(undefined8 *)(param_3 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0x20));
        puVar13 = puVar13 + 1;
      } while (puVar7 != puVar13);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    param_3 = param_3 + 0x50;
    _objc_loadWeakRetained();
    lVar5 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf51e00(puVar6);
    uVar9 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e660(lVar5);
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(param_3);
  }
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar6 + 0x60);
  _objc_storeStrong(puVar6 + 0x58,0);
  _objc_destroyWeak(puVar6 + 0x50);
  _objc_destroyWeak(puVar6 + 0x48);
  _objc_destroyWeak(puVar6 + 0x40);
  _objc_storeStrong(puVar6 + 0x38,0);
  _objc_storeStrong(puVar6 + 0x30,0);
  _objc_storeStrong(puVar6 + 0x28,0);
  _objc_storeStrong(puVar6 + 0x20,0);
  _objc_storeStrong(puVar6 + 0x18,0);
  _objc_storeStrong(puVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 8,0);
  return;
}



/* Entry: 106905c30; end: 106905ed3; -[SCDiscoverFeedFavoritePlugin _removeUnforiteOrUnrecommendedStories] */

void FUN_106905c30(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar8 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c259740(*(undefined8 *)(lVar10 * 8));
      func_0x00010c0df880(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf4b900();
      if ((uVar5 & 1) == 0) {
        uVar5 = *(ulong *)(param_1 + 0x38);
        func_0x00010bf4b900();
        if ((uVar5 & 1) == 0) {
          func_0x00010befa120(puVar2);
        }
      }
      _objc_release(puVar4);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar4 = puVar2;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    _objc_retain(puVar2);
    puVar4 = puVar2;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20));
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained();
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    uVar6 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e660(lVar3);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(puVar2 + 0x60);
  _objc_storeStrong(puVar2 + 0x58,0);
  _objc_destroyWeak(puVar2 + 0x50);
  _objc_destroyWeak(puVar2 + 0x48);
  _objc_destroyWeak(puVar2 + 0x40);
  _objc_storeStrong(puVar2 + 0x38,0);
  _objc_storeStrong(puVar2 + 0x30,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 106905ed4; end: 106905f6b; -[SCDiscoverFeedFavoritePlugin .cxx_destruct] */

void FUN_106905ed4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106905f6c; end: 10690600f; -[SCOperaOptInDoorbellPlugin initWithFriendsOptInDataProvider:userSession:] */

undefined1 *
FUN_106905f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3c58;
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



/* Entry: 106906010; end: 106906013; -[SCOperaOptInDoorbellPlugin setPlaylistItemController:] */

void FUN_106906010(void)

{
  return;
}



/* Entry: 106906014; end: 10690601b; -[SCOperaOptInDoorbellPlugin playlistDataSource] */

undefined8 FUN_106906014(void)

{
  return 0;
}



/* Entry: 10690601c; end: 10690601f; -[SCOperaOptInDoorbellPlugin setExtraInfo:] */

void FUN_10690601c(void)

{
  return;
}



/* Entry: 106906020; end: 106906023; -[SCOperaOptInDoorbellPlugin addEventListenersWithEventAnnouncing:] */

void FUN_106906020(void)

{
  return;
}



/* Entry: 106906024; end: 10690602f; -[SCOperaOptInDoorbellPlugin type] */

undefined ** FUN_106906024(void)

{
  return &PTR____CFConstantStringClassReference_110e649d8;
}



/* Entry: 106906030; end: 106906033; -[SCOperaOptInDoorbellPlugin extraPropertiesProvider] */

void FUN_106906030(void)

{
  return;
}



/* Entry: 106906034; end: 106906137; -[SCOperaOptInDoorbellPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_106906034(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar1 != 0) &&
     ((uVar3 = param_3, func_0x0001085396cc(), (uVar3 & 1) != 0 ||
      (uVar3 = param_3, func_0x000108539930(), (int)uVar3 != 0)))) {
    uVar3 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be05ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,param_1,0);
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


