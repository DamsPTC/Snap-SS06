/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fd7b38; end: 105fd7c3f; -[SCSnapProSharePlaybackProvider defaultFallbackStories] */

void FUN_105fd7b38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x108);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x58);
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = puVar7;
    func_0x000107d00a08(puVar7,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000107af933c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x108);
    *(undefined **)(param_1 + 0x108) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(lVar6);
    lVar6 = *(long *)(param_1 + 0x108);
  }
  lVar3 = lVar6;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar3 + 0x130) != 0) {
    return;
  }
  lVar4 = lVar3;
  func_0x00010bde6d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + 0x130);
  *(long *)(lVar3 + 0x130) = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105fd7c40; end: 105fd7c7f; -[SCSnapProSharePlaybackProvider constructOperaLaunchingCandidates] */

void FUN_105fd7c40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bde6d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  *(long *)(param_1 + 0x130) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105fd7c80; end: 105fd7f2f; -[SCSnapProSharePlaybackProvider _constructOperaLaunchingCandidates] */

void FUN_105fd7c80(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = *(undefined **)(param_1 + 0x130);
  if (puVar11 == (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x58);
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x58);
    func_0x00010c064400();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar1 == (undefined *)0x0) || (lVar3 = lVar2, func_0x00010c08fa60(), lVar3 == 0)) {
      puVar11 = *(undefined **)(param_1 + 0x130);
      _objc_retain(puVar11);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c0fed80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        puVar11 = *(undefined **)(param_1 + 0x130);
        _objc_retain(puVar11);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        func_0x00010c0309a0();
        uVar6 = param_1;
        func_0x00010be44440();
        if ((uVar6 & 1) == 0) {
          uVar12 = *(undefined8 *)(param_1 + 0x50);
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066720(uVar12);
          _objc_release(puVar11);
        }
        uVar7 = *(ulong *)(param_1 + 0x70);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf80be0();
        _objc_release(uVar7);
        if (((int)uVar6 != 0) && ((uVar8 & 1) == 0)) {
          uVar9 = *(undefined8 *)(param_1 + 0x58);
          func_0x00010c242740(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar9;
          func_0x00010799b330();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar5);
          _objc_release(uVar12);
          _objc_release(uVar9);
        }
        if ((uVar8 & 1) == 0) {
          uVar6 = param_1;
          func_0x00010bf695c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066720(*(undefined8 *)(param_1 + 0x50));
          puVar11 = puVar1;
          func_0x00010799ad20(puVar1,uVar6,lVar3,lVar4,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar5);
          _objc_release(puVar11);
          _objc_release(uVar6);
        }
        puVar11 = puVar5;
        func_0x00010bf529e0();
        if (puVar11 == (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar11 = puVar5;
          func_0x00010bf529e0();
          puVar11 = puVar11 + -1;
        }
        *(undefined **)(param_1 + 0x110) = puVar11;
        puVar11 = PTR_PTR_1126b23f8;
        _objc_alloc(PTR_PTR_1126b23f8);
        func_0x00010c0087a0();
        _objc_release(puVar5);
      }
      _objc_release(lVar3);
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  else {
    puVar1 = puVar11;
    _objc_retain(puVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x130,0);
  _objc_storeStrong(puVar1 + 0x128,0);
  _objc_storeStrong(puVar1 + 0x118,0);
  _objc_storeStrong(puVar1 + 0x108,0);
  _objc_storeStrong(puVar1 + 0x100,0);
  _objc_storeStrong(puVar1 + 0xf8,0);
  _objc_storeStrong(puVar1 + 0xf0,0);
  _objc_storeStrong(puVar1 + 0xe8,0);
  _objc_storeStrong(puVar1 + 0xe0,0);
  _objc_storeStrong(puVar1 + 0xd8,0);
  _objc_storeStrong(puVar1 + 0xd0,0);
  _objc_storeStrong(puVar1 + 200,0);
  _objc_storeStrong(puVar1 + 0xc0,0);
  _objc_storeStrong(puVar1 + 0xb8,0);
  _objc_storeStrong(puVar1 + 0xb0,0);
  _objc_storeStrong(puVar1 + 0xa8,0);
  _objc_storeStrong(puVar1 + 0xa0,0);
  _objc_storeStrong(puVar1 + 0x98,0);
  _objc_storeStrong(puVar1 + 0x90,0);
  _objc_storeStrong(puVar1 + 0x88,0);
  _objc_storeStrong(puVar1 + 0x80,0);
  _objc_storeStrong(puVar1 + 0x78,0);
  _objc_storeStrong(puVar1 + 0x70,0);
  _objc_storeStrong(puVar1 + 0x68,0);
  _objc_storeStrong(puVar1 + 0x60,0);
  _objc_storeStrong(puVar1 + 0x58,0);
  _objc_storeStrong(puVar1 + 0x50,0);
  _objc_storeStrong(puVar1 + 0x48,0);
  _objc_destroyWeak(puVar1 + 0x40);
  _objc_destroyWeak(puVar1 + 0x38);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 105fd7f30; end: 105fd80ef; -[SCSnapProSharePlaybackProvider .cxx_destruct] */

void FUN_105fd7f30(long param_1)

{
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 105fd80f0; end: 105fd81f3; -[SCImpalaBusinessStoryPlaylistFetcher initWithUserSession:businessId:manifest:storiesReadReceiptCoordinator:] */

undefined1 *
FUN_105fd80f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eed28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fd81f4; end: 105fd829f; -[SCImpalaBusinessStoryPlaylistFetcher fetchPlaylist] */

void FUN_105fd81f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bea5620(param_1,param_2,1);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be11540(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105fd82a0; end: 105fd82f3;  */

void FUN_105fd82a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea5620(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fd82f4; end: 105fd835b; -[SCImpalaBusinessStoryPlaylistFetcher currentLoadingProperties] */

void FUN_105fd82f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2340;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d280(puVar1,param_2,uVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fd835c; end: 105fd83d3; -[SCImpalaBusinessStoryPlaylistFetcher resolvedDataModels] */

undefined * FUN_105fd835c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_20 = *(long *)(param_1 + 0x38);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_20,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    return (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 105fd83d4; end: 105fd83db; -[SCImpalaBusinessStoryPlaylistFetcher firstDisplayGroupDataModel] */

undefined8 FUN_105fd83d4(void)

{
  return 0;
}



/* Entry: 105fd83dc; end: 105fd83e3; -[SCImpalaBusinessStoryPlaylistFetcher loadingState] */

undefined8 FUN_105fd83dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105fd83e4; end: 105fd84d7; -[SCImpalaBusinessStoryPlaylistFetcher _fetchFriendStoriesWithCompletion:] */

void FUN_105fd83e4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x38) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010be124e0(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(long *)(param_1 + 0x38),0);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105fd84d8; end: 105fd88e3;  */

void FUN_105fd84d8(undefined **param_1,undefined1 *param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *unaff_x22;
  long lVar12;
  undefined *unaff_x24;
  undefined1 *puVar13;
  undefined *puVar14;
  long unaff_x27;
  long unaff_x28;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined1 *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  puVar9 = param_2;
  _objc_retain(param_2);
  lStack_190 = param_3;
  _objc_retain(param_3);
  ppuVar1 = param_1 + 5;
  _objc_loadWeakRetained();
  puVar10 = PTR_PTR_1126c6d90;
  if (ppuVar1 != (undefined **)0x0) {
    if ((param_2 == (undefined1 *)0x0) || (lStack_190 != 0)) {
      puVar10 = param_1[4];
      if (puVar10 != (undefined *)0x0) {
        puVar9 = (undefined1 *)0x0;
        (**(code **)(puVar10 + 0x10))(puVar10,0,lStack_190);
      }
    }
    else {
      puVar9 = param_2;
      ppuStack_1a0 = param_1;
      func_0x00010bfe5ea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
      puStack_1a8 = param_2;
      func_0x00010c2586a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar9);
      puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      puStack_198 = puVar10;
      puStack_180 = puVar14;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      puStack_188 = puVar10;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        lVar12 = *plStack_120;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar12) {
              _objc_enumerationMutation(puStack_188);
            }
            puVar2 = PTR_PTR_1126c6d98;
            unaff_x27 = *(long *)(lStack_128 + (long)puVar14 * 8);
            unaff_x28 = unaff_x27;
            func_0x00010bf25280();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfea2a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = puVar2;
            func_0x00010c2b8ea0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = unaff_x24;
            func_0x00010c2a8600();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c174660(unaff_x27);
            _objc_release(puVar4);
            _objc_release(puVar3);
            _objc_release(unaff_x24);
            _objc_release(puVar2);
            _objc_release(unaff_x28);
            lVar5 = unaff_x27;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar5 != 0) {
              lVar5 = unaff_x27;
              func_0x00010be36bc0(unaff_x27);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puStack_180);
              _objc_release(lVar5);
            }
            puVar14 = puVar14 + 1;
          } while (puVar10 != puVar14);
          puVar10 = puStack_188;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puStack_188);
      _objc_initWeak(auStack_138,ppuVar1);
      puVar14 = ppuVar1[8];
      func_0x00010c269d40(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puStack_180;
      unaff_x22 = puStack_180;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_105fd88e4;
      puStack_160 = &UNK_110894250;
      _objc_retain(puVar10);
      puStack_158 = puVar10;
      param_1 = &puStack_178;
      puVar9 = auStack_138;
      _objc_copyWeak(auStack_140);
      puVar10 = puStack_198;
      _objc_retain(puStack_198);
      puStack_150 = puVar10;
      puVar10 = ppuStack_1a0[4];
      _objc_retain(puVar10);
      puStack_148 = puVar10;
      func_0x00010c121840(puVar14);
      _objc_release(unaff_x22);
      _objc_release(puVar14);
      _objc_release(puStack_148);
      _objc_release(puStack_150);
      _objc_destroyWeak(auStack_140);
      _objc_release(puStack_158);
      _objc_destroyWeak(auStack_138);
      _objc_release(puStack_180);
      _objc_release(puStack_198);
      param_2 = puStack_1a8;
    }
  }
  _objc_release(ppuVar1);
  _objc_release(lStack_190);
  puVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 7);
  _objc_destroyWeak(auStack_138);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_1b8 = FUN_105fd88e4;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_200 = unaff_x28;
  lStack_1f8 = unaff_x27;
  puStack_1f0 = unaff_x24;
  puStack_1e8 = param_2;
  puStack_1e0 = unaff_x22;
  ppuStack_1d8 = ppuVar1;
  ppuStack_1d0 = param_1;
  puStack_1c8 = puVar6;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  _objc_retain(puVar9);
  puVar6 = puVar9;
  func_0x00010bf52a60();
  if (puVar6 != (undefined1 *)0x0) {
    lVar12 = *plStack_2c0;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_2c0 != lVar12) {
          _objc_enumerationMutation(puVar9);
        }
        uVar8 = *(undefined8 *)(puVar7 + 0x20);
        func_0x00010c0e00e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c222e60();
        _objc_release(uVar8);
        puVar13 = puVar13 + 1;
      } while (puVar6 != puVar13);
      puVar6 = puVar9;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined1 *)0x0);
  }
  _objc_release(puVar9);
  puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_300 = 0xc2000000;
  pcStack_2f8 = FUN_105fd8ab0;
  puStack_2f0 = &UNK_110848378;
  _objc_copyWeak(auStack_2d8,puVar7 + 0x38);
  uVar11 = *(undefined8 *)(puVar7 + 0x28);
  _objc_retain(uVar11);
  uVar8 = *(undefined8 *)(puVar7 + 0x30);
  uStack_2e8 = uVar11;
  _objc_retain(uVar8);
  uStack_2e0 = uVar8;
  func_0x0001000d76cc("APPSTORE",&puStack_308);
  _objc_release(uStack_2e0);
  _objc_release(uStack_2e8);
  _objc_destroyWeak(auStack_2d8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_2d8);
  __Unwind_Resume();
  puVar6 = puVar9 + 0x30;
  _objc_loadWeakRetained();
  if (puVar6 != (undefined1 *)0x0) {
    uVar11 = *(undefined8 *)(puVar9 + 0x20);
    _objc_retain(uVar11);
    uVar8 = *(undefined8 *)(puVar6 + 0x38);
    *(undefined8 *)(puVar6 + 0x38) = uVar11;
    _objc_release(uVar8);
    func_0x00010be4cb20(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105fd88e4; end: 105fd8aaf;  */

void FUN_105fd88e4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c222e60();
        _objc_release(uVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_2);
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_105fd8ab0;
  puStack_140 = &UNK_110848378;
  _objc_copyWeak(auStack_128,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_138 = uVar3;
  _objc_retain(uVar2);
  uStack_130 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_158);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_destroyWeak(auStack_128);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_128);
  __Unwind_Resume();
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = uVar3;
    _objc_release(uVar2);
    func_0x00010be4cb20(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fd8ab0; end: 105fd8b0b;  */

void FUN_105fd8ab0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = uVar3;
    _objc_release(uVar2);
    func_0x00010be4cb20(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fd8b0c; end: 105fd8caf; -[SCImpalaBusinessStoryPlaylistFetcher _loadBusinessIfNeededWithCompletion:] */

void FUN_105fd8b0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x38),0);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010bdd7160(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(uVar2);
    func_0x00010bfd3240(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105fd8cb0; end: 105fd8eeb;  */

void FUN_105fd8cb0(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        lVar2 = param_2;
        func_0x00010bf25000(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfe44e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1df740(uVar6);
        _objc_release(lVar3);
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bf25000(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1744a0(uVar6);
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bf25000(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bfe4520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        func_0x00010c1b2f20(uVar6);
        _objc_release(lVar3);
        _objc_release(lVar2);
        lVar2 = param_2;
        func_0x00010bf25000(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        func_0x00010c078f80(lVar2);
        func_0x00010c0691a0(lVar2);
        _objc_release(lVar2);
        func_0x00010c1d0b20(uVar6);
        _objc_release(lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)param_3;
    (**(code **)(lVar4 + 0x10))(lVar4,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  lVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105fd8eec;
  lStack_160 = lVar1;
  lStack_158 = param_1;
  puStack_150 = param_3;
  lStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (*(long *)(lVar4 + 0x20) == 0) {
    _objc_initWeak(auStack_168,lVar4);
    func_0x00010bdd7160(lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_170,auStack_168);
    _objc_retain(puVar5);
    func_0x00010bfd3240(lVar4);
    _objc_release(lVar4);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
  }
  else if (puVar5 != (undefined8 *)0x0) {
    (**(code **)((long)puVar5 + 0x10))(puVar5,*(long *)(lVar4 + 0x20),0);
  }
  _objc_release(puVar5);
  return;
}



/* Entry: 105fd8eec; end: 105fd900f; -[SCImpalaBusinessStoryPlaylistFetcher _fetchManifestWithCompletion:] */

void FUN_105fd8eec(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010bdd7160(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bfd3240(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(long *)(param_1 + 0x20),0);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105fd9010; end: 105fd90ef;  */

void FUN_105fd9010(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c259c00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c2a14c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105fd90f0; end: 105fd91af;  */

void FUN_105fd90f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c25a380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      uVar2 = param_2;
      func_0x00010c25a380(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,uVar2,param_3);
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105fd91b0; end: 105fd91f7; -[SCImpalaBusinessStoryPlaylistFetcher _setLoadingState:] */

void FUN_105fd91b0(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x30) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x30) = param_3;
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fd91f8; end: 105fd9257; -[SCImpalaBusinessStoryPlaylistFetcher _businessProfileHandlers] */

void FUN_105fd91f8(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf25180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  if ((bVar1 & 1) == 0) {
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b7ee0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105fd9258; end: 105fd926f; -[SCImpalaBusinessStoryPlaylistFetcher delegate] */

void FUN_105fd9258(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fd9270; end: 105fd927b; -[SCImpalaBusinessStoryPlaylistFetcher setDelegate:] */

void FUN_105fd9270(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105fd927c; end: 105fd92d7; -[SCImpalaBusinessStoryPlaylistFetcher .cxx_destruct] */

void FUN_105fd927c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fd92d8; end: 105fd93a3; -[SCImpalaChatMessageSender initWithTextSender:conversationParser:performer:] */

undefined1 *
FUN_105fd92d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eed30;
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



/* Entry: 105fd93a4; end: 105fd95f7; -[SCImpalaChatMessageSender shareProfile:selection:sourceType:completion:] */

void FUN_105fd93a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010bfcf800(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c122f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107e327dc(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108605534();
  uVar2 = param_4;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be718);
  uVar2 = uVar1;
  func_0x00010beecc40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar6 = param_6;
  _objc_retain(param_6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 105fd95f8; end: 105fd95ff;  */

void FUN_105fd95f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf501b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_conversationDestinationParser_1125b1a10);
  return;
}



/* Entry: 105fd9600; end: 105fd97a3;  */

void FUN_105fd9600(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf026a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac2e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  FUN_105fd97a4(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010befd440(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb1de0(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105fd97a4; end: 105fd9823;  */

void FUN_105fd97a4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105fdb344;
  puStack_30 = &UNK_110852668;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105fd9824; end: 105fd99af; -[SCImpalaChatMessageSender shareSnap:profile:isUserQuoted:selection:sourceType:contentShareInfo:completion:] */

void FUN_105fd9824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_6;
  func_0x00010bfcf800(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c122f00(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107e327dc(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010bfcf800(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108605534();
  uVar2 = param_6;
  func_0x00010c122f00(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010befd440(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c22b000(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105fd99b0; end: 105fd9bcf; -[SCImpalaChatMessageSender shareSnap:profile:isUserQuoted:chatIds:numOfRecipients:additionalText:sourceType:contentShareInfo:completion:] */

void FUN_105fd99b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = param_6;
  _objc_retain();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be718;
  _objc_opt_class(PTR_PTR_1126be718);
  uVar3 = uVar1;
  func_0x00010beecc40(uVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1109059d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfe63a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105fd9bd8;
  puStack_b8 = &UNK_1109059f0;
  uStack_78 = param_9;
  uStack_b0 = param_10;
  uStack_88 = param_11;
  uStack_a8 = param_1;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  uStack_90 = param_8;
  uStack_80 = param_7;
  uStack_70 = param_5;
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_11);
  uVar6 = param_10;
  _objc_retain(param_10);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5,param_2,&puStack_d0,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_88);
  _objc_release(uStack_b0);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(uVar3);
  return;
}



/* Entry: 105fd9bd0; end: 105fd9bd7;  */

void FUN_105fd9bd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf501b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_conversationDestinationParser_1125b1a10);
  return;
}



/* Entry: 105fd9bd8; end: 105fd9dc3;  */

void FUN_105fd9bd8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf026a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac2e0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c2aaec0(puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  FUN_105fd97a4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beb1ee0(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105fd9dc4; end: 105fd9df3; -[SCImpalaChatMessageSender shareSnap:profile:conversationIds:platformAnalytics:completion:] */

void FUN_105fd9dc4(void)

{
  func_0x00010beb1ee0();
  return;
}



/* Entry: 105fd9df4; end: 105fd9f8f; -[SCImpalaChatMessageSender shareSavedStory:profileId:selection:sourceType:contentShareInfo:sendToSessionId:completion:] */

void FUN_105fd9df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c122f00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107e327dc(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfcf800(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108605534();
  uVar2 = param_5;
  func_0x00010c122f00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010befd440(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c22ade0(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105fd9f90; end: 105fda35f; -[SCImpalaChatMessageSender shareSavedStory:profileId:chatIds:numOfRecipients:additionalText:sourceType:contentShareInfo:sendToSessionId:completion:] */

void FUN_105fd9f90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105fda168;
  puStack_b0 = &UNK_110905a20;
  uStack_a8 = param_9;
  uStack_a0 = param_10;
  uStack_78 = param_11;
  lStack_98 = param_1;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_7;
  uStack_70 = param_6;
  uStack_68 = param_8;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_10);
  uVar2 = param_9;
  _objc_retain(param_9);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1,param_2,&puStack_c8,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_78);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return;
}



/* Entry: 105fda360; end: 105fda36f; -[SCImpalaChatMessageSender shareSavedStory:profileId:conversationIds:platformAnalytics:completion:] */

void FUN_105fda360(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb1e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shareSavedStory_profileId_conve_11258a138);
  return;
}



/* Entry: 105fda370; end: 105fda737; -[SCImpalaChatMessageSender _shareProfile:conversationIds:additionalText:analyticsDataModel:completion:] */

void FUN_105fda370(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ba668;
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_opt_new(puVar5);
    puVar6 = PTR_PTR_1126be930;
    _objc_opt_new(PTR_PTR_1126be930);
    func_0x00010c1fea60(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126bec60;
    _objc_opt_new(PTR_PTR_1126bec60);
    puVar7 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205100();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b0cd8;
    uVar2 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bdc35c0(puVar6,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    puVar8 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c242840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bfe5d80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c242840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar8 = puVar7;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar9 = puVar5;
    func_0x00010bf63640(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar7,param_2,puVar9,4,puVar10,1);
    puVar11 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c260(uVar4,param_2,puVar11,uVar3,param_4,0,uVar2,param_7);
    _objc_release(uVar2);
    _objc_release(puVar11);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fda738; end: 105fdacdb; -[SCImpalaChatMessageSender _shareSnap:profile:isUserQuoted:conversationIds:additionalText:analyticsDataModel:completion:] */

void FUN_105fda738(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  )

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_6;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_8);
    puVar4 = PTR_PTR_1126ba668;
    _objc_retain(param_3);
    _objc_opt_new(puVar4);
    puVar5 = PTR_PTR_1126be930;
    _objc_opt_new(PTR_PTR_1126be930);
    func_0x00010c1fea60(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126bec68;
    _objc_opt_new(PTR_PTR_1126bec68);
    puVar6 = puVar4;
    func_0x00010c22a700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205160();
    _objc_release(puVar6);
    _objc_release(puVar5);
    lVar1 = param_8;
    func_0x00010bf4d560();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b0cd8;
    if (lVar8 != 0) {
      lVar1 = param_8;
      func_0x00010bf4d560(param_8);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c22ab40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc35c0(puVar5,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar1);
      puVar6 = PTR_PTR_1126bc778;
      _objc_opt_new(PTR_PTR_1126bc778);
      puVar9 = puVar4;
      func_0x00010c22a700(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1feca0();
      _objc_release(puVar9);
      _objc_release(puVar6);
      puVar6 = puVar5;
      func_0x00010bfe5d80(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c22a700(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c22ab40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126b0cd8;
    uVar13 = param_4;
    func_0x00010bfe5ea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0(puVar5,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    puVar6 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    puVar9 = puVar4;
    func_0x00010c22a700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c242900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bfe5d80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010c22a700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c242900();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
    puVar6 = puVar4;
    func_0x00010c22a700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c242900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680();
    _objc_release(param_3);
    _objc_release(puVar9);
    _objc_release(puVar6);
    puVar6 = puVar4;
    func_0x00010c22a700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c242900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b57a0();
    _objc_release(puVar9);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar9 = puVar6;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar10 = puVar4;
    func_0x00010bf63640(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf21f60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar6,param_2,puVar10,4,puVar11,1);
    puVar12 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_8);
    _objc_release(param_4);
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c260(uVar2,param_2,puVar12,uVar3,param_6,0,uVar13,param_9);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fdacdc; end: 105fdb307; -[SCImpalaChatMessageSender _shareSavedStory:profileId:conversationIds:additionalText:analyticsDataModel:completion:] */

void FUN_105fdacdc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 != 0) && (lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_7);
    puVar4 = PTR_PTR_1126c6da0;
    _objc_retain(param_3);
    _objc_alloc_init();
    lVar1 = param_3;
    func_0x00010bf454e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x000108f520ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1805c0(puVar4,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126b0cd8;
    lVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bdc35c0(puVar6,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x00010bfe5d80(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar4;
      func_0x00010c241220(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0();
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    puVar8 = PTR_PTR_1126ba668;
    _objc_opt_new(PTR_PTR_1126ba668);
    puVar7 = PTR_PTR_1126be930;
    _objc_opt_new(PTR_PTR_1126be930);
    func_0x00010c1fea60(puVar8,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c6da8;
    _objc_opt_new(PTR_PTR_1126c6da8);
    puVar9 = puVar8;
    func_0x00010c22a700(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205120();
    _objc_release(puVar9);
    _objc_release(puVar7);
    lVar1 = param_7;
    func_0x00010bf4d560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar1);
    puVar7 = PTR_PTR_1126b0cd8;
    if (lVar10 != 0) {
      lVar1 = param_7;
      func_0x00010bf4d560(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c22ab40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc35c0(puVar7,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar1);
      puVar9 = PTR_PTR_1126bc778;
      _objc_opt_new(PTR_PTR_1126bc778);
      puVar11 = puVar8;
      func_0x00010c22a700(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1feca0();
      _objc_release(puVar11);
      _objc_release(puVar9);
      puVar9 = puVar7;
      func_0x00010bfe5d80(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010c22a700(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c22ab40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0();
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
    puVar7 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    puVar11 = puVar8;
    func_0x00010c22a700(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2428a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140();
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar9);
    puVar9 = puVar7;
    func_0x00010bfe5d80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c22a700(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2428a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x00010c22a700(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010c2428a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20caa0();
    _objc_release(puVar11);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar11 = puVar9;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar12 = puVar8;
    func_0x00010bf63640(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf21f60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar9,param_2,puVar12,4,puVar13,1);
    puVar14 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(param_7);
    _objc_release(param_4);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c260(uVar2,param_2,puVar14,uVar3,param_5,0,uVar15,param_8);
    _objc_release(uVar15);
    _objc_release(puVar14);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fdb308; end: 105fdb343; -[SCImpalaChatMessageSender .cxx_destruct] */

void FUN_105fdb308(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fdb344; end: 105fdb477;  */

void FUN_105fdb344(long param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_2 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e05458,
                        &PTR____CFConstantStringClassReference_110e05478,200);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126afca8;
    if (puVar5 != (undefined *)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
      goto LAB_105fdb444;
    }
  }
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1c5f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar5 = (undefined *)0x0;
LAB_105fdb444:
  _objc_release(ppuVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105fdb478; end: 105fdb8af; -[SCImpalaOperaPresenter initWithContextOperaPluginProvider:operaSessionScopeExposer:operaSessionScopeServices:circumstanceEngine:discoverOperaPluginCreator:safetyReportScopeExposer:storiesReadReceiptCoordinator:notificationOSSettingsRetriever:snapchattersSynchronousDataFetcher:spotlightShareSender:spotlightPlatformAnalyticsCreator:musicContentRestrictionServices:userBlizzardLogger:storiesUsageLogger:imageDownloader:grapheneRegistry:snapchatterObservableRepository:storiesCachedSummaryInfoProvider:lazyDiscoverFeedEventsController:lazyDiscoverFeedInteractionHistoryManager:] */

undefined8 *
FUN_105fdb478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126eed38;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
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
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
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
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
  }
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fdb8b0; end: 105fdbb77; -[SCImpalaOperaPresenter playStoryManifest:businessId:sourceView:useCircleTransition:userSession:navigationServices:parentViewController:operaPresenterDelegate:] */

void FUN_105fdb8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6d50;
  _objc_alloc();
  func_0x00010c05d080();
  puVar3 = puVar2;
  func_0x00010c09d3c0();
  if (puVar3 != (undefined *)0x2) {
    func_0x00010bfa9500(puVar2);
  }
  puVar3 = PTR_PTR_1126b2400;
  _objc_alloc();
  func_0x00010c018aa0(0);
  uVar4 = param_1;
  func_0x00010be5bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b23f0;
  _objc_alloc();
  func_0x00010c011ae0();
  _objc_initWeak(auStack_70,param_1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105fdbb78;
  puStack_b8 = &UNK_110853a90;
  _objc_copyWeak(auStack_78,auStack_70);
  puStack_b0 = puVar5;
  _objc_retain(param_9);
  uStack_a8 = param_9;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  _objc_retain(puVar2);
  puStack_98 = puVar2;
  puStack_90 = puVar3;
  _objc_retain(param_10);
  uStack_88 = param_10;
  uStack_80 = uVar4;
  func_0x0001000d76cc("APPSTORE",&puStack_d0);
  _objc_release(uStack_88);
  _objc_release(puStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fdbb78; end: 105fdbc43;  */

void FUN_105fdbb78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(lVar3);
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puVar4 = PTR_PTR_1126b23f8;
    _objc_alloc(PTR_PTR_1126b23f8);
    func_0x00010c0372c0();
    func_0x00010bf23920(uVar5,param_2,uVar1,uVar2,uVar6,puVar4,*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bf9d620(*(undefined8 *)(lVar3 + 0x10),param_2,uVar5);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105fdbc44; end: 105fdbc8b; -[SCImpalaOperaPresenter removeScope] */

void FUN_105fdbc44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fdbc8c; end: 105fdbcf3; -[SCImpalaOperaPresenter _makeOperaPluginsWithUserSession:navigationServices:] */

void FUN_105fdbc8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_105fdbcf4(param_3,param_4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 105fdbcf4; end: 105fdc0af;  */

void FUN_105fdbcf4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_19);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new();
  _objc_retain(param_19);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar2 = param_16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_16);
  uVar3 = param_2;
  func_0x00010720435c(param_2,0,param_3,0,0,(long)(param_1 * 1000.0),0,5,1,0,4,0,0,
                      0x7fffffffffffffff,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
  func_0x00010befa120(puVar1);
  lVar4 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar5 = lVar4;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    func_0x00010befa120(puVar1);
  }
  uVar2 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf81f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010befa120(puVar1);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(param_19);
  _objc_release(param_19);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fdc0b0; end: 105fdc1b7; -[SCImpalaOperaPresenter .cxx_destruct] */

void FUN_105fdc0b0(long param_1)

{
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



/* Entry: 105fdc1b8; end: 105fdc283; -[SCSavedStoryShareActionHandler initWithProfileId:unifiedPublicProfilesPresenterScopeExposer:uiContainer:] */

undefined1 *
FUN_105fdc1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eed40;
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



/* Entry: 105fdc284; end: 105fdc37b; -[SCSavedStoryShareActionHandler handleHeaderTap] */

void FUN_105fdc284(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b0f10;
    _objc_alloc(PTR_PTR_1126b0f10);
    func_0x00010c033440();
    puVar3 = PTR_PTR_1126b0f18;
    _objc_alloc(PTR_PTR_1126b0f18);
    func_0x00010bff9da0();
    func_0x00010c1cd960();
    func_0x00010c1cd9a0(puVar3,param_2,0x2e5189e1);
    puVar4 = PTR_PTR_1126b0f20;
    _objc_alloc(PTR_PTR_1126b0f20);
    func_0x00010c056680();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105fdc37c; end: 105fdc3c3; -[SCSavedStoryShareActionHandler unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_105fdc37c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fdc3c4; end: 105fdc3ff; -[SCSavedStoryShareActionHandler .cxx_destruct] */

void FUN_105fdc3c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fdc400; end: 105fdc797; -[SCSavedStoryShareDataProvider initWithProfileId:storyId:highlightSnapId:publicProfileManager:storiesNetworkRequester:discoverFeedDataFetcher:discoverFeedDataMutator:networkConnectivityMonitor:locationProvider:circumstanceEngine:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:snapchattersDataFetcher:adConfigProvider:adRenderDataParser:storiesConfigProvider:] */

undefined8 *
FUN_105fdc400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_70 = PTR_PTR_1126eed48;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_17;
    _objc_release(uVar2);
    uVar2 = param_18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2320;
    func_0x00010c25a1c0(PTR_PTR_1126c2320);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320();
    *(char *)(puVar1 + 9) = (char)uVar4;
    _objc_release(puVar3);
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x15) = 0;
  }
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



/* Entry: 105fdc798; end: 105fdc7d3; -[SCSavedStoryShareDataProvider story] */

void FUN_105fdc798(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fdc7d4; end: 105fdc80f; -[SCSavedStoryShareDataProvider storyThumbnailUrl] */

void FUN_105fdc7d4(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fdc810; end: 105fdc867; -[SCSavedStoryShareDataProvider initialSnapClientId] */

void FUN_105fdc810(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c24cfc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fdc868; end: 105fdca5b; -[SCSavedStoryShareDataProvider _getSnapProProfileWithManager:uiUpdateBlock:videoContextUpdateBlock:] */

void FUN_105fdc868(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  func_0x00010bfc93a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_retain(param_4);
  func_0x00010c25ff60(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(lVar2);
  return;
}



/* Entry: 105fdca5c; end: 105fdcc37; -[SCSavedStoryShareDataProvider _fetchStoryWithCompletion:] */

void FUN_105fdca5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar5 = *(long *)(param_1 + 8);
    _objc_retain(lVar5);
    lVar1 = lVar5;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x000108f51ed0(uVar2,0x2b,0);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x000108f51d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010c25baa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(lVar3);
      if (lVar1 == 0) {
        func_0x00010be149a0(param_1);
      }
      else {
        _objc_initWeak(auStack_58,param_1);
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(uVar2);
        _objc_retain(param_3);
        func_0x00010bea7fa0(param_1);
        _objc_release(param_3);
        _objc_release(uVar2);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
      _objc_release(lVar1);
      _objc_release(uVar2);
    }
    _objc_release(lVar5);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105fdcc38; end: 105fdcc83;  */

void FUN_105fdcc38(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105fdcc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be149a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fdcc84; end: 105fdcdf7; -[SCSavedStoryShareDataProvider _fetchStoryFromMixerWithStoryId:completion:] */

void FUN_105fdcc84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105fdcdf8;
  puStack_70 = &UNK_1109007f8;
  lStack_68 = param_1;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfa5340(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fdcdf8; end: 105fdce13;  */

void FUN_105fdcdf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar9 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar12 = *(long *)(lVar9 + 0x18);
  uVar7 = *(undefined8 *)(lVar9 + 0x68);
  uVar2 = *(undefined8 *)(lVar9 + 0x70);
  cVar3 = *(char *)(lVar9 + 0x48);
  _objc_retain(lVar12);
  puVar4 = PTR_PTR_1126d5c48;
  _objc_retain(uVar2);
  _objc_retain(uVar7);
  _objc_retain(uVar1);
  _objc_opt_new(puVar4);
  puVar5 = puVar4;
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar4);
  _objc_release(puVar5);
  func_0x00010c1d64a0(puVar4);
  uVar6 = uVar7;
  func_0x000108f13840(uVar7,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar7);
  func_0x00010c17cd40(puVar4);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126c0dd8;
  _objc_opt_new(PTR_PTR_1126c0dd8);
  uVar7 = uVar1;
  func_0x00010846d990(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1805c0(puVar5);
  _objc_release(uVar7);
  puVar8 = PTR_PTR_1126d5c50;
  _objc_opt_new(PTR_PTR_1126d5c50);
  func_0x00010c19b200();
  func_0x00010c196c60(puVar5);
  if (cVar3 == '\0') {
    lVar9 = lVar12;
    func_0x00010c08fa60();
    if (lVar9 != 0) {
      puVar10 = PTR_PTR_1126d9760;
      _objc_opt_new(PTR_PTR_1126d9760);
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204720(puVar10);
      _objc_release(puVar11);
      puVar11 = puVar10;
      func_0x00010c2414e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(puVar11);
      func_0x00010c2054a0(puVar5);
      _objc_release(puVar10);
    }
  }
  else {
    func_0x00010c197f60(puVar5);
  }
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebde0(puVar4);
  _objc_release(puVar10);
  puVar10 = puVar4;
  func_0x00010c1359c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fdce14; end: 105fdceef;  */

void FUN_105fdce14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bec4980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (lVar3 == 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
      }
      else {
        func_0x00010bea7fa0(lVar1);
      }
      _objc_release(lVar3);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105fdcef0; end: 105fdd047; -[SCSavedStoryShareDataProvider _storyFromStoryLookupResponse:responseTimestamp:] */

void FUN_105fdcef0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  func_0x00010c13b960();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2592e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    puVar3 = PTR_PTR_1126b0ef8;
    _objc_alloc(PTR_PTR_1126b0ef8);
    lVar4 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ef40(puVar3);
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x000108482f84(lVar2,puVar3,0,0,0,0,0,0,0,0,*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0xa0));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105fdd048; end: 105fdd293; -[SCSavedStoryShareDataProvider _setStory:completion:] */

void FUN_105fdd048(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0xa8);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105fdd294;
  uStack_70 = 0x105fdd2a4;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_105fdd294;
  uStack_a0 = 0x105fdd2a4;
  uStack_98 = 0;
  lVar3 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a480(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(long *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  uVar4 = puStack_88[5];
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  _objc_release(uVar1);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,puStack_88[5]);
  }
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _os_unfair_lock_unlock(param_1 + 0xa8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_c0,8);
  lVar3 = 8;
  __Block_object_dispose(&uStack_90);
  _os_unfair_lock_unlock(param_1 + 0xa8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 105fdd294; end: 105fdd2ab;  */

void FUN_105fdd294(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105fdd2ac; end: 105fdd49b;  */

void FUN_105fdd2ac(long param_1,long param_2,undefined1 *param_3,undefined ***param_4,long param_5,
                  undefined *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined ***pppuStack_258;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **appuStack_e8 [16];
  long lStack_68;
  
  puVar10 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar13 = *(undefined8 *)(lVar14 + 0x28);
  *(long *)(lVar14 + 0x28) = lVar1;
  _objc_release(uVar13);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = param_2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    param_4 = appuStack_e8;
    param_5 = 0x10;
    lVar14 = lVar1;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar16 = *plStack_120;
      do {
        lVar17 = 0;
        do {
          if (*plStack_120 != lVar16) {
            _objc_enumerationMutation(lVar1);
          }
          uVar15 = *(undefined8 *)(lStack_128 + lVar17 * 8);
          uVar13 = uVar15;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x18);
          uVar2 = uVar13;
          func_0x00010c0720c0();
          _objc_release(uVar13);
          if ((int)uVar2 != 0) {
            lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 8);
            _objc_retain(uVar15);
            uVar13 = *(undefined8 *)(lVar14 + 0x28);
            *(undefined8 *)(lVar14 + 0x28) = uVar15;
            _objc_release(uVar13);
            goto LAB_105fdd400;
          }
          lVar17 = lVar17 + 1;
        } while (lVar14 != lVar17);
        param_4 = appuStack_e8;
        param_5 = 0x10;
        lVar14 = lVar1;
        puVar10 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
LAB_105fdd400:
    _objc_release(lVar1);
    param_3 = (undefined1 *)puVar10;
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
    lVar1 = param_2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar13 = *(undefined8 *)(lVar16 + 0x28);
    *(long *)(lVar16 + 0x28) = lVar14;
    _objc_release(uVar13);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar12 = param_4;
  lVar1 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = PTR_PTR_1126c6870;
  func_0x00010c25b100();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  if (param_6 == (undefined *)0x0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110e357f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e357f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar8;
    func_0x00010c2ad540(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar9);
    _objc_release(puVar9);
    _objc_release(ppuVar8);
  }
  else {
    puVar9 = param_6;
    func_0x00010c0c6c20();
    if ((puVar9 + 1 < (undefined *)0x1c) && ((1L << ((ulong)(puVar9 + 1) & 0x3f) & 0xd8de5fdU) != 0)
       ) {
      (*(code *)param_4[2])(param_4,param_6);
    }
    ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dc1758;
    puVar9 = param_6;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dc1778;
    puVar4 = param_6;
    puStack_1b8 = puVar9;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110ddd938;
    puVar5 = param_6;
    puStack_1b0 = puVar4;
    func_0x00010c0c6e00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1c0 = &PTR____CFConstantStringClassReference_110dc1798;
    ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c42d0;
    puStack_1a8 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = &puStack_1b8;
    pppuVar12 = &ppuStack_1d8;
    lVar1 = 4;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_1a0 = ppuVar8;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc1718;
    func_0x000108543d00(&PTR____CFConstantStringClassReference_110dc1718,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(ppuVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar9);
    ppuVar8 = ppuVar7;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,ppuVar8);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
  }
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    _objc_retain(ppuVar11);
    _objc_retain(pppuVar12);
    _objc_retain(lVar1);
    _objc_initWeak(auStack_248,param_3);
    uVar13 = *(undefined8 *)(param_3 + 0x20);
    puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_278 = 0xc2000000;
    pcStack_270 = FUN_105fdd920;
    puStack_268 = &UNK_110905b10;
    _objc_copyWeak(auStack_250,auStack_248);
    _objc_retain(ppuVar11);
    ppuStack_260 = ppuVar11;
    _objc_retain(pppuVar12);
    pppuStack_258 = pppuVar12;
    func_0x00010c269fc0(uVar13);
    _objc_copyWeak(auStack_288,auStack_248);
    _objc_retain(ppuVar11);
    _objc_retain(pppuVar12);
    _objc_retain(lVar1);
    func_0x00010be14b60(param_3);
    _objc_release(lVar1);
    _objc_release(pppuVar12);
    _objc_release(ppuVar11);
    _objc_destroyWeak(auStack_288);
    _objc_release(pppuStack_258);
    _objc_release(ppuStack_260);
    _objc_destroyWeak(auStack_250);
    _objc_destroyWeak(auStack_248);
    _objc_release(lVar1);
    _objc_release(pppuVar12);
    _objc_release(ppuVar11);
    return;
  }
  return;
}



/* Entry: 105fdd49c; end: 105fdd767; -[SCSavedStoryShareDataProvider _updateUiWithUiUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:storySnap:] */

void FUN_105fdd49c(undefined8 param_1,undefined8 param_2,long param_3,undefined ***param_4,
                  long param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined ***pppuStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = param_4;
  lVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c6870;
  func_0x00010c25b100();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  if (param_6 == (undefined *)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e357f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e357f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar6;
    func_0x00010c2ad540(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,puVar7);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
  }
  else {
    puVar7 = param_6;
    func_0x00010c0c6c20();
    if ((puVar7 + 1 < (undefined *)0x1c) && ((1L << ((ulong)(puVar7 + 1) & 0x3f) & 0xd8de5fdU) != 0)
       ) {
      (*(code *)param_4[2])(param_4,param_6);
    }
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110dc1758;
    puVar7 = param_6;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110dc1778;
    puVar2 = param_6;
    puStack_88 = puVar7;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110ddd938;
    puVar3 = param_6;
    puStack_80 = puVar2;
    func_0x00010c0c6e00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dc1798;
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c42d0;
    puStack_78 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &puStack_88;
    pppuVar9 = &ppuStack_a8;
    lVar10 = 4;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_70 = ppuVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc1718;
    func_0x000108543d00(&PTR____CFConstantStringClassReference_110dc1718,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    ppuVar6 = ppuVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,ppuVar6);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  _objc_release(param_6);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  _objc_retain(pppuVar9);
  _objc_retain(lVar10);
  _objc_initWeak(auStack_118,param_3);
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_105fdd920;
  puStack_138 = &UNK_110905b10;
  _objc_copyWeak(auStack_120,auStack_118);
  _objc_retain(ppuVar8);
  ppuStack_130 = ppuVar8;
  _objc_retain(pppuVar9);
  pppuStack_128 = pppuVar9;
  func_0x00010c269fc0(uVar11);
  _objc_copyWeak(auStack_158,auStack_118);
  _objc_retain(ppuVar8);
  _objc_retain(pppuVar9);
  _objc_retain(lVar10);
  func_0x00010be14b60(param_3);
  _objc_release(lVar10);
  _objc_release(pppuVar9);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_158);
  _objc_release(pppuStack_128);
  _objc_release(ppuStack_130);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_118);
  _objc_release(lVar10);
  _objc_release(pppuVar9);
  _objc_release(ppuVar8);
  return;
}



/* Entry: 105fdd768; end: 105fdd91f; -[SCSavedStoryShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:] */

void FUN_105fdd768(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fdd920;
  puStack_88 = &UNK_110905b10;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_4);
  uStack_78 = param_4;
  func_0x00010c269fc0(uVar1);
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be14b60(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fdd920; end: 105fdd9cb;  */

void FUN_105fdd920(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be22b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fdd9cc; end: 105fdd9e3; -[SCSavedStoryShareDataProvider storySharePlaybackPresenterDelegate] */

void FUN_105fdd9cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fdd9e4; end: 105fdd9ef; -[SCSavedStoryShareDataProvider setStorySharePlaybackPresenterDelegate:] */

void FUN_105fdd9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 105fdd9f0; end: 105fddaf3; -[SCSavedStoryShareDataProvider .cxx_destruct] */

void FUN_105fdd9f0(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb0);
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



/* Entry: 105fddaf4; end: 105fddb9f; -[SCSavedStoryPlaylistFetcher initWithStoryDoc:highlightSnapId:] */

undefined1 *
FUN_105fddaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eed50;
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
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fddba0; end: 105fddc4b; -[SCSavedStoryPlaylistFetcher fetchPlaylist] */

void FUN_105fddba0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bea5620(param_1,param_2,1);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be11540(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105fddc4c; end: 105fddc9f;  */

void FUN_105fddc4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea5620(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fddca0; end: 105fddd07; -[SCSavedStoryPlaylistFetcher currentLoadingProperties] */

void FUN_105fddca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2340;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d280(puVar1,param_2,uVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fddd08; end: 105fddd7b; -[SCSavedStoryPlaylistFetcher resolvedDataModels] */

undefined * FUN_105fddd08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_20 = *(long *)(param_1 + 0x20);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_20,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 105fddd7c; end: 105fddd83; -[SCSavedStoryPlaylistFetcher firstDisplayGroupDataModel] */

undefined8 FUN_105fddd7c(void)

{
  return 0;
}



/* Entry: 105fddd84; end: 105fddd8b; -[SCSavedStoryPlaylistFetcher loadingState] */

undefined8 FUN_105fddd84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105fddd8c; end: 105fde057; -[SCSavedStoryPlaylistFetcher _fetchFriendStoriesWithCompletion:] */

void FUN_105fddd8c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined **unaff_x21;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(long *)(param_1 + 0x20),0);
    goto LAB_105fddff0;
  }
  puVar1 = PTR_PTR_1126c6d90;
  func_0x00010c2586c0(PTR_PTR_1126c6d90,0,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)(param_1 + 8) == 0) {
LAB_105fdde60:
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar4 = puVar1;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar11 = *plStack_120;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(puVar4);
          }
          uVar10 = *(ulong *)(lStack_128 + (long)puVar8 * 8);
          func_0x00010befa120(puVar2);
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar10;
          func_0x00010c0720c0();
          _objc_release(uVar10);
          if ((uVar6 & 1) != 0) goto LAB_105fddf34;
          puVar8 = puVar8 + 1;
        } while (puVar5 != puVar8);
        puVar5 = puVar4;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
LAB_105fddf34:
    _objc_release(puVar4);
    func_0x00010c20c480(puVar1);
    _objc_release(puVar2);
  }
  else {
    puVar2 = puVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if (((ulong)puVar4 & 1) == 0) goto LAB_105fdde60;
  }
  _objc_initWeak(auStack_138,param_1);
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_105fde058;
  puStack_158 = &UNK_110848378;
  unaff_x21 = &puStack_170;
  _objc_copyWeak(auStack_140,auStack_138);
  _objc_retain(puVar1);
  puStack_150 = puVar1;
  _objc_retain(param_3);
  lStack_148 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_170);
  _objc_release(lStack_148);
  _objc_release(puStack_150);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_105fddff0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x21 + 6);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  lVar11 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar11 != 0) {
    uVar9 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar9);
    uVar7 = *(undefined8 *)(lVar11 + 0x20);
    *(undefined8 *)(lVar11 + 0x20) = uVar9;
    _objc_release(uVar7);
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
              (*(long *)(param_3 + 0x28),*(undefined8 *)(lVar11 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 105fde058; end: 105fde0bb;  */

void FUN_105fde058(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fde0bc; end: 105fde103; -[SCSavedStoryPlaylistFetcher _setLoadingState:] */

void FUN_105fde0bc(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x18) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x18) = param_3;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fde104; end: 105fde11b; -[SCSavedStoryPlaylistFetcher delegate] */

void FUN_105fde104(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fde11c; end: 105fde127; -[SCSavedStoryPlaylistFetcher setDelegate:] */

void FUN_105fde11c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105fde128; end: 105fde16b; -[SCSavedStoryPlaylistFetcher .cxx_destruct] */

void FUN_105fde128(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fde16c; end: 105fde58f; -[SCSavedStorySharePlaybackProvider initWithShareDataProvider:highlightSnapId:userSession:navigationDelegate:contextOperaPluginProvider:composerRenderedPlugin:snapProShareMessageSender:safetyReportScopeExposer:operaPresenterDelegate:storiesReadReceiptCoordinator:notificationOSSettingsRetriever:autoAdvancePlaybackDataProvider:discoverOperaPluginCreator:circumstanceEngine:snapchattersSynchronousDataFetcher:isGroup:message:discoverDataFetcher:viewModelGenerator:discoverFeedDataMutator:storiesConfigProvider:] */

undefined8 *
FUN_105fde16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined4 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126eed58;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_8);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xf,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[7];
    puVar1[7] = param_15;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    func_0x00010c222640(puVar1[6]);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x13) = param_19;
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[9];
    puVar1[9] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[8];
    puVar1[8] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[10];
    puVar1[10] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_25;
    _objc_release(uVar2);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_18);
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



/* Entry: 105fde590; end: 105fde883; -[SCSavedStorySharePlaybackProvider playlistPlugins] */

void FUN_105fde590(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f41c18;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110dcad78;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c42e8;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4300;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4318;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110eb5238;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f42758;
  puVar1 = *(undefined **)(param_1 + 0xa0);
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f42778;
  puStack_80 = puVar10;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    puVar2 = *(undefined **)(param_1 + 0xa0);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f42798;
  puVar3 = *(undefined **)(param_1 + 0xa0);
  puStack_78 = puVar2;
  FUN_105fde884();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_98,&ppuStack_c8,6);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar1);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar6 = *(long *)(param_1 + 0x60);
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c064400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    puVar1 = *(undefined **)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bfb7ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar9);
    _objc_release(uVar7);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar5);
    puVar10 = puVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    _objc_release(puVar10);
    if (puVar2 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = puVar1;
      func_0x00010c272380(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105fde884; end: 105fde937;  */

void FUN_105fde884(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c22ab40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  lVar3 = lVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  _objc_release(lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c272380(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105fde938; end: 105fde9a3; -[SCSavedStorySharePlaybackProvider operaSessionContextWithIntentDate:] */

void FUN_105fde938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b23f0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c011ae0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fde9a4; end: 105fdeba3; -[SCSavedStorySharePlaybackProvider operaLaunchingCandidates] */

void FUN_105fde9a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066720(uVar11);
    _objc_release(puVar10);
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0fed80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010c0309a0();
      uVar5 = *(ulong *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf80be0();
      _objc_release(uVar5);
      if ((uVar6 & 1) == 0) {
        lVar7 = param_1;
        func_0x00010bf695c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066720(*(undefined8 *)(param_1 + 0x30));
        lVar8 = lVar1;
        func_0x00010799ad20(lVar1,lVar7,lVar3,lVar2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar4);
        _objc_release(lVar8);
        _objc_release(lVar7);
      }
      puVar10 = puVar4;
      func_0x00010bf529e0();
      if (puVar10 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = puVar4;
        func_0x00010bf529e0();
        puVar10 = puVar10 + -1;
      }
      *(undefined **)(param_1 + 0xb0) = puVar10;
      puVar10 = PTR_PTR_1126b23f8;
      _objc_alloc();
      func_0x00010c0087a0();
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar4 = (undefined *)(lVar1 + 0x10);
    _objc_loadWeakRetained(puVar4);
    puVar10 = puVar4;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105fdeba4; end: 105fdebe3; -[SCSavedStorySharePlaybackProvider parentViewController] */

void FUN_105fdeba4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fdebe4; end: 105fdebfb; -[SCSavedStorySharePlaybackProvider operaPresenterDelegate] */

void FUN_105fdebe4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fdebfc; end: 105fdedef; -[SCSavedStorySharePlaybackProvider upNextConfig] */

void FUN_105fdebfc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  uVar1 = *(ulong *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf80be0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      lVar4 = lVar3;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar5;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        func_0x00010c0309a0();
        lVar4 = param_1;
        func_0x00010bf695c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        func_0x000100504554();
        func_0x00010befa160(puVar6);
        _objc_release(lVar7);
        puVar10 = PTR_PTR_1126c6948;
        _objc_alloc(PTR_PTR_1126c6948);
        puVar8 = puVar6;
        func_0x00010bf51e00(puVar6);
        func_0x00010bf695c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar3;
        func_0x00010bf454e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar7;
        func_0x000108f51f98();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0332c0(puVar10);
        _objc_release(lVar9);
        _objc_release(lVar7);
        _objc_release(param_1);
        _objc_release(puVar8);
        _objc_release(lVar4);
        _objc_release(puVar6);
      }
      _objc_release(lVar5);
    }
    _objc_release(lVar3);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105fdedf0; end: 105fdee37;  */

void FUN_105fdedf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fdee38; end: 105fdef3f; -[SCSavedStorySharePlaybackProvider defaultFallbackStories] */

void FUN_105fdee38(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = *(undefined **)(param_1 + 0xa8);
  if (puVar11 == (undefined *)0x0) {
    lVar1 = *(long *)(param_1 + 0x60);
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = puVar11;
    func_0x000107d00a08(puVar11,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x88));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000107af933c();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined **)(param_1 + 0xa8) = puVar3;
    _objc_release(uVar10);
    _objc_release(puVar2);
    _objc_release(puVar11);
    _objc_release(lVar1);
    puVar11 = *(undefined **)(param_1 + 0xa8);
  }
  puVar2 = puVar11;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar9 = *(long *)(puVar2 + 0x60);
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      uVar10 = *(undefined8 *)(puVar2 + 0x60);
      func_0x00010c064400();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = *(undefined **)(puVar2 + 0xa0);
      func_0x00010c0cb8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      if (puVar2[0x98] == '\x01') {
        puVar4 = *(undefined **)(puVar2 + 0xa0);
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar5 = *(undefined **)(puVar2 + 0xa0);
      FUN_105fde884();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        _objc_release(puVar2);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar11);
      }
      _objc_release(puVar3);
      puVar11 = PTR_PTR_1126c6950;
      _objc_alloc(PTR_PTR_1126c6950);
      lVar7 = lVar9;
      func_0x00010bf454e0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01dd60(puVar11);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(puVar6);
      _objc_release(uVar10);
    }
    _objc_release(lVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar1) {
      ___stack_chk_fail();
      _objc_storeStrong(lVar9 + 0xb8,0);
      _objc_storeStrong(lVar9 + 0xa8,0);
      _objc_storeStrong(lVar9 + 0xa0,0);
      _objc_storeStrong(lVar9 + 0x90,0);
      _objc_storeStrong(lVar9 + 0x88,0);
      _objc_storeStrong(lVar9 + 0x80,0);
      _objc_destroyWeak(lVar9 + 0x78);
      _objc_storeStrong(lVar9 + 0x70,0);
      _objc_storeStrong(lVar9 + 0x68,0);
      _objc_storeStrong(lVar9 + 0x60,0);
      _objc_storeStrong(lVar9 + 0x58,0);
      _objc_storeStrong(lVar9 + 0x50,0);
      _objc_storeStrong(lVar9 + 0x48,0);
      _objc_storeStrong(lVar9 + 0x40,0);
      _objc_storeStrong(lVar9 + 0x38,0);
      _objc_storeStrong(lVar9 + 0x30,0);
      _objc_storeStrong(lVar9 + 0x28,0);
      _objc_destroyWeak(lVar9 + 0x20);
      _objc_storeStrong(lVar9 + 0x18,0);
      _objc_destroyWeak(lVar9 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(lVar9 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105fdef40; end: 105fdf1ab; -[SCSavedStorySharePlaybackProvider contentProductPlaybackConfig] */

void FUN_105fdef40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c064400();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = *(undefined **)(param_1 + 0xa0);
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(char *)(param_1 + 0x98) == '\x01') {
      puVar4 = *(undefined **)(param_1 + 0xa0);
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = *(undefined **)(param_1 + 0xa0);
    FUN_105fde884();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar11);
    }
    _objc_release(puVar3);
    puVar11 = PTR_PTR_1126c6950;
    _objc_alloc(PTR_PTR_1126c6950);
    lVar8 = lVar1;
    func_0x00010bf454e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01dd60(puVar11);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar1 + 0xb8,0);
  _objc_storeStrong(lVar1 + 0xa8,0);
  _objc_storeStrong(lVar1 + 0xa0,0);
  _objc_storeStrong(lVar1 + 0x90,0);
  _objc_storeStrong(lVar1 + 0x88,0);
  _objc_storeStrong(lVar1 + 0x80,0);
  _objc_destroyWeak(lVar1 + 0x78);
  _objc_storeStrong(lVar1 + 0x70,0);
  _objc_storeStrong(lVar1 + 0x68,0);
  _objc_storeStrong(lVar1 + 0x60,0);
  _objc_storeStrong(lVar1 + 0x58,0);
  _objc_storeStrong(lVar1 + 0x50,0);
  _objc_storeStrong(lVar1 + 0x48,0);
  _objc_storeStrong(lVar1 + 0x40,0);
  _objc_storeStrong(lVar1 + 0x38,0);
  _objc_storeStrong(lVar1 + 0x30,0);
  _objc_storeStrong(lVar1 + 0x28,0);
  _objc_destroyWeak(lVar1 + 0x20);
  _objc_storeStrong(lVar1 + 0x18,0);
  _objc_destroyWeak(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar1 + 8,0);
  return;
}



/* Entry: 105fdf1ac; end: 105fdf2b3; -[SCSavedStorySharePlaybackProvider .cxx_destruct] */

void FUN_105fdf1ac(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fdf2b4; end: 105fdf8a3; -[SCSavedStoryShareContextProvider initWithUserSession:storySharingServices:publicProfileManager:navigationDelegate:unifiedPublicProfilesPresenterScopeExposer:sendToScopeExposer:snapProHighlightsProvider:contextOperaPluginProvider:snapProShareMessageSender:safetyReportScopeExposer:storiesReadReceiptCoordinator:notificationOSSettingsRetriever:autoAdvancePlaybackDataProvider:discoverOperaPluginCreator:circumstanceEngine:snapchattersSynchronousDataFetcher:storiesNetworkRequester:discoverFeedDataFetcher:discoverFeedDataMutator:networkConnectivityMonitor:locationProvider:viewModelGenerator:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:snapchattersDataFetcher:adConfigProvider:adRenderDataParser:storiesConfigProvider:] */

undefined8 *
FUN_105fdf2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  puStack_70 = PTR_PTR_1126eed60;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
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
    *(undefined4 *)(puVar1 + 0xb) = 0;
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_30;
    _objc_release(uVar2);
  }
  _objc_release(param_30);
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}


