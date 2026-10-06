/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071fc548; end: 1071fc55f; -[SCLegacySingleStoryOperaDataSource playlistItemController] */

void FUN_1071fc548(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071fc560; end: 1071fc56b; -[SCLegacySingleStoryOperaDataSource setPlaylistItemController:] */

void FUN_1071fc560(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x130,param_3);
  return;
}



/* Entry: 1071fc56c; end: 1071fc6f7; -[SCLegacySingleStoryOperaDataSource .cxx_destruct] */

void FUN_1071fc56c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x130);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_destroyWeak(param_1 + 0x120);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_destroyWeak(param_1 + 0x108);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071fc6f8; end: 1071fca3f; -[SCLegacyStoriesOperaDataSource initWithViewingType:showViewersTable:storyPlayMode:firstStoryToDisplay:userSession:navigationServices:viewLocation:friendStoriesSectionMap:enableCriticalModeWhenLoading:circumstanceEngine:musicContentRestrictionServices:streamingURLProvider:snapchattersSynchronousDataFetcher:snapchatterObservableRepository:imageDownloader:storiesCachedSummaryInfoProvider:lazyDiscoverFeedEventsController:] */

undefined8 * FUN_1071fc6f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000040);
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  puStack_70 = PTR_PTR_1126f8c38;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c223280(puVar1);
    func_0x00010c202200(puVar1);
    _objc_retain(in_x6);
    uVar2 = puVar1[9];
    puVar1[9] = in_x6;
    _objc_release(uVar2);
    _objc_retain(in_x7);
    uVar2 = puVar1[10];
    puVar1[10] = in_x7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d5280;
    _objc_alloc();
    func_0x00010c05ce40();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2d18;
    _objc_alloc();
    func_0x00010c01c860();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar1[8] = in_x4;
    *(bool *)(puVar1 + 1) = in_x4 == 3;
    _objc_retain(in_x5);
    uVar2 = puVar1[7];
    puVar1[7] = in_x5;
    _objc_release(uVar2);
    _objc_retain(in_x6);
    uVar2 = puVar1[9];
    puVar1[9] = in_x6;
    _objc_release(uVar2);
    puVar1[2] = in_stack_00000000;
    _objc_retain(in_stack_00000008);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = in_stack_00000008;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x99) = in_stack_00000010;
    _objc_retain(in_stack_00000018);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = in_stack_00000018;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000020);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = in_stack_00000020;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000028);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = in_stack_00000028;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000030);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = in_stack_00000030;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000038);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = in_stack_00000038;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000050);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = in_stack_00000050;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000040);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000008);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  return puVar1;
}



/* Entry: 1071fca40; end: 1071fca73; -[SCLegacyStoriesOperaDataSource dealloc] */

void FUN_1071fca40(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f8c38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1071fca74; end: 1071fcb8f; -[SCLegacyStoriesOperaDataSource setOperaControlling:] */

undefined8 FUN_1071fca74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xb0,param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010c1d58c0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_3;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 1071fcb90; end: 1071fcb97; -[SCLegacyStoriesOperaDataSource rootViewModel] */

undefined8 FUN_1071fcb90(void)

{
  return 0;
}



/* Entry: 1071fcb98; end: 1071fcc7b; -[SCLegacyStoriesOperaDataSource prepareToViewStoryWhileOperaPresented:] */

void FUN_1071fcb98(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c10a260(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071fcc7c; end: 1071fcd17;  */

void FUN_1071fcc7c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29d880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d9820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bedae20(param_1);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071fcd18; end: 1071fcef7; -[SCLegacyStoriesOperaDataSource _updateLoadingLayerImageWithCurrentStory:nextViewModel:loadedStoryProperties:] */

void FUN_1071fcd18(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_4;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((param_5 != 0) && (lVar4 != 0)) {
    uVar5 = param_3;
    func_0x00010c074fe0();
    uVar10 = *(undefined8 *)(param_1 + 0xa8);
    ppuVar1 = &PTR_PTR_110acdd30;
    if ((int)uVar5 == 0) {
      ppuVar1 = &PTR_PTR_110acdd40;
    }
    lVar2 = param_5;
    func_0x00010c0e00e0(param_5,param_2,*ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28a600(uVar10,param_2,lVar4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0f0be0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c0d3c80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bef7f60(lVar6,param_2,uVar10);
    puVar7 = PTR_PTR_1126c9e40;
    _objc_opt_new(PTR_PTR_1126c9e40);
    puVar8 = puVar7;
    func_0x00010c2b6360();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7e80(param_4,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(uVar10);
  }
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fcef8; end: 1071fd02f; -[SCLegacyStoriesOperaDataSource updatePageForStory:] */

void FUN_1071fcef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be6df00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf9eac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef7f60(uVar4,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126c9e40;
  _objc_opt_new(PTR_PTR_1126c9e40);
  puVar6 = puVar5;
  func_0x00010c2b6360();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7e80(uVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071fd030; end: 1071fd033; -[SCLegacyStoriesOperaDataSource updatePageForID:] */

void FUN_1071fd030(void)

{
  return;
}



/* Entry: 1071fd034; end: 1071fd03b; -[SCLegacyStoriesOperaDataSource initialPlaylistItemIDToDisplay] */

undefined8 FUN_1071fd034(void)

{
  return 0;
}



/* Entry: 1071fd03c; end: 1071fd0ab; -[SCLegacyStoriesOperaDataSource _operaViewModelForStory:] */

void FUN_1071fd03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be19440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071fd0ac; end: 1071fd12f; -[SCLegacyStoriesOperaDataSource firstStoryToDisplay] */

void FUN_1071fd0ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c141840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1071fd130; end: 1071fd19f; -[SCLegacyStoriesOperaDataSource viewModelForStory:] */

void FUN_1071fd130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be19440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071fd1a0; end: 1071fd1a3; -[SCLegacyStoriesOperaDataSource didStartToPlayStory:] */

void FUN_1071fd1a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadStoriesIfNecessaryWhenStart_1125713e0);
  return;
}



/* Entry: 1071fd1a4; end: 1071fd217; -[SCLegacyStoriesOperaDataSource injectStory:afterStory:] */

void FUN_1071fd1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be19440(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065160();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071fd218; end: 1071fd21f; -[SCLegacyStoriesOperaDataSource skipStory:] */

void FUN_1071fd218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_skipStory_synchronously__11266d348,param_3,1)
  ;
  return;
}



/* Entry: 1071fd220; end: 1071fd283; -[SCLegacyStoriesOperaDataSource skipStory:synchronously:] */

void FUN_1071fd220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be19440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23e480();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071fd284; end: 1071fd35b; -[SCLegacyStoriesOperaDataSource isLastStoryInFriendStories:] */

bool FUN_1071fd284(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be19440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08aac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c118b40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
  return param_3 == lVar3;
}



/* Entry: 1071fd35c; end: 1071fd3a3; -[SCLegacyStoriesOperaDataSource prepareToViewStory:] */

void FUN_1071fd35c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c231f20(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c10a2a0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fd3a4; end: 1071fd417; -[SCLegacyStoriesOperaDataSource requestCallbackWhenViewModelConnectionIsStable:] */

void FUN_1071fd3a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    param_1 = param_1 + 0xb8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c134d60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fd418; end: 1071fd41f; -[SCLegacyStoriesOperaDataSource friendsPlayListCount] */

undefined8 FUN_1071fd418(void)

{
  return 0;
}



/* Entry: 1071fd420; end: 1071fd427; -[SCLegacyStoriesOperaDataSource indexOfFriendStoriesInPlaylist:] */

undefined8 FUN_1071fd420(void)

{
  return 0;
}



/* Entry: 1071fd428; end: 1071fd48f; -[SCLegacyStoriesOperaDataSource indexOfStoryRelativeToInitialStory:] */

undefined8 FUN_1071fd428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be19440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfecea0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1071fd490; end: 1071fd59b; -[SCLegacyStoriesOperaDataSource _friendStoriesDataSourceForStory:] */

void FUN_1071fd490(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010bf28b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar2);
    if (lVar2 != 0) {
      lVar2 = 0;
      goto LAB_1071fd560;
    }
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bf00d20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    lVar1 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
LAB_1071fd560:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1071fd59c; end: 1071fd5bb; -[SCLegacyStoriesOperaDataSource isLastFriendStoriesToDisplay:] */

bool FUN_1071fd59c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c08fa60(param_3);
  return param_3 != 0;
}



/* Entry: 1071fd5bc; end: 1071fd60f; -[SCLegacyStoriesOperaDataSource _currentViewLocationForUsername:] */

long FUN_1071fd5bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067fc0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1071fd610; end: 1071fd637; -[SCLegacyStoriesOperaDataSource mediaManager] */

void FUN_1071fd610(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071fd638; end: 1071fd66b; -[SCLegacyStoriesOperaDataSource canResolvePlaylistItemGroupDataModel:] */

bool FUN_1071fd638(long param_1)

{
  func_0x00010be94c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1071fd66c; end: 1071fd873; -[SCLegacyStoriesOperaDataSource playlistItemGroupModelForDataModel:] */

void FUN_1071fd66c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = param_1;
  func_0x00010be94c00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c6d90;
  _objc_opt_class(PTR_PTR_1126c6d90);
  puVar2 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar5);
  puVar5 = PTR_DAT_1126a5998;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010010fab4(puVar1,puVar5);
    _objc_release(puVar1);
    if ((int)puVar2 == 0 || puVar1 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      goto LAB_1071fd854;
    }
    _objc_retain(puVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b23e8;
    _objc_alloc(PTR_PTR_1126b23e8);
    puVar4 = *(undefined **)(param_1 + 0x30);
    func_0x00010c259cc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c5b38;
    func_0x00010c08f700(PTR_PTR_1126c5b38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ade0(puVar5);
LAB_1071fd838:
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar5 = puVar1;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    puVar4 = puVar1;
    if (puVar2 != (undefined *)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      puVar5 = puVar1;
      func_0x00010c259cc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126b23e8;
      _objc_alloc(PTR_PTR_1126b23e8);
      puVar2 = puVar1;
      func_0x00010c259cc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126c5b38;
      func_0x00010c08f700(PTR_PTR_1126c5b38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ade0(puVar5);
      _objc_release(puVar3);
      goto LAB_1071fd838;
    }
    puVar5 = (undefined *)0x0;
  }
  _objc_release(puVar4);
LAB_1071fd854:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1071fd874; end: 1071fd91b; -[SCLegacyStoriesOperaDataSource _resolvePlaylistItemGroupDataModel:] */

void FUN_1071fd874(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c6d90;
  _objc_opt_class(PTR_PTR_1126c6d90);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_DAT_1126a5998;
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    _objc_release(param_3);
    uVar3 = 0;
    if ((param_3 == 0) || ((int)uVar2 == 0)) goto LAB_1071fd900;
  }
  else {
    uVar2 = param_3;
    func_0x00010c06dc60();
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      goto LAB_1071fd900;
    }
  }
  _objc_retain(param_3);
  uVar3 = param_3;
LAB_1071fd900:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1071fd91c; end: 1071fd923; -[SCLegacyStoriesOperaDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_1071fd91c(void)

{
  return 1;
}



/* Entry: 1071fd924; end: 1071fd9b3; -[SCLegacyStoriesOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_1071fd924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be194a0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ac00();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071fd9b4; end: 1071fda2b; -[SCLegacyStoriesOperaDataSource loadMediaForPlaylistItemGroup:] */

void FUN_1071fd9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be194a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b940();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071fda2c; end: 1071fdc67; -[SCLegacyStoriesOperaDataSource _friendStoriesDataSourceForUsername:] */

void FUN_1071fda2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010be194e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) && (*(long *)(param_1 + 0x30) == 0)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010bdf7540(param_1,param_2,param_3);
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010c259cc0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0720c0(uVar3,param_2,lVar4);
        if ((int)uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x38);
        }
        _objc_retain(uVar5);
        _objc_release(lVar4);
        _objc_release(uVar3);
        puVar2 = PTR_PTR_1126d5288;
        _objc_alloc(PTR_PTR_1126d5288);
        func_0x00010c015c60();
        _objc_release(uVar5);
      }
      else {
        puVar2 = PTR_PTR_1126d5288;
        _objc_alloc(PTR_PTR_1126d5288);
        func_0x00010c04d460();
      }
      func_0x00010c18b5e0(puVar2,param_2,param_1);
      func_0x00010c20c6c0(puVar2,param_2,*(undefined8 *)(param_1 + 0xa8));
      lVar4 = param_1 + 0xc0;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c1ddde0(puVar2,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = param_1 + 0xb0;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c1d58c0(puVar2,param_2,lVar4);
      _objc_release(lVar4);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar2,param_3);
    }
    _objc_release(lVar1);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1071fdc68; end: 1071fdc6b; -[SCLegacyStoriesOperaDataSource dataModelFor:] */

void FUN_1071fdc68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec4910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__storyForItem__11258ebe8);
  return;
}



/* Entry: 1071fdc6c; end: 1071fdcbf; -[SCLegacyStoriesOperaDataSource dataModelForGroup:] */

void FUN_1071fdc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be194e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071fdcc0; end: 1071fdcc7; -[SCLegacyStoriesOperaDataSource _friendStoriesForUsername:] */

void FUN_1071fdcc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1071fdcc8; end: 1071fdd6b; -[SCLegacyStoriesOperaDataSource _storyForItem:] */

void FUN_1071fdcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be194a0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c259b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071fdd6c; end: 1071fdddf; -[SCLegacyStoriesOperaDataSource pageDataForDataModel:completion:] */

void FUN_1071fdd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be19440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0e80();
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fdde0; end: 1071fded7; -[SCLegacyStoriesOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_1071fdde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c5b38;
  func_0x00010c08f700(PTR_PTR_1126c5b38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  _objc_release(param_4);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    _objc_retain(param_3);
    func_0x00010be19440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9ea40();
    _objc_release(param_3);
    _objc_release(param_1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fded8; end: 1071fdf9f; -[SCLegacyStoriesOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_1071fded8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be194a0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109b20();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071fdfa0; end: 1071fe02f; -[SCLegacyStoriesOperaDataSource removeMediaForItem:] */

void FUN_1071fdfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be194a0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d120();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071fe030; end: 1071fe0c3; -[SCLegacyStoriesOperaDataSource setEventAnnouncing:] */

void FUN_1071fe030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c12cf80(*(long *)(param_1 + 0xd0),param_2,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
  }
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar2,param_2,param_1,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071fe0c4; end: 1071fe1a3; -[SCLegacyStoriesOperaDataSource registeredEventsForOperaSession] */

void FUN_1071fe0c4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  ulong uVar14;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar13 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_50 = puVar2;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2338;
  puStack_48 = puVar3;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 3;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar13);
  _objc_retain(uVar14);
  uVar6 = uVar14;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar8 = uVar7;
  func_0x00010010fab4(uVar7,PTR_DAT_1126a5998);
  uVar6 = uVar7;
  if ((int)uVar8 == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126c9a58;
  if (uVar6 == 0) goto LAB_1071fe3d0;
  uVar8 = uVar14;
  func_0x00010c118b40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  _objc_release(uVar8);
  if ((int)puVar3 == 0) goto LAB_1071fe3d0;
  uVar8 = uVar14;
  func_0x00010c06b7e0();
  uVar9 = uVar14;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c067fc0();
  _objc_release(uVar10);
  _objc_release(uVar9);
  if (((int)uVar8 != 0) && ((uVar11 == 0x1f || (uVar11 == 0x28)))) goto LAB_1071fe3d0;
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (undefined1 *)ppuVar13;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar12 != 0) {
    func_0x00010be4e920(puVar2);
    goto LAB_1071fe3d0;
  }
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (undefined1 *)ppuVar13;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar12 == 0) {
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined1 *)ppuVar13;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    iVar1 = (int)puVar12;
joined_r0x0001071fe398:
    if (iVar1 == 0) goto LAB_1071fe3d0;
  }
  else {
    uVar8 = uVar7;
    func_0x00010c074fe0();
    if ((uVar8 & 1) == 0) {
      func_0x00010c0833a0();
      iVar1 = (int)uVar7;
      goto joined_r0x0001071fe398;
    }
  }
  func_0x00010be4e900(puVar2);
  func_0x00010be19440(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251300();
  _objc_release(puVar2);
LAB_1071fe3d0:
  _objc_release(uVar6);
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar13);
  return;
}



/* Entry: 1071fe1a4; end: 1071fe3ff; -[SCLegacyStoriesOperaDataSource operaViewDidSendEvent:page:params:] */

void FUN_1071fe1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a5998);
  uVar2 = uVar3;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c9a58;
  if (uVar2 == 0) goto LAB_1071fe3d0;
  uVar4 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fc00();
  _objc_release(uVar4);
  if ((int)puVar5 == 0) goto LAB_1071fe3d0;
  uVar4 = param_4;
  func_0x00010c06b7e0();
  uVar6 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c067fc0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  if (((int)uVar4 != 0) && ((uVar8 == 0x1f || (uVar8 == 0x28)))) goto LAB_1071fe3d0;
  puVar5 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar5);
  if ((int)uVar9 != 0) {
    func_0x00010be4e920(param_1);
    goto LAB_1071fe3d0;
  }
  puVar5 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar5);
  if ((int)uVar9 == 0) {
    puVar5 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    iVar1 = (int)uVar9;
joined_r0x0001071fe398:
    if (iVar1 == 0) goto LAB_1071fe3d0;
  }
  else {
    uVar4 = uVar3;
    func_0x00010c074fe0();
    if ((uVar4 & 1) == 0) {
      func_0x00010c0833a0();
      iVar1 = (int)uVar3;
      goto joined_r0x0001071fe398;
    }
  }
  func_0x00010be4e900(param_1);
  func_0x00010be19440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251300();
  _objc_release(param_1);
LAB_1071fe3d0:
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fe400; end: 1071fe453; -[SCLegacyStoriesOperaDataSource _loadStoriesIfNecessaryWhenStartToViewStory:] */

void FUN_1071fe400(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c6960();
  if (lVar1 == 2) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    func_0x00010be4e940(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fe454; end: 1071fe483; -[SCLegacyStoriesOperaDataSource _loadStoriesIfNecessaryWhenStartToPlayStory:] */

void FUN_1071fe454(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010be4e940();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1071fe484; end: 1071fe647; -[SCLegacyStoriesOperaDataSource _loadStoriesWithCurrentStory:] */

void FUN_1071fe484(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be19440(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfecde0();
    _objc_release(uVar1);
    if (uVar3 != 0x7fffffffffffffff) {
      uVar1 = uVar2;
      func_0x00010c259cc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bdf7540(param_1,param_2,uVar1);
      _objc_release(uVar1);
      func_0x00010be37f40(param_1,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + 200),uVar4);
    }
  }
  uVar1 = uVar2;
  func_0x00010c07dc00();
  if (((uVar1 & 1) != 0) || (*(char *)(param_1 + 8) == '\x01')) {
    uVar1 = param_1;
    func_0x00010c29d880(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e6e0(param_1,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0d9ae0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e6e0(param_1,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c1125e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e6e0(param_1,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c1126e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4e6e0(param_1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fe648; end: 1071fe737; -[SCLegacyStoriesOperaDataSource _loadSingleStoryForViewModel:] */

void FUN_1071fe648(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c0f0be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0f0be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010c118b40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    FUN_1071fea04(lVar3,lVar4);
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1071fe738; end: 1071fe783; -[SCLegacyStoriesOperaDataSource _inLineLoadFriendStories:startIndex:viewingType:viewLocation:] */

void FUN_1071fe738(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_3 != 0) {
    func_0x00010bfa85a0(param_3,param_2,7,param_5,param_4,2,0,param_6,
                        &PTR____CFConstantStringClassReference_110ea2a38);
  }
  return;
}



/* Entry: 1071fe784; end: 1071fe79b; -[SCLegacyStoriesOperaDataSource delegate] */

void FUN_1071fe784(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071fe79c; end: 1071fe7a7; -[SCLegacyStoriesOperaDataSource setDelegate:] */

void FUN_1071fe79c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 1071fe7a8; end: 1071fe7af; -[SCLegacyStoriesOperaDataSource storiesMediaManager] */

undefined8 FUN_1071fe7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1071fe7b0; end: 1071fe7c7; -[SCLegacyStoriesOperaDataSource operaControlling] */

void FUN_1071fe7b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071fe7c8; end: 1071fe7cf; -[SCLegacyStoriesOperaDataSource isInSingleStoryMode] */

undefined1 FUN_1071fe7c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}



/* Entry: 1071fe7d0; end: 1071fe7e7; -[SCLegacyStoriesOperaDataSource viewModelConnectionsCallbackController] */

void FUN_1071fe7d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071fe7e8; end: 1071fe7f3; -[SCLegacyStoriesOperaDataSource setViewModelConnectionsCallbackController:] */

void FUN_1071fe7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 1071fe7f4; end: 1071fe7fb; -[SCLegacyStoriesOperaDataSource enableCriticalModeWhenLoading] */

undefined1 FUN_1071fe7f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x99);
}



/* Entry: 1071fe7fc; end: 1071fe813; -[SCLegacyStoriesOperaDataSource playlistItemController] */

void FUN_1071fe7fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071fe814; end: 1071fe81f; -[SCLegacyStoriesOperaDataSource setPlaylistItemController:] */

void FUN_1071fe814(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xc0,param_3);
  return;
}



/* Entry: 1071fe820; end: 1071fe827; -[SCLegacyStoriesOperaDataSource showViewersTable] */

undefined1 FUN_1071fe820(long param_1)

{
  return *(undefined1 *)(param_1 + 0x9a);
}



/* Entry: 1071fe828; end: 1071fe82f; -[SCLegacyStoriesOperaDataSource setShowViewersTable:] */

void FUN_1071fe828(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x9a) = param_3;
  return;
}



/* Entry: 1071fe830; end: 1071fe837; -[SCLegacyStoriesOperaDataSource viewingType] */

undefined8 FUN_1071fe830(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1071fe838; end: 1071fe83f; -[SCLegacyStoriesOperaDataSource setViewingType:] */

void FUN_1071fe838(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 1071fe840; end: 1071fe847; -[SCLegacyStoriesOperaDataSource eventAnnouncing] */

undefined8 FUN_1071fe840(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1071fe848; end: 1071fe93f; -[SCLegacyStoriesOperaDataSource .cxx_destruct] */

void FUN_1071fe848(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0xa0);
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
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1071fe940; end: 1071fea03;  */

void FUN_1071fe940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be620();
  _objc_release(uVar1);
  func_0x00010c287a00(param_2);
  _objc_release(param_3);
  if (param_1 == 0) {
    func_0x00010bfaa980(param_2);
  }
  else {
    func_0x00010bfaa8e0(param_1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071fea04; end: 1071fea37;  */

void FUN_1071fea04(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfaa8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_fetchStory_userInitiated_complet_1125c83e0,param_2,1,0,
               &PTR____CFConstantStringClassReference_110ea2a58);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfaa990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_fetchStoryMediaUserInitiated_com_1125c8408,1,0,
             &PTR____CFConstantStringClassReference_110ea2a58);
  return;
}



/* Entry: 1071fea38; end: 1071fec43; -[SCLegacyStoriesOperaMediaManager initWithUserSession:] */

undefined1 * FUN_1071fea38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f8c40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bfe68);
    puVar3 = puVar4;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071fec44; end: 1071fec4b;  */

void FUN_1071fec44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08f1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_legacyMediaUrlProvider_112601688);
  return;
}



/* Entry: 1071fec4c; end: 1071fedaf; -[SCLegacyStoriesOperaMediaManager prepareToViewStory:synchronously:completion:] */

void FUN_1071fec4c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar5 = *(long *)(param_1 + 0x40);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar5 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c0c6960();
    if (uVar1 == 2) {
      uVar1 = param_3;
      func_0x00010c0833a0();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0830a0();
        if ((int)uVar1 == 0) {
          uVar1 = param_3;
          func_0x00010c074fe0();
          if ((int)uVar1 != 0) {
            func_0x00010be786c0(param_1);
          }
        }
        else {
          func_0x00010be79860(param_1);
        }
      }
      goto LAB_1071fed60;
    }
    if (param_5 == 0) goto LAB_1071fed60;
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar2 = 0;
    uVar3 = 1;
  }
  else {
    if (param_5 == 0) goto LAB_1071fed60;
    pcVar4 = *(code **)(param_5 + 0x10);
    uVar3 = 0;
    lVar2 = lVar5;
  }
  (*pcVar4)(param_5,lVar2,uVar3,0);
LAB_1071fed60:
  _objc_release(lVar5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fedb0; end: 1071fedd7; +[SCLegacyStoriesOperaMediaManager processFirstFrameImage:forAudioStitch:] */

void FUN_1071fedb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1071fedd8; end: 1071feddf; -[SCLegacyStoriesOperaMediaManager _useInMemoryPlayback] */

bool FUN_1071fedd8(void)

{
  if (lRam00000001137fd958 != -1) {
    func_0x000107c27d9c(0x1137fd958,&PTR___NSConcreteGlobalBlock_110d95e48);
  }
  return lRam0000000113400bb8 == 0;
}



/* Entry: 1071fede0; end: 1071fedf7; -[SCLegacyStoriesOperaMediaManager _shouldUseTemporaryFilePathForStory:] */

uint FUN_1071fede0(uint param_1)

{
  func_0x00010bee6700();
  return param_1 ^ 1;
}



/* Entry: 1071fedf8; end: 1071fedfb; -[SCLegacyStoriesOperaMediaManager _corruptedMediaDetected:mediaFilePath:mediaID:] */

void FUN_1071fedf8(void)

{
  return;
}



/* Entry: 1071fedfc; end: 1071fefcf; -[SCLegacyStoriesOperaMediaManager _loadSpectaclesPagePropertiesIfNeededForStorySnap:loadedAsset:pageProperties:completion:] */

void FUN_1071fedfc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    uVar1 = param_3;
    func_0x00010c27dd80();
    if ((((uVar1 < 0x1b) && ((1L << (uVar1 & 0x3f) & 0x7e7fc60U) != 0)) &&
        (func_0x000108544644(), (int)uVar1 - 9U < 2)) ||
       (((uVar1 = param_3, func_0x00010c27dd80(), uVar1 < 0x1b &&
         ((1L << (uVar1 & 0x3f) & 0x7e7fc60U) != 0)) &&
        (func_0x000108544644(), (int)uVar1 - 0xbU < 2)))) {
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      pcStack_58 = FUN_1071fefd0;
      uStack_50 = 0x1071fefe0;
      uVar2 = param_5;
      func_0x00010c0d3c80();
      uStack_48 = uVar2;
      _objc_retain(param_3);
      _objc_retain(param_6);
      func_0x00010bf9ee40(param_4);
      _objc_release(param_6);
      _objc_release(param_3);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(uStack_48);
    }
    else {
      (**(code **)(param_6 + 0x10))(param_6,param_5,0,0);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071fefd0; end: 1071fefe7;  */

void FUN_1071fefd0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1071fefe8; end: 1071ff093;  */

void FUN_1071fefe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1071ff094;
  puStack_60 = &UNK_110992d30;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uStack_58 = uVar1;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  return;
}



/* Entry: 1071ff094; end: 1071ff15f;  */

void FUN_1071ff094(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c27dd80();
  if (uVar2 < 0x1b && (1L << (uVar2 & 0x3f) & 0x7e7fc60U) != 0) {
    func_0x000108544644();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27dd80(uVar3);
  func_0x000107dc32a8(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  lVar1 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf51e00(uVar4);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar4,0,0);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1071ff160; end: 1071ff2e7; -[SCLegacyStoriesOperaMediaManager _prepareVideoMediaForStory:synchronously:completion:] */

void FUN_1071ff160(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1071ff2e8;
  puStack_78 = &UNK_110848378;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_5);
  ppuVar2 = &puStack_90;
  uStack_68 = param_5;
  _objc_retainBlock();
  if (param_4 == 0) {
    uVar3 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x1071ffa98;
    puStack_a0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_98 = ppuVar2;
    func_0x00010007380c(uVar3,&puStack_b8);
    _objc_release(uVar3);
    _objc_release(ppuStack_98);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1071ff2e8; end: 1071ff44f;  */

void FUN_1071ff2e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_80;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010beb74c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if ((int)lVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0c3fe0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c29a8a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfad300(puVar5,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1071ff450;
    puStack_68 = &UNK_110992d60;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uStack_60 = uVar6;
    lStack_58 = lVar1;
    _objc_retain(puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    puStack_50 = puVar5;
    _objc_retain(uVar6);
    uStack_48 = uVar6;
    _objc_retainBlock(&puStack_80);
    if (puVar5 == (undefined *)0x0) {
      func_0x00010be14a20(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),ppuVar4);
    }
    else {
      func_0x00010beebbc0();
    }
    _objc_release(ppuVar4);
    _objc_release(uStack_48);
    _objc_release(puStack_50);
    _objc_release(uStack_60);
    _objc_release(puVar5);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1071ff450; end: 1071ff71b;  */

void FUN_1071ff450(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined *param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = param_8;
  if (param_4 == 0) {
LAB_1071ff56c:
    uVar5 = *(ulong *)(param_3 + 0x38);
    if (uVar5 == 0) goto LAB_1071ff6d8;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1071ffa80;
    puStack_108 = &UNK_11084aaa8;
    _objc_retain(uVar5);
    uStack_f8 = uVar5;
    _objc_retain(puVar3);
    puStack_100 = puVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_120);
    _objc_release(puStack_100);
    param_4 = uStack_f8;
  }
  else {
    uVar5 = param_4;
    func_0x00010c07a2c0();
    if ((uVar5 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_8);
      uVar8 = *(undefined8 *)(param_3 + 0x28);
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c0c5180(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde9ec0(uVar8);
      _objc_release(uVar6);
      _objc_release(param_4);
      goto LAB_1071ff56c;
    }
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
    func_0x00010c07f180();
    puVar4 = (undefined8 *)PTR__kCMTimeZero_110348670;
    if (iVar1 != 0) {
      puVar4 = (undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
    }
    uStack_88 = puVar4[1];
    uVar8 = *puVar4;
    uStack_80 = puVar4[2];
    uStack_90 = uVar8;
    if (param_6 == 0) {
      uVar8 = *(undefined8 *)PTR__CGSizeZero_110347620;
      param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      func_0x00010bdc10a0(param_6);
    }
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1071ff71c;
    puStack_c0 = &UNK_110860470;
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar7);
    uStack_a8 = *(undefined8 *)(param_3 + 0x28);
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    uStack_b8 = uVar7;
    puStack_b0 = puVar2;
    uStack_a0 = param_4;
    _objc_retain(uVar6);
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_e0 = uStack_80;
    uStack_98 = uVar6;
    _objc_retain(param_4);
    _objc_retain(puVar2);
    func_0x00010bf9eda0(uVar8,param_2,0x3ff0000000000000,param_4);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(puStack_b0);
    _objc_release(uStack_b8);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
LAB_1071ff6d8:
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1071ff71c; end: 1071ff98b;  */

void FUN_1071ff71c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d5280;
  func_0x00010bfb1300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d5280;
  func_0x00010c0efaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d5280;
  func_0x00010c2991e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c1d0640(puVar3);
  }
  puVar6 = PTR_PTR_1126d5280;
  if (param_2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0ffe0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c114aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar5);
    func_0x00010c1d0640(puVar3);
  }
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1071ff98c;
  puStack_a8 = &UNK_11098eb68;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  puStack_a0 = puVar4;
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = uVar7;
  uStack_90 = uVar8;
  _objc_retain(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar5;
  puStack_80 = puVar2;
  puStack_78 = puVar6;
  puStack_70 = puVar1;
  _objc_retain(uVar7);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar7;
  puStack_60 = puVar3;
  _objc_retain(uVar5);
  uStack_58 = uVar5;
  _objc_retain(puVar3);
  _objc_retain(puVar1);
  _objc_retain(puVar6);
  _objc_retain(puVar2);
  _objc_retain(puVar4);
  func_0x000100162d98("APPSTORE",&puStack_c0);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(uStack_68);
  _objc_release(puStack_70);
  _objc_release(puStack_78);
  _objc_release(puStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(puStack_a0);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 1071ff98c; end: 1071ffa7f;  */

void FUN_1071ff98c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c221140(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c1a9f80(*(undefined8 *)(param_1 + 0x28),param_2,*(long *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c1a9f80(*(undefined8 *)(param_1 + 0x28),param_2,*(long *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf51e00(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf3cf60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110ca990,
                      &PTR____CFConstantStringClassReference_110f0bc38);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf51e00(uVar3);
  func_0x00010be4e7c0(uVar1,param_2,uVar2,uVar4,uVar3,*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1071ffa80; end: 1071ffaa3;  */

void FUN_1071ffa80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001071ffa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1071ffaa4; end: 1071ffbb3; -[SCLegacyStoriesOperaMediaManager _writeStoryMediaToTemporaryPath:videoURL:videoAssetCompletion:] */

void FUN_1071ffaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1071ffbb4;
  puStack_60 = &UNK_110992d90;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  uVar2 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be740();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071ffbb4; end: 1071ffc5b;  */

void FUN_1071ffbb4(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,0,0,0,param_4);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1,0,0,param_3,0);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071ffc5c; end: 1071ffd27; -[SCLegacyStoriesOperaMediaManager _fetchStoryMediaFromCache:videoAssetCompletion:] */

void FUN_1071ffc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1071ffd28;
  puStack_40 = &UNK_110992dc0;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &puStack_58;
  _objc_retainBlock(ppuVar1);
  uVar2 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0c50a0(uVar2,param_2,ppuVar1);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1071ffd28; end: 1071ffe27;  */

void FUN_1071ffd28(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1071ffe28;
  puStack_68 = &UNK_11084e040;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = param_2;
  uStack_48 = param_4;
  _objc_retain(uVar2);
  uStack_58 = param_3;
  uStack_50 = uVar2;
  uStack_47 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1071ffe28; end: 1071fff03;  */

void FUN_1071ffe28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    func_0x00010c0082a0();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    pcVar7 = *(code **)(lVar1 + 0x10);
    puVar6 = (undefined *)0x0;
    puVar8 = puVar2;
  }
  else {
    if (*(char *)(param_1 + 0x39) == '\x01') {
      ppuVar4 = &PTR____CFConstantStringClassReference_110ea1d98;
      uVar5 = 0xd8;
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110ea2ab8;
      uVar5 = 0xc9;
    }
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110ea2a78,ppuVar4,uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x30);
    pcVar7 = *(code **)(lVar1 + 0x10);
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
    uVar5 = 0;
    puVar8 = puVar6;
  }
  (*pcVar7)(lVar1,puVar2,uVar3,0,uVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 1071fff04; end: 10720008b; -[SCLegacyStoriesOperaMediaManager _prepareImageMediaForStory:synchronously:completion:] */

void FUN_1071fff04(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10720008c;
  puStack_78 = &UNK_110848378;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_5);
  ppuVar2 = &puStack_90;
  uStack_68 = param_5;
  _objc_retainBlock();
  if (param_4 == 0) {
    uVar3 = 0x19;
    func_0x0001000819a8(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x107200638;
    puStack_a0 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_98 = ppuVar2;
    func_0x00010007380c(uVar3,&puStack_b8);
    _objc_release(uVar3);
    _objc_release(ppuStack_98);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10720008c; end: 1072001a7;  */

void FUN_10720008c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_a0;
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1072001a8;
  puStack_60 = &UNK_110992df0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar5;
  lStack_50 = lVar2;
  _objc_retain(uVar6);
  ppuVar3 = &puStack_78;
  uStack_48 = uVar6;
  _objc_retainBlock();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10720062c;
  puStack_88 = &UNK_110992e20;
  ppuStack_80 = ppuVar3;
  _objc_retain();
  _objc_retainBlock(&puStack_a0);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c3fe0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6640();
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuStack_80);
  _objc_release(ppuVar3);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(lVar2);
  return;
}



/* Entry: 1072001a8; end: 107200433;  */

void FUN_1072001a8(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1071fefd0;
  uStack_50 = 0x1071fefe0;
  uStack_48 = 0;
  if ((param_2 == 0) || (param_4 == 0)) {
LAB_107200330:
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x30);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
      goto LAB_1072003c8;
    }
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_107200614;
    puStack_d8 = &UNK_11084aaa8;
    _objc_retain(puVar4);
    puStack_c8 = puVar4;
    _objc_retain(puVar1);
    puStack_d0 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_f0);
    _objc_release(puStack_d0);
    puVar4 = (undefined *)0x0;
    puVar2 = puStack_c8;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_68[5];
    puStack_68[5] = puVar1;
    _objc_release(uVar3);
    if (puVar4 == (undefined *)0x0) goto LAB_107200330;
    puVar1 = PTR_PTR_1126d5280;
    func_0x00010bfe7fe0();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107200434;
    puStack_a8 = &UNK_11097cd70;
    _objc_retain(puVar4);
    uStack_98 = *(undefined8 *)(param_1 + 0x28);
    puStack_a0 = puVar4;
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_90 = puVar1;
    _objc_retain(uVar5);
    puStack_78 = &uStack_70;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_88 = uVar5;
    _objc_retain(uVar3);
    uStack_80 = uVar3;
    func_0x000100162d98("APPSTORE",&puStack_c0);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    puVar2 = puStack_a0;
  }
  _objc_release(puVar2);
LAB_1072003c8:
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107200434; end: 107200613;  */

void FUN_107200434(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  func_0x00010c1a9f80(*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + 0x38);
  func_0x00010c27dd80();
  if (lVar3 == 10) {
    func_0x00010c1d0640(puVar2);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0) {
    puVar1 = PTR_PTR_1126d5280;
    func_0x00010c0efaa0(PTR_PTR_1126d5280);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f80(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar1);
  }
  func_0x00010c1d0640(puVar2);
  puVar1 = puVar2;
  func_0x00010bf51e00(puVar2);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf3cf60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar7);
  _objc_release(uVar4);
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2,0,0);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000107200628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x28) + 0x10))
            (*(long *)(lVar6 + 0x28),0,0,*(undefined8 *)(lVar6 + 0x20));
  return;
}



/* Entry: 107200614; end: 107200643;  */

void FUN_107200614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107200628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107200644; end: 1072007b3; -[SCLegacyStoriesOperaMediaManager updateStoryLoadingLayerImageForStory:loadedImageKey:] */

void FUN_107200644(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d5280;
  _objc_retain(param_3);
  func_0x00010c09d320(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0 && puVar1 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0e00e0(uVar3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f80(param_1,param_2,uVar3,puVar1);
    _objc_release(uVar3);
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f0c898;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar6;
  func_0x00010c1d0640(uVar7,param_2,puVar6,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar5 = *(undefined **)(param_4 + 0x48);
    _objc_retain(puVar4);
    puVar1 = puVar4;
    func_0x00010bf3cf60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_4 + 0x48);
    puVar1 = puVar4;
    func_0x00010bf3cf60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c12d3e0(uVar3,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010c0e00e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110f0c898);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      func_0x00010c12cae0(param_4,param_2,puVar1);
      _objc_retain(puVar5);
      puVar6 = puVar5;
    }
    _objc_release(puVar1);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1072007b4; end: 1072008af; -[SCLegacyStoriesOperaMediaManager removeStoryLoadingLayerImageForStory:] */

void FUN_1072007b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12d3e0(uVar5,param_2,uVar1);
  _objc_release(uVar1);
  lVar2 = lVar3;
  func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110f0c898);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x00010c12cae0(param_1,param_2,lVar2);
    _objc_retain(lVar3);
    lVar4 = lVar3;
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}


