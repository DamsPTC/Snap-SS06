/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a44604; end: 106a44607; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider playbackDataProvider] */

void FUN_106a44604(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__combinedPlaydataProvider_112556218);
  return;
}



/* Entry: 106a44608; end: 106a44673; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider _playlistDataModels] */

void FUN_106a44608(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bdd2b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be94b00(param_1,param_2,lVar1);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  else {
    func_0x00010bf63f20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106a44674; end: 106a44833; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider _basePlaylistDataModels] */

void FUN_106a44674(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a43edc;
  uStack_40 = 0x106a43eec;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  lVar2 = puStack_58[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c101260(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a44834; end: 106a4486b;  */

void FUN_106a44834(long param_1,undefined8 param_2)

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



/* Entry: 106a4486c; end: 106a44877;  */

void FUN_106a4486c(void)

{
  return;
}



/* Entry: 106a44878; end: 106a448af;  */

void FUN_106a44878(long param_1,undefined8 param_2)

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



/* Entry: 106a448b0; end: 106a448bb;  */

void FUN_106a448b0(void)

{
  return;
}



/* Entry: 106a448bc; end: 106a448f3;  */

void FUN_106a448bc(long param_1,undefined8 param_2)

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



/* Entry: 106a448f4; end: 106a44907;  */

void FUN_106a448f4(void)

{
  return;
}



/* Entry: 106a44908; end: 106a44aab; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider _allDiscoverFeedStories] */

void FUN_106a44908(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a43edc;
  uStack_40 = 0x106a43eec;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  lVar2 = puStack_58[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0dad80(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a44aac; end: 106a44ae3;  */

void FUN_106a44aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a44ae4; end: 106a44aef;  */

void FUN_106a44ae4(void)

{
  return;
}



/* Entry: 106a44af0; end: 106a44b27;  */

void FUN_106a44af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a44b28; end: 106a44b4b;  */

void FUN_106a44b28(void)

{
  return;
}



/* Entry: 106a44b4c; end: 106a44c87; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider _combinedPlaydataProvider] */

void FUN_106a44b4c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bfb8c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c2a60;
  _objc_opt_class(PTR_PTR_1126c2a60);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  lVar5 = param_1;
  func_0x00010bdc9d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x0001006372a4();
  _objc_release(lVar5);
  func_0x00010c066720(uVar1);
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar4 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar4 & 1) != 0) {
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c0ff0c0();
    _objc_release(lVar5);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21420();
  func_0x00010c222640(uVar1);
  _objc_release(uVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a44c88; end: 106a44c8f;  */

bool FUN_106a44c88(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_2;
  func_0x00010c25b720();
  if ((lVar2 == 3) || (lVar2 = param_2, func_0x00010c25b720(), lVar2 == 0xe)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c25b720(param_2);
    bVar1 = lVar2 == 0xd;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106a44c90; end: 106a44cf3;  */

bool FUN_106a44c90(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c25b720();
  if ((lVar2 == 3) || (lVar2 = param_1, func_0x00010c25b720(), lVar2 == 0xe)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    func_0x00010c25b720(param_1);
    bVar1 = lVar2 == 0xd;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106a44cf4; end: 106a44d73; -[SCFriendStoriesNonFriendStoriesCombinedConfigProvider .cxx_destruct] */

void FUN_106a44cf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106a44d74; end: 106a44f13; -[SCFriendsFeedConfigProvider initWithPlaybackScope:pluginCreator:storiesPlaybackServices:playbackDelegate:circumstanceEngine:playlistGenerator:storiesConfigProvider:friendingInterstitialPluginService:] */

undefined1 *
FUN_106a44d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f4640;
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



/* Entry: 106a44f14; end: 106a44ff3; -[SCFriendsFeedConfigProvider sessionContext] */

void FUN_106a44f14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21420();
  func_0x000108534aa8();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf21420();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar1,param_2,6,uVar3,1,0xffffffffffffffff,0,uVar5,puVar6,0xb8);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a44ff4; end: 106a4508f; -[SCFriendsFeedConfigProvider launchingCandidates] */

void FUN_106a44ff4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  lVar2 = param_1;
  func_0x00010be752a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0(puVar1,param_2,lVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a45090; end: 106a450d3; -[SCFriendsFeedConfigProvider _shouldEnableVOpera] */

bool FUN_106a45090(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0ea1c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6c60();
  _objc_release(lVar1);
  return lVar2 == 1;
}



/* Entry: 106a450d4; end: 106a450eb; -[SCFriendsFeedConfigProvider _navigationStyle] */

ulong FUN_106a450d4(ulong param_1)

{
  func_0x00010beb38c0();
  return param_1 & 0xffffffff;
}



/* Entry: 106a450ec; end: 106a4516f; -[SCFriendsFeedConfigProvider presentingConfig] */

void FUN_106a450ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010beb38c0();
  puVar1 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  uVar2 = param_1;
  func_0x00010be62520(param_1);
  func_0x00010becbd80();
  func_0x00010c018aa0(0,puVar1,param_2,0,0,1,uVar2,0,1,0,(int)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a45170; end: 106a4517f; -[SCFriendsFeedConfigProvider _thumbnailTransitionDurationMsOverride] */

uint FUN_106a45170(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c067f00(uVar1,&PTR____CFConstantStringClassReference_110e2ebb8,
                      &PTR____CFConstantStringClassReference_110e68378,0,0);
  return (uint)uVar1 & ((int)(uint)uVar1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 106a45180; end: 106a45593; -[SCFriendsFeedConfigProvider plugins] */

undefined * FUN_106a45180(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dcad78;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110eb5238;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7ca8;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7cc0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_80,&ppuStack_90,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be62520();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b040();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21420();
  lVar17 = param_1;
  func_0x00010bde21e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1e60();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252000();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c4a0();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ea1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf4d260();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bfb7ba0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar17);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar14 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bfba1c0();
  _objc_release(uVar14);
  puVar2 = puVar13;
  if ((uVar15 & 1) == 0) {
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar17 = param_1;
    func_0x00010bec4520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar16);
    _objc_release(lVar17);
    func_0x0001006372a4(puVar13,&PTR___NSConcreteGlobalBlock_110956260);
    func_0x00010befa160(puVar16);
    _objc_release(puVar2);
    puVar2 = puVar16;
    func_0x00010bf51e00(puVar16);
    _objc_release(puVar13);
    _objc_release(puVar16);
  }
  lVar17 = param_1;
  func_0x00010bdd2b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be94b00(param_1);
  _objc_release(lVar17);
  lVar17 = *(long *)(param_1 + 0x48);
  puVar13 = puVar2;
  if (lVar17 != 0) {
    func_0x00010c1019a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar17);
  }
  uVar15 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar14 = uVar15;
  puVar2 = PTR_s_playbackPresenterStoriesPlugin__11261d9c0;
  _objc_opt_respondsToSelector();
  _objc_release(uVar15);
  if ((uVar14 & 1) != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    func_0x00010c0ffe80();
    _objc_release(param_1);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  puVar1 = PTR_PTR_1126c2d68;
  _objc_opt_class(PTR_PTR_1126c2d68);
  puVar13 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  _objc_release(puVar2);
  return (undefined *)(ulong)((uint)(puVar2 == (undefined *)0x0) | ((uint)puVar13 ^ 0xffffffff) & 1)
  ;
}



/* Entry: 106a45594; end: 106a455e7;  */

uint FUN_106a45594(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c2d68;
  _objc_opt_class(PTR_PTR_1126c2d68);
  lVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)(param_2 == 0) | ((uint)lVar2 ^ 0xffffffff) & 1;
}



/* Entry: 106a455e8; end: 106a45687; -[SCFriendsFeedConfigProvider _resolveInterstitialAugmentationIfNeeded:] */

void FUN_106a455e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x48) == 0) && (lVar3 = *(long *)(param_1 + 0x40), lVar3 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f1e60();
    func_0x00010c071560(lVar3,param_2,uVar2);
    _objc_release(uVar1);
    if ((int)lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf102a0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a45688; end: 106a4568b; -[SCFriendsFeedConfigProvider playbackDataProvider] */

void FUN_106a45688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__combinedPlaydataProvider_112556218);
  return;
}



/* Entry: 106a4568c; end: 106a457e3; -[SCFriendsFeedConfigProvider _storiesPlugin] */

void FUN_106a4568c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106a457e4;
  uStack_30 = 0x106a457f4;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a457e4; end: 106a457ff;  */

void FUN_106a457e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a45800; end: 106a4586f;  */

void FUN_106a45800(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong in_x4;
  long lVar5;
  
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126c2d68;
  _objc_opt_class(PTR_PTR_1126c2d68);
  uVar3 = in_x4;
  _objc_opt_isKindOfClass(in_x4,puVar2);
  uVar1 = in_x4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(ulong *)(lVar5 + 0x28) = uVar1;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 106a45870; end: 106a4589f;  */

void FUN_106a45870(void)

{
  return;
}



/* Entry: 106a458a0; end: 106a4590b; -[SCFriendsFeedConfigProvider _playlistDataModels] */

void FUN_106a458a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bdd2b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be94b00(param_1,param_2,lVar1);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  else {
    func_0x00010bf63f20();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106a4590c; end: 106a45a97; -[SCFriendsFeedConfigProvider _basePlaylistDataModels] */

void FUN_106a4590c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a457e4;
  uStack_40 = 0x106a457f4;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  lVar2 = puStack_58[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c101260(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a45a98; end: 106a45a9b;  */

void FUN_106a45a98(void)

{
  return;
}



/* Entry: 106a45a9c; end: 106a45ad3;  */

void FUN_106a45a9c(long param_1,undefined8 param_2)

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



/* Entry: 106a45ad4; end: 106a45b03;  */

void FUN_106a45ad4(void)

{
  return;
}



/* Entry: 106a45b04; end: 106a45c8f; -[SCFriendsFeedConfigProvider _allDiscoverFeedStories] */

void FUN_106a45b04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a457e4;
  uStack_40 = 0x106a457f4;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  lVar2 = puStack_58[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0dad80(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a45c90; end: 106a45c93;  */

void FUN_106a45c90(void)

{
  return;
}



/* Entry: 106a45c94; end: 106a45ccb;  */

void FUN_106a45c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a45ccc; end: 106a45cfb;  */

void FUN_106a45ccc(void)

{
  return;
}



/* Entry: 106a45cfc; end: 106a45f37; -[SCFriendsFeedConfigProvider _combinedPlaydataProvider] */

void FUN_106a45cfc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a457e4;
  uStack_40 = 0x106a457f4;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar7 = puStack_58[5];
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_1 + 0x18);
    func_0x00010bfb8c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126c2a60;
    _objc_opt_class(PTR_PTR_1126c2a60);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar7 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar2);
    lVar5 = param_1;
    func_0x00010bdc9d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x0001006372a4();
    _objc_release(lVar5);
    func_0x00010c066720(uVar7);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21420();
    func_0x00010c222640(uVar7);
    _objc_release(uVar1);
    _objc_release(lVar6);
  }
  else {
    _objc_retain(uVar7);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106a45f38; end: 106a45f3b;  */

void FUN_106a45f38(void)

{
  return;
}



/* Entry: 106a45f3c; end: 106a45f73;  */

void FUN_106a45f3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a45f74; end: 106a45fa3;  */

void FUN_106a45f74(void)

{
  return;
}



/* Entry: 106a45fa4; end: 106a4600b;  */

bool FUN_106a45fa4(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c25b720();
  if ((lVar2 == 3) || (lVar2 = param_2, func_0x00010c25b720(), lVar2 == 0xe)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c25b720(param_2);
    bVar1 = lVar2 == 0xd;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106a4600c; end: 106a4608b; -[SCFriendsFeedConfigProvider .cxx_destruct] */

void FUN_106a4600c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106a4608c; end: 106a4612f; -[SCMassSnapManagementPlaybackConfigProvider initWithPlaybackScope:pluginCreator:playbackDelegate:] */

undefined1 *
FUN_106a4608c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4648;
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



/* Entry: 106a46130; end: 106a4620f; -[SCMassSnapManagementPlaybackConfigProvider sessionContext] */

void FUN_106a46130(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21420();
  func_0x000108534aa8();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf21420();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar1,param_2,1,uVar3,1,0xffffffffffffffff,0,uVar5,puVar6,0xb8);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a46210; end: 106a46367; -[SCMassSnapManagementPlaybackConfigProvider launchingCandidates] */

void FUN_106a46210(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010be5dae0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010bf529e0(), uVar2 == 0)) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c063e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b23f8;
    _objc_alloc(PTR_PTR_1126b23f8);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_40 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0087a0(puVar4,param_2,puVar5,uVar2);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be5db00();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 <= param_1) {
      param_1 = 0;
    }
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc(PTR_PTR_1126b23f8);
    func_0x00010c0087a0();
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b2400);
    func_0x00010c018aa0(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a46368; end: 106a463b7; -[SCMassSnapManagementPlaybackConfigProvider presentingConfig] */

void FUN_106a46368(void)

{
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a463b8; end: 106a46447; -[SCMassSnapManagementPlaybackConfigProvider plugins] */

void FUN_106a463b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b7f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010befa160(puVar1,param_2,lVar3);
  }
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a46448; end: 106a4644f; -[SCMassSnapManagementPlaybackConfigProvider playbackDataProvider] */

undefined8 FUN_106a46448(void)

{
  return 0;
}



/* Entry: 106a46450; end: 106a465a7; -[SCMassSnapManagementPlaybackConfigProvider _massSnapAllGroupDataModels] */

void FUN_106a46450(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106a465a8;
  uStack_30 = 0x106a465b8;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a465a8; end: 106a465f3;  */

void FUN_106a465a8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a465f4; end: 106a4662b;  */

void FUN_106a465f4(long param_1,undefined8 param_2)

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



/* Entry: 106a4662c; end: 106a4675f; -[SCMassSnapManagementPlaybackConfigProvider _massSnapStartingGroupIndex] */

undefined8 FUN_106a4662c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 106a46760; end: 106a467a3;  */

void FUN_106a46760(void)

{
  return;
}



/* Entry: 106a467a4; end: 106a467d3; -[SCMassSnapManagementPlaybackConfigProvider .cxx_destruct] */

void FUN_106a467a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a467d4; end: 106a468f7; -[SCMyStoryConfigProvider initWithPlaybackScope:pluginCreator:storiesPlaybackServices:playbackDelegate:circumstanceEngine:] */

undefined1 *
FUN_106a467d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f4650;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_7;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x28) = (char)uVar2;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a468f8; end: 106a469d3; -[SCMyStoryConfigProvider sessionContext] */

void FUN_106a468f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21420();
  func_0x000108534aa8();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf21420();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar1,param_2,0xffffffffffffffff,uVar3,1,0xffffffffffffffff,0,uVar5,puVar6,0)
  ;
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a469d4; end: 106a46a6f; -[SCMyStoryConfigProvider launchingCandidates] */

void FUN_106a469d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  lVar2 = param_1;
  func_0x00010be752a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0(puVar1,param_2,lVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a46a70; end: 106a46cc3; -[SCMyStoryConfigProvider presentingConfig] */

void FUN_106a46a70(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27c4a0();
  _objc_release(lVar2);
  if (lVar3 == 0x29) {
    *(undefined1 *)(puStack_58 + 3) = 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf21420();
  if (lVar3 != 0x6a) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21420();
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0ea1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6c60();
  func_0x00010c018aa0(0,puVar4);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a46cc4; end: 106a46d07;  */

void FUN_106a46cc4(void)

{
  return;
}



/* Entry: 106a46d08; end: 106a474d7; -[SCMyStoryConfigProvider plugins] */

void FUN_106a46d08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined2 uVar12;
  undefined **ppuVar13;
  undefined8 uStack_490;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  code *pcStack_3b0;
  undefined *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_106a474d8;
  uStack_110 = 0x106a474e8;
  lStack_108 = 0;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  uStack_138 = 0;
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x2020000000;
  uStack_158 = 0;
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_106a474d8;
  uStack_180 = 0x106a474e8;
  uStack_178 = 0;
  puStack_1c8 = &uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c0 = 0x3032000000;
  pcStack_1b8 = FUN_106a474d8;
  uStack_1b0 = 0x106a474e8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d4b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = uVar3;
  _objc_release(uVar2);
  uStack_200 = 0;
  uStack_1f0 = 0x3032000000;
  pcStack_1e8 = FUN_106a474d8;
  uStack_1e0 = 0x106a474e8;
  uStack_1d8 = 0;
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x2020000000;
  uStack_208 = 0;
  puStack_238 = &uStack_240;
  uStack_240 = 0;
  uStack_230 = 0x2020000000;
  uStack_228 = 0;
  uStack_260 = 0;
  uStack_250 = 0x2020000000;
  uStack_248 = 0;
  uStack_280 = 0;
  uStack_270 = 0x2020000000;
  uStack_268 = 0;
  uStack_2a0 = 0;
  uStack_290 = 0x2020000000;
  uStack_288 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  uStack_2c0 = 0x3032000000;
  pcStack_2b8 = FUN_106a474d8;
  uStack_2b0 = 0x106a474e8;
  uStack_2a8 = 0;
  uStack_300 = 0;
  uStack_2f0 = 0x3032000000;
  pcStack_2e8 = FUN_106a474d8;
  uStack_2e0 = 0x106a474e8;
  uStack_330 = 0;
  uStack_320 = 0x3032000000;
  pcStack_318 = FUN_106a474d8;
  uStack_310 = 0x106a474e8;
  uStack_308 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_328 = &uStack_330;
  puStack_2f8 = &uStack_300;
  puStack_2c8 = &uStack_2d0;
  puStack_298 = &uStack_2a0;
  puStack_278 = &uStack_280;
  puStack_258 = &uStack_260;
  puStack_1f8 = &uStack_200;
  func_0x00010c29d440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_3c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3b8 = 0xc2000000;
  pcStack_3b0 = FUN_106a474f8;
  puStack_3a8 = &UNK_110956ec0;
  puStack_3a0 = &uStack_130;
  puStack_3d0 = &uStack_150;
  puStack_388 = &uStack_170;
  puStack_380 = &uStack_1a0;
  puStack_378 = &uStack_1d0;
  puStack_368 = &uStack_220;
  puStack_360 = &uStack_240;
  puStack_3f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3e8 = 0xc2000000;
  pcStack_3e0 = FUN_106a47b14;
  puStack_3d8 = &UNK_110956f90;
  ppuVar13 = &PTR___NSConcreteGlobalBlock_110956fc0;
  uVar3 = 0;
  puStack_3c8 = &uStack_200;
  puStack_398 = puStack_3d0;
  puStack_390 = &uStack_2a0;
  puStack_370 = &uStack_200;
  puStack_358 = &uStack_300;
  puStack_350 = &uStack_260;
  puStack_348 = &uStack_280;
  puStack_340 = &uStack_2d0;
  puStack_338 = &uStack_330;
  func_0x00010c0c0500();
  _objc_release(uVar2);
  puStack_408 = &uStack_410;
  uStack_410 = 0;
  uStack_400 = 0x2020000000;
  uStack_3f8 = 0;
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf21420();
  _objc_release(lVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c27c4a0();
  _objc_release(uVar6);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    uStack_490 = uVar6;
    func_0x00010c0f1e60();
    _objc_release(uVar6);
  }
  else {
    uStack_490 = 0xffffffffffffffff;
  }
  lVar7 = puStack_128[5];
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar12 = (undefined2)((ulong)uVar3 >> 0x30);
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      iVar11 = (int)puStack_1f8[5];
      uVar6 = uVar10;
      func_0x00010bf3cf60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      if (lVar5 == 0x59) {
        iVar11 = 1;
      }
      _objc_release(uVar6);
      if (iVar11 != 0) {
        func_0x00010bf0e700(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c1340();
        _objc_release(uVar10);
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar7;
    func_0x00010bf52a60();
    uVar12 = (undefined2)((ulong)uVar3 >> 0x30);
  }
  _objc_release(lVar7);
  puVar8 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0d4ca0(uVar6,uStack_490,puStack_128[5],puStack_2c8[5],puStack_198[5],puStack_1c8[5],
                      lVar5,puStack_1f8[5],
                      CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(uVar12,*(undefined1 *)
                                                                                    (puStack_298 + 3
                                                                                    )),
                                                                   *(undefined1 *)(puStack_278 + 3))
                                                          ,*(undefined1 *)(puStack_408 + 3)),
                                                 *(undefined1 *)(puStack_258 + 3)),
                                        *(undefined1 *)(puStack_148 + 3)),
                               *(undefined1 *)(puStack_168 + 3)),puVar8,puStack_2f8[5],
                      CONCAT71(CONCAT61((int6)((ulong)ppuVar13 >> 0x10),
                                        *(undefined1 *)(puStack_238 + 3)),
                               *(undefined1 *)(puStack_218 + 3)),puStack_328[5],uVar2,uStack_490);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_410,8);
  __Block_object_dispose(&uStack_330,8);
  _objc_release(uStack_308);
  __Block_object_dispose(&uStack_300,8);
  _objc_release(uStack_2d8);
  __Block_object_dispose(&uStack_2d0,8);
  _objc_release(uStack_2a8);
  __Block_object_dispose(&uStack_2a0,8);
  __Block_object_dispose(&uStack_280,8);
  __Block_object_dispose(&uStack_260,8);
  __Block_object_dispose(&uStack_240,8);
  __Block_object_dispose(&uStack_220,8);
  __Block_object_dispose(&uStack_200,8);
  _objc_release(uStack_1d8);
  __Block_object_dispose(&uStack_1d0,8);
  _objc_release(uStack_1a8);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  __Block_object_dispose(&uStack_170,8);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
  lVar5 = lStack_108;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_410,8);
  __Block_object_dispose(&uStack_330,8);
  __Block_object_dispose(&uStack_300,8);
  __Block_object_dispose(&uStack_2d0,8);
  __Block_object_dispose(&uStack_2a0,8);
  __Block_object_dispose(&uStack_280,8);
  __Block_object_dispose(&uStack_260,8);
  __Block_object_dispose(&uStack_240,8);
  __Block_object_dispose(&uStack_220,8);
  __Block_object_dispose(&uStack_200,8);
  __Block_object_dispose(&uStack_1d0,8);
  __Block_object_dispose(&uStack_1a0,8);
  __Block_object_dispose(&uStack_170,8);
  __Block_object_dispose(&uStack_150,8);
  lVar4 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  return;
}



/* Entry: 106a474d8; end: 106a474f7;  */

void FUN_106a474d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a474f8; end: 106a47943;  */

void FUN_106a474f8(long param_1,ulong param_2,long param_3,undefined1 param_4,undefined1 param_5,
                  undefined1 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar10 = *(undefined8 *)(lVar8 + 0x28);
  *(long *)(lVar8 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_release(uVar10);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_5;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar12 = *(undefined8 *)(lVar11 * 8);
        _objc_retain(uVar12);
        uStack_120 = 0;
        uStack_110 = 0x2020000000;
        uStack_108 = 0;
        uVar10 = uVar12;
        puStack_118 = &uStack_120;
        func_0x00010bf0e700(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c1340();
        _objc_release(uVar10);
        bVar9 = *(byte *)(puStack_118 + 3);
        __Block_object_dispose(&uStack_120,8);
        _objc_release(uVar12);
        if ((bVar9 & 1) == 0) {
          bVar9 = 0;
          goto LAB_106a4773c;
        }
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar2;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  bVar9 = 1;
LAB_106a4773c:
  _objc_release(lVar2);
  _objc_release(param_3);
  *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = lVar3 != 0 & bVar9;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = param_6;
  lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar10 = *(undefined8 *)(lVar8 + 0x28);
  *(long *)(lVar8 + 0x28) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar10);
  lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar10 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar10);
  lVar8 = *(long *)(*(long *)(param_1 + 0x50) + 8);
  uVar10 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar10);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = (undefined1)param_11;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18) = param_11._1_1_;
  lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
  uVar10 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar10);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x18) = param_4;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x18) = param_11._2_1_;
  uVar5 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar6 = PTR_PTR_1126b4d28;
  _objc_opt_class(PTR_PTR_1126b4d28);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  lVar8 = *(long *)(*(long *)(param_1 + 0x80) + 8);
  uVar10 = *(undefined8 *)(lVar8 + 0x28);
  *(ulong *)(lVar8 + 0x28) = uVar1;
  _objc_release(uVar10);
  lVar8 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  uVar10 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = param_13;
  _objc_release(uVar10);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  lVar8 = 8;
  __Block_object_dispose(&uStack_120);
  __Unwind_Resume(param_7);
  __Block_object_assign(param_7 + 0x20,*(undefined8 *)(lVar8 + 0x20),8);
  __Block_object_assign(param_7 + 0x28,*(undefined8 *)(lVar8 + 0x28),8);
  __Block_object_assign(param_7 + 0x30,*(undefined8 *)(lVar8 + 0x30),8);
  __Block_object_assign(param_7 + 0x38,*(undefined8 *)(lVar8 + 0x38),8);
  __Block_object_assign(param_7 + 0x40,*(undefined8 *)(lVar8 + 0x40),8);
  __Block_object_assign(param_7 + 0x48,*(undefined8 *)(lVar8 + 0x48),8);
  __Block_object_assign(param_7 + 0x50,*(undefined8 *)(lVar8 + 0x50),8);
  __Block_object_assign(param_7 + 0x58,*(undefined8 *)(lVar8 + 0x58),8);
  __Block_object_assign(param_7 + 0x60,*(undefined8 *)(lVar8 + 0x60),8);
  __Block_object_assign(param_7 + 0x68,*(undefined8 *)(lVar8 + 0x68),8);
  __Block_object_assign(param_7 + 0x70,*(undefined8 *)(lVar8 + 0x70),8);
  __Block_object_assign(param_7 + 0x78,*(undefined8 *)(lVar8 + 0x78),8);
  __Block_object_assign(param_7 + 0x80,*(undefined8 *)(lVar8 + 0x80),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_7 + 0x88,*(undefined8 *)(lVar8 + 0x88),8);
  return;
}



/* Entry: 106a47944; end: 106a47aff;  */

void FUN_106a47944(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
  return;
}



/* Entry: 106a47b00; end: 106a47b13;  */

void FUN_106a47b00(void)

{
  return;
}



/* Entry: 106a47b14; end: 106a47b5b;  */

void FUN_106a47b14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a47b5c; end: 106a47b6f;  */

void FUN_106a47b5c(void)

{
  return;
}



/* Entry: 106a47b70; end: 106a47ba7;  */

void FUN_106a47b70(long param_1,int param_2)

{
  func_0x00010c07f5e0();
  if (param_2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 106a47ba8; end: 106a47bab; -[SCMyStoryConfigProvider playbackDataProvider] */

void FUN_106a47ba8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be61cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__myStoryPlaybackDataProvider_1125760c8);
  return;
}



/* Entry: 106a47bac; end: 106a47d2b; -[SCMyStoryConfigProvider _playlistDataModels] */

void FUN_106a47bac(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a474d8;
  uStack_40 = 0x106a474e8;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a47d2c; end: 106a47d33;  */

void FUN_106a47d2c(void)

{
  return;
}



/* Entry: 106a47d34; end: 106a47d6b;  */

void FUN_106a47d34(long param_1,undefined8 param_2)

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



/* Entry: 106a47d6c; end: 106a47d7f;  */

void FUN_106a47d6c(void)

{
  return;
}



/* Entry: 106a47d80; end: 106a47e7f;  */

void FUN_106a47d80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010bf15ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c063e60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_40 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106a47e80; end: 106a47e93;  */

void FUN_106a47e80(void)

{
  return;
}



/* Entry: 106a47e94; end: 106a4801f; -[SCMyStoryConfigProvider _myStoryPlaybackDataProvider] */

void FUN_106a47e94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a474d8;
  uStack_40 = 0x106a474e8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0d4b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = uVar2;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106a48020; end: 106a48027;  */

void FUN_106a48020(void)

{
  return;
}



/* Entry: 106a48028; end: 106a4805f;  */

void FUN_106a48028(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x7;
  long lVar2;
  
  _objc_retain(in_x7);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_x7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a48060; end: 106a4808b;  */

void FUN_106a48060(void)

{
  return;
}



/* Entry: 106a4808c; end: 106a4812b; -[SCMyStoryConfigProvider .cxx_destruct] */

void FUN_106a4808c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a4812c; end: 106a481f7; -[SCSingleSnapStoriesPlaybackConfigProvider initWithPlaybackScope:pluginCreator:storiesPlaybackServices:playbackDelegate:] */

undefined1 *
FUN_106a4812c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f4658;
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



/* Entry: 106a481f8; end: 106a482d3; -[SCSingleSnapStoriesPlaybackConfigProvider sessionContext] */

void FUN_106a481f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b23f0;
  _objc_alloc(PTR_PTR_1126b23f0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21420();
  func_0x000108534aa8();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf21420();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0(puVar1,param_2,0,uVar3,1,0xffffffffffffffff,0,uVar5,puVar6,0);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a482d4; end: 106a4836f; -[SCSingleSnapStoriesPlaybackConfigProvider launchingCandidates] */

void FUN_106a482d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b23f8;
  _objc_alloc(PTR_PTR_1126b23f8);
  lVar2 = param_1;
  func_0x00010be752a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0(puVar1,param_2,lVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a48370; end: 106a483bf; -[SCSingleSnapStoriesPlaybackConfigProvider presentingConfig] */

void FUN_106a48370(void)

{
  _objc_alloc(PTR_PTR_1126b2400);
  func_0x00010c018aa0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a483c0; end: 106a48693; -[SCSingleSnapStoriesPlaybackConfigProvider plugins] */

void FUN_106a483c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar1 = param_1;
  puStack_88 = puVar13;
  func_0x00010bde22e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  uStack_a8 = uVar2;
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = uVar3;
  func_0x00010c0f1e60();
  uStack_b0 = uVar3;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  uStack_b8 = uVar3;
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = uVar2;
  func_0x00010c25b040();
  lVar4 = param_1;
  uStack_c0 = uVar2;
  func_0x00010c0ff0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf21420();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c063e60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110eb6298;
  lVar9 = lVar1;
  lStack_98 = lVar1;
  func_0x00010c27c440();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_78 = lVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c0b3d60();
  func_0x00010c27c4a0();
  uVar3 = uStack_a8;
  uVar2 = uStack_b8;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0xffffffffffffffff;
  uStack_100 = 0xffffffffffffffff;
  uStack_110 = 0;
  uStack_120 = 0xffffffffffffffff;
  uVar11 = uStack_a8;
  uStack_118 = uVar6;
  uStack_108 = uVar8;
  puStack_f0 = puVar13;
  lStack_d8 = lVar10;
  lStack_d0 = lVar1;
  func_0x00010c24c4c0(uStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uStack_a0);
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(uVar3);
  puVar13 = puStack_88;
  func_0x00010befa160(puStack_88);
  puVar12 = PTR_PTR_1126cc5b0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf15ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21420();
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  func_0x00010bff71e0();
  _objc_release(uVar2);
  func_0x00010befa120(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  lVar1 = lStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_128 = FUN_106a48694;
    puStack_168 = &uStack_170;
    uStack_170 = 0;
    uStack_160 = 0x3032000000;
    pcStack_158 = FUN_106a487ec;
    uStack_150 = 0x106a487fc;
    uStack_148 = 0;
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uStack_140 = uVar2;
    puStack_138 = puVar12;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010c29d440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0500();
    _objc_release(uVar3);
    puVar13 = (undefined *)puStack_168[5];
    _objc_retain(puVar13);
    __Block_object_dispose(&uStack_170,8);
    _objc_release(uStack_148);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106a48694; end: 106a487eb; -[SCSingleSnapStoriesPlaybackConfigProvider playbackDataProvider] */

void FUN_106a48694(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106a487ec;
  uStack_30 = 0x106a487fc;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a487ec; end: 106a4882f;  */

void FUN_106a487ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a48830; end: 106a48867;  */

void FUN_106a48830(long param_1,undefined8 param_2)

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



/* Entry: 106a48868; end: 106a4886f;  */

void FUN_106a48868(void)

{
  return;
}



/* Entry: 106a48870; end: 106a489c7; -[SCSingleSnapStoriesPlaybackConfigProvider _playlistDataModels] */

void FUN_106a48870(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106a487ec;
  uStack_30 = 0x106a487fc;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a489c8; end: 106a489f3;  */

void FUN_106a489c8(void)

{
  return;
}



/* Entry: 106a489f4; end: 106a48a2b;  */

void FUN_106a489f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a48a2c; end: 106a48a33;  */

void FUN_106a48a2c(void)

{
  return;
}



/* Entry: 106a48a34; end: 106a48b8b; -[SCSingleSnapStoriesPlaybackConfigProvider _commentsSnapReplyLoggingInfo] */

void FUN_106a48a34(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106a487ec;
  uStack_30 = 0x106a487fc;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0500();
  _objc_release(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a48b8c; end: 106a48bb7;  */

void FUN_106a48b8c(void)

{
  return;
}


