/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b1439c; end: 107b143a7;  */

void FUN_107b1439c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b143a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107b143a8; end: 107b1442f; -[SCStoriesDataCoordinator rankedMixedCarouselStoryIdsWithCompletion:] */

void FUN_107b143a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107b14430;
  puStack_30 = &UNK_110859310;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0ced40(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107b14430; end: 107b1443b;  */

void FUN_107b14430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b14438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107b1443c; end: 107b1453b; -[SCStoriesDataCoordinator storySummariesFilteredByStoryIds:completion:] */

void FUN_107b1443c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd5820();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0e60();
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b1453c;
  puStack_50 = &UNK_110865eb8;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c25b4c0(uVar3,param_2,param_3,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b1453c; end: 107b14547;  */

void FUN_107b1453c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b14544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107b14548; end: 107b14677; -[SCStoriesDataCoordinator friendOfGroupFeedDisplayNamesForPublicationIds:completionQueue:completion:] */

void FUN_107b14548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b14678; end: 107b14747;  */

void FUN_107b14678(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar3 != 0) {
    puVar4 = *(undefined **)(lVar3 + 0x10);
    func_0x0001084e5d80(puVar4,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107b14748;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  puStack_40 = puVar4;
  uStack_38 = uVar2;
  _objc_retain(puVar4);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(puStack_40);
  _objc_release(uStack_38);
  _objc_release(puVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 107b14748; end: 107b14767;  */

void FUN_107b14748(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (*(undefined **)(param_1 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x000107b14764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
  return;
}



/* Entry: 107b14768; end: 107b14773; -[SCStoriesDataCoordinator storySnapsInfoForStoryIds:completion:] */

void FUN_107b14768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_storySnapsInfoForStoryIds_includ_112674708,param_3,1,param_4);
  return;
}



/* Entry: 107b14774; end: 107b1477f; -[SCStoriesDataCoordinator storySnapsInfoForStoryIds:includeViewStates:completion:] */

void FUN_107b14774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_storySnapsInfoForStoryIds_includ_112674710,param_3,param_4,0,param_5);
  return;
}



/* Entry: 107b14780; end: 107b14ad3; -[SCStoriesDataCoordinator storySnapsInfoForStoryIds:includeViewStates:qualityOfService:completion:] */

void FUN_107b14780(long param_1,undefined8 param_2,ulong param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_4 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd5820();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0e60();
      _objc_release(uVar6);
    }
  }
  _objc_initWeak(auStack_80,param_1);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf60700();
  _objc_release(puVar7);
  uVar5 = param_3;
  func_0x00010bf529e0();
  if (param_5 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(long *)(param_1 + 0x88) != 0;
  }
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110ead398;
  if (!bVar3) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110ead3b8;
  }
  ppuVar11 = &PTR____CFConstantStringClassReference_110ead538;
  if (0x32 < uVar5) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110ead558;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ead518;
  if (0x19 < uVar5) {
    ppuVar1 = ppuVar11;
  }
  ppuVar11 = &PTR____CFConstantStringClassReference_110ead4f8;
  if (10 < uVar5) {
    ppuVar11 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ead4d8;
  if (5 < uVar5) {
    ppuVar1 = ppuVar11;
  }
  if (uVar5 == 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
  }
  ppuVar11 = &PTR____CFConstantStringClassReference_110db1158;
  if (uVar5 != 0) {
    ppuVar11 = ppuVar1;
  }
  _objc_retain(ppuVar11);
  func_0x00010c25ce40(ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf17b60();
  _objc_release(ppuVar9);
  _objc_release(ppuVar11);
  _objc_release(puVar7);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107b14ad4;
  puStack_98 = &UNK_1109fc200;
  puStack_88 = puVar10;
  _objc_retain(param_6);
  ppuVar9 = &puStack_b0;
  uStack_90 = param_6;
  _objc_retainBlock();
  puStack_110 = puVar7;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_107b14b5c;
  puStack_f8 = &UNK_1109fc270;
  uStack_d0 = 0;
  lStack_f0 = param_1;
  puStack_c8 = puVar8;
  uStack_c0 = uVar5;
  uStack_b8 = bVar3;
  _objc_retain(param_3);
  uStack_b7 = (undefined1)param_4;
  uStack_e8 = param_3;
  _objc_retain(ppuVar9);
  ppuStack_e0 = ppuVar9;
  _objc_copyWeak(auStack_d8,auStack_80);
  ppuVar11 = &puStack_110;
  _objc_retainBlock(ppuVar11);
  if (param_5 == 0) {
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    lVar2 = 0x88;
    if (!bVar3) {
      lVar2 = 0x18;
    }
    func_0x00010c0f95c0(*(undefined8 *)(param_1 + lVar2));
  }
  _objc_release(ppuVar11);
  _objc_destroyWeak(auStack_d8);
  _objc_release(ppuStack_e0);
  _objc_release(uStack_e8);
  _objc_release(ppuVar9);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 107b14ad4; end: 107b14b5b;  */

void FUN_107b14ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b14b5c; end: 107b14e57;  */

void FUN_107b14b5c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60700();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067040();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ead418;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ead418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0(puVar1);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010094ff70(uVar3,*(undefined8 *)(param_1 + 0x28),
                      *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x80));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bd869d0();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  if ((*(byte *)(param_1 + 0x59) & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),uVar4,PTR____NSDictionary0__struct_11034ab58);
  }
  else {
    uVar5 = uVar3;
    func_0x00010bf529e0();
    if (uVar5 < *(ulong *)(param_1 + 0x50)) {
      puVar1 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      ppuVar2 = &PTR____CFConstantStringClassReference_110ead438;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ead438);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11c9a0(puVar1);
      _objc_release(ppuVar2);
      _objc_release(puVar1);
    }
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    uVar5 = uVar3;
    func_0x00010bf002e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec4e40(param_1);
    _objc_release(uVar5);
    _objc_release(param_1);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107b14e58; end: 107b14e5f;  */

void FUN_107b14e58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storySnaps_1126746f8);
  return;
}



/* Entry: 107b14e60; end: 107b15017; -[SCStoriesDataCoordinator _storySnapsInfoForStoryIds:friendStoryIds:friendPlaybackInfoMap:completion:] */

void FUN_107b14e60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = puVar2;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c121840(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b15018; end: 107b1509b;  */

void FUN_107b15018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec4e60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b1509c; end: 107b154d3; -[SCStoriesDataCoordinator _storySnapsInfoForStoryIds:friendStoryIds:friendPlaybackInfoMap:viewStateMap:completion:] */

void FUN_107b1509c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == lVar2) {
    (**(code **)(param_7 + 0x10))(param_7,param_5,param_6);
  }
  else {
    lVar1 = param_3;
    func_0x00010c0d3c80();
    func_0x00010c12d500();
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar3);
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x0001084e6550(lVar4,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bd869d0();
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar3);
    uVar5 = param_5;
    func_0x0001006decbc(param_5,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf529e0();
    lVar7 = lVar4;
    func_0x00010bf529e0();
    uVar8 = uVar5;
    if (lVar6 == lVar7) {
      (**(code **)(param_7 + 0x10))(param_7,uVar5,param_6);
    }
    else {
      lVar6 = lVar4;
      func_0x00010bf002e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d500(lVar1);
      _objc_release(lVar6);
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar3);
      lVar7 = *(long *)(param_1 + 0x10);
      func_0x0001084e73c8();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010bd869d0();
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar3);
      func_0x0001006decbc(uVar5,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        (**(code **)(param_7 + 0x10))(param_7,uVar8,param_6);
      }
      else {
        lVar9 = lVar1;
        func_0x00010bf529e0();
        lVar10 = lVar7;
        func_0x00010bf529e0();
        if (lVar9 == lVar10) {
          (**(code **)(param_7 + 0x10))(param_7,uVar8,param_6);
        }
        else {
          lVar9 = lVar7;
          func_0x00010bf002e0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d500(lVar1);
          _objc_release(lVar9);
          puVar3 = PTR_PTR_1126ae4e8;
          func_0x00010c22b6a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf18ba0();
          _objc_release(puVar3);
          uVar11 = *(undefined8 *)(param_1 + 0x10);
          func_0x0001084eb4fc(uVar11,lVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar11;
          func_0x00010bd869d0();
          puVar3 = PTR_PTR_1126ae4e8;
          func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf95660();
          _objc_release(puVar3);
          uVar12 = uVar8;
          func_0x0001006decbc(uVar8,uVar5);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(param_7 + 0x10))(param_7,uVar12,param_6);
          _objc_release(uVar12);
          _objc_release(uVar5);
          _objc_release(uVar11);
        }
      }
      _objc_release(lVar6);
      _objc_release(lVar7);
    }
    _objc_release(uVar8);
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
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



/* Entry: 107b154d4; end: 107b154eb;  */

void FUN_107b154d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storySnaps_1126746f8);
  return;
}



/* Entry: 107b154ec; end: 107b154f3; -[SCStoriesDataCoordinator fetchPublicUserStoriesWithUserIds:] */

void FUN_107b154ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa9950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_fetchPublicUserStoriesWithUserId_1125c7ff8);
  return;
}



/* Entry: 107b154f4; end: 107b1561f; -[SCStoriesDataCoordinator deleteCustomStorySnapsWithPublicationId:clientIds:] */

void FUN_107b154f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107b15620;
  puStack_68 = &UNK_110864a38;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = param_4;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x107b15630;
  puStack_98 = &UNK_110848bd8;
  uStack_90 = param_3;
  uStack_88 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar3,param_2,&puStack_80,uVar2,&puStack_b0);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b15620; end: 107b15633;  */

void FUN_107b15620(long param_1,undefined ***param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined **unaff_x24;
  undefined ***unaff_x25;
  undefined *puVar13;
  undefined **unaff_x28;
  undefined *puStack_1f8;
  undefined *puStack_1d0;
  undefined4 uStack_1c4;
  undefined ***pppuStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_190;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined1 uStack_131;
  undefined **ppuStack_130;
  undefined4 uStack_128;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined1 *puStack_f8;
  undefined ***pppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 == 0) goto code_r0x0001084e49f8;
  lVar4 = lVar2;
  func_0x00010bf529e0();
  if (lVar4 == 0) goto code_r0x0001084e49f8;
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (param_2 == (undefined ***)0x0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    puStack_c0 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa6be0(&puStack_c0,param_2);
  }
  unaff_x23 = &ppuStack_1a8;
  puVar5 = &uStack_131;
  func_0x00010850e510();
  uStack_1a0 = 0xf;
  uStack_190 = 0x100;
  _objc_retain(lVar1);
  unaff_x28 = (undefined **)&UNK_110862750;
  ppuStack_1a8 = &PTR_DAT_110862760;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = (undefined **)0x0;
  plStack_148 = (long *)0x0;
  uStack_150 = 0;
  plStack_140 = (long *)0x0;
  uStack_116 = *(undefined2 *)(puVar5 + 0x1a);
  uStack_128 = 10;
  uStack_118 = 0x100;
  unaff_x24 = &PTR_DAT_110862700;
  ppuStack_130 = &PTR_DAT_110862700;
  pppuStack_f0 = &ppuStack_1a8;
  uStack_e0 = 0;
  ppuStack_e8 = (undefined **)0x0;
  plStack_d0 = (long *)0x0;
  uStack_d8 = 0;
  plStack_c8 = (long *)0x0;
  pppuStack_1c0 = (undefined ***)0x0;
  puStack_1b8 = (undefined ***)0x0;
  uStack_1b0 = 0;
  uStack_1c4 = 0;
  unaff_x22 = (undefined ***)&puStack_c0;
  lStack_178 = lVar1;
  puStack_f8 = puVar5;
  func_0x000107c310cc(unaff_x22,&ppuStack_130,&pppuStack_1c0,&uStack_1c4);
  _objc_retainAutoreleasedReturnValue();
  if (pppuStack_1c0 != (undefined ***)0x0) {
    puStack_1b8 = pppuStack_1c0;
    __ZdlPv();
  }
  plVar3 = plStack_c8;
  unaff_x25 = &ppuStack_e8;
  ppuStack_130 = &PTR_DAT_110862700;
  plStack_c8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_d0;
  plStack_d0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  pppuStack_1c0 = unaff_x25;
  func_0x000107c27dd4(&pppuStack_1c0);
  plVar3 = plStack_140;
  ppuStack_1a8 = &PTR_DAT_110862760;
  plStack_140 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_148;
  plStack_148 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  pppuStack_1c0 = (undefined ***)&uStack_160;
  func_0x000107c27dd4(&pppuStack_1c0);
  _objc_release(lStack_178);
  func_0x000107c27da8(&uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  pppuVar6 = unaff_x22;
  func_0x00010bf529e0();
  if (pppuVar6 == (undefined ***)0x0) goto code_r0x0001084e49f0;
  puStack_1f8 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  unaff_x24 = (undefined **)unaff_x22;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  pppuVar6 = (undefined ***)unaff_x24;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puStack_1f8);
  unaff_x25 = pppuVar6;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar6);
  pppuVar6 = unaff_x25;
  func_0x00010bf529e0();
  pppuVar7 = (undefined ***)unaff_x24;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  pppuVar8 = pppuVar7;
  func_0x00010bf529e0();
  _objc_release(pppuVar7);
  puStack_1d0 = puStack_1f8;
  if (pppuVar6 == pppuVar8) goto code_r0x0001084e49d0;
  pppuVar6 = unaff_x25;
  func_0x00010bf529e0();
  puVar13 = PTR_PTR_1126d6798;
  if (pppuVar6 == (undefined ***)0x0) {
    func_0x00010850ef60(PTR_PTR_1126d6798,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010850eb48(PTR_PTR_1126d6798,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
    if (puVar13 == (undefined *)0x0) goto code_r0x0001084e4a4c;
    _objc_setProperty_nonatomic_copy();
  }
  while( true ) {
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_88 = lVar1;
    ppuStack_80 = (undefined **)unaff_x25;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001084ee948(param_2,2,puVar9,0,PTR____NSArray0__struct_11034ab48,
                        PTR____NSDictionary0__struct_11034ab58,
                        PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar9);
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (param_2 == (undefined ***)0x0) {
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      puStack_c0 = (undefined *)0x0;
    }
    else {
      func_0x00010bfa6be0(&puStack_c0,param_2);
    }
    puVar5 = &uStack_131;
    func_0x000108507e48();
    uStack_1a0 = 0xf;
    uStack_190 = 0x100;
    _objc_retain(lVar1);
    ppuStack_1a8 = unaff_x28 + 2;
    unaff_x23[8] = (undefined **)0x0;
    unaff_x23[7] = (undefined **)0x0;
    unaff_x23[10] = (undefined **)0x0;
    unaff_x23[9] = (undefined **)0x0;
    unaff_x23[0xc] = (undefined **)0x0;
    unaff_x23[0xb] = (undefined **)0x0;
    plStack_140 = (long *)0x0;
    uStack_116 = *(undefined2 *)(puVar5 + 0x1a);
    uStack_128 = 10;
    uStack_118 = 0x100;
    ppuStack_130 = &PTR_DAT_110862700;
    pppuStack_f0 = &ppuStack_1a8;
    unaff_x23[0x19] = (undefined **)0x0;
    unaff_x23[0x18] = (undefined **)0x0;
    unaff_x23[0x1b] = (undefined **)0x0;
    unaff_x23[0x1a] = (undefined **)0x0;
    plStack_c8 = (long *)0x0;
    pppuStack_1c0 = (undefined ***)0x0;
    puStack_1b8 = (undefined ***)0x0;
    uStack_1b0 = 0;
    uStack_1c4 = 0;
    ppuVar10 = &puStack_c0;
    lStack_178 = lVar1;
    puStack_f8 = puVar5;
    func_0x000107c310cc(ppuVar10,&ppuStack_130,&pppuStack_1c0,&uStack_1c4);
    _objc_retainAutoreleasedReturnValue();
    if (pppuStack_1c0 != (undefined ***)0x0) {
      puStack_1b8 = pppuStack_1c0;
      __ZdlPv();
    }
    plVar3 = plStack_c8;
    unaff_x23 = &ppuStack_e8;
    ppuStack_130 = &PTR_DAT_110862700;
    plStack_c8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_d0;
    plStack_d0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    pppuStack_1c0 = unaff_x23;
    func_0x000107c27dd4(&pppuStack_1c0);
    plVar3 = plStack_140;
    ppuStack_1a8 = unaff_x28 + 2;
    plStack_140 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = plStack_148;
    plStack_148 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    pppuStack_1c0 = (undefined ***)&uStack_160;
    func_0x000107c27dd4(&pppuStack_1c0);
    _objc_release(lStack_178);
    func_0x000107c27da8(&uStack_98);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    unaff_x28 = ppuVar10;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((unaff_x28 != (undefined **)0x0) &&
       (ppuVar11 = unaff_x28, func_0x00010c27dd80(), ppuVar11 == (undefined **)0x1)) {
      ppuVar11 = unaff_x28;
      func_0x00010bf5a820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined ***)(ulong)(ppuVar12 == (undefined **)0x0);
      _objc_release();
      _objc_release(ppuVar11);
      puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar11 = unaff_x28;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar11;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2268e0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = param_2;
        func_0x0001084ea0fc(param_2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(ppuVar12);
        _objc_release(ppuVar11);
        func_0x0001084ee948(param_2,1,unaff_x23,0,PTR____NSArray0__struct_11034ab48,
                            PTR____NSDictionary0__struct_11034ab58,
                            PTR____NSDictionary0__struct_11034ab58,0);
        _objc_release(unaff_x23);
      }
    }
    _objc_release(unaff_x28);
    _objc_release(ppuVar10);
    _objc_release(puVar13);
code_r0x0001084e49d0:
    _objc_release(unaff_x25);
    _objc_release(puStack_1d0);
    _objc_release(unaff_x24);
    _objc_release(puStack_1f8);
code_r0x0001084e49f0:
    _objc_release(unaff_x22);
code_r0x0001084e49f8:
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) break;
    ___stack_chk_fail();
code_r0x0001084e4a4c:
    puVar13 = (undefined *)0x0;
  }
  return;
}



/* Entry: 107b15634; end: 107b1571f; -[SCStoriesDataCoordinator deleteStorySnapsWithSnapComponentId:] */

void FUN_107b15634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b15720;
  puStack_50 = &UNK_11085adb8;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = param_3;
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x107b15730;
  puStack_78 = &UNK_110841f20;
  uStack_70 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar3,param_2,&puStack_68,uVar2,&puStack_90);
  _objc_release(uVar2);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107b15720; end: 107b15733;  */

/* WARNING: Possible PIC construction at 0x0001084e4dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001084e5408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001084e4e00) */
/* WARNING: Removing unreachable block (ram,0x0001084e4e18) */
/* WARNING: Removing unreachable block (ram,0x0001084e4e38) */
/* WARNING: Removing unreachable block (ram,0x0001084e4eac) */
/* WARNING: Removing unreachable block (ram,0x0001084e4eb8) */
/* WARNING: Removing unreachable block (ram,0x0001084e4edc) */
/* WARNING: Removing unreachable block (ram,0x0001084e4ec8) */
/* WARNING: Removing unreachable block (ram,0x0001084e4eec) */
/* WARNING: Removing unreachable block (ram,0x0001084e4f94) */
/* WARNING: Removing unreachable block (ram,0x0001084e4f9c) */
/* WARNING: Removing unreachable block (ram,0x0001084e4fb8) */
/* WARNING: Removing unreachable block (ram,0x0001084e4fc4) */
/* WARNING: Removing unreachable block (ram,0x0001084e4fd0) */
/* WARNING: Removing unreachable block (ram,0x0001084e4fdc) */
/* WARNING: Removing unreachable block (ram,0x0001084e5008) */
/* WARNING: Removing unreachable block (ram,0x0001084e5014) */
/* WARNING: Removing unreachable block (ram,0x0001084e5020) */
/* WARNING: Removing unreachable block (ram,0x0001084e502c) */
/* WARNING: Removing unreachable block (ram,0x0001084e506c) */
/* WARNING: Removing unreachable block (ram,0x0001084e513c) */
/* WARNING: Removing unreachable block (ram,0x0001084e5184) */
/* WARNING: Removing unreachable block (ram,0x0001084e5158) */
/* WARNING: Removing unreachable block (ram,0x0001084e52dc) */
/* WARNING: Removing unreachable block (ram,0x0001084e5170) */
/* WARNING: Removing unreachable block (ram,0x0001084e519c) */
/* WARNING: Removing unreachable block (ram,0x0001084e51d0) */
/* WARNING: Removing unreachable block (ram,0x0001084e5260) */
/* WARNING: Removing unreachable block (ram,0x0001084e5268) */
/* WARNING: Removing unreachable block (ram,0x0001084e5288) */
/* WARNING: Removing unreachable block (ram,0x0001084e5290) */
/* WARNING: Removing unreachable block (ram,0x0001084e52c0) */
/* WARNING: Removing unreachable block (ram,0x0001084e52d8) */
/* WARNING: Removing unreachable block (ram,0x0001084e52e4) */
/* WARNING: Removing unreachable block (ram,0x0001084e540c) */
/* WARNING: Removing unreachable block (ram,0x0001084e5424) */
/* WARNING: Removing unreachable block (ram,0x0001084e5444) */
/* WARNING: Removing unreachable block (ram,0x0001084e54b8) */
/* WARNING: Removing unreachable block (ram,0x0001084e54cc) */
/* WARNING: Removing unreachable block (ram,0x0001084e53e0) */
/* WARNING: Removing unreachable block (ram,0x0001084e4dd4) */

ulong FUN_107b15720(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *unaff_x21;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puStack_390;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 auStack_1d0 [84];
  long lStack_80;
  
  plVar9 = *(long **)(param_1 + 0x20);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar9;
  _objc_retain();
  _objc_retain(plVar9);
  plVar2 = plVar9;
  func_0x00010c08fa60();
  if (plVar2 != (long *)0x0) {
    _objc_opt_class(PTR_PTR_1126d6788);
    if (param_2 == 0) {
      uStack_210 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_240,param_2);
    }
    lStack_2b8 = 0;
    lStack_2b0 = 0;
    uStack_2a8 = 0;
    auStack_1d0[0] = 0;
    puStack_390 = &uStack_240;
    func_0x00010054c81c(puStack_390,&lStack_2b8,auStack_1d0);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_2b8 != 0) {
      lStack_2b0 = lStack_2b8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_218);
    _objc_release(uStack_228);
    _objc_release(uStack_230);
    _objc_retain(puStack_390);
    puVar3 = puStack_390;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      uVar12 = uRam0000000000000000;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      plVar8 = plVar9;
      goto code_r0x0001084e5738;
    }
    _objc_release(puStack_390);
    _objc_opt_class(PTR_PTR_1126d67a0);
    if (param_2 == 0) {
      uStack_210 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_240,param_2);
    }
    lStack_2b8 = 0;
    lStack_2b0 = 0;
    uStack_2a8 = 0;
    auStack_1d0[0] = 0;
    unaff_x21 = &uStack_240;
    plVar8 = &lStack_2b8;
    func_0x00010054c81c(unaff_x21,plVar8,auStack_1d0);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_2b8 != 0) {
      lStack_2b0 = lStack_2b8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_218);
    _objc_release(uStack_228);
    _objc_release(uStack_230);
    _objc_retain(unaff_x21);
    puVar3 = unaff_x21;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      uVar12 = uRam0000000000000000;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      plVar8 = plVar9;
      goto code_r0x0001084e5738;
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x21);
    _objc_release(puStack_390);
  }
  _objc_release(plVar9);
  uVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar12;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(unaff_x21);
  _objc_release(puStack_390);
  _objc_release(plVar9);
  _objc_release(param_2);
  __Unwind_Resume();
  __Unwind_Resume();
code_r0x0001084e5738:
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar8;
  _objc_retain();
  _objc_retain(plVar8);
  _objc_retain(uVar12);
  uVar4 = uVar12;
  func_0x00010bf52a60();
  uVar1 = uRam0000000000000000;
  do {
    if (uVar4 == 0) {
      uVar13 = 0;
code_r0x0001084e5854:
      _objc_release(uVar12);
      _objc_release(plVar8);
      uVar4 = uVar12;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
        return uVar13;
      }
      ___stack_chk_fail();
      _objc_release(uVar12);
      _objc_release(plVar8);
      _objc_release(uVar12);
      __Unwind_Resume();
      _objc_retain(plVar2);
      plVar8 = plVar2;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      if (plVar8 == (long *)0x0) {
        uVar12 = 1;
      }
      else {
        uVar11 = *(undefined8 *)(uVar4 + 0x20);
        plVar9 = plVar2;
        func_0x00010bf3cf60(plVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar11);
        uVar12 = (ulong)((uint)uVar11 ^ 1);
        _objc_release(plVar9);
      }
      _objc_release(plVar8);
      _objc_release(plVar2);
      return uVar12;
    }
    uVar14 = 0;
    do {
      if (uRam0000000000000000 != uVar1) {
        _objc_enumerationMutation(uVar12);
      }
      uVar13 = *(ulong *)(uVar14 * 8);
      uVar5 = uVar13;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((uVar7 & 1) != 0) {
        _objc_retain(uVar13);
        goto code_r0x0001084e5854;
      }
      uVar14 = uVar14 + 1;
    } while (uVar4 != uVar14);
    uVar4 = uVar12;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107b15734; end: 107b157d7; -[SCStoriesDataCoordinator deleteExpiredMetadata] */

void FUN_107b15734(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1109fc390,uVar2,
                      &PTR___NSConcreteGlobalBlock_1109fc3b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b157d8; end: 107b157db;  */

void FUN_107b157d8(void)

{
  return;
}



/* Entry: 107b157dc; end: 107b157e3; -[SCStoriesDataCoordinator addListener:] */

void FUN_107b157dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107b157e4; end: 107b157eb; -[SCStoriesDataCoordinator removeListener:] */

void FUN_107b157e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107b157ec; end: 107b157f3; -[SCStoriesDataCoordinator didUpdateSummaryInfo:] */

void FUN_107b157ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didUpdateSummaryInfo__1125bd3a0);
  return;
}



/* Entry: 107b157f4; end: 107b158df; -[SCStoriesDataCoordinator didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_107b157f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_107b158e0;
    puStack_38 = &UNK_110842e18;
    uStack_30 = param_1;
    _objc_copyWeak(auStack_58,auStack_28);
    func_0x00010c0bc800(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b158e0; end: 107b158e7;  */

void FUN_107b158e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c283570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateAllSummaryInfosWithViewSta_11267e780);
  return;
}



/* Entry: 107b158e8; end: 107b159ff;  */

void FUN_107b158e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107b15a00; end: 107b15a3b;  */

void FUN_107b15a00(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee17e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b15a3c; end: 107b15a3f; -[SCStoriesDataCoordinator didStartSnapchattersUpdateDataRequest:] */

void FUN_107b15a3c(void)

{
  return;
}



/* Entry: 107b15a40; end: 107b15bc7; -[SCStoriesDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_107b15a40(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    func_0x00010c0bc6c0(param_3);
    if ((*(byte *)(puStack_58 + 3) & 1) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf39f40();
      _objc_release(uVar1);
    }
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107b15bc8; end: 107b15d33;  */

void FUN_107b15bc8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  if (((param_3 != 0x1a0e6a1a) || (param_4 != 0x33)) || (param_5 != 0)) {
    lVar2 = *(long *)(param_1 + 0x20);
    if ((param_4 == 0x3f) && (param_5 == 0)) {
      uVar1 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee17a0(lVar2);
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x60);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa6ca0();
    }
    _objc_release(uVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b15d34; end: 107b15daf;  */

void FUN_107b15d34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b15db0; end: 107b15e0f;  */

void FUN_107b15db0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be69540(uVar1);
  _objc_release(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 107b15e10; end: 107b15eab; -[SCStoriesDataCoordinator _onFriendRemoved:] */

void FUN_107b15e10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107b15eac;
    puStack_30 = &UNK_11085adb8;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010c0f8500(uVar2,param_2,&puStack_48,0,0);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b15ebc; end: 107b15f4b; -[SCStoriesDataCoordinator _updateSummaryInfoWithAddingFriendFromStorySuggestion:] */

void FUN_107b15ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107b15f4c;
  puStack_30 = &UNK_11085adb8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_48,0,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107b15f4c; end: 107b15f5f;  */

undefined *** FUN_107b15f4c(long param_1,undefined ***param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined ***unaff_x25;
  undefined *unaff_x26;
  undefined ***unaff_x27;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [31];
  undefined1 uStack_111;
  undefined **appuStack_110 [9];
  undefined1 auStack_c8 [24];
  long *plStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined ***pppuStack_60;
  long lStack_58;
  
  pppuVar9 = *(undefined ****)(param_1 + 0x20);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar10 = pppuVar9;
  _objc_retain();
  _objc_retain(pppuVar9);
  pppuVar2 = pppuVar9;
  func_0x00010c08fa60();
  if (pppuVar2 != (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126d5360);
    unaff_x25 = appuStack_110;
    if (param_2 == (undefined ***)0x0) {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      ppuStack_a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_a0,param_2);
    }
    puVar3 = &uStack_111;
    func_0x0001009612e4(puVar3);
    unaff_x23 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_60 = pppuVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100961348(auStack_130,unaff_x23);
    func_0x000107c281a0(appuStack_110,0xc,puVar3,auStack_130);
    puStack_148 = (undefined1 *)0x0;
    puStack_140 = (undefined1 *)0x0;
    uStack_138 = 0;
    uStack_14c = 0;
    pppuVar2 = &ppuStack_a0;
    pppuVar10 = appuStack_110;
    func_0x000107c310cc(pppuVar2,pppuVar10,&puStack_148,&uStack_14c);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = pppuVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar2);
    if (puStack_148 != (undefined1 *)0x0) {
      puStack_140 = puStack_148;
      __ZdlPv();
    }
    plVar1 = plStack_a8;
    appuStack_110[0] = &PTR_DAT_110862700;
    plStack_a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_148 = auStack_c8;
    func_0x000107c27dd4(&puStack_148);
    puStack_148 = auStack_130;
    func_0x000107c27dd4(&puStack_148);
    _objc_release(unaff_x23);
    func_0x000107c27da8(&uStack_78);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    if (unaff_x22 != (undefined ***)0x0) {
      unaff_x23 = (undefined ***)PTR_PTR_1126d9eb0;
      pppuVar10 = unaff_x22;
      func_0x000100aad504();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 != (undefined ***)0x0) {
        *(undefined1 *)((long)unaff_x23 + 0x15) = 1;
      }
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
    }
    _objc_release(unaff_x22);
  }
  _objc_release(pppuVar9);
  pppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(pppuVar9);
    _objc_release(param_2);
    pppuVar9 = pppuVar2;
    __Unwind_Resume();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(pppuVar10);
    if (pppuVar10 != (undefined ***)0x0) {
      pppuVar2 = pppuVar10;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = pppuVar9;
      func_0x0001084e6550(pppuVar9,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      unaff_x23 = unaff_x22;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar10;
      func_0x00010c15e620();
      _objc_retainAutoreleasedReturnValue();
      pppuVar6 = pppuVar5;
      func_0x00010c08b1c0();
      _objc_release(pppuVar5);
      if (unaff_x23 == (undefined ***)0x0) {
        pppuVar5 = (undefined ***)PTR_PTR_1126d5c20;
        _objc_alloc(PTR_PTR_1126d5c20);
        pppuVar6 = pppuVar10;
        func_0x00010c2923e0(pppuVar10);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = pppuVar10;
        func_0x00010c25b340(pppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05bc60(pppuVar5);
        _objc_release(unaff_x27);
        _objc_release(pppuVar6);
        unaff_x25 = (undefined ***)PTR_PTR_1126d67d0;
        func_0x00010851b2c0(PTR_PTR_1126d67d0,pppuVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        unaff_x25 = (undefined ***)PTR_PTR_1126d67d0;
        func_0x00010851b4f8(PTR_PTR_1126d67d0,unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = unaff_x23;
        func_0x00010c15e620();
        _objc_retainAutoreleasedReturnValue();
        pppuVar7 = pppuVar5;
        func_0x00010c08b1c0();
        unaff_x27 = unaff_x25;
        if ((long)pppuVar6 <= (long)pppuVar7) {
          pppuVar6 = unaff_x23;
          func_0x00010c15e620(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08b1c0();
          _objc_release(pppuVar6);
        }
      }
      _objc_release(pppuVar5);
      unaff_x26 = PTR_PTR_1126d6790;
      _objc_alloc(PTR_PTR_1126d6790);
      func_0x00010c021a40();
      if (unaff_x25 != (undefined ***)0x0) {
        _objc_setProperty_nonatomic_copy(unaff_x25);
      }
      _objc_release(unaff_x26);
      func_0x00010c25ed40(pppuVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x25);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(pppuVar2);
    }
    _objc_release(pppuVar10);
    pppuVar5 = pppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      _objc_release(unaff_x25);
      _objc_release(unaff_x26);
      _objc_release(unaff_x27);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
      _objc_release(pppuVar2);
      _objc_release(pppuVar10);
      _objc_release(pppuVar9);
      __Unwind_Resume();
      *pppuVar5 = &PTR_DAT_110a4fff0;
      ppuVar8 = pppuVar5[0xd];
      pppuVar5[0xd] = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        (**(code **)(*ppuVar8 + 8))();
      }
      ppuVar8 = pppuVar5[0xc];
      pppuVar5[0xc] = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        (**(code **)(*ppuVar8 + 8))();
      }
      if (pppuVar5[9] != (undefined **)0x0) {
        pppuVar5[10] = pppuVar5[9];
        __ZdlPv();
      }
      return pppuVar5;
    }
    return pppuVar5;
  }
  return pppuVar2;
}



/* Entry: 107b15f60; end: 107b1602f; -[SCStoriesDataCoordinator prependStoryToMixedCarouselRankedStoryIds:] */

void FUN_107b15f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b16030;
  puStack_50 = &UNK_11085adb8;
  _objc_retain(param_3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107b160e4;
  puStack_78 = &UNK_110841f20;
  uStack_70 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar2,param_2,&puStack_68,0,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107b16030; end: 107b160e3;  */

void FUN_107b16030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084ec534(param_2,puVar1,1,2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107b160e4; end: 107b160e7;  */

void FUN_107b160e4(void)

{
  return;
}



/* Entry: 107b160e8; end: 107b161b3; -[SCStoriesDataCoordinator .cxx_destruct] */

void FUN_107b160e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 107b161b4; end: 107b162d7; -[SCStoriesRankingCoordinator initWithDocObjectContext:performer:discoverFeedRanker:interactionHistoryManager:storiesDataCoordinator:] */

undefined1 *
FUN_107b161b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f9d90;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b162d8; end: 107b163d7; -[SCStoriesRankingCoordinator reorderFriendStoriesLocallyWithRerankTrigger:completion:] */

void FUN_107b162d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c11f8c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 107b163d8; end: 107b1642f;  */

void FUN_107b163d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e8e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b16430; end: 107b16587; -[SCStoriesRankingCoordinator _reorderFriendStoriesLocallyWithStoryIds:rerankTrigger:completion:] */

void FUN_107b16430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010bfcac60(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107b16588; end: 107b165df;  */

void FUN_107b16588(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8e8c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b165e0; end: 107b167b7; -[SCStoriesRankingCoordinator _reorderFriendStoriesLocallyWithStoryIds:interactionHistoryArray:rerankTrigger:completion:] */

void FUN_107b165e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010093c798(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c130a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  lVar4 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  if (lVar2 == lVar4) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    _objc_retain(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010c0f8500(uVar6);
    _objc_release(uVar5);
    _objc_release(param_6);
    _objc_release(lVar3);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 107b167b8; end: 107b167eb;  */

void FUN_107b167b8(long param_1,undefined8 param_2)

{
  func_0x0001084ec534(param_2,*(undefined8 *)(param_1 + 0x20),0,1,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107b167ec; end: 107b167f7;  */

void FUN_107b167ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b167f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107b167f8; end: 107b1684b; -[SCStoriesRankingCoordinator .cxx_destruct] */

void FUN_107b167f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b1684c; end: 107b1695b; -[SCStoriesSummaryInfoDiffer initWithStoriesDataCoordinator:] */

undefined1 * FUN_107b1684c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9d98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126b4990;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    func_0x00010be0f420(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b1695c; end: 107b16967; +[SCStoriesSummaryInfoDiffer dataCoordinatorIdentifier] */

undefined ** FUN_107b1695c(void)

{
  return &PTR____CFConstantStringClassReference_110ead578;
}



/* Entry: 107b16968; end: 107b1696f; -[SCStoriesSummaryInfoDiffer addDataUpdateListener:] */

void FUN_107b16968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107b16970; end: 107b16977; -[SCStoriesSummaryInfoDiffer removeDataUpdateListener:] */

void FUN_107b16970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107b16978; end: 107b1697b; -[SCStoriesSummaryInfoDiffer handleDataRequest:] */

void FUN_107b16978(void)

{
  return;
}



/* Entry: 107b1697c; end: 107b169d3; -[SCStoriesSummaryInfoDiffer didUpdateSummaryInfo:] */

void FUN_107b1697c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107b169d4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0bf7c0(param_3,param_2,0,&puStack_38);
  return;
}



/* Entry: 107b169d4; end: 107b169df;  */

void FUN_107b169d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0f430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchAllSummaryInfoWithAnnounce_1125616a8,1);
  return;
}



/* Entry: 107b169e0; end: 107b16a9b; -[SCStoriesSummaryInfoDiffer _fetchAllSummaryInfoWithAnnounceUpdate:] */

void FUN_107b169e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c25b4c0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107b16a9c; end: 107b16aef;  */

void FUN_107b16a9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b16af0; end: 107b16c73; -[SCStoriesSummaryInfoDiffer _handleFetchSummaryData:announceUpdate:] */

void FUN_107b16af0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x107b16b88;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107b16c74; end: 107b16cbb; -[SCStoriesSummaryInfoDiffer .cxx_destruct] */

void FUN_107b16c74(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b16cbc; end: 107b16cc3; -[SCStoriesSyncNetworkRequester initWithMixerRequester:syncDelegates:] */

void FUN_107b16cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithMixerRequester_syncDeleg_1125e8ae0,param_3,param_4,0);
  return;
}



/* Entry: 107b16cc4; end: 107b16df7; -[SCStoriesSyncNetworkRequester initWithMixerRequester:syncDelegates:storiesCachedPropertiesCoordinator:] */

undefined1 *
FUN_107b16cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f9da0;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b16df8; end: 107b16e77; -[SCStoriesSyncNetworkRequester lastFriendStoriesResponseTime] */

void FUN_107b16df8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bec9920(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb758);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf148;
  _objc_opt_class(PTR_PTR_1126cf148);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c089c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107b16e78; end: 107b16e7f; -[SCStoriesSyncNetworkRequester fetchFriendStoriesForTriggerType:] */

void FUN_107b16e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa6cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchFriendStoriesForTriggerType_1125c74d8,param_3,0);
  return;
}



/* Entry: 107b16e80; end: 107b16f53; -[SCStoriesSyncNetworkRequester fetchFriendStoriesForTriggerType:completion:] */

/* WARNING: Possible PIC construction at 0x000107b16ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b16ff4) */
/* WARNING: Removing unreachable block (ram,0x000107b17034) */
/* WARNING: Removing unreachable block (ram,0x000107b1701c) */

void FUN_107b16e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d6808;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c0126c0();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfaa860(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  _objc_alloc();
  func_0x00010c0126c0();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bfaa890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_fetchStoriesWithRequests_trigger_1125c83c8,puVar2,puVar3,param_3);
  return;
}



/* Entry: 107b16f54; end: 107b17037; -[SCStoriesSyncNetworkRequester fetchMyStoriesForTriggerType:bloopsInStoryEnabled:completion:] */

/* WARNING: Possible PIC construction at 0x000107b16ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b16ff4) */
/* WARNING: Removing unreachable block (ram,0x000107b17034) */
/* WARNING: Removing unreachable block (ram,0x000107b1701c) */

void FUN_107b16f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  _objc_alloc();
  func_0x00010c0126c0();
  _objc_release(param_5);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bfaa890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchStoriesWithRequests_trigger_1125c83c8,puVar1,param_3,param_4);
  return;
}



/* Entry: 107b17038; end: 107b1703f; -[SCStoriesSyncNetworkRequester fetchStoriesWithRequests:triggerType:] */

void FUN_107b17038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaa890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchStoriesWithRequests_trigger_1125c83c8,param_3,param_4,0);
  return;
}



/* Entry: 107b17040; end: 107b17453; -[SCStoriesSyncNetworkRequester fetchStoriesWithRequests:triggerType:bloopsInStoryEnabled:] */

void FUN_107b17040(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = puVar1;
  _dispatch_group_create();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar11 = *(undefined **)(lStack_138 + lVar10 * 8);
        func_0x00010bfa4340(puVar11);
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010bec9920();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          puVar7 = puVar11;
          func_0x00010bf43fe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar7 != (undefined *)0x0) {
            func_0x00010bf43fe0();
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(puVar11 + 0x10))();
            goto LAB_107b172cc;
          }
        }
        else {
          _dispatch_group_enter(puVar2);
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_160 = 0xc2000000;
          pcStack_158 = FUN_107b17454;
          puStack_150 = &UNK_110842e18;
          _objc_retain(puVar4);
          puStack_148 = puVar4;
          func_0x00010c251c80();
          _objc_initWeak(auStack_170,param_1);
          func_0x00010bf43fe0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1b8 = 0xc2000000;
          pcStack_1b0 = FUN_107b17458;
          puStack_1a8 = &UNK_11098ef48;
          uStack_178 = param_5;
          _objc_retain(puVar1);
          puStack_1a0 = puVar1;
          _objc_retain(puVar4);
          puStack_198 = puVar4;
          _objc_retain(puVar2);
          puStack_190 = puVar2;
          _objc_copyWeak(auStack_188,auStack_170);
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          uStack_180 = uVar8;
          func_0x00010c11de00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0dbe0(lVar5);
          _objc_release(uVar6);
          _objc_release(puVar11);
          _objc_destroyWeak(auStack_188);
          _objc_release(puStack_190);
          _objc_release(puStack_198);
          _objc_release(puStack_1a0);
          _objc_destroyWeak(auStack_170);
          puVar11 = puStack_148;
LAB_107b172cc:
          _objc_release(puVar11);
        }
        _objc_release(lVar5);
        _objc_release(puVar4);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  _objc_initWeak(auStack_170,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x107b174b4;
  puStack_1e8 = &UNK_11087b9c8;
  puStack_1e0 = puVar1;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_1d8,auStack_170);
  uStack_1d0 = param_4;
  uStack_1c8 = param_5;
  func_0x000100bc0718(puVar2,uVar8,&puStack_200);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(puStack_1e0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_170);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 107b17454; end: 107b17457;  */

void FUN_107b17454(void)

{
  return;
}



/* Entry: 107b17458; end: 107b17507;  */

void FUN_107b17458(long param_1,uint param_2)

{
  if (((param_2 & 1) != 0) || (*(char *)(param_1 + 0x48) == '\x01')) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf95be0(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b17508; end: 107b17833; -[SCStoriesSyncNetworkRequester _syncStoriesWithFeedTypes:triggerType:bloopsInStoryEnabled:] */

void FUN_107b17508(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = puVar2;
  _dispatch_group_create();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c089c40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bd869d0();
  _objc_release(uVar10);
  _objc_release(uVar4);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar9 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_148 + lVar8 * 8);
        _dispatch_group_enter(puVar3);
        lVar7 = param_1;
        func_0x00010bec9920(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_188 = 0xc2000000;
        pcStack_180 = FUN_107b1783c;
        puStack_178 = &UNK_1109fc4d0;
        _objc_retain(puVar1);
        puStack_170 = puVar1;
        _objc_retain(puVar2);
        puStack_168 = puVar2;
        uStack_160 = uVar10;
        _objc_retain(puVar3);
        uVar10 = *(undefined8 *)(param_1 + 0x18);
        puStack_158 = puVar3;
        func_0x00010c11de00(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa63a0(lVar7);
        _objc_release(uVar10);
        _objc_release(lVar7);
        _objc_release(puStack_158);
        _objc_release(puStack_168);
        _objc_release(puStack_170);
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_107b17898;
  puStack_1d0 = &UNK_1108c9dc0;
  lStack_1c8 = param_1;
  lStack_1c0 = param_3;
  puStack_1b8 = puVar1;
  uStack_1b0 = uVar5;
  puStack_1a8 = puVar2;
  uStack_1a0 = param_4;
  uStack_198 = param_5;
  _objc_retain(puVar2);
  _objc_retain(uVar5);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  uVar10 = uVar4;
  func_0x000100bc0718(puVar3,uVar4,&puStack_1e8);
  _objc_release(uVar4);
  _objc_release(puStack_1a8);
  _objc_release(uStack_1b0);
  _objc_release(puStack_1b8);
  _objc_release(lStack_1c0);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c25c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar10,PTR_s_streamToken_112674bd8);
  return;
}



/* Entry: 107b17834; end: 107b1783b;  */

void FUN_107b17834(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_streamToken_112674bd8);
  return;
}



/* Entry: 107b1783c; end: 107b17897;  */

void FUN_107b1783c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010befa160(uVar1);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107b17898; end: 107b179f3;  */

void FUN_107b17898(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  func_0x00010bfaa840(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 107b179f4; end: 107b17a73;  */

void FUN_107b179f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  func_0x00010be30fe0(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b17a74; end: 107b17f9b; -[SCStoriesSyncNetworkRequester _handleStoriesResponse:feedTypes:triggerType:extraData:] */

void FUN_107b17a74(long param_1,undefined **param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_4);
      }
      lVar9 = param_1;
      func_0x00010bec9920(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c122200();
      _objc_release(lVar9);
      lVar11 = lVar11 + 1;
    } while (lVar1 != lVar11);
    lVar1 = param_4;
    func_0x00010bf52a60();
  }
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c252d60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf3ec40();
    _objc_release(lVar1);
    if ((int)lVar2 == 1) {
      lVar1 = param_3;
      func_0x00010c258b60();
      _objc_retainAutoreleasedReturnValue();
      param_2 = &PTR___NSConcreteGlobalBlock_1109fc550;
      lVar11 = lVar1;
      func_0x00010050471c();
      _objc_release(lVar1);
      _objc_retain(param_4);
      lVar1 = param_4;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_4);
          }
          lVar10 = param_1;
          func_0x00010bec9920(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar11;
          func_0x00010c0e00e0(lVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_6;
          func_0x00010c0e00e0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfd2a80(lVar10);
          _objc_release(uVar5);
          _objc_release(lVar3);
          _objc_release(lVar10);
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        lVar1 = param_4;
        func_0x00010bf52a60();
      }
      _objc_release(param_4);
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      lVar9 = param_3;
      func_0x00010c258b60();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar9;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar9);
          }
          lVar13 = *(long *)(lVar10 * 8);
          lVar3 = lVar13;
          func_0x00010bfd70a0();
          puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if ((int)lVar3 == 0) {
            puVar12 = (undefined *)0x0;
          }
          else {
            lVar3 = lVar13;
            func_0x00010bfa3f40(lVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa4340();
            func_0x00010c0df760();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
          }
          func_0x00010c0ece40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar13;
          func_0x00010c25c6c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar13);
          if ((puVar12 != (undefined *)0x0) && (lVar3 != 0)) {
            puVar4 = PTR_PTR_1126d67e0;
            _objc_alloc(PTR_PTR_1126d67e0);
            func_0x00010c0b4ca0(puVar12);
            func_0x00010c0127a0(puVar4);
            func_0x00010c1d0640(puVar8);
            _objc_release(puVar4);
          }
          _objc_release(lVar3);
          _objc_release(puVar12);
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = lVar9;
        func_0x00010bf52a60();
      }
      _objc_release(lVar9);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b86a0();
      _objc_release(uVar5);
      _objc_release(puVar8);
      goto LAB_107b17f44;
    }
  }
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar11 = param_4, lVar1 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_4);
      }
      lVar9 = param_1;
      func_0x00010bec9920(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaffc0();
      _objc_release(lVar9);
      lVar11 = lVar11 + 1;
    } while (lVar1 != lVar11);
    lVar1 = param_4;
    func_0x00010bf52a60();
  }
LAB_107b17f44:
  _objc_release(lVar11);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  ppuVar6 = param_2;
  func_0x00010bfd70a0();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)ppuVar6 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    ppuVar6 = param_2;
    func_0x00010bfa3f40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4340();
    func_0x00010c0df760(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107b17f9c; end: 107b18027;  */

void FUN_107b17f9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfd70a0();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfa3f40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4340();
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b18028; end: 107b1804f;  */

void FUN_107b18028(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107b18050; end: 107b18097; -[SCStoriesSyncNetworkRequester _syncDelegate:] */

void FUN_107b18050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b18098; end: 107b1809f; -[SCStoriesSyncNetworkRequester syncDelegates] */

undefined8 FUN_107b18098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107b180a0; end: 107b180f3; -[SCStoriesSyncNetworkRequester .cxx_destruct] */

void FUN_107b180a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b180f4; end: 107b181cb; -[SCFriendStoriesSyncSequences initWithUserStorySequences:customStorySequences:publicUserStorySequences:] */

undefined1 *
FUN_107b180f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f9da8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b181cc; end: 107b181ef; -[SCFriendStoriesSyncSequences copyWithZone:] */

undefined8 FUN_107b181cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107b181f0; end: 107b1826f; -[SCFriendStoriesSyncSequences hash] */

undefined8 * FUN_107b181f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107b18308:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107b18314;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107b18314;
          }
          goto LAB_107b18308;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107b18314:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107b18270; end: 107b1832f; -[SCFriendStoriesSyncSequences isEqual:] */

long FUN_107b18270(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107b18308:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107b18314;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107b18314;
          }
          goto LAB_107b18308;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107b18314:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107b18330; end: 107b18337; -[SCFriendStoriesSyncSequences userStorySequences] */

undefined8 FUN_107b18330(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107b18338; end: 107b1833f; -[SCFriendStoriesSyncSequences customStorySequences] */

undefined8 FUN_107b18338(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107b18340; end: 107b18347; -[SCFriendStoriesSyncSequences publicUserStorySequences] */

undefined8 FUN_107b18340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107b18348; end: 107b18383; -[SCFriendStoriesSyncSequences .cxx_destruct] */

void FUN_107b18348(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b18384; end: 107b183cb; -[SCDiscoverFeedS2REntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b18384(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a6f0);
  _objc_destroyWeak(param_1 + _DAT_11276a6f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a6ec,0);
  return;
}



/* Entry: 107b183cc; end: 107b183ef; -[SCDiscoverFeedS2RLogProvider willDumpLogGivenProject:] */

undefined8 FUN_107b183cc(void)

{
  _objc_retain(0);
  _objc_release(0);
  return 0;
}



/* Entry: 107b183f0; end: 107b183f7; -[SCDiscoverFeedS2RLogProvider shouldWaitForLog] */

undefined8 FUN_107b183f0(void)

{
  return 1;
}



/* Entry: 107b183f8; end: 107b18487; -[SCDiscoverFeedS2RLogProvider provideLogContentAsync:] */

void FUN_107b183f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_retain(0);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107b18488;
  puStack_30 = &UNK_11086f048;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c09b8a0(0,param_2,&puStack_48);
  _objc_release(0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107b18488; end: 107b1849b;  */

void FUN_107b18488(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107b18498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),param_2,&PTR____CFConstantStringClassReference_110ead598);
  return;
}



/* Entry: 107b1849c; end: 107b185eb; -[SCDiscoverFeedS2RNetworkInfo initWithCoder:] */

undefined1 * FUN_107b1849c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9db8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b185ec; end: 107b18757; -[SCDiscoverFeedS2RNetworkInfo initWithRequestId:logTime:requestInfo:responseInfo:responseType:resquestType:] */

undefined1 *
FUN_107b185ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f9db8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


