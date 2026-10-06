/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071f6580; end: 1071f6587; -[SCLegacyOperaPlaylistStoriesPlugin viewingType] */

undefined8 FUN_1071f6580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1071f6588; end: 1071f658f; -[SCLegacyOperaPlaylistStoriesPlugin storyPlayMode] */

undefined8 FUN_1071f6588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1071f6590; end: 1071f65cb; -[SCLegacyOperaPlaylistStoriesPlugin isViewingLongform] */

undefined8 FUN_1071f6590(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c258ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0836a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1071f65cc; end: 1071f65d3; -[SCLegacyOperaPlaylistStoriesPlugin viewLocation] */

undefined8 FUN_1071f65cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1071f65d4; end: 1071f65fb; -[SCLegacyOperaPlaylistStoriesPlugin playlistDataSource] */

void FUN_1071f65d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071f65fc; end: 1071f664b; -[SCLegacyOperaPlaylistStoriesPlugin addEventListenersWithEventAnnouncing:] */

void FUN_1071f65fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_3);
  func_0x00010c197680(uVar1,param_2,param_3);
  func_0x00010c197680(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071f664c; end: 1071f6657; -[SCLegacyOperaPlaylistStoriesPlugin type] */

void FUN_1071f664c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126c5b38,PTR_s_legacyStory_1126017d0);
  return;
}



/* Entry: 1071f6658; end: 1071f665b; -[SCLegacyOperaPlaylistStoriesPlugin extraPropertiesProvider] */

void FUN_1071f6658(void)

{
  return;
}



/* Entry: 1071f665c; end: 1071f672b; -[SCLegacyOperaPlaylistStoriesPlugin updateOperaDependencies:] */

void FUN_1071f665c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b23c8;
  func_0x00010c0ea380(PTR_PTR_1126b23c8);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010bf8fd60();
  if (iVar1 != 0) {
    puVar3 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab0c0(puVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c5b30;
  _objc_alloc(PTR_PTR_1126c5b30);
  func_0x00010bffe1e0();
  func_0x00010c2bc220(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1071f672c; end: 1071f67db; -[SCLegacyOperaPlaylistStoriesPlugin updateOperaConfiguration:] */

void FUN_1071f672c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5ea0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0755a0(uVar2);
  func_0x00010c2b69c0(puVar1,param_2,(uint)uVar2 ^ 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    func_0x00010c2afda0(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c2b5480(puVar1,param_2,0xb8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1071f67dc; end: 1071f685f; -[SCLegacyOperaPlaylistStoriesPlugin setPlaylistItemController:] */

void FUN_1071f67dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1ddde0(uVar2,param_2,param_3);
  puVar1 = PTR_PTR_1126d5270;
  _objc_alloc();
  func_0x00010c037320();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1d5580(*(undefined8 *)(param_1 + 0x68),param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071f6860; end: 1071f695b; -[SCLegacyOperaPlaylistStoriesPlugin setOperaControlling:] */

void FUN_1071f6860(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x21;
  ulong unaff_x22;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x30,param_3);
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0755a0();
  if ((uVar1 & 1) == 0) {
    unaff_x21 = uVar1;
    func_0x00010723fe7c();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdbc20();
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c08f5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ebe0();
  _objc_release(lVar2);
  _objc_release(param_1);
  if ((uVar1 & 1) == 0) {
    _objc_release(unaff_x22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x21);
    return;
  }
  return;
}



/* Entry: 1071f695c; end: 1071f6993; -[SCLegacyOperaPlaylistStoriesPlugin teardown] */

void FUN_1071f695c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2569c0(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c197680(*(undefined8 *)(param_1 + 0x68),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071f6994; end: 1071f6c9b; -[SCLegacyOperaPlaylistStoriesPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_1071f6994(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5b38;
  func_0x00010c08f700(PTR_PTR_1126c5b38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    puVar2 = PTR_PTR_1126cbca0;
    _objc_opt_class(PTR_PTR_1126cbca0);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar1 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x68);
      _objc_retain(puVar2);
      _objc_retain(puVar4);
      func_0x00010bf9ea80(uVar8);
      uVar8 = *(undefined8 *)(param_1 + 8);
      _objc_retain(puVar2);
      _objc_retain(puVar4);
      func_0x00010bf9ea80(uVar8);
      lVar7 = *(long *)(param_1 + 0x50);
      if (lVar7 == 0x2a) {
        func_0x00010c1d0640(puVar2);
        func_0x00010c1d0640(puVar2);
        lVar7 = *(long *)(param_1 + 0x50);
      }
      if ((lVar7 == 0x39) && (*(char *)(param_1 + 0x60) == '\x01')) {
        func_0x00010c1d0640(puVar2);
        func_0x00010c1d0640(puVar2);
        func_0x00010c1d0640(puVar2);
      }
      puVar5 = puVar2;
      func_0x00010bf51e00(puVar2);
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      (**(code **)(param_6 + 0x10))(param_6,puVar5,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      goto LAB_1071f6c58;
    }
  }
  (**(code **)(param_6 + 0x10))(param_6,0,0);
LAB_1071f6c58:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f6c9c; end: 1071f6d43;  */

void FUN_1071f6c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bef7f60(uVar1);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071f6d44; end: 1071f6d4b; -[SCLegacyOperaPlaylistStoriesPlugin shouldUseExtendedResetToCamera] */

void FUN_1071f6d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_shouldUseExtendedResetToCamera_11266aec8);
  return;
}



/* Entry: 1071f6d4c; end: 1071f6d53; -[SCLegacyOperaPlaylistStoriesPlugin storiesViewingSession] */

undefined8 FUN_1071f6d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1071f6d54; end: 1071f6dc7; -[SCLegacyOperaPlaylistStoriesPlugin .cxx_destruct] */

void FUN_1071f6d54(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1071f6dc8; end: 1071f6e5b; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter initWithPlaylistItemController:storiesDataSource:] */

undefined1 *
FUN_1071f6dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8c28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071f6e5c; end: 1071f6ea3; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter updatePageForID:] */

void FUN_1071f6e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071f6ea4; end: 1071f6f13; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter updatePageForStory:] */

void FUN_1071f6ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c101400(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071f6f14; end: 1071f6f73; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter initialPlaylistItemIDToDisplay] */

void FUN_1071f6f14(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c064160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1071f6f74; end: 1071f7033; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter firstStoryToDisplay] */

void FUN_1071f6f74(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c064160(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar1 = PTR_DAT_1126a5998;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,puVar1);
  _objc_release(lVar3);
  lVar4 = 0;
  if (((int)lVar2 != 0) && (lVar3 != 0)) {
    _objc_retain(lVar3);
    lVar4 = lVar3;
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1071f7034; end: 1071f70a3; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter friendsPlayListCount] */

long FUN_1071f7034(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1071f70a4; end: 1071f7167; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter indexOfFriendStoriesInPlaylist:] */

long FUN_1071f70a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c1014c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfecde0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
  return lVar4;
}



/* Entry: 1071f7168; end: 1071f72e7; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter indexOfStoryRelativeToInitialStory:] */

long FUN_1071f7168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar6;
  func_0x00010c101420(lVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar6);
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar7 = lVar2;
    func_0x00010bfce400(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bfecde0();
    _objc_release(lVar3);
    _objc_release(lVar7);
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010bfce400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c064180(param_1,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(param_1);
  if (lVar3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x00010bfce400(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bfecde0();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return lVar6 - lVar7;
}



/* Entry: 1071f72e8; end: 1071f72eb; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter didStartToPlayStory:] */

void FUN_1071f72e8(void)

{
  return;
}



/* Entry: 1071f72ec; end: 1071f7353; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter injectStory:afterStory:] */

void FUN_1071f72ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c065160();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071f7354; end: 1071f73c3; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter skipStory:] */

void FUN_1071f7354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12db80(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071f73c4; end: 1071f74db; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter isLastStoryInFriendStories:] */

bool FUN_1071f73c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010c101420(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bfce400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfecde0();
  lVar6 = lVar2;
  func_0x00010bfce400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return lVar5 == lVar8 + -1;
}



/* Entry: 1071f74dc; end: 1071f7513; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter isLastFriendStoriesToDisplay:] */

bool FUN_1071f74dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfecd00();
  func_0x00010bfba540(param_1);
  return lVar1 == param_1 + -1;
}



/* Entry: 1071f7514; end: 1071f753b; -[SCLegacyOperaStoriesPageProviderPlaylistAdapter .cxx_destruct] */

void FUN_1071f7514(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1071f753c; end: 1071f7547; +[SCLegacySingleStoryOperaDataSource announcerIdentifier] */

undefined ** FUN_1071f753c(void)

{
  return &PTR____CFConstantStringClassReference_110ea29d8;
}



/* Entry: 1071f7548; end: 1071f77e7; -[SCLegacySingleStoryOperaDataSource initWithFriendStories:viewingType:firstStoryToDisplay:isInStoryPlaylistMode:isInOperaPlaylistMode:userSession:navigationServices:viewLocation:chromeAvatarProvider:circumstanceEngine:musicContentRestrictionServices:streamingURLProvider:snapchattersSynchronousDataFetcher:snapchatterObservableRepository:lazyDiscoverFeedEventsController:] */

long FUN_1071f7548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  func_0x00010bffe140(param_1,param_2,param_11,param_13);
  if (param_1 != 0) {
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = param_8;
    _objc_release(uVar1);
    _objc_retain(param_9);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = param_9;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x110) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_5;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x20) = param_6;
    *(char *)(param_1 + 0x90) = (char)param_7;
    *(undefined8 *)(param_1 + 0x28) = param_10;
    if (param_7 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar3 = *(undefined8 *)(param_1 + 0x110);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f31f94d);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e0760(uVar1,param_2,uVar3,puVar2,3,
                          PTR_s__friendStoriesArrayDidChange_fri_112563ea8);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      *(undefined **)(param_1 + 0x98) = puVar2;
      _objc_release(uVar1);
    }
    _objc_retain(param_12);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = param_12;
    _objc_release(uVar1);
    _objc_retain(param_14);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = param_14;
    _objc_release(uVar1);
    _objc_retain(param_15);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = param_15;
    _objc_release(uVar1);
    _objc_retain(param_16);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = param_16;
    _objc_release(uVar1);
    _objc_retain(param_17);
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = param_17;
    _objc_release(uVar1);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1071f77e8; end: 1071f79d7; -[SCLegacySingleStoryOperaDataSource initWithStory:showViewersTable:viewingType:isInOperaPlaylistMode:userSession:navigationServices:viewLocation:chromeAvatarProvider:circumstanceEngine:musicContentRestrictionServices:streamingURLProvider:snapchattersSynchronousDataFetcher:snapchatterObservableRepository:lazyDiscoverFeedEventsController:] */

long FUN_1071f77e8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  func_0x00010bffe140(param_1,param_2,param_10,param_12);
  if (param_1 != 0) {
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = param_7;
    _objc_release(uVar1);
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = param_8;
    _objc_release(uVar1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = param_3;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    *(undefined1 *)(param_1 + 0x21) = param_4;
    *(char *)(param_1 + 0x90) = (char)param_6;
    *(undefined8 *)(param_1 + 0x28) = param_9;
    if (param_6 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      *(undefined **)(param_1 + 0x98) = puVar2;
      _objc_release(uVar1);
    }
    _objc_retain(param_11);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = param_11;
    _objc_release(uVar1);
    _objc_retain(param_13);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = param_13;
    _objc_release(uVar1);
    _objc_retain(param_14);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = param_14;
    _objc_release(uVar1);
    _objc_retain(param_15);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = param_15;
    _objc_release(uVar1);
    _objc_retain(param_16);
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = param_16;
    _objc_release(uVar1);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1071f79d8; end: 1071f7b07; -[SCLegacySingleStoryOperaDataSource initWithChromeAvatarProvider:musicContentRestrictionServices:] */

undefined1 *
FUN_1071f79d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8c30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x100);
    *(undefined **)((long)puVar1 + 0x100) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined8 *)((long)puVar1 + 200) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined8 *)((long)puVar1 + 0xd8) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071f7b08; end: 1071f7b2f; -[SCLegacySingleStoryOperaDataSource startToPlayStory:] */

void FUN_1071f7b08(long param_1)

{
  if (((*(char *)(param_1 + 0x90) == '\x01') && ((*(byte *)(param_1 + 0x22) & 1) == 0)) &&
     (*(long *)(param_1 + 0x110) != 0)) {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  return;
}



/* Entry: 1071f7b30; end: 1071f7b77; -[SCLegacySingleStoryOperaDataSource dealloc] */

void FUN_1071f7b30(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126f8c30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1071f7b78; end: 1071f7e63; -[SCLegacySingleStoryOperaDataSource buildViewModels] */

void FUN_1071f7b78(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    lVar12 = *(long *)(param_1 + 0x118);
    if (lVar12 == 0) {
      return;
    }
    _objc_retain(lVar12);
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar12;
    _objc_release(uVar10);
    puVar7 = PTR_PTR_1126d5278;
    uVar9 = *(undefined8 *)(param_1 + 0x118);
    uVar1 = *(undefined1 *)(param_1 + 0x21);
    uVar2 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010c10a540(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010bf3cf60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c0e00e0(uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010bf99100(uVar4,param_2,*(undefined8 *)(param_1 + 0x118));
    uVar16 = *(undefined8 *)(param_1 + 0xb0);
    uVar15 = *(undefined8 *)(param_1 + 0xa8);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar13 = *(undefined8 *)(param_1 + 0x128);
    uVar14 = *(undefined8 *)(param_1 + 200);
    lVar12 = param_1 + 0x120;
    _objc_loadWeakRetained();
    lVar5 = lVar12;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0da1c0();
    func_0x00010c29dc40(puVar7,param_2,uVar9,0,1,uVar1,uVar10,0,uVar4,uVar15,uVar16,uVar11,uVar13,0,
                        uVar14,lVar6,*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8)
                        ,*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar12);
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar8 = puVar7;
    func_0x00010c0dfd40(puVar7,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined **)(param_1 + 0xf8) = puVar8;
    _objc_release(uVar10);
    lVar12 = *(long *)(param_1 + 0xf8);
    func_0x00010bf0cb60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar12 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xf8);
      func_0x00010bf0cb60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = *(undefined8 *)(param_1 + 0xf8);
      func_0x00010bf0cb60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar10;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar9,param_2,uVar3,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar10);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x100),param_2,*(undefined8 *)(param_1 + 0xf8));
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010bf3cf60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,uVar2,uVar10);
    _objc_release(uVar10);
  }
  else {
    func_0x00010bee0e40(param_1);
    lVar12 = *(long *)(param_1 + 0x110);
    if (lVar12 == 0) {
      return;
    }
    uVar10 = *(undefined8 *)(param_1 + 8);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&DAT_10f31f94d);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0760(uVar10,param_2,lVar12,puVar7,3,
                        PTR_s__friendStoriesArrayDidChange_fri_112563ea8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1071f7e64; end: 1071f7fa7; -[SCLegacySingleStoryOperaDataSource skipStory:synchronously:] */

void FUN_1071f7e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1071f7fa8;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  ppuVar2 = &puStack_88;
  uStack_68 = param_3;
  _objc_retainBlock();
  if (param_4 == 0) {
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1071f80e0;
    puStack_98 = &UNK_110849530;
    _objc_retain(ppuVar2);
    ppuStack_90 = ppuVar2;
    func_0x000100162d98("APPSTORE",&puStack_b0);
    _objc_release(ppuStack_90);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f7fa8; end: 1071f80ab;  */

void FUN_1071f7fa8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  _objc_initWeak(auStack_48,lVar1);
  lVar2 = lVar1 + 0x108;
  _objc_loadWeakRetained(lVar2);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c134d60(lVar2);
  _objc_release(lVar2);
  func_0x00010c222e60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  return;
}



/* Entry: 1071f80ac; end: 1071f80df;  */

void FUN_1071f80ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8d880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071f80e0; end: 1071f80eb;  */

void FUN_1071f80e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001071f80e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1071f80ec; end: 1071f846f; -[SCLegacySingleStoryOperaDataSource injectStory:afterStory:] */

long FUN_1071f80ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar12 = param_1 + 0x130;
  _objc_loadWeakRetained();
  _objc_release();
  lVar11 = *(long *)(param_1 + 0x58);
  lVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar11,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar12 == 0) {
    if (lVar11 != 0) goto LAB_1071f8424;
    lVar12 = *(long *)(param_1 + 0x50);
    func_0x00010bfecde0(lVar12,param_2,*(undefined8 *)(param_1 + 0x68));
    uVar8 = *(ulong *)(param_1 + 0x50);
    func_0x00010bf529e0();
    if (uVar8 <= lVar12 + 1U) goto LAB_1071f8424;
    lVar12 = *(long *)(param_1 + 0x58);
    uVar9 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar12,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar9);
    if (lVar12 != 0) goto LAB_1071f8424;
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    uVar9 = param_4;
    func_0x00010bf3cf60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar13,param_2,param_3,uVar9);
    _objc_release(uVar9);
    uStack_88 = *(undefined8 *)PTR__NSKeyValueChangeOldKey_110345510;
    uStack_80 = *(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500;
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    puStack_78 = PTR____NSArray0__struct_11034ab48;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_78,&uStack_88,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be19420(param_1,param_2,puVar10,*(undefined8 *)(param_1 + 0x110));
  }
  else {
    if (lVar11 != 0) goto LAB_1071f8424;
    puVar2 = (undefined *)(param_1 + 0x130);
    _objc_loadWeakRetained();
    lVar12 = param_1;
    func_0x00010be75340(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c101420(puVar2,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(puVar2);
    puVar2 = puVar10;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfecde0();
    puVar5 = puVar10;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != puVar7 + -1) {
      lVar12 = *(long *)(param_1 + 0x58);
      uVar9 = param_4;
      func_0x00010bf3cf60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar12,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar9);
      if (lVar12 == 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x58);
        uVar9 = param_4;
        func_0x00010bf3cf60(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar13,param_2,param_3,uVar9);
        _objc_release(uVar9);
        param_1 = param_1 + 0x130;
        _objc_loadWeakRetained(param_1);
        puVar2 = puVar10;
        func_0x00010bfce400(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0c2a0(param_1,param_2,puVar3,0);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(param_1);
      }
    }
  }
  _objc_release(puVar10);
LAB_1071f8424:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)(param_3 + 0x50);
  func_0x00010bfecde0(lVar12);
  return lVar12 - *(long *)(param_3 + 0x80);
}



/* Entry: 1071f8470; end: 1071f849b; -[SCLegacySingleStoryOperaDataSource indexOfStoryRelativeToInitialStory:] */

long FUN_1071f8470(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bfecde0(lVar1);
  return lVar1 - *(long *)(param_1 + 0x80);
}



/* Entry: 1071f849c; end: 1071f84c3; -[SCLegacySingleStoryOperaDataSource rootViewModel] */

void FUN_1071f849c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x60);
  }
  func_0x00010c29d880(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071f84c4; end: 1071f85bf; -[SCLegacySingleStoryOperaDataSource _updateFriendStoriesSnapLoggingInfos:] */

void FUN_1071f84c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x000100504554();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x000107cb5d6c(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1071f85c0; end: 1071f86ef;  */

void FUN_1071f85c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c27dd80();
  puVar1 = PTR_PTR_1126d50b8;
  _objc_alloc(PTR_PTR_1126d50b8);
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f000(param_3);
  _objc_release(param_3);
  func_0x00010c047c20(param_1,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1071f86f0; end: 1071f892b; -[SCLegacySingleStoryOperaDataSource _friendStoriesArrayDidChange:friendStories:] */

void FUN_1071f86f0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bed8840(param_1);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    lVar1 = param_1 + 0x130;
    _objc_loadWeakRetained(lVar1);
    uVar2 = param_4;
    func_0x00010c259cc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c2a0(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar5 = param_1 + 0x130;
    _objc_loadWeakRetained(uVar5);
    _objc_retain();
    uVar6 = uVar5;
    func_0x00010c101260(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101400(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  else {
    uVar5 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c071b60();
    if ((uVar7 & 1) == 0) {
      _objc_initWeak(auStack_58,param_1);
      param_1 = param_1 + 0x108;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c134d60(param_1);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071f892c; end: 1071f8957;  */

void FUN_1071f892c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee0d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071f8958; end: 1071f8a07; -[SCLegacySingleStoryOperaDataSource _updateStoriesAndViewModels] */

void FUN_1071f8958(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar4);
  lVar1 = param_1;
  func_0x00010c29d880(param_1,param_2,*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0e40(param_1);
  if (lVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x50);
    func_0x00010bf4b900(uVar2,param_2,lVar4);
    if ((uVar2 & 1) == 0) {
      lVar3 = param_1;
      func_0x00010c29d880(param_1,param_2,*(undefined8 *)(param_1 + 0x60));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd2c0(lVar1,param_2,lVar3);
      _objc_release(lVar3);
      func_0x00010bde0a80(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_110ea29f8);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1071f8a08; end: 1071f8acb; -[SCLegacySingleStoryOperaDataSource _clearPageForViewModel:reason:] */

void FUN_1071f8a08(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0eb700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1d7f40(param_3,param_2,param_4);
    func_0x00010c1d7e80(param_3,param_2,0);
  }
  else {
    func_0x00010c0eb700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0f2200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3bbe0();
    _objc_release(param_3);
    _objc_release(lVar1);
    param_3 = param_1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071f8acc; end: 1071f8b2f; -[SCLegacySingleStoryOperaDataSource _dismissOperaPageViewModel] */

void FUN_1071f8acc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0eb700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f2200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf83fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071f8b30; end: 1071f8b83; -[SCLegacySingleStoryOperaDataSource viewModelForStory:] */

void FUN_1071f8b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071f8b84; end: 1071f8bf3; -[SCLegacySingleStoryOperaDataSource storyForViewModel:] */

void FUN_1071f8b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0f0be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071f8bf4; end: 1071f8d63; -[SCLegacySingleStoryOperaDataSource _removeStoryFromStoriesViewingOrder:] */

void FUN_1071f8bf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x50));
  func_0x00010be8df20(param_1);
  lVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107cb5994();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  lVar1 = param_1 + 0x130;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be75340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12db80(lVar1);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071f8d64; end: 1071f921f; -[SCLegacySingleStoryOperaDataSource _updateStoriesViewingOrderBasedOnFriendStories] */

void FUN_1071f8d64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  undefined auStack_170 [128];
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_1 + 0x50);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    uVar15 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = (undefined8 *)(param_1 + 0x38);
    uVar15 = *puVar13;
    *puVar13 = puVar1;
    _objc_release(uVar15);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined8 *)(param_1 + 0x48);
    uVar15 = *puVar14;
    *puVar14 = puVar1;
    _objc_release(uVar15);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    lStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    puVar9 = *(undefined **)(param_1 + 0x110);
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    plVar8 = &lStack_1c0;
    puVar9 = auStack_f0;
    puVar7 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,plVar8,puVar9,0x10);
    if (puVar7 != (undefined *)0x0) {
      lVar11 = *plStack_1b0;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lVar11) {
            _objc_enumerationMutation(puVar1);
          }
          uVar5 = *(undefined8 *)(lStack_1b8 + (long)puVar9 * 8);
          uVar15 = uVar5;
          func_0x00010c29ea60();
          if (((int)uVar15 == 0) || (puVar10 = puVar13, *(long *)(param_1 + 0x18) != 1)) {
            puVar10 = puVar14;
          }
          func_0x00010befa120(*puVar10,param_2,uVar5);
          puVar9 = puVar9 + 1;
        } while (puVar7 != puVar9);
        plVar8 = &lStack_1c0;
        puVar9 = auStack_f0;
        puVar7 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,plVar8,puVar9,0x10);
      } while (puVar7 != (undefined *)0x0);
    }
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lVar3 = *(long *)(param_1 + 0x110);
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar3;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar9 = auStack_170;
    lVar3 = lVar11;
    func_0x00010bf52a60(lVar11,param_2,&uStack_200,puVar9,0x10);
    if (lVar3 != 0) {
      lVar17 = *plStack_1f0;
      do {
        lVar12 = 0;
        do {
          if (*plStack_1f0 != lVar17) {
            _objc_enumerationMutation(lVar11);
          }
          uVar15 = *(undefined8 *)(lStack_1f8 + lVar12 * 8);
          uVar4 = *(ulong *)(param_1 + 0x38);
          func_0x00010bf4b900(uVar4,param_2,uVar15);
          puVar9 = puVar1;
          if ((uVar4 & 1) == 0) {
            uVar5 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010bf4b900(uVar5,param_2,uVar15);
            puVar9 = puVar7;
            if ((int)uVar5 == 0) {
              puVar9 = puVar2;
            }
          }
          func_0x00010befa120(puVar9,param_2,uVar15);
          lVar16 = *(long *)(param_1 + 0x58);
          func_0x00010bf3cf60(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(lVar16,param_2,uVar15);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar15);
          if (lVar16 != 0) {
            uVar15 = *(undefined8 *)(param_1 + 0x40);
            func_0x00010bf4b900(uVar15,param_2,lVar16);
            puVar9 = puVar7;
            if ((int)uVar15 == 0) {
              puVar9 = puVar2;
            }
            func_0x00010befa120(puVar9,param_2,lVar16);
          }
          _objc_release(lVar16);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        puVar9 = auStack_170;
        lVar3 = lVar11;
        func_0x00010bf52a60(lVar11,param_2,&uStack_200,puVar9,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar11);
    plVar8 = *(long **)(param_1 + 0x68);
    if ((plVar8 != (long *)0x0) &&
       (puVar6 = puVar7, func_0x00010bf4b900(), ((ulong)puVar6 & 1) == 0)) {
      plVar8 = *(long **)(param_1 + 0x68);
      puVar9 = puVar7;
      func_0x00010bee68c0(param_1,param_2,plVar8);
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar11 = *(long *)(param_1 + 0x68);
      func_0x00010c0c6960();
      if (lVar11 != 2) {
        plVar8 = *(long **)(param_1 + 0x68);
        puVar9 = (undefined *)0x0;
        func_0x00010c23e480(param_1,param_2,plVar8);
      }
    }
    uVar15 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar7;
    _objc_retain(puVar7);
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_release(uVar15);
    _objc_release(puVar7);
  }
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x118) == 0) {
    if (*(long *)(param_1 + 0x18) == 1) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                          *(undefined8 *)(param_1 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar1;
      _objc_release(uVar15);
      func_0x00010befa160(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x40));
    }
    else {
      if (*(long *)(param_1 + 0x18) != 2) goto LAB_1071f91b0;
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                          *(undefined8 *)(param_1 + 0x40));
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar1;
      _objc_release(uVar15);
    }
    plVar8 = *(long **)(param_1 + 0x48);
    func_0x00010befa160(*(undefined8 *)(param_1 + 0x50),param_2,plVar8);
  }
  else {
    plVar8 = &lStack_178;
    puVar9 = (undefined *)0x1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_178 = *(long *)(param_1 + 0x118);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,plVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c0d3c80();
    uVar15 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar7;
    _objc_release(uVar15);
    _objc_release(puVar1);
  }
LAB_1071f91b0:
  lVar11 = *(long *)(param_1 + 0x50);
  func_0x00010bf529e0();
  if (lVar11 == 0) {
    func_0x00010bed8200();
  }
  else {
    func_0x00010bee3ae0(param_1,param_2,1);
    lVar11 = *(long *)(param_1 + 0x50);
    plVar8 = *(long **)(param_1 + 0x60);
    func_0x00010bfecde0(lVar11,param_2,plVar8);
    *(long *)(param_1 + 0x80) = lVar11;
    param_1 = lVar11;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(plVar8);
  _objc_retain(puVar9);
  lVar11 = *(long *)(param_1 + 0x50);
  func_0x00010bfecde0(lVar11,param_2,plVar8);
  if (lVar11 != 0) {
    if (lVar11 == 0x7fffffffffffffff) {
      func_0x00010befa120(puVar9,param_2,plVar8);
      goto LAB_1071f92ec;
    }
    lVar11 = lVar11 + -1;
    do {
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0dfd40(uVar15,param_2,lVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      func_0x00010bfecde0(puVar9,param_2,uVar15);
      if (puVar1 != (undefined *)0x7fffffffffffffff) {
        func_0x00010c066b00(puVar9,param_2,plVar8,puVar1 + 1);
        _objc_release(uVar15);
        goto LAB_1071f92ec;
      }
      _objc_release(uVar15);
      lVar11 = lVar11 + -1;
    } while (lVar11 != -1);
  }
  func_0x00010c066b00(puVar9,param_2,plVar8,0);
LAB_1071f92ec:
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(plVar8);
  return;
}



/* Entry: 1071f9220; end: 1071f930b; -[SCLegacySingleStoryOperaDataSource _useStoriesDisplayOrderToInsertStory:intoStoriesArray:] */

void FUN_1071f9220(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bfecde0(lVar1,param_2,param_3);
  if (lVar1 != 0) {
    if (lVar1 == 0x7fffffffffffffff) {
      func_0x00010befa120(param_4,param_2,param_3);
      goto LAB_1071f92ec;
    }
    lVar1 = lVar1 + -1;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c0dfd40(uVar2,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_4;
      func_0x00010bfecde0(param_4,param_2,uVar2);
      if (lVar3 != 0x7fffffffffffffff) {
        func_0x00010c066b00(param_4,param_2,param_3,lVar3 + 1);
        _objc_release(uVar2);
        goto LAB_1071f92ec;
      }
      _objc_release(uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  func_0x00010c066b00(param_4,param_2,param_3,0);
LAB_1071f92ec:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071f930c; end: 1071f96d3; -[SCLegacySingleStoryOperaDataSource _updateViewModelsBasedOnCurrentDisplayOrderWithViewModelConnectionUpdate:] */

void FUN_1071f930c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bed8200();
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    lVar9 = *plStack_120;
    do {
      lVar11 = 0;
      lVar6 = lVar14;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        lVar15 = *(long *)(lStack_128 + lVar11 * 8);
        lVar14 = *(long *)(param_1 + 0x10);
        lVar2 = lVar15;
        func_0x00010bf3cf60(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(lVar14,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        if (lVar14 == 0) {
          lVar14 = param_1;
          func_0x00010bdd6e80(param_1,param_2,lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x100),param_2,lVar14);
        }
        else {
          lVar2 = param_1;
          func_0x00010c259b60(param_1,param_2,lVar14);
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 != lVar15) {
            uVar3 = *(undefined8 *)(param_1 + 0x68);
            func_0x00010c071ae0(uVar3,param_2,lVar2);
            if ((int)uVar3 == 0) {
              lVar4 = param_1;
              func_0x00010bdd6e80(param_1,param_2,lVar15);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = *(long *)(param_1 + 0x100);
              func_0x00010bfecde0(lVar5,param_2,lVar14);
              if (lVar5 != 0x7fffffffffffffff) {
                func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x100),param_2,lVar4,lVar5);
              }
              func_0x00010c12d140(lVar2,param_2,param_1);
              _objc_release(lVar14);
              lVar14 = lVar4;
            }
            else {
              *(undefined1 *)(param_1 + 0x78) = 1;
            }
          }
          _objc_release(lVar2);
        }
        if (param_3 != 0) {
          func_0x00010c1cd2c0(lVar6,param_2,lVar14);
          lVar2 = lVar6;
          if ((lVar6 == 0) && (lVar2 = 0, *(char *)(param_1 + 0x20) == '\0')) {
            lVar2 = lVar14;
          }
          func_0x00010c1e24e0(lVar14,param_2,lVar2);
        }
        _objc_retain(lVar14);
        _objc_release(lVar6);
        lVar6 = lVar15;
        func_0x00010bf3cf60(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar12,param_2,lVar14,lVar6);
        _objc_release(lVar6);
        lVar6 = lVar14;
        func_0x00010bf0cb60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 != 0) {
          lVar6 = lVar14;
          func_0x00010bf0cb60(lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar14;
          func_0x00010bf0cb60();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar2;
          func_0x00010c0f0be0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar12,param_2,lVar6,lVar5);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar2);
          _objc_release(lVar6);
        }
        lVar6 = lVar15;
        func_0x00010c0c6960();
        if (lVar6 != 2) {
          func_0x00010bef9be0(lVar15,param_2,param_1);
        }
        _objc_release(lVar14);
        lVar11 = lVar11 + 1;
        lVar6 = lVar14;
      } while (lVar1 != lVar11);
      lVar1 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar10);
  _objc_retain(puVar12);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar12;
  _objc_release(uVar3);
  _objc_retain(lVar14);
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  *(long *)(param_1 + 0xf8) = lVar14;
  _objc_release(uVar3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be03000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cd2c0(*(undefined8 *)(param_1 + 0xf8),param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar1 = lVar14;
    func_0x00010be6fac0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010bf529e0();
    if (lVar10 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR_PTR_1126c9e40;
      _objc_opt_new(PTR_PTR_1126c9e40);
      lVar10 = lVar1;
      func_0x00010c0dfd40(lVar1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c2b6360(puVar12,param_2,lVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar13;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(lVar10);
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126c9ba0;
      _objc_alloc(PTR_PTR_1126c9ba0);
      func_0x00010c032da0();
      _objc_release(puVar7);
    }
    lVar10 = lVar1;
    func_0x00010bf529e0();
    if (lVar10 == 2) {
      puVar13 = PTR_PTR_1126c9e40;
      _objc_opt_new(PTR_PTR_1126c9e40);
      lVar10 = lVar1;
      func_0x00010c0dfd40(lVar1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar13;
      func_0x00010c2b6360(puVar13,param_2,lVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar10);
      _objc_release(puVar13);
      puVar13 = PTR_PTR_1126c9ba0;
      _objc_alloc();
      func_0x00010c032da0();
      _objc_release(puVar8);
    }
    else {
      puVar13 = (undefined *)0x0;
    }
    func_0x00010c16b040(puVar12,param_2,puVar13);
    func_0x00010c1d8fe0(puVar13,param_2,puVar12);
    if (puVar13 != (undefined *)0x0) {
      uVar3 = *(undefined8 *)(lVar14 + 0x10);
      puVar7 = puVar13;
      func_0x00010c0f0be0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,puVar13,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(lVar1);
    _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  return;
}



/* Entry: 1071f96d4; end: 1071f98bf; -[SCLegacySingleStoryOperaDataSource _buildViewModelForStory:] */

void FUN_1071f96d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_1;
  func_0x00010be6fac0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c9e40;
    _objc_opt_new(PTR_PTR_1126c9e40);
    lVar2 = lVar1;
    func_0x00010c0dfd40(lVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2b6360(puVar6,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar2);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c9ba0;
    _objc_alloc(PTR_PTR_1126c9ba0);
    func_0x00010c032da0();
    _objc_release(puVar3);
  }
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 2) {
    puVar7 = PTR_PTR_1126c9e40;
    _objc_opt_new(PTR_PTR_1126c9e40);
    lVar2 = lVar1;
    func_0x00010c0dfd40(lVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c2b6360(puVar7,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c9ba0;
    _objc_alloc();
    func_0x00010c032da0();
    _objc_release(puVar4);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  func_0x00010c16b040(puVar6,param_2,puVar7);
  func_0x00010c1d8fe0(puVar7,param_2,puVar6);
  if (puVar7 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = puVar7;
    func_0x00010c0f0be0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar5,param_2,puVar7,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1071f98c0; end: 1071f9cab; -[SCLegacySingleStoryOperaDataSource _pagesPropertiesForStory:] */

void FUN_1071f98c0(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  lVar9 = *(long *)(param_1 + 0x98);
  lVar8 = param_3;
  if (lVar9 == 0) {
LAB_1071f9968:
    puVar10 = PTR_PTR_1126d5278;
    lVar9 = *(long *)(param_1 + 0x110);
    if (lVar9 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x118);
      uVar2 = *(undefined1 *)(param_1 + 0x21);
      bVar1 = *(byte *)(param_1 + 0x90);
      if ((bVar1 & 1) == 0) {
        uStack_a8 = *(undefined8 *)(param_1 + 0x128);
        func_0x00010c10a540();
        _objc_retainAutoreleasedReturnValue();
        lStack_b0 = param_3;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uStack_a8;
        func_0x00010c0e00e0(uStack_a8,param_2,lStack_b0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar15 = 0;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010bf99100(uVar11,param_2,param_3);
      uVar17 = *(undefined8 *)(param_1 + 0xb0);
      uVar16 = *(undefined8 *)(param_1 + 0xa8);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      uVar13 = *(undefined8 *)(param_1 + 0x128);
      uVar14 = *(undefined8 *)(param_1 + 200);
      lVar9 = param_1 + 0x120;
      _objc_loadWeakRetained();
      lVar4 = lVar9;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0da1c0();
      func_0x00010c0f26c0(puVar10,param_2,uVar6,0,1,uVar2,uVar15,0,uVar11,uVar16,uVar17,uVar12,
                          uVar13,0,uVar14,lVar5,*(undefined8 *)(param_1 + 0xd0),
                          *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                          *(undefined8 *)(param_1 + 0xe8));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar9);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x90);
      if ((bVar1 & 1) == 0) {
        uStack_a8 = *(undefined8 *)(param_1 + 0x128);
        func_0x00010c10a540();
        _objc_retainAutoreleasedReturnValue();
        lStack_b0 = param_3;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uStack_a8;
        func_0x00010c0e00e0(uStack_a8,param_2,lStack_b0);
        _objc_retainAutoreleasedReturnValue();
        if ((*(byte *)(param_1 + 0x90) & 1) != 0) goto LAB_1071f9a10;
        uStack_b8 = *(undefined8 *)(param_1 + 0x128);
        func_0x00010c09cc00();
        _objc_retainAutoreleasedReturnValue();
        lStack_c0 = param_3;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        uStack_80 = uStack_b8;
        func_0x00010c0e00e0(uStack_b8,param_2,lStack_c0);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = false;
      }
      else {
        uVar15 = 0;
LAB_1071f9a10:
        uStack_80 = 0;
        bVar3 = true;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010bf99100(uVar6,param_2,param_3);
      uVar16 = *(undefined8 *)(param_1 + 0xb0);
      uVar14 = *(undefined8 *)(param_1 + 0xa8);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      uVar11 = *(undefined8 *)(param_1 + 0x128);
      uVar12 = *(undefined8 *)(param_1 + 200);
      lVar4 = param_1 + 0x120;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010c0da1c0();
      func_0x00010c0f26c0(puVar10,param_2,param_3,lVar9,0,0,uVar15,uStack_80,uVar6,uVar14,uVar16,
                          uVar13,uVar11,param_1,uVar12,lVar7,*(undefined8 *)(param_1 + 0xd0),
                          *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                          *(undefined8 *)(param_1 + 0xe8));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (!bVar3) {
        _objc_release(uStack_80);
        _objc_release(lStack_c0);
        _objc_release(uStack_b8);
      }
    }
    if ((bVar1 & 1) == 0) {
      _objc_release(uVar15);
      _objc_release(lStack_b0);
      _objc_release(uStack_a8);
    }
    if ((*(long *)(param_1 + 0x98) == 0) || (lVar9 = param_3, func_0x00010c0c6960(), lVar9 != 2))
    goto LAB_1071f9c80;
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,puVar10,lVar8);
  }
  else {
    lVar4 = param_3;
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar9,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar9 == 0) goto LAB_1071f9968;
    puVar10 = *(undefined **)(param_1 + 0x98);
    func_0x00010bf3cf60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar10,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar8);
LAB_1071f9c80:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1071f9cac; end: 1071f9f2b; -[SCLegacySingleStoryOperaDataSource _removeViewModelForStory:] */

void FUN_1071f9cac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar4 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010c29db00(param_1,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c0d9820(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd2c0(lVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010c0f3aa0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0d9820(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8fe0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010c0d9820(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0f3aa0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b040();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010c0d9ae0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c0d9820(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd3a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010c0d9820(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e24e0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c141840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == lVar5) {
    lVar2 = lVar5;
    func_0x00010c0d9820(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c259b60(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar6,param_2,uVar4);
  _objc_release(uVar4);
  if (*(long *)(param_1 + 0xf8) == lVar5) {
    _objc_retain(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = lVar1;
    _objc_release(uVar4);
  }
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x100),param_2,lVar5);
  func_0x00010bde0a80(param_1,param_2,lVar5,&PTR____CFConstantStringClassReference_110ea2a18);
  func_0x00010c12d140(param_3,param_2,param_1);
  _objc_release(lVar1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071f9f2c; end: 1071fa07f; -[SCLegacySingleStoryOperaDataSource viewModelWithNextViewModel:] */

void FUN_1071f9f2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar8);
  lVar9 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0d9820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == param_3) goto LAB_1071fa030;
      _objc_release(lVar3);
      lVar10 = lVar10 + 1;
    } while (lVar9 != lVar10);
    lVar9 = lVar8;
    func_0x00010bf52a60();
  }
  lVar3 = 0;
LAB_1071fa030:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x68) != 0) {
    return;
  }
  lVar9 = *(long *)(param_3 + 0x118);
  if ((lVar9 == 0) &&
     ((*(long *)(param_3 + 0x60) != 0 || (lVar9 = *(long *)(param_3 + 0x30), lVar9 == 0)))) {
    if (*(long *)(param_3 + 0x70) != 0) {
      iVar2 = (int)*(undefined8 *)(param_3 + 0x50);
      func_0x00010bf4b900();
      if (iVar2 != 0) {
        lVar9 = *(long *)(param_3 + 0x70);
        goto LAB_1071fa0ac;
      }
    }
    lVar9 = *(long *)(param_3 + 0x40);
    func_0x00010bf529e0();
    if (lVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea3fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_3,PTR_s__setFirstStoryToDisplayToDefault_112586990);
      return;
    }
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(param_3 + 0x60) = uVar6;
  }
  else {
LAB_1071fa0ac:
    _objc_retain(lVar9);
    uVar5 = *(undefined8 *)(param_3 + 0x60);
    *(long *)(param_3 + 0x60) = lVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1071fa080; end: 1071fa133; -[SCLegacySingleStoryOperaDataSource _updateFirstStoryToDisplay] */

void FUN_1071fa080(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x118);
  if ((lVar4 == 0) &&
     ((*(long *)(param_1 + 0x60) != 0 || (lVar4 = *(long *)(param_1 + 0x30), lVar4 == 0)))) {
    if (*(long *)(param_1 + 0x70) != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
      func_0x00010bf4b900();
      if (iVar1 != 0) {
        lVar4 = *(long *)(param_1 + 0x70);
        goto LAB_1071fa0ac;
      }
    }
    lVar4 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0();
    if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea3fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__setFirstStoryToDisplayToDefault_112586990);
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
  }
  else {
LAB_1071fa0ac:
    _objc_retain(lVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071fa134; end: 1071fa18b; -[SCLegacySingleStoryOperaDataSource _setFirstStoryToDisplayToDefaultValue] */

void FUN_1071fa134(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x18) == 1) {
    plVar3 = (long *)(param_1 + 0x48);
    lVar1 = *plVar3;
    func_0x00010bf529e0();
    if (lVar1 != 0) goto LAB_1071fa164;
  }
  plVar3 = (long *)(param_1 + 0x50);
LAB_1071fa164:
  lVar1 = *plVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071fa18c; end: 1071faa7b; -[SCLegacySingleStoryOperaDataSource _updatePageForStory:] */

void FUN_1071fa18c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  _objc_retain(param_3);
  uVar19 = *(ulong *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar19;
  func_0x00010c0f0be0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c6960();
  if (uVar1 == 2) {
    lVar4 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a240();
    _objc_release(lVar4);
    uVar1 = uVar19;
    func_0x00010c0f0be0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = uVar13;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_PTR_1126d5278;
    if (uVar1 == 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010c10a540();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar11;
      func_0x00010c0e00e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99100();
      lVar4 = param_1 + 0x120;
      _objc_loadWeakRetained();
      lVar12 = lVar4;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da1c0();
      func_0x00010c29dc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      _objc_release(lVar4);
      _objc_release(uVar20);
      _objc_release(uVar2);
      _objc_release(uVar11);
      puVar17 = puVar16;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010c10a540();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010c09cc00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99100();
      lVar4 = param_1 + 0x120;
      _objc_loadWeakRetained();
      lVar12 = lVar4;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da1c0();
      func_0x00010c29dc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      _objc_release(lVar4);
      _objc_release(uVar11);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar20);
      _objc_release(uVar2);
      _objc_release(uVar5);
      puVar17 = puVar16;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010bf0cb60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    if (puVar18 != (undefined *)0x0) {
      puVar18 = puVar17;
      func_0x00010bf0cb60(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b040(uVar19);
      _objc_release(puVar18);
      puVar18 = puVar17;
      func_0x00010bf0cb60(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d8fe0();
      _objc_release(puVar18);
      puVar18 = puVar17;
      func_0x00010bf0cb60(puVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = *(undefined8 *)(param_1 + 0x10);
      puVar7 = puVar17;
      func_0x00010bf0cb60(puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0f0be0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar20);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar18);
    }
    _objc_release(puVar16);
    puVar16 = puVar17;
    func_0x00010c0f0be0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar16;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(uVar13);
    _objc_release(puVar18);
    _objc_release(puVar16);
    func_0x00010c1d0640(uVar13);
    puVar16 = PTR_PTR_1126c9e40;
    _objc_opt_new(PTR_PTR_1126c9e40);
    puVar18 = puVar16;
    func_0x00010c2b6360();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar18;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7e80(uVar19);
    _objc_release(puVar7);
    _objc_release(puVar18);
    _objc_release(puVar16);
    func_0x00010c12d140(param_3);
    _objc_release(puVar17);
    uVar3 = uVar13;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0c6960();
    if (uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0c56a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar2 = uVar1;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar2;
      func_0x00010c071ae0();
      if ((uVar13 & 1) == 0) {
        _objc_release(uVar2);
        _objc_release(uVar1);
LAB_1071faa00:
        func_0x00010c23e480(param_1);
        goto LAB_1071faa14;
      }
      uVar13 = uVar1;
      func_0x00010bf3ec40();
      if ((uVar13 == 0xfffffffffffffc14) ||
         (uVar13 = uVar1, func_0x00010bf3ec40(), uVar13 == 0xfffffffffffffc0f)) {
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        uVar13 = uVar1;
        func_0x00010bf3ec40();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (uVar13 != 0xfffffffffffffc13) goto LAB_1071faa00;
      }
      ppuVar14 = &PTR____CFConstantStringClassReference_110e49a38;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a38,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = &PTR____CFConstantStringClassReference_110e49a58;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e49a58,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      func_0x00010c1d0640(uVar3);
      func_0x00010c1d0640(uVar3);
      uVar2 = param_3;
      func_0x00010c0c56a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3);
      _objc_release(uVar2);
      puVar16 = PTR_PTR_1126c9e40;
      _objc_opt_new(PTR_PTR_1126c9e40);
      puVar17 = puVar16;
      func_0x00010c2b6360();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7e80(uVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(ppuVar15);
    }
    else {
      uVar1 = param_3;
      func_0x00010c0c6960();
      if ((uVar1 != 1) && (uVar1 = param_3, func_0x00010c0c6960(), uVar1 != 3)) goto LAB_1071faa20;
      uVar2 = uVar19;
      func_0x00010c0f0be0(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar2;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar13;
      func_0x00010c0d3c80();
      _objc_release(uVar13);
      _objc_release(uVar2);
      func_0x000107d26c28();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(uVar1);
      _objc_release(uVar2);
      ppuVar14 = (undefined **)PTR_PTR_1126c9e40;
      _objc_opt_new(PTR_PTR_1126c9e40);
      ppuVar15 = ppuVar14;
      func_0x00010c2b6360();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar15;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7e80(uVar19);
      _objc_release(ppuVar10);
      _objc_release(ppuVar15);
    }
    _objc_release(ppuVar14);
  }
LAB_1071faa14:
  _objc_release(uVar1);
LAB_1071faa20:
  _objc_release(uVar3);
  _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071faa7c; end: 1071faad7; -[SCLegacySingleStoryOperaDataSource story:didChangeMediaState:] */

void FUN_1071faa7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x130;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bedca20(param_1,param_2,param_3);
  }
  else {
    func_0x00010bdcc3c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071faad8; end: 1071fac17; -[SCLegacySingleStoryOperaDataSource _invokeFirstStoryPreparationCompleteIfNecessary:] */

void FUN_1071faad8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0xc0) != 0) &&
     ((lVar1 = param_3, func_0x00010c0c6960(), lVar1 == 2 ||
      (lVar1 = param_3, func_0x00010c0c6960(), lVar1 == 0)))) {
    lVar1 = param_1 + 0x130;
    _objc_loadWeakRetained();
    lVar2 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c1014c0(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010be75340(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0720c0(lVar5,param_2,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar7 != 0) {
      func_0x00010be78b20(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0xc0));
      uVar8 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0xc0) = 0;
      _objc_release(uVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fac18; end: 1071fb33b; -[SCLegacySingleStoryOperaDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_1071fac18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lStack_350;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x18) == 1) && (*(long *)(param_1 + 0xa0) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar2;
    _objc_release(uVar14);
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 0x110);
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010bf52a60();
    if (lVar8 != 0) {
      lVar17 = *plStack_220;
      do {
        lVar18 = 0;
        do {
          if (*plStack_220 != lVar17) {
            _objc_enumerationMutation(lVar3);
          }
          iVar16 = (int)*(undefined8 *)(lStack_228 + lVar18 * 8);
          func_0x00010c29ea60();
          if (iVar16 != 0) {
            func_0x00010befa120(*(undefined8 *)(param_1 + 0xa0));
          }
          lVar18 = lVar18 + 1;
        } while (lVar8 != lVar18);
        lVar8 = lVar3;
        func_0x00010bf52a60();
      } while (lVar8 != 0);
    }
    _objc_release(lVar3);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar4;
  _objc_release(uVar14);
  lVar8 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  if (lVar3 == 0) {
    lStack_350 = param_1;
    func_0x00010be17da0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lStack_350 = 0;
  }
  puStack_258 = &uStack_260;
  uStack_260 = 0;
  uStack_250 = 0x3032000000;
  pcStack_248 = FUN_1071fb33c;
  uStack_240 = 0x1071fb34c;
  uStack_238 = 0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  pcStack_2a8 = FUN_1071fb354;
  puStack_2a0 = &UNK_110992c50;
  lStack_298 = param_1;
  _objc_retain(puVar2);
  puStack_290 = puVar2;
  _objc_retain(puVar6);
  puStack_288 = puVar6;
  _objc_retain(puVar4);
  puStack_280 = puVar4;
  _objc_retain(puVar5);
  puStack_278 = puVar5;
  _objc_retain(lStack_350);
  puStack_268 = &uStack_260;
  lStack_270 = lStack_350;
  ppuVar7 = &puStack_2b8;
  _objc_retainBlock();
  lVar8 = *(long *)(param_1 + 0x110);
  if (lVar8 == 0) {
    (*(code *)ppuVar7[2])(ppuVar7,*(undefined8 *)(param_1 + 0x118));
  }
  else {
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar8;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = lVar17;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar17);
        }
        (*(code *)ppuVar7[2])(ppuVar7,*(undefined8 *)(lVar18 * 8));
        lVar18 = lVar18 + 1;
      } while (lVar8 != lVar18);
      lVar8 = lVar17;
      func_0x00010bf52a60();
    }
    _objc_release(lVar17);
  }
  if (*(long *)(param_1 + 0x18) == 1) {
    func_0x00010befa160(puVar2);
    func_0x00010befa160(puVar2);
    func_0x00010befa160(puVar2);
  }
  lVar8 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    puVar9 = puVar2;
    func_0x00010bf51e00();
    func_0x00010c12adc0(puVar2);
    _objc_retain(puVar9);
    puVar10 = puVar9;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (puVar10 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(puVar9);
        }
        uVar14 = *(undefined8 *)((long)puVar15 * 8);
        func_0x00010befa120(puVar2);
        func_0x00010bdc1720(uVar14);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010bec4fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        if (lVar3 != 0) {
          puVar11 = PTR_PTR_1126b23d8;
          _objc_alloc();
          puVar12 = PTR_PTR_1126c5b38;
          func_0x00010c08f700(PTR_PTR_1126c5b38);
          _objc_retainAutoreleasedReturnValue();
          lVar17 = param_1;
          func_0x00010be75340(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0558c0();
          _objc_release(lVar17);
          _objc_release(puVar12);
          uVar14 = *(undefined8 *)(param_1 + 0x88);
          puVar12 = puVar11;
          func_0x00010bdc1720(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar14);
          _objc_release(puVar12);
          func_0x00010befa120(puVar2);
          lVar17 = lVar3;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lStack_350;
          func_0x00010bf3cf60(lStack_350);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar17;
          func_0x00010c0720c0();
          _objc_release(lVar18);
          _objc_release(lVar17);
          puVar1 = puStack_258;
          if ((int)lVar13 != 0) {
            _objc_retain(puVar11);
            uVar14 = puVar1[5];
            puVar1[5] = puVar11;
            _objc_release(uVar14);
          }
          _objc_release(puVar11);
        }
        _objc_release(lVar3);
        puVar15 = puVar15 + 1;
      } while (puVar10 != puVar15);
      puVar10 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
    _objc_release(puVar9);
  }
  lVar8 = puStack_258[5];
  if (lVar8 == 0) {
    func_0x00010c13a9c0(param_3);
  }
  else {
    func_0x00010bdc1720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a9e0(param_3);
    _objc_release(lVar8);
  }
  func_0x00010be3dce0(param_1);
  _objc_release(ppuVar7);
  _objc_release(lStack_270);
  _objc_release(puStack_278);
  _objc_release(puStack_280);
  _objc_release(puStack_288);
  _objc_release(puStack_290);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_260,8);
  _objc_release(uStack_238);
  _objc_release(lStack_350);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = 8;
  __Block_object_dispose(&uStack_260);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  return;
}



/* Entry: 1071fb33c; end: 1071fb353;  */

void FUN_1071fb33c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1071fb354; end: 1071fb4fb;  */

void FUN_1071fb354(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b23d8;
  _objc_alloc();
  puVar3 = PTR_PTR_1126c5b38;
  func_0x00010c08f700(PTR_PTR_1126c5b38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be75340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0558c0();
  _objc_release(uVar4);
  _objc_release(puVar3);
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar7 + 0x18) == 2) {
    lVar7 = 0x28;
  }
  else {
    if (*(long *)(lVar7 + 0x18) != 1) goto LAB_1071fb444;
    uVar4 = param_2;
    func_0x00010c29ea60();
    if ((int)uVar4 == 0) {
      lVar7 = 0x30;
    }
    else {
      iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
      func_0x00010bf4b900();
      lVar7 = 0x38;
      if (iVar1 == 0) {
        lVar7 = 0x40;
      }
    }
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar7));
  lVar7 = *(long *)(param_1 + 0x20);
LAB_1071fb444:
  uVar4 = *(undefined8 *)(lVar7 + 0x88);
  puVar3 = puVar2;
  func_0x00010bdc1720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar3);
  uVar4 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf3cf60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  if ((int)uVar6 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071fb4fc; end: 1071fb577; -[SCLegacySingleStoryOperaDataSource _storyToInsertAfterStoryWithClientId:] */

void FUN_1071fb4fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071fb578; end: 1071fb66f; -[SCLegacySingleStoryOperaDataSource loadMediaForPlaylistItemGroup:] */

void FUN_1071fb578(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar1 = param_1;
  func_0x00010be17da0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c076b80();
    if ((int)uVar3 == 0) {
      uVar3 = uVar1;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c076be0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) goto LAB_1071fb650;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1071fb670;
      puStack_58 = &UNK_110841f80;
      uStack_50 = param_1;
      _objc_retain(uVar1);
      uStack_48 = uVar1;
      func_0x000100162d98("APPSTORE",&puStack_70);
      uVar2 = uStack_48;
    }
    _objc_release(uVar2);
  }
LAB_1071fb650:
  _objc_release(uVar1);
  return;
}



/* Entry: 1071fb670; end: 1071fb67b;  */

void FUN_1071fb670(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x110);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfaa8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar1,PTR_s_fetchStory_userInitiated_complet_1125c83e0,
               *(undefined8 *)(param_1 + 0x28),1,0,&PTR____CFConstantStringClassReference_110ea2a58)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfaa990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_fetchStoryMediaUserInitiated_com_1125c8408,1,0,
             &PTR____CFConstantStringClassReference_110ea2a58);
  return;
}



/* Entry: 1071fb67c; end: 1071fb86b; -[SCLegacySingleStoryOperaDataSource _firstStoryToDisplayForOperaPlaylist] */

void FUN_1071fb67c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x110);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x118);
LAB_1071fb7bc:
    _objc_retain(lVar1);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      param_3 = *(undefined1 **)(param_1 + 0x30);
      lVar3 = lVar1;
      func_0x00010bf4b900();
      _objc_release(lVar1);
      if ((int)lVar3 != 0) {
        lVar1 = *(long *)(param_1 + 0x30);
        goto LAB_1071fb7bc;
      }
    }
    param_3 = *(undefined1 **)(param_1 + 0x18);
    if (param_3 == (undefined1 *)0x1) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      plStack_100 = (long *)0x0;
      lVar1 = *(long *)(param_1 + 0x110);
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c140180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar4 = lVar3;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar6 = *plStack_100;
        do {
          lVar7 = 0;
          param_3 = (undefined1 *)puVar5;
          do {
            if (*plStack_100 != lVar6) {
              _objc_enumerationMutation(lVar3);
            }
            lVar1 = *(long *)(lStack_108 + lVar7 * 8);
            lVar2 = lVar1;
            func_0x00010c29ea60();
            if ((int)lVar2 == 0) {
              _objc_retain(lVar1);
              goto LAB_1071fb830;
            }
            lVar7 = lVar7 + 1;
          } while (lVar4 != lVar7);
          lVar4 = lVar3;
          puVar5 = &uStack_110;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(lVar3);
      lVar1 = 0;
      param_3 = (undefined1 *)puVar5;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x110);
      func_0x00010bfb1d80();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar4 = *(long *)(param_1 + 0x110);
        func_0x00010c258040(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar4;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
      }
      else {
        _objc_retain(lVar3);
        lVar1 = lVar3;
      }
LAB_1071fb830:
      _objc_release(lVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_clientId_1125acd80);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1071fb86c; end: 1071fb873; -[SCLegacySingleStoryOperaDataSource _playlistItemIdForStory:] */

void FUN_1071fb86c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_clientId_1125acd80);
  return;
}



/* Entry: 1071fb874; end: 1071fb8c7; -[SCLegacySingleStoryOperaDataSource storyForItem:] */

void FUN_1071fb874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071fb8c8; end: 1071fb907; -[SCLegacySingleStoryOperaDataSource teardownStoryForItem:] */

void FUN_1071fb8c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x88),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fb908; end: 1071fba3b; -[SCLegacySingleStoryOperaDataSource pageDataForDataModel:completion:] */

void FUN_1071fb908(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be6fac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  lVar2 = param_1;
  func_0x00010c0dfd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf529e0();
  if (lVar3 == 2) {
    lVar4 = param_1;
    func_0x00010c0dfd40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = 0;
  }
  func_0x00010c033240(puVar1);
  (**(code **)(param_4 + 0x10))(param_4,puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
  if (lVar3 == 2) {
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0c6960();
  if (lVar2 != 2) {
    func_0x00010bef9be0(param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fba3c; end: 1071fbba7; -[SCLegacySingleStoryOperaDataSource extraPropertiesForDataModel:completion:] */

void FUN_1071fba3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c10a540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  func_0x00010c09cc00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  (**(code **)(param_4 + 0x10))(param_4,puVar5,0);
  _objc_release(param_4);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071fbba8; end: 1071fbc3b; -[SCLegacySingleStoryOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_1071fbba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    func_0x00010be78b20(param_1,param_2,lVar1,param_5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1071fbc3c; end: 1071fbcfb; -[SCLegacySingleStoryOperaDataSource _prepareMediaForStory:completion:] */

void FUN_1071fbc3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1071fbcfc;
  puStack_50 = &UNK_110992c80;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c10a260(uVar1,param_2,param_3,0,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071fbcfc; end: 1071fbf17;  */

void FUN_1071fbcfc(long param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  if ((param_2 == 0) && ((param_3 & 1) == 0)) {
    lVar3 = param_4;
    func_0x00010bf3ec40();
    if (lVar3 == 0xc9) {
      func_0x00010bef9be0(*(undefined8 *)(param_1 + 0x20));
      FUN_1071fe940(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x110),
                    *(undefined8 *)(param_1 + 0x20),param_4);
    }
    else {
      lVar3 = param_4;
      func_0x00010bf3ec40();
      if (lVar3 == 0x280) {
        func_0x00010c1973a0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x128));
      }
      else {
        func_0x00010c23e480();
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0c3fe0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c840();
        _objc_release(uVar4);
      }
      func_0x00010c287a00(*(undefined8 *)(param_1 + 0x20));
    }
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    if (param_2 == 0 && param_4 == 0) goto LAB_1071fbef8;
    if (param_4 == 0) {
      uVar4 = 0;
    }
    else {
      lVar3 = param_4;
      func_0x00010bf3ec40();
      uVar4 = 1;
      if (lVar3 == 0xc9) {
        uVar4 = 2;
      }
      lVar3 = *(long *)(param_1 + 0x30);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf15fe0(uVar1);
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4,param_4,uVar1);
  }
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010be63c00();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 != 0) && (lVar2 = lVar3, func_0x00010c0c6960(), lVar2 != 2)) {
      func_0x00010c074fe0();
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x128);
      lVar2 = param_2;
      func_0x00010c0e00e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a600(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = *(long *)(param_1 + 0x28) + 0x130;
      _objc_loadWeakRetained(lVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010be75340(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101400(lVar2);
      _objc_release(uVar4);
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
  }
LAB_1071fbef8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071fbf18; end: 1071fc0af; -[SCLegacySingleStoryOperaDataSource _nextStoryAfterStory:] */

void FUN_1071fbf18(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x130;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010be75340(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c101420(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfecde0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  if (uVar5 + 1 < uVar6) {
    uVar1 = uVar3;
    func_0x00010bfce400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar1);
    func_0x00010c259b20(param_1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    param_1 = 0;
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071fc0b0; end: 1071fc13b; -[SCLegacySingleStoryOperaDataSource removeMediaForItem:] */

void FUN_1071fc0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    func_0x00010c12dca0(*(undefined8 *)(param_1 + 0x128),param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c12e6a0(*(undefined8 *)(param_1 + 0x128),param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071fc13c; end: 1071fc3ab; -[SCLegacySingleStoryOperaDataSource _announcePlaylistItemMediaStateChangeForStory:] */

void FUN_1071fc13c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar6,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0c6960();
  if ((long)uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_1071fc36c;
      goto LAB_1071fc228;
    }
    uVar1 = param_3;
    func_0x00010c0c56a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar4 = uVar1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c071ae0();
    if ((uVar5 & 1) == 0) {
      _objc_release(uVar4);
      _objc_release(uVar1);
LAB_1071fc354:
      func_0x00010c23e480(param_1,param_2,param_3,1);
    }
    else {
      uVar5 = uVar1;
      func_0x00010bf3ec40();
      if ((uVar5 == 0xfffffffffffffc14) ||
         (uVar5 = uVar1, func_0x00010bf3ec40(), uVar5 == 0xfffffffffffffc0f)) {
        _objc_release(uVar4);
        _objc_release(uVar1);
      }
      else {
        uVar5 = uVar1;
        func_0x00010bf3ec40();
        _objc_release(uVar4);
        _objc_release(uVar1);
        if (uVar5 != 0xfffffffffffffc13) goto LAB_1071fc354;
      }
      func_0x00010c1973a0(*(undefined8 *)(param_1 + 0x128),param_2,2,param_3);
      lVar2 = param_1 + 0x130;
      _objc_loadWeakRetained(lVar2);
      lVar3 = param_1;
      func_0x00010be75340(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101400(lVar2,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010be3dce0(param_1,param_2,param_3);
    }
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 == 2) {
        func_0x00010c1973a0(*(undefined8 *)(param_1 + 0x128),param_2,0,param_3);
        lVar2 = param_1 + 0x130;
        _objc_loadWeakRetained(lVar2);
        lVar3 = param_1;
        func_0x00010be75340(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c101400(lVar2,param_2,lVar3);
        _objc_release(lVar3);
        _objc_release(lVar2);
        func_0x00010c12d140(param_3,param_2,param_1);
        func_0x00010be3dce0(param_1,param_2,param_3);
      }
      goto LAB_1071fc36c;
    }
LAB_1071fc228:
    func_0x00010c1973a0(*(undefined8 *)(param_1 + 0x128),param_2,0,param_3);
    uVar1 = param_1 + 0x130;
    _objc_loadWeakRetained(uVar1);
    func_0x00010be75340(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101400(uVar1,param_2,param_1);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
LAB_1071fc36c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071fc3ac; end: 1071fc417; -[SCLegacySingleStoryOperaDataSource streamingURLForRequestInfo:] */

void FUN_1071fc3ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c25c9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071fc418; end: 1071fc41f; -[SCLegacySingleStoryOperaDataSource lastViewModel] */

undefined8 FUN_1071fc418(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1071fc420; end: 1071fc427; -[SCLegacySingleStoryOperaDataSource generatedViewModels] */

undefined8 FUN_1071fc420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 1071fc428; end: 1071fc457; -[SCLegacySingleStoryOperaDataSource setGeneratedViewModels:] */

void FUN_1071fc428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071fc458; end: 1071fc46f; -[SCLegacySingleStoryOperaDataSource delegate] */

void FUN_1071fc458(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x108);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071fc470; end: 1071fc47b; -[SCLegacySingleStoryOperaDataSource setDelegate:] */

void FUN_1071fc470(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x108,param_3);
  return;
}



/* Entry: 1071fc47c; end: 1071fc483; -[SCLegacySingleStoryOperaDataSource friendStories] */

undefined8 FUN_1071fc47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 1071fc484; end: 1071fc4b3; -[SCLegacySingleStoryOperaDataSource setFriendStories:] */

void FUN_1071fc484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071fc4b4; end: 1071fc4bb; -[SCLegacySingleStoryOperaDataSource story] */

undefined8 FUN_1071fc4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1071fc4bc; end: 1071fc4eb; -[SCLegacySingleStoryOperaDataSource setStory:] */

void FUN_1071fc4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071fc4ec; end: 1071fc503; -[SCLegacySingleStoryOperaDataSource operaViewController] */

void FUN_1071fc4ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071fc504; end: 1071fc50f; -[SCLegacySingleStoryOperaDataSource setOperaViewController:] */

void FUN_1071fc504(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x120,param_3);
  return;
}



/* Entry: 1071fc510; end: 1071fc517; -[SCLegacySingleStoryOperaDataSource storiesMediaManager] */

undefined8 FUN_1071fc510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 1071fc518; end: 1071fc547; -[SCLegacySingleStoryOperaDataSource setStoriesMediaManager:] */

void FUN_1071fc518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


