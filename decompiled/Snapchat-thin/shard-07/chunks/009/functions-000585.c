/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ad5ce4; end: 105ad5f07; -[SCStoriesEverywhereSectionDataProvider _mixedCarouselRankAndUpdateViewModelsWithViewedStoryWhitelist:lastExpandedUnwatchedStoryId:] */

void FUN_105ad5ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2582c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  if ((int)uVar2 == 0) {
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_88;
    _objc_copyWeak(puVar3,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bfa8b60(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    uVar2 = param_3;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105ad5f08;
    puStack_68 = &UNK_1108576a8;
    puVar3 = auStack_50;
    _objc_copyWeak(puVar3,auStack_48);
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010bfa4e80(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uStack_58);
    uVar2 = uStack_60;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ad5f08; end: 105ad5fb7;  */

void FUN_105ad5f08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be609e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad5fb8; end: 105ad61f3; -[SCStoriesEverywhereSectionDataProvider _mixedCarouselRankAndUpdateViewModelsWithStories:viewedStoryWhitelist:lastExpandedUnwatchedStoryId:isIn5Tab:] */

void FUN_105ad5fb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105ad61f4;
  puStack_80 = &UNK_1108d4100;
  _objc_retain();
  puStack_78 = puVar3;
  func_0x00010bf97e80(param_3);
  _objc_initWeak(auStack_a0,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_a0);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(uVar2);
  uStack_a8 = param_6;
  func_0x00010bfaa4c0(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a0);
  _objc_release(puStack_78);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ad61f4; end: 105ad6267;  */

void FUN_105ad61f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bdf60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ad6268; end: 105ad6333;  */

void FUN_105ad6268(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2444e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((lVar3 != 0) && (lVar1 = param_2, func_0x00010c07fde0(), (int)lVar1 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c2444e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ad6334; end: 105ad638f;  */

void FUN_105ad6334(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be60a00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad6390; end: 105ad663f; -[SCStoriesEverywhereSectionDataProvider _mixedCarouselRankAndUpdateViewModelsWithStories:viewedStoryWhitelist:lastExpandedUnwatchedStoryId:snapchatterByUserId:justViewedStories:isIn5Tab:] */

void FUN_105ad6390(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  ulong in_x7;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  char cStack_51;
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  cStack_51 = '\0';
  uVar1 = param_1;
  func_0x00010be85d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  iVar10 = 0;
  if ((in_x7 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c0ced80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bfd9420();
    iVar10 = (int)uVar3;
    _objc_release(uVar9);
    _objc_release(uVar2);
  }
  uVar4 = param_1;
  func_0x00010bdf5a20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  if ((uVar5 < 5) || (iVar10 == 0)) {
    if (cStack_51 == '\x01') {
      func_0x000108f57f64();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001079d8f70(*(undefined4 *)(param_1 + 0xb8));
      uVar6 = uVar5;
      func_0x0001079d8af4(uVar5,0x18);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar7;
      goto LAB_105ad6508;
    }
  }
  else {
    func_0x0001079d8f70(*(undefined4 *)(param_1 + 0xb8));
    uVar5 = 0;
    func_0x000107c142dc(0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    uVar4 = uVar7;
LAB_105ad6508:
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  lVar11 = *(long *)(param_1 + 8);
  _objc_retain(lVar11);
  _objc_retain(uVar4);
  if (uVar4 == 0 && lVar11 == 0) {
LAB_105ad6538:
    if (*(char *)(param_1 + 0xd8) != '\x01') goto LAB_105ad65f0;
  }
  else if ((uVar4 == 0) || (lVar11 == 0)) {
    _objc_release(uVar4);
    _objc_release(lVar11);
  }
  else {
    lVar8 = lVar11;
    func_0x00010c071b60();
    _objc_release(uVar4);
    _objc_release(lVar11);
    if ((int)lVar8 != 0) goto LAB_105ad6538;
  }
  uVar5 = uVar4;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + 8);
  *(ulong *)(param_1 + 8) = uVar5;
  _objc_release(uVar9);
  func_0x00010bee9860(param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105ad6640;
  puStack_68 = &UNK_110842e18;
  uStack_60 = param_1;
  if (lRam00000001136c1bc8 != -1) {
    func_0x00010002a2fc(0x1136c1bc8,&puStack_80);
  }
LAB_105ad65f0:
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(in_x6);
  _objc_release(in_x5);
  return;
}



/* Entry: 105ad6640; end: 105ad667f;  */

void FUN_105ad6640(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ad6680; end: 105ad6e67; -[SCStoriesEverywhereSectionDataProvider _rankedMixedCarouselStoriesToShow:viewedStoryWhitelist:shouldShowMutedCell:] */

void FUN_105ad6680(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar1;
  func_0x00010c0ced20();
  _objc_release(uVar1);
  if ((int)uVar14 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    _objc_retain(param_3);
    puVar8 = param_3;
    func_0x00010bf52a60();
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar8 != (undefined *)0x0) {
      lVar18 = *plStack_2b0;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_2b0 != lVar18) {
            _objc_enumerationMutation(param_3);
          }
          uVar14 = *(undefined8 *)(lStack_2b8 + (long)puVar16 * 8);
          puStack_328 = puVar10;
          uStack_320 = 0xc2000000;
          pcStack_318 = FUN_105ad6e68;
          puStack_310 = &UNK_1108d4160;
          puStack_308 = param_1;
          _objc_retain(puVar4);
          puStack_300 = puVar4;
          uStack_2f8 = uVar14;
          uStack_2c8 = param_5;
          _objc_retain(param_4);
          uStack_2f0 = param_4;
          _objc_retain(puVar2);
          puStack_2e8 = puVar2;
          _objc_retain(puVar7);
          puStack_2e0 = puVar7;
          _objc_retain(puVar5);
          puStack_2d8 = puVar5;
          _objc_retain(puVar3);
          puStack_370 = puVar10;
          uStack_368 = 0xc2000000;
          uStack_360 = 0x105ad6f4c;
          puStack_358 = &UNK_1108d4190;
          puStack_2d0 = puVar3;
          _objc_retain(param_4);
          uStack_350 = param_4;
          _objc_retain(puVar2);
          puStack_348 = puVar2;
          uStack_340 = uVar14;
          _objc_retain(puVar6);
          puStack_338 = puVar6;
          _objc_retain(puVar3);
          puStack_330 = puVar3;
          func_0x00010c0bdf60(uVar14);
          _objc_release(puStack_330);
          _objc_release(puStack_338);
          _objc_release(puStack_348);
          _objc_release(uStack_350);
          _objc_release(puStack_2d0);
          _objc_release(puStack_2d8);
          _objc_release(puStack_2e0);
          _objc_release(puStack_2e8);
          _objc_release(uStack_2f0);
          _objc_release(puStack_300);
          puVar16 = puVar16 + 1;
        } while (puVar8 != puVar16);
        puVar8 = param_3;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined *)0x0);
    }
    _objc_release(param_3);
    uVar15 = *(ulong *)(param_1 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar15;
    func_0x00010bfa0b80();
    _objc_release(uVar15);
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    if ((uVar9 & 1) == 0) {
      lVar12 = *(long *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar12;
      func_0x00010c2582e0();
      _objc_release(lVar12);
      if (lVar18 < 0) {
        func_0x00010befa160(puVar10);
      }
      else {
        func_0x00010be978c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar10);
        _objc_release(param_1);
      }
      func_0x00010befa160(puVar10);
      func_0x00010befa160(puVar10);
      puVar8 = puVar10;
      func_0x00010bf51e00(puVar10);
    }
    else {
      puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      lStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      plStack_3a0 = (long *)0x0;
      _objc_retain(puVar5);
      puVar8 = puVar5;
      func_0x00010bf52a60();
      if (puVar8 != (undefined *)0x0) {
        lVar18 = *plStack_3a0;
        do {
          puVar20 = (undefined *)0x0;
          do {
            if (*plStack_3a0 != lVar18) {
              _objc_enumerationMutation(puVar5);
            }
            uStack_3d0 = 0;
            uStack_3c0 = 0x2020000000;
            uStack_3b8 = 0;
            puStack_3c8 = &uStack_3d0;
            func_0x00010c0bdf60(*(undefined8 *)(lStack_3a8 + (long)puVar20 * 8));
            puVar19 = puVar10;
            if (*(char *)(puStack_3c8 + 3) == '\0') {
              puVar19 = puVar16;
            }
            func_0x00010befa120(puVar19);
            __Block_object_dispose(&uStack_3d0,8);
            puVar20 = puVar20 + 1;
          } while (puVar8 != puVar20);
          puVar8 = puVar5;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(puVar5);
      _objc_retain(puVar7);
      puVar8 = puVar7;
      func_0x00010bf52a60();
      lVar18 = lRam0000000000000000;
      if (puVar8 != (undefined *)0x0) {
        do {
          puVar20 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar18) {
              _objc_enumerationMutation(puVar7);
            }
            uStack_3d0 = 0;
            uStack_3c0 = 0x2020000000;
            uStack_3b8 = 0;
            puStack_3c8 = &uStack_3d0;
            func_0x00010c0bdf60(*(undefined8 *)((long)puVar20 * 8));
            puVar19 = puVar10;
            if (*(char *)(puStack_3c8 + 3) == '\0') {
              puVar19 = puVar11;
            }
            func_0x00010befa120(puVar19);
            __Block_object_dispose(&uStack_3d0,8);
            puVar20 = puVar20 + 1;
          } while (puVar8 != puVar20);
          puVar8 = puVar7;
          func_0x00010bf52a60();
        } while (puVar8 != (undefined *)0x0);
      }
      _objc_release(puVar7);
      puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010befa160();
      lVar12 = *(long *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar12;
      func_0x00010c2582e0();
      _objc_release(lVar12);
      if (lVar18 < 0) {
        _objc_retain(puVar2);
        puVar8 = puVar2;
        func_0x00010bf52a60();
        lVar18 = lRam0000000000000000;
        while (param_1 = puVar2, puVar8 != (undefined *)0x0) {
          puVar19 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar18) {
              _objc_enumerationMutation(puVar2);
            }
            puVar13 = puVar10;
            func_0x00010bf4b900();
            if (((ulong)puVar13 & 1) == 0) {
              func_0x00010befa120(puVar20);
            }
            puVar19 = puVar19 + 1;
          } while (puVar8 != puVar19);
          puVar8 = puVar2;
          func_0x00010bf52a60();
        }
      }
      else {
        func_0x00010be978c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar20);
      }
      _objc_release(param_1);
      func_0x00010befa160(puVar20);
      func_0x00010befa160(puVar20);
      func_0x00010bf529e0(puVar10);
      puVar8 = puVar20;
      func_0x00010bf51e00(puVar20);
      _objc_release(puVar20);
      _objc_release(puVar11);
      _objc_release(puVar16);
    }
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_3);
    puVar8 = param_3;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  uVar15 = 8;
  __Block_object_dispose(&uStack_3d0);
  __Unwind_Resume();
  _objc_retain(uVar15);
  uVar9 = uVar15;
  func_0x00010c07fc80();
  if ((int)uVar9 == 0) {
    iVar17 = (int)*(undefined8 *)(param_3 + 0x38);
    uVar9 = uVar15;
    func_0x00010c259cc0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar9);
    uVar9 = uVar15;
    func_0x00010bfddf20();
    if (((uVar9 & 1) == 0) && (iVar17 == 0)) {
      uVar14 = *(undefined8 *)(param_3 + 0x58);
    }
    else {
      func_0x00010befa120(*(undefined8 *)(param_3 + 0x40));
      uVar9 = uVar15;
      func_0x00010c07fde0();
      if ((int)uVar9 == 0) {
        uVar14 = *(undefined8 *)(param_3 + 0x50);
      }
      else {
        uVar14 = *(undefined8 *)(param_3 + 0x48);
      }
    }
  }
  else {
    if (*(char *)(*(long *)(param_3 + 0x20) + 0xf0) != '\x01') {
      if ((**(byte **)(param_3 + 0x60) & 1) == 0) {
        **(byte **)(param_3 + 0x60) = 1;
      }
      goto LAB_105ad6f38;
    }
    uVar14 = *(undefined8 *)(param_3 + 0x28);
  }
  func_0x00010befa120(uVar14);
LAB_105ad6f38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 105ad6e68; end: 105ad7003;  */

void FUN_105ad6e68(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c07fc80();
  if ((int)uVar1 == 0) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x38);
    uVar1 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010bfddf20();
    if (((uVar1 & 1) == 0) && (iVar3 == 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
      uVar1 = param_2;
      func_0x00010c07fde0();
      if ((int)uVar1 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x50);
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x48);
      }
    }
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x20) + 0xf0) != '\x01') {
      if ((**(byte **)(param_1 + 0x60) & 1) == 0) {
        **(byte **)(param_1 + 0x60) = 1;
      }
      goto LAB_105ad6f38;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  func_0x00010befa120(uVar2);
LAB_105ad6f38:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ad7004; end: 105ad706b;  */

void FUN_105ad7004(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = (byte)((ulong)param_2 >> 8);
  func_0x00010c259580();
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar1 & 1;
  return;
}



/* Entry: 105ad706c; end: 105ad7243; -[SCStoriesEverywhereSectionDataProvider _roundRobinRankedStoriesWithFriendStories:subsStories:fofStories:numFsPerSubs:] */

void FUN_105ad706c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar6 = param_3;
  func_0x00010bf529e0();
  if (uVar6 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar3 = param_6 + 1;
    do {
      uVar2 = param_4;
      func_0x00010bf529e0();
      if (uVar2 <= uVar6) break;
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar7 / uVar3;
      }
      if (uVar7 - uVar2 * uVar3 == param_6) {
        uVar2 = param_4;
        func_0x00010c0dfd20(param_4,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar2);
        _objc_release(uVar2);
        uVar6 = uVar6 + 1;
      }
      else {
        uVar2 = param_3;
        func_0x00010c0dfd20(param_3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar2);
        _objc_release(uVar2);
        uVar5 = uVar5 + 1;
      }
      uVar7 = uVar7 + 1;
      uVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar5 < uVar2);
  }
  uVar3 = param_3;
  func_0x00010bf529e0();
  uVar7 = param_3;
  if ((uVar5 + 1 < uVar3) ||
     (uVar3 = param_4, func_0x00010bf529e0(), uVar5 = uVar6, uVar7 = param_4, uVar6 + 1 < uVar3)) {
    uVar6 = uVar7;
    func_0x00010bf529e0(uVar7);
    func_0x00010c25e980(uVar7,param_2,uVar5,uVar6 - uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,uVar7);
    _objc_release(uVar7);
  }
  func_0x00010befa160(puVar1,param_2,param_5);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105ad7244; end: 105ad7577; -[SCStoriesEverywhereSectionDataProvider _createViewModelsWithMixedCarouselStories:snapchatterByUserId:justViewedStories:] */

void FUN_105ad7244(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ced60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010bf715a0(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067e20();
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010bf715c0(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b1118;
  _objc_alloc();
  func_0x00010c043160();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar6 = param_3;
  func_0x00010bf529e0();
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      uVar4 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_105ad7578;
      uStack_88 = 0x105ad7588;
      uStack_80 = 0;
      puStack_a0 = &uStack_a8;
      _objc_retain(param_4);
      _objc_retain(param_3);
      _objc_retain(puVar2);
      _objc_retain(param_3);
      func_0x00010c0bdf60(uVar4);
      if (puStack_a0[5] != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(param_3);
      _objc_release(puVar2);
      _objc_release(param_3);
      _objc_release(param_4);
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(uStack_80);
      _objc_release(uVar4);
      uVar6 = uVar6 + 1;
      uVar4 = param_3;
      func_0x00010bf529e0();
    } while (uVar6 < uVar4);
  }
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ad7578; end: 105ad758f;  */

void FUN_105ad7578(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105ad7590; end: 105ad7c8b;  */

void FUN_105ad7590(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined *puStack_a8;
  undefined *puStack_98;
  
  _objc_retain(param_4);
  iVar3 = *(int *)(param_3 + 0x48);
  lVar16 = *(long *)(param_3 + 0x20);
  uVar15 = *(undefined8 *)(param_3 + 0x28);
  uVar21 = (ulong)*(uint *)(lVar16 + 0xb8);
  uVar23 = *(undefined4 *)(lVar16 + 0xbc);
  cVar1 = *(char *)(param_3 + 0x4c);
  uVar17 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined1 *)(lVar16 + 0xf1);
  uVar22 = *(undefined4 *)(lVar16 + 0xf4);
  _objc_retain(uVar15);
  if (param_4 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    _objc_retain(uVar17);
    puVar19 = param_4;
    func_0x00010c07fc80();
    puVar5 = param_4;
    func_0x000108f4fe1c(param_4,(long)iVar3,2,0,0xffffffffffffffff,0x2a,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2728);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_4;
    FUN_105ad96e0(param_4,0,puVar5,uVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar17);
    puVar7 = param_4;
    func_0x0001079d7a78(param_4,puVar5,&PTR____CFConstantStringClassReference_110eb5378);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_4;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_4;
    func_0x0001079d79c8();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_4;
    func_0x00010c259580();
    if ((((uint)puVar11 >> 2 & 1) == 0) &&
       (puVar11 = param_4, func_0x00010c259580(), ((uint)puVar11 >> 8 & 1) == 0)) {
      puVar11 = param_4;
      func_0x00010c259580();
      puVar20 = param_4;
      func_0x00010c259580();
      puStack_98 = puVar10;
      if (((ulong)puVar11 & 0x432) == 0) {
        if (puVar20 == (undefined *)0x1) {
          puVar11 = param_4;
          func_0x00010c2444e0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar11;
          func_0x00010c0e1a40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar11);
          bVar4 = puVar20 != (undefined *)0x0;
          if (puVar20 == (undefined *)0x0) {
            puStack_a8 = (undefined *)0x0;
          }
          else {
            puVar11 = param_4;
            func_0x00010c2444e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_a8 = puVar11;
            func_0x00010c0e1a40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
          }
          puStack_98 = PTR_PTR_1126b2c18;
          puVar11 = param_4;
          func_0x00010bf85d80(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c22d940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(puVar11);
        }
        else {
          bVar4 = false;
          puStack_a8 = (undefined *)0x0;
        }
      }
      else {
        func_0x00010bfddf20();
        puStack_a8 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220();
        _objc_retainAutoreleasedReturnValue();
        bVar4 = false;
      }
    }
    else {
      func_0x00010bfddf20();
      puStack_a8 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR_PTR_1126b2c18;
      puVar11 = param_4;
      func_0x00010bf85d80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22d940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar11);
      bVar4 = false;
    }
    puVar10 = puVar9;
    func_0x000107c89f10(0,puVar9,puStack_a8,0,0,0,bVar4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x000107d23c68(puVar8);
    _objc_retainAutoreleasedReturnValue();
    if ((cVar1 == '\0') || (puVar20 = param_4, func_0x00010c07fde0(), (int)puVar20 == 0)) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar20 = param_4;
      func_0x00010c2444e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar20;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar15;
      func_0x00010c0e00e0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      _objc_release(puVar20);
      puVar20 = param_4;
      func_0x00010bfd3da0();
      if (((ulong)puVar20 & 1) == 0) {
        puVar18 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
        func_0x00010c01b460();
      }
      else {
        puVar18 = (undefined *)0x0;
      }
      puVar20 = PTR_PTR_1126c21c0;
      _objc_alloc();
      puVar12 = param_4;
      func_0x00010bfd3da0(param_4);
      func_0x000107cf39e8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00d2e0();
      _objc_release(puVar12);
      _objc_release(puVar18);
      _objc_release(uVar17);
    }
    puVar18 = PTR_PTR_1126c21c8;
    _objc_alloc();
    puVar12 = param_4;
    func_0x00010bfddf20(param_4);
    func_0x000107c89e80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_4;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051f40(uVar23);
    _objc_release(puVar13);
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126c21d0;
    _objc_alloc(PTR_PTR_1126c21d0);
    func_0x00010c052120();
    func_0x00010c259580();
    puVar13 = PTR_PTR_1126c2100;
    _objc_alloc(PTR_PTR_1126c2100);
    puVar14 = puVar13;
    func_0x0001079d8f70(uVar21);
    uVar17 = 0x3fd0000000000000;
    if ((int)puVar19 == 0) {
      uVar17 = 0x3ff0000000000000;
    }
    func_0x000105ad45f4(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e3c0(uVar21,param_2,0,uVar17,puVar13);
    _objc_release(puVar14);
    puVar19 = PTR_PTR_1126aea98;
    _objc_alloc();
    func_0x00010bffd260();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar18);
    _objc_release(puVar20);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puStack_98);
    _objc_release(puStack_a8);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(uVar15);
  lVar16 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  uVar15 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined **)(lVar16 + 0x28) = puVar19;
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ad7c8c; end: 105ad864f;  */

void FUN_105ad7c8c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x0001079b64c0(param_2,uVar7,0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar3 + 0x50),
                      0,*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar1);
  lVar3 = lVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) goto LAB_105ad85a0;
  lVar22 = lVar3;
  func_0x00010c26e120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar22 == 0) {
    lVar22 = lVar3;
    func_0x00010bf28ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar22 == 0) goto LAB_105ad85a0;
  }
  else {
    _objc_release();
  }
  lVar22 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar22 + 0x20);
  uVar24 = *(undefined8 *)(lVar22 + 0x40);
  uVar26 = (ulong)*(uint *)(lVar22 + 0xb8);
  uVar29 = *(undefined4 *)(lVar22 + 0xbc);
  uVar25 = *(undefined8 *)(param_1 + 0x30);
  uVar28 = *(undefined4 *)(lVar22 + 0xf4);
  _objc_retain(param_2);
  _objc_retain(lVar3);
  _objc_retain(uVar1);
  _objc_retain(uVar24);
  _objc_retain(uVar25);
  puVar4 = PTR_PTR_1126c21d8;
  func_0x00010bf82280();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c2140;
  lVar22 = lVar3;
  func_0x00010c25a160(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar22);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b1b20(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c25b720(param_2);
  func_0x00010c2ba700(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = 0;
  FUN_105ad96e0(0,param_2,puVar6,uVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6020(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar7);
  puVar8 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b1270;
  func_0x00010bf71a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f320();
  _objc_retain(param_2);
  _objc_retain(puVar8);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_105ad7578;
  uStack_98 = 0x105ad7588;
  uStack_90 = 0;
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_105ad7578;
  uStack_c8 = 0x105ad7588;
  uStack_c0 = 0;
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_105ad7578;
  uStack_f8 = 0x105ad7588;
  uStack_f0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uVar27 = 0x2020000000;
  uStack_128 = 0x2020000000;
  uStack_120 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_105ad7578;
  uStack_148 = 0x105ad7588;
  uStack_140 = 0;
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x2020000000;
  uStack_170 = 0;
  lVar22 = param_2;
  func_0x00010c259560(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c0bf680(lVar22);
  _objc_release(lVar22);
  if ((*(byte *)(puStack_130 + 3) & 1) == 0) {
    lVar22 = puStack_b0[5];
    func_0x00010c08fa60();
    if (lVar22 == 0) goto LAB_105ad81c8;
    puVar23 = PTR_PTR_1126c21e0;
    func_0x00010c26e400();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_105ad81c8:
    puVar23 = (undefined *)0x0;
  }
  func_0x00010c0741a0();
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x000107c89f10(0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x00010c26e120();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar22;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar22);
  puVar14 = PTR_PTR_1126c21c8;
  _objc_alloc(PTR_PTR_1126c21c8);
  lVar22 = param_2;
  func_0x00010c0741a0(param_2);
  func_0x000107c89e80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010bf28ba0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051f40(uVar29,puVar14);
  _objc_release(puVar15);
  _objc_release(lVar22);
  puVar15 = PTR_PTR_1126c21d0;
  _objc_alloc(PTR_PTR_1126c21d0);
  func_0x00010c052120();
  puVar16 = PTR_PTR_1126c2100;
  _objc_alloc(PTR_PTR_1126c2100);
  puVar17 = puVar8;
  func_0x00010c112fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar8;
  func_0x00010c0b4d20(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar8;
  func_0x00010c152160(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x0001079d8f70(uVar26);
  func_0x000105ad45f4(uVar28);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar8;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e3c0(uVar26,uVar27,0,0x3ff0000000000000,puVar16);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar23);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_188,8);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(puVar8);
  _objc_release(param_2);
  _objc_release(puVar9);
  _objc_release(uVar7);
  puVar9 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  _objc_release(puVar16);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(param_2);
  lVar22 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar7 = *(undefined8 *)(lVar22 + 0x28);
  *(undefined **)(lVar22 + 0x28) = puVar9;
  _objc_release(uVar7);
LAB_105ad85a0:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 105ad8650; end: 105ad86d7; -[SCStoriesEverywhereSectionDataProvider _viewModelDidUpdateAndNotifyWithFromFriendStoriesUpdate:shouldUpdateLoadingState:] */

void FUN_105ad8650(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = 2;
  }
  lVar1 = param_1 + 0xf8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c155aa0();
  _objc_release(lVar1);
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf51e00(uVar2);
    func_0x00010be777a0(param_1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdf7e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dataProviderEventDidUpdate_11255b930);
    return;
  }
  return;
}



/* Entry: 105ad86d8; end: 105ad87c7; -[SCStoriesEverywhereSectionDataProvider _dataProviderEventDidUpdate] */

void FUN_105ad86d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf51e00(uVar3);
  func_0x00010c1d0640(puVar2,param_2,uVar3,&PTR____CFConstantStringClassReference_110f8a6f8);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf51e00(uVar1);
  func_0x00010c1d0640(puVar2,param_2,uVar3,&PTR____CFConstantStringClassReference_110f8a718);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110f8a6d8,param_1,puVar2)
  ;
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ad87c8; end: 105ad89b7; -[SCStoriesEverywhereSectionDataProvider _configureStoryCardCollectionViewCell:] */

void FUN_105ad87c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4ff0);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa2c0(uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_DAT_1126a4ff0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,puVar3);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c20c5a0(uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_DAT_1126a4ff8;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,puVar3);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c171140(uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c21b0;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c171460(uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_DAT_1126a4ff8;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,puVar3);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c171460(uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c21b0;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010c2009e0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ad89b8; end: 105ad8d7b; -[SCStoriesEverywhereSectionDataProvider _prefetchThumbnailsIfNeededForViewModels:] */

void FUN_105ad89b8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_2 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf48f60();
  _objc_release(lVar2);
  if (lVar3 == 4) {
LAB_105ad8a30:
    uVar4 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bfb8e80();
    iVar1 = (int)uVar16;
  }
  else {
    if (lVar3 != 2) {
      if (lVar3 != 1) {
        uVar12 = 0;
        goto LAB_105ad8a80;
      }
      goto LAB_105ad8a30;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bfb8e60();
    iVar1 = (int)uVar16;
  }
  uVar12 = (ulong)iVar1;
  _objc_release(uVar4);
LAB_105ad8a80:
  uVar13 = param_4;
  func_0x00010bf529e0();
  if (uVar13 <= uVar12) {
    uVar12 = uVar13;
  }
  if (uVar12 != 0) {
    uVar13 = 0;
    uVar16 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    do {
      uVar5 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126c2100;
      _objc_opt_class(PTR_PTR_1126c2100);
      uVar14 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar9 = uVar6;
      if ((uVar14 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar6);
      if (uVar9 == 0) {
        uVar14 = 0;
      }
      else {
        func_0x00010c25b980();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010c26e5c0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar8;
        func_0x00010c26e120();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        _objc_release(uVar6);
      }
      _objc_release(uVar9);
      _objc_release(uVar5);
      uVar9 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010bf4ddc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      puVar7 = PTR_PTR_1126c2100;
      _objc_opt_class(PTR_PTR_1126c2100);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar7);
      uVar9 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar5);
      uVar5 = uVar9;
      func_0x00010bf85a20(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      if (uVar14 != 0) {
        uVar9 = uVar14;
        func_0x000107dd5184();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        func_0x00010c08fa60();
        if (uVar6 != 0) {
          uVar6 = uVar14;
          func_0x000107dd4c00(uVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126aebf0;
          _objc_alloc(PTR_PTR_1126aebf0);
          lVar3 = param_2;
          _objc_opt_class(param_2);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c011b80(puVar7);
          _objc_release(lVar3);
          puVar10 = PTR_PTR_1126b85a8;
          _objc_alloc(PTR_PTR_1126b85a8);
          puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010c01cf00(param_1,uVar16,uVar4,puVar10);
          _objc_release(puVar11);
          uVar15 = *(undefined8 *)(param_2 + 0x38);
          _objc_retain(uVar14);
          func_0x00010bfa7900(uVar15);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar14);
          _objc_release(puVar10);
          _objc_release(puVar7);
          _objc_release(uVar6);
        }
        _objc_release(uVar9);
      }
      _objc_release(uVar5);
      _objc_release(uVar14);
      uVar13 = uVar13 + 1;
    } while (uVar12 != uVar13);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105ad8d7c; end: 105ad8e37;  */

void FUN_105ad8d7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ad8e38; end: 105ad8e3f;  */

void FUN_105ad8e38(void)

{
  return;
}



/* Entry: 105ad8e40; end: 105ad8efb; -[SCStoriesEverywhereSectionDataProvider _onCommand:] */

void FUN_105ad8e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x105ad8f10;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105ad8f20;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bf700(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108d4250,
                      &PTR___NSConcreteGlobalBlock_1108d4270,&PTR___NSConcreteGlobalBlock_1108d4290,
                      &PTR___NSConcreteGlobalBlock_1108d42b0,&PTR___NSConcreteGlobalBlock_1108d42d0,
                      &puStack_38,&puStack_60,&PTR___NSConcreteGlobalBlock_1108d42f0,
                      &PTR___NSConcreteGlobalBlock_1108d4310,&PTR___NSConcreteGlobalBlock_1108d4330)
  ;
  return;
}



/* Entry: 105ad8efc; end: 105ad8f3b;  */

void FUN_105ad8efc(void)

{
  return;
}



/* Entry: 105ad8f3c; end: 105ad8f7b; -[SCStoriesEverywhereSectionDataProvider _releasePendingUpdates] */

void FUN_105ad8f3c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    (**(code **)(*(long *)(param_1 + 0xe0) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ad8f7c; end: 105ad90eb; -[SCStoriesEverywhereSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105ad8f7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **unaff_x24;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f48bb8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f48c78;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf4b900();
  if ((int)puVar2 != 0) {
    _objc_initWeak(auStack_60,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105ad90ec;
    puStack_70 = &UNK_1108434b0;
    unaff_x24 = &puStack_88;
    _objc_copyWeak(auStack_68,auStack_60);
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bec9140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ad90ec; end: 105ad9117;  */

void FUN_105ad90ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ad9118; end: 105ad935b; -[SCStoriesEverywhereSectionDataProvider _subscribeToSnoozeFoFStories] */

void FUN_105ad9118(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105ad935c;
  puStack_90 = &UNK_110851330;
  _objc_retain(puVar2);
  puStack_88 = puVar2;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar6 = lVar1;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xd0);
  *(long *)(param_1 + 0xd0) = lVar6;
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x108);
  puVar7 = auStack_78;
  _objc_copyWeak(auStack_b0);
  func_0x00010c0f7fc0(uVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_release(puStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 != (undefined1 *)0x0) {
    lVar1 = lVar1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bee05c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105ad935c; end: 105ad93e3;  */

void FUN_105ad935c(long param_1,long param_2)

{
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee05c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ad93e4; end: 105ad94a7; -[SCStoriesEverywhereSectionDataProvider _updateSnoozeFoFStateIfNecessary] */

void FUN_105ad93e4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08a1a0();
  _objc_release(lVar2);
  dVar5 = (double)(lVar3 / 1000);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  bVar1 = 0.0 < dVar5 + 604800.0;
  _objc_release(puVar4);
  if ((bool)*(char *)(param_1 + 0xc0) == bVar1) {
    return;
  }
  *(bool *)(param_1 + 0xc0) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x00010be12a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchMixedCarouselStoriesFromPu_112562428,0)
  ;
  return;
}



/* Entry: 105ad94a8; end: 105ad94df; -[SCStoriesEverywhereSectionDataProvider _resetLastSnoozedFofTimestampMs] */

void FUN_105ad94a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b89e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ad94e0; end: 105ad94f7; -[SCStoriesEverywhereSectionDataProvider dataProviderDelegate] */

void FUN_105ad94e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ad94f8; end: 105ad9503; -[SCStoriesEverywhereSectionDataProvider setDataProviderDelegate:] */

void FUN_105ad94f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xf8,param_3);
  return;
}



/* Entry: 105ad9504; end: 105ad950b; -[SCStoriesEverywhereSectionDataProvider sectionDataModel] */

undefined8 FUN_105ad9504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 105ad950c; end: 105ad9513; -[SCStoriesEverywhereSectionDataProvider updateQueuePerformer] */

undefined8 FUN_105ad950c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 105ad9514; end: 105ad9543; -[SCStoriesEverywhereSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105ad9514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ad9544; end: 105ad954b; -[SCStoriesEverywhereSectionDataProvider backgroundColor] */

undefined8 FUN_105ad9544(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 105ad954c; end: 105ad957b; -[SCStoriesEverywhereSectionDataProvider setBackgroundColor:] */

void FUN_105ad954c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105ad957c; end: 105ad96df; -[SCStoriesEverywhereSectionDataProvider .cxx_destruct] */

void FUN_105ad957c(long param_1)

{
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
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



/* Entry: 105ad96e0; end: 105ad9833;  */

void FUN_105ad96e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2138;
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (param_1 == 0) {
    func_0x00010bf822a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb8fe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ad9834;
  puStack_50 = &UNK_1108d4350;
  lStack_48 = param_1;
  _objc_retain(param_1);
  uVar2 = param_4;
  func_0x0001006372a4(param_4,&puStack_68);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126c2108;
  _objc_alloc(PTR_PTR_1126c2108);
  func_0x00010c01dd20();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lStack_48);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105ad9834; end: 105ad990f;  */

undefined1 FUN_105ad9834(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0bdf60(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105ad9910; end: 105ad99cb;  */

void FUN_105ad9910(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 unaff_x23;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
LAB_105ad9988:
    uVar2 = param_2;
    func_0x00010c07fc80();
    *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (byte)uVar2 ^ 1;
    if (lVar3 == 0) goto LAB_105ad99b4;
  }
  else {
    unaff_x20 = lVar3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = unaff_x20;
    func_0x00010c0720c0();
    if ((int)lVar1 == 0) goto LAB_105ad9988;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  _objc_release(unaff_x23);
  _objc_release(unaff_x20);
LAB_105ad99b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ad99cc; end: 105ad9e3f;  */

void FUN_105ad99cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0e1a60();
  func_0x000108f47180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar1;
  _objc_release(uVar4);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
  uVar1 = param_2;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar1;
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar7 = *(ulong *)(param_1 + 0x50);
  puVar3 = PTR_PTR_1126c11e8;
  func_0x00010c11aac0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = ((ulong)puVar3 & uVar7) != 0;
  return;
}



/* Entry: 105ad9e40; end: 105ad9eeb;  */

void FUN_105ad9e40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar4 = PTR_PTR_1126b2c18;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010afefd10();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c291e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22d940(puVar4,param_2,uVar3,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ad9eec; end: 105ada4f3; -[SCStoriesEverywhereViewController getImpressionItemsLoggingDictWithPageSessionId:pageSessionStartTs:pageType:] */

void FUN_105ad9eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined *param_8,
                  long param_9,undefined8 param_10,undefined *param_11,undefined *param_12,
                  long param_13)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uStack_280;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010bf4c080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar22 = 0;
  _objc_retain(uVar6);
  uVar5 = uVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar5 == 0) {
      _objc_release(uVar6);
      func_0x00010bf4c080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = (undefined **)0x1;
      puVar9 = puVar3;
      uVar5 = param_6;
      func_0x000107cb4968(puVar3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_6);
      _objc_release(uVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
        ___stack_chk_fail();
        _objc_retain(uVar5);
        puVar3 = PTR_DAT_1126a4fe8;
        _objc_retain(uStack_280);
        _objc_retain(param_12);
        _objc_retain(param_11);
        _objc_retain(ppuVar17);
        uVar20 = uVar5;
        func_0x00010010fab4(uVar5,puVar3);
        uVar6 = uVar5;
        if ((int)uVar20 == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        puVar3 = param_8;
        func_0x00010c11d8a0(param_8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf5fee0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar17;
        func_0x0001079af5ac(ppuVar17,puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar17);
        _objc_release(puVar4);
        _objc_release(puVar3);
        if (param_13 == 0x16) {
          ppuVar17 = &PTR____CFConstantStringClassReference_110eb5378;
          _objc_retain(&PTR____CFConstantStringClassReference_110eb5378);
        }
        else {
          ppuVar17 = ppuVar16;
          func_0x0001079d6288(ppuVar16);
          _objc_retainAutoreleasedReturnValue();
        }
        uVar20 = uVar6;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar20;
        FUN_105afdf24();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar20);
        uVar20 = uVar7;
        func_0x00010c0844e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_retain(uVar8);
        puVar3 = PTR_PTR_1126c2100;
        _objc_opt_class(PTR_PTR_1126c2100);
        uVar6 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar3);
        puVar3 = PTR_PTR_1126c2100;
        if ((uVar6 & 1) != 0) {
          _objc_retain(uVar8);
          _objc_opt_class(puVar3);
          uVar14 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar3);
          uVar6 = uVar8;
          if ((uVar14 & 1) == 0) {
            uVar6 = 0;
          }
          _objc_retain(uVar6);
          _objc_release(uVar8);
          uVar14 = uVar6;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          func_0x00010c0741a0();
          _objc_release(uVar14);
        }
        _objc_release(uVar8);
        _objc_release(uVar8);
        func_0x00010be37dc0(uVar22,param_2,param_3,param_4,param_5,param_8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uStack_280);
        _objc_release(param_12);
        _objc_release(param_11);
        _objc_release(uVar20);
        _objc_release(uVar7);
        _objc_release(ppuVar17);
        _objc_release(ppuVar16);
        _objc_release(uVar5);
        puVar9 = param_8;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    uVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar6);
      }
      uVar19 = *(undefined8 *)(uVar20 * 8);
      uVar7 = param_6;
      func_0x00010bf4c080();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf33b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar9 = PTR_PTR_1126c20f8;
      _objc_opt_class(PTR_PTR_1126c20f8);
      uVar7 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar9);
      puVar9 = PTR_PTR_1126c20f8;
      if ((uVar7 & 1) == 0) {
        puVar9 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
        _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
        uVar7 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar9);
        if ((uVar7 & 1) != 0) {
          uVar14 = param_6;
          func_0x00010bf4c080();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar14;
          func_0x00010c08c980();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar14);
          uVar14 = param_6;
          func_0x00010bf4c080(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb68e0(uVar7);
          uVar15 = param_6;
          func_0x00010bf4c080(param_6);
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar15;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf51460(uVar14);
          _objc_release(uVar21);
          _objc_release(uVar15);
          _objc_release(uVar14);
          func_0x00010c0840e0(uVar19);
          uStack_280 = 0;
          uVar14 = param_6;
          param_11 = puVar4;
          param_12 = param_8;
          param_13 = param_9;
          param_5 = param_1;
          func_0x00010bed98e0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          goto LAB_105ada3f8;
        }
      }
      else {
        _objc_retain(uVar8);
        _objc_opt_class(puVar9);
        uVar14 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar9);
        uVar7 = uVar8;
        if ((uVar14 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar8);
        uVar15 = uVar7;
        func_0x00010bf4c080();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar15;
        func_0x00010bfed1a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        uVar22 = 0;
        _objc_retain(uVar14);
        uVar15 = uVar14;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (uVar15 != 0) {
          uVar21 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(uVar14);
            }
            uVar19 = *(undefined8 *)(uVar21 * 8);
            uVar10 = uVar7;
            func_0x00010bf4c080(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010c08c980();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            uVar10 = uVar7;
            func_0x00010bf4c080(uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb68e0(uVar11);
            uVar12 = param_6;
            func_0x00010bf4c080(param_6);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = uVar12;
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51460(uVar10);
            _objc_release(uVar13);
            _objc_release(uVar12);
            _objc_release(uVar10);
            uVar10 = uVar7;
            func_0x00010bf4c080(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar10;
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            func_0x00010c142240(uVar19);
            uStack_280 = 0;
            uVar10 = param_6;
            param_11 = puVar4;
            param_12 = param_8;
            param_13 = param_9;
            param_5 = param_1;
            func_0x00010bed98e0(param_6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(uVar10);
            _objc_release(uVar12);
            _objc_release(uVar11);
            uVar21 = uVar21 + 1;
          } while (uVar15 != uVar21);
          uVar15 = uVar14;
          func_0x00010bf52a60();
        }
        _objc_release(uVar14);
LAB_105ada3f8:
        _objc_release(uVar14);
        _objc_release(uVar7);
      }
      _objc_release(uVar8);
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar5);
    uVar5 = uVar6;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105ada4f4; end: 105ada7f3; -[SCStoriesEverywhereViewController _updateImpressItemForCollectionViewCell:frame:indexPath:itemPos:date:pageSessionId:pageSessionStartTs:pageType:carouselRowNum:] */

void FUN_105ada4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined **param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  
  _objc_retain(param_8);
  puVar7 = PTR_DAT_1126a4fe8;
  _objc_retain(param_14);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_9);
  uVar1 = param_8;
  func_0x00010010fab4(param_8,puVar7);
  uVar8 = param_8;
  if ((int)uVar1 == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  uVar2 = param_6;
  func_0x00010c11d8a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_9;
  func_0x0001079af5ac(param_9,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_13 == 0x16) {
    ppuVar10 = &PTR____CFConstantStringClassReference_110eb5378;
    _objc_retain(&PTR____CFConstantStringClassReference_110eb5378);
  }
  else {
    ppuVar10 = ppuVar4;
    func_0x0001079d6288(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = uVar8;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  FUN_105afdf24();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010c0844e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_retain(uVar6);
  puVar7 = PTR_PTR_1126c2100;
  _objc_opt_class(PTR_PTR_1126c2100);
  uVar8 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar7);
  puVar7 = PTR_PTR_1126c2100;
  if ((uVar8 & 1) != 0) {
    _objc_retain(uVar6);
    _objc_opt_class(puVar7);
    uVar9 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar7);
    uVar8 = uVar6;
    if ((uVar9 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar6);
    uVar9 = uVar8;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    func_0x00010c0741a0();
    _objc_release(uVar9);
  }
  _objc_release(uVar6);
  _objc_release(uVar6);
  func_0x00010be37dc0(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(ppuVar10);
  _objc_release(ppuVar4);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 105ada7f4; end: 105ada9b3; -[SCStoriesEverywhereViewController _impressionViewItemWithIdentifier:frame:date:itemPos:hasVideoThumbnail:tileAutoPlayed:sectionIdentifier:hasReplayOverlay:hasCTA:storyLoggingInfo:pageSessionId:pageSessionStartTs:pageType:carouselRowNum:] */

void FUN_105ada7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  
  puVar1 = PTR_PTR_1126c21e8;
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_x7);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = in_stack_00000008;
  func_0x000108f52270(in_stack_00000008,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000008);
  func_0x00010c01b6a0(param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000010);
  _objc_release(in_x7);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ada9b4; end: 105adb0d7; -[SCStoriesEverywhereViewController initWithPresentingViewController:circumstanceEngine:interactionHistoryManager:discoverFeedDataFetcher:discoverFeedActionHandler:sectionExtensionServices:storiesPrefetcher:scopeDelegate:storiesEverywhereConfiguration:discoverFeedQueryCoordinator:lazyDiscoverFeedEventsController:friendStoriesReplayManager:commandObservable:asyncQueueProvider:storiesConfigProvider:sectionDataProvider:notificationHandler:eventListenerOverride:readReceiptCoordinator:optInProvider:discoverFeedDataMutator:storiesRankingCoordinator:notificationPool:messagingExperimentService:friendsFeedViewLifecycleListener:loggingServicesEventsAnnouncer:discoverPerformanceLogging:appStartExperimentReader:friendsFeedReadyLogger:genAIDreamsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ada9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined4 param_31,undefined4 param_32,
             undefined8 param_33,undefined8 param_34)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
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
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_33);
  _objc_retain(param_34);
  puStack_70 = PTR_PTR_1126ebca8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11272f254;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f258;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f25c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f260;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1d58e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1e1580(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c200640(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_11272f264;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f268;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f26c;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f270;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_18;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f274;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_19;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f278;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_22;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f27c;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_23;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    uVar5 = 0xc2000000;
    _objc_retain(param_16);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272f280);
    *(undefined **)((long)puVar1 + (long)_DAT_11272f280) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272f284);
    *(undefined **)((long)puVar1 + (long)_DAT_11272f284) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272f288);
    lVar4 = (long)_DAT_11272f28c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f290;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f294;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f298;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f29c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f2a0;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_28;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f2a4;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_24;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f2a8;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_25;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272f2ac) = uVar5;
    _objc_release(puVar3);
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272f2b0) = uVar5;
    puVar3 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272f2b4);
    *(undefined **)((long)puVar1 + (long)_DAT_11272f2b4) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f2b8;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_30;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f2bc;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_33;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272f2c0,param_20);
    lVar4 = (long)_DAT_11272f2c4;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_21;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11272f2c8;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_34;
    _objc_release(uVar2);
    puVar3 = PTR_DAT_1126a5000;
    _objc_retain(param_29);
    uVar5 = param_29;
    func_0x00010010fab4(param_29,puVar3);
    uVar2 = param_29;
    if ((int)uVar5 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_29);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272f2cc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272f2cc) = uVar2;
    _objc_release(uVar5);
    _objc_release(param_16);
  }
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
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



/* Entry: 105adb0d8; end: 105adb127;  */

void FUN_105adb0d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105adb128; end: 105adb8df; -[SCStoriesEverywhereViewController loadViewWithFetchStories:fetchStoriesSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adb128(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  int param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long lVar19;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  if ((*(byte *)(param_3 + _DAT_11272f2d0) & 1) == 0) {
    *(undefined1 *)(param_3 + _DAT_11272f2d0) = 1;
    puVar1 = PTR_PTR_1126c21f0;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    lVar19 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c014040();
    lVar17 = (long)_DAT_11272f2d4;
    uVar13 = *(undefined8 *)(param_3 + lVar17);
    *(undefined **)(param_3 + lVar17) = puVar2;
    _objc_release(uVar13);
    _objc_release(lVar19);
    func_0x00010bf4d5e0(*(undefined8 *)(param_3 + lVar17));
    *(undefined8 *)(param_3 + _DAT_11272f2d8) = param_2;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_3 + lVar17));
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)(param_3 + lVar17));
    lVar19 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar19);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_3 + lVar17);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar19;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + lVar17);
    uStack_a0 = uVar13;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar16;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + lVar17);
    uStack_98 = uVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + lVar17);
    uStack_90 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar11);
    _objc_release(uVar15);
    _objc_release(lVar10);
    _objc_release(lVar17);
    _objc_release(uVar9);
    _objc_release(uVar12);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(lVar5);
    _objc_release(lVar16);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(lVar18);
    _objc_release(lVar19);
    _objc_release(uVar3);
    func_0x00010beaf460(param_3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010c18b5e0(puVar2);
    func_0x00010c1c8340(0x3fa999999999999a,puVar2);
    lVar19 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(lVar19);
    lVar16 = (long)_DAT_11272f284;
    func_0x00010bef9980(*(undefined8 *)(param_3 + lVar16));
    lVar18 = (long)_DAT_11272f2c0;
    lVar19 = param_3 + lVar18;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar19 == 0) {
      puVar11 = PTR_PTR_1126c21f8;
      _objc_alloc();
      func_0x00010c04cee0();
      lVar19 = (long)_DAT_11272f2dc;
      uVar13 = *(undefined8 *)(param_3 + lVar19);
      *(undefined **)(param_3 + lVar19) = puVar11;
      _objc_release(uVar13);
      func_0x00010bef9980(*(undefined8 *)(param_3 + lVar16));
      uVar13 = *(undefined8 *)(param_3 + lVar19);
      lVar18 = *(long *)(param_3 + _DAT_11272f294);
      func_0x00010c269d40(lVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980(uVar13);
    }
    else {
      uVar13 = *(undefined8 *)(param_3 + lVar16);
      lVar18 = param_3 + lVar18;
      _objc_loadWeakRetained(lVar18);
      func_0x00010bef9980(uVar13);
    }
    _objc_release(lVar18);
    _objc_initWeak(auStack_a8,param_3);
    unaff_x26 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    uVar13 = *(undefined8 *)(param_3 + _DAT_11272f29c);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105adb8e0;
    puStack_b8 = &UNK_1108d3e40;
    unaff_x24 = &puStack_d0;
    _objc_copyWeak(auStack_b0,auStack_a8);
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_3 + _DAT_11272f2e0);
    *(undefined8 *)(param_3 + _DAT_11272f2e0) = uVar13;
    _objc_release(uVar14);
    uVar12 = *(undefined8 *)(param_3 + _DAT_11272f2c8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf8a500();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = (undefined *)unaff_x26;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x105adb928;
    puStack_e0 = &UNK_110843540;
    unaff_x25 = &puStack_f8;
    param_4 = auStack_a8;
    _objc_copyWeak(auStack_d8,param_4);
    uVar14 = uVar13;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_3 + _DAT_11272f2e4);
    *(undefined8 *)(param_3 + _DAT_11272f2e4) = uVar14;
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    lVar19 = (long)_DAT_11272f2e8;
    if (*(long *)(param_3 + lVar19) == 0) {
      uVar15 = *(undefined8 *)(param_3 + _DAT_11272f2a0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar15;
      func_0x00010bfa4080();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_120 = (undefined *)unaff_x26;
      uStack_118 = 0xc2000000;
      uStack_110 = 0x105adb954;
      puStack_108 = &UNK_1108d44a0;
      unaff_x26 = &puStack_120;
      param_4 = auStack_a8;
      _objc_copyWeak(auStack_100,param_4);
      uVar12 = uVar14;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + lVar19);
      *(undefined8 *)(param_3 + lVar19) = uVar12;
      _objc_release(uVar3);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar15);
      _objc_destroyWeak(auStack_100);
    }
    puVar11 = PTR_PTR_1126c2200;
    _objc_alloc_init();
    uVar13 = *(undefined8 *)(param_3 + _DAT_11272f2ec);
    *(undefined **)(param_3 + _DAT_11272f2ec) = puVar11;
    _objc_release(uVar13);
    if (param_5 != 0) {
      func_0x00010be14860(param_3);
    }
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(param_6);
  _objc_retain(param_4);
  param_6 = param_6 + 0x20;
  _objc_loadWeakRetained(param_6);
  func_0x00010be68540();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105adb8e0; end: 105adb99b;  */

void FUN_105adb8e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105adb99c; end: 105adb9df; -[SCStoriesEverywhereViewController _dismissOpera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adb99c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f260;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c07ab40();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_dismissWithInteractionType__1125becf0,0x10);
    return;
  }
  return;
}



/* Entry: 105adb9e0; end: 105adba3b; -[SCStoriesEverywhereViewController viewWillAppear:] */

void FUN_105adb9e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebca8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010be67fc0(param_1);
  func_0x00010be14860(param_1);
  return;
}



/* Entry: 105adba3c; end: 105adbaf3; -[SCStoriesEverywhereViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adba3c(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebca8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c200640(*(undefined8 *)(param_1 + _DAT_11272f260));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f290);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f278);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef0c0();
  _objc_release(uVar1);
  func_0x00010be771e0(param_1);
  return;
}



/* Entry: 105adbaf4; end: 105adbb3b; -[SCStoriesEverywhereViewController viewWillDisappear:] */

void FUN_105adbaf4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebca8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010c29cba0(param_1);
  return;
}



/* Entry: 105adbb3c; end: 105adbc8f; -[SCStoriesEverywhereViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adbb3c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ebca8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  lVar4 = (long)_DAT_11272f260;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010c07ac20();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c07ab40();
    if (iVar1 != 0) {
      func_0x00010bf2eb20(*(undefined8 *)(param_1 + lVar4));
    }
  }
  func_0x00010c200640(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f268);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256640();
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105adbc90;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010007380c(uVar3,&puStack_70);
  _objc_release(uVar3);
  func_0x00010be6a6a0(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105adbc90; end: 105adbcbb;  */

void FUN_105adbc90(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105adbcbc; end: 105adbcd3; -[SCStoriesEverywhereViewController viewDidPartiallyDisappear] */

void FUN_105adbcbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcbc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__announceEventOnPerformerWithEve_1125508a0,
             &PTR____CFConstantStringClassReference_110eb6558,PTR____NSDictionary0__struct_11034ab58
            );
  return;
}



/* Entry: 105adbcd4; end: 105adbdab; -[SCStoriesEverywhereViewController applicationDidEnterBackground:] */

void FUN_105adbcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 9;
  func_0x0001000819a8(9,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105adbdac;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105adbdac; end: 105adbdd7;  */

void FUN_105adbdac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105adbdd8; end: 105adbe4b; -[SCStoriesEverywhereViewController _applicationDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adbdd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f258);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11bec0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f298);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105adbe4c; end: 105adc047; -[SCStoriesEverywhereViewController _setupQueryResultController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adbe4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11272f290;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c2208;
  _objc_alloc();
  func_0x00010bff0200();
  lVar5 = (long)_DAT_11272f2f0;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b1150;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f2d4);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fd60(puVar2,param_2,uVar3,uVar1,*(undefined8 *)(param_1 + lVar5));
  lVar5 = (long)_DAT_11272f2f4;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c200b20(*(undefined8 *)(param_1 + lVar5),param_2,1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  puVar2 = PTR_PTR_1126c2210;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f2b8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034940(puVar2,param_2,uVar1,*(undefined8 *)(param_1 + _DAT_11272f25c));
  lVar4 = (long)_DAT_11272f2f8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar5),param_2,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c17e720(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf40a20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e940();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf40a20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194fc0();
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  puVar2 = PTR_PTR_1126c2218;
  _objc_alloc();
  func_0x00010c0086a0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f2fc);
  *(undefined **)(param_1 + _DAT_11272f2fc) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105adc048; end: 105adc053; +[SCStoriesEverywhereViewController announcerIdentifier] */

undefined ** FUN_105adc048(void)

{
  return &PTR____CFConstantStringClassReference_110e1c838;
}



/* Entry: 105adc054; end: 105adc28f; -[SCStoriesEverywhereViewController _fetchStoriesWithDiskCacheLoadedWithQuerySource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11272f300;
  if (*(long *)(param_1 + lVar7) == 0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    lVar8 = (long)_DAT_11272f304;
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar2;
    _objc_retain();
    _objc_release(uVar6);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272f25c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf82ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar6);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    _objc_release(uVar3);
    puStack_88 = puVar1;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105adc2b0;
    puStack_70 = &UNK_1108544b0;
    uVar6 = uVar4;
    lStack_68 = param_1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar6;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar4);
  }
  else {
    lVar8 = (long)_DAT_11272f304;
  }
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bfbc3e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_90,param_1);
  _objc_copyWeak(auStack_98,auStack_90);
  uVar6 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar5);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 105adc290; end: 105adc2af;  */

bool FUN_105adc290(undefined8 param_1,long param_2)

{
  func_0x00010c067fc0(param_2);
  return param_2 == 2;
}



/* Entry: 105adc2b0; end: 105adc2c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc2b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272f304),
             PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 105adc2c8; end: 105adc2fb;  */

void FUN_105adc2c8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105adc2fc; end: 105adc3f7; -[SCStoriesEverywhereViewController _fetchStoriesForAllSectionsWithQuerySource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc2fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f264);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105adc3f8; end: 105adc44b;  */

void FUN_105adc3f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105adc44c; end: 105adc55f; -[SCStoriesEverywhereViewController _fetchStoriesForAllSectionsWithQuerySource:sectionExtensionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc44c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272f2f0);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1f9280(uVar4,param_2,param_4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272f290);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9280();
  _objc_release(param_4);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126c2130;
  _objc_alloc(PTR_PTR_1126c2130);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272f308);
  lVar2 = param_1;
  func_0x00010c07ad20(param_1);
  func_0x00010c012700(puVar1,param_2,0x106,uVar4,lVar2);
  puVar3 = PTR_PTR_1126b1158;
  _objc_alloc(PTR_PTR_1126b1158);
  func_0x00010c03c440();
  _objc_release(param_3);
  func_0x00010c1e6360(*(undefined8 *)(param_1 + _DAT_11272f2f4),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105adc560; end: 105adc57b; -[SCStoriesEverywhereViewController _onBecomeVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc560(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11272f30c) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11272f30c) = 1;
  }
  return;
}



/* Entry: 105adc57c; end: 105adc5d3; -[SCStoriesEverywhereViewController _onNoLongerVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc57c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_11272f30c) = 0;
  func_0x00010be92600();
  func_0x00010bea2ac0(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f2bc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105adc5d4; end: 105adc713; -[SCStoriesEverywhereViewController didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc5d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c252440();
  if (uVar1 != 1) goto LAB_105adc700;
  uVar1 = param_3;
  func_0x000107c1f384(param_3,*(undefined8 *)(param_1 + _DAT_11272f2d4));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c20f8;
  _objc_opt_class(PTR_PTR_1126c20f8);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010bf4c080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x000107c1f384(param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  puVar2 = PTR_DAT_1126a5008;
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar1 = 0;
    uVar3 = uVar4;
LAB_105adc6e8:
    func_0x000107c1f420(uVar3);
  }
  else {
    uVar1 = uVar4;
    func_0x00010c29e5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar3 = uVar1;
    if (uVar1 != 0) goto LAB_105adc6e8;
  }
  _objc_release(uVar1);
  _objc_release(uVar4);
LAB_105adc700:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105adc714; end: 105adc71b; -[SCStoriesEverywhereViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_105adc714(void)

{
  return 1;
}



/* Entry: 105adc71c; end: 105adc73f; -[SCStoriesEverywhereViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105adc71c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f2d4);
  func_0x00010c070ea0(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105adc740; end: 105adc7b7; -[SCStoriesEverywhereViewController operaSessionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc740(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272f288;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a6900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105adc7b8; end: 105adc857; -[SCStoriesEverywhereViewController operaSessionDidBeginWithOperaPresenter:playbackDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc7b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11272f288;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78720();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105adc858; end: 105adc85b; -[SCStoriesEverywhereViewController operaSessionDidEnd] */

void FUN_105adc858(void)

{
  return;
}



/* Entry: 105adc85c; end: 105adc85f; -[SCStoriesEverywhereViewController operaSessionWillReachToEndOfPlaylistWithFeedType:] */

void FUN_105adc85c(void)

{
  return;
}



/* Entry: 105adc860; end: 105adc91f; -[SCStoriesEverywhereViewController didStartToDisplayStoryWithIndexPath:feedType:groupDataModel:actionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc860(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar3;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  *(undefined1 *)(param_1 + _DAT_11272f310) = 1;
  func_0x00010c288040(*(undefined8 *)(param_1 + _DAT_11272f2ec));
  lVar3 = (long)_DAT_11272f288;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7bee0();
    _objc_release(param_1);
  }
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 105adc920; end: 105adcccf; -[SCStoriesEverywhereViewController didStartToDismissStoryAtIndexPath:actionHandler:shouldSkipDismissBaseViewUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adc920(long param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 & 1) != 0) goto LAB_105adcca8;
  uVar9 = param_3;
  func_0x00010c1554e0();
  lVar11 = (long)_DAT_11272f2f4;
  uVar1 = *(ulong *)(param_1 + lVar11);
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar9 < uVar2) {
    uVar2 = *(ulong *)(param_1 + lVar11);
    func_0x00010bf5fee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1554e0(param_3);
    uVar9 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    lVar6 = *(long *)(param_1 + _DAT_11272f28c);
    func_0x00010c0f1e60();
    if (lVar6 == 0x13) goto LAB_105adcca8;
    uVar9 = 0;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f26c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1270;
  func_0x00010bfe4160(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c067e20(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  lVar12 = (long)_DAT_11272f2d4;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf5fee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c1f630(param_3,uVar10,uVar3,1,uVar5);
  _objc_release(uVar3);
  lVar6 = *(long *)(param_1 + lVar11);
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126b4890;
  if (lVar11 == 0) {
    _objc_release(lVar6);
LAB_105adcbe0:
    uVar2 = *(ulong *)(param_1 + lVar12);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar9);
    _objc_opt_class(puVar4);
    uVar2 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar4);
    _objc_release(uVar9);
    _objc_release(lVar6);
    puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if (((uVar2 & 1) == 0) || (uVar9 == 0)) goto LAB_105adcbe0;
    func_0x00010c1554e0(param_3);
    func_0x00010bfed020(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(ulong *)(param_1 + lVar12);
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126c20f8;
    _objc_opt_class(PTR_PTR_1126c20f8);
    uVar1 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar8);
    uVar2 = uVar7;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar7);
    uVar1 = uVar2;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar8 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010c0840e0(param_3);
    func_0x00010bfed020(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uVar1);
    _objc_release(puVar4);
  }
  _objc_retain(uVar2);
  _objc_retain(param_4);
  lVar11 = param_4;
  func_0x00010010fab4(param_4,PTR_DAT_1126a5010);
  puVar4 = PTR_DAT_1126a5018;
  if ((param_4 != 0) && ((int)lVar11 != 0)) {
    _objc_retain(param_4);
    uVar1 = uVar2;
    func_0x00010010fab4(uVar2,puVar4);
    uVar7 = uVar2;
    if ((uVar2 == 0) || ((int)uVar1 == 0)) {
      func_0x00010bf4dce0(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0ea000(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c285260(param_4);
    _objc_release(param_4);
    _objc_release(uVar7);
  }
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar9);
LAB_105adcca8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105adccd0; end: 105adcd4b; -[SCStoriesEverywhereViewController didDismissStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adccd0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_11272f310) = 0;
  lVar3 = (long)_DAT_11272f288;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf75240();
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be54bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logImpressionsOnMainThread_112572c90);
  return;
}



/* Entry: 105adcd4c; end: 105adcdc3; -[SCStoriesEverywhereViewController didTearDownStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adcd4c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272f288;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7d8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105adcdc4; end: 105adcdc7; -[SCStoriesEverywhereViewController discoverQueryCoordinator:didReceiveServerResponseForQuery:] */

void FUN_105adcdc4(void)

{
  return;
}



/* Entry: 105adcdc8; end: 105adcee3; -[SCStoriesEverywhereViewController discoverQueryCoordinator:didFailForQuery:error:statusCodeToDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adcdc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105adcee4;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x000100162d98("APPSTORE",&puStack_70);
  func_0x00010bf94fc0(*(undefined8 *)(param_1 + _DAT_11272f2fc));
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105adcee4; end: 105adcf93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adcee4(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126afde0;
  if (param_1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dae758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272f2a8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105adcf94; end: 105adcfa7; -[SCStoriesEverywhereViewController discoverQueryCoordinator:didFinishSavingServerResponseToCacheForQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adcf94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f2fc),
             PTR_s_endPaginationIfNeededForQuery__1125c2d98,param_4);
  return;
}



/* Entry: 105adcfa8; end: 105add27f; -[SCStoriesEverywhereViewController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adcfa8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar3 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0();
      if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 == 0)) {
        uVar1 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar1 == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0();
          if ((int)uVar1 == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0();
            if ((int)uVar1 == 0) {
              func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11272f284));
            }
            else {
              func_0x00010be55140(param_1);
            }
          }
          else {
            func_0x00010c288020(*(undefined8 *)(param_1 + _DAT_11272f2ec));
          }
        }
        else {
          func_0x00010c24fcc0(*(undefined8 *)(param_1 + _DAT_11272f2fc));
        }
        goto LAB_105add184;
      }
      uVar1 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf1f3c0();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_105add184;
      _objc_initWeak(auStack_48,param_1);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x105add2f0;
      puStack_a8 = &UNK_1108434b0;
      _objc_copyWeak(auStack_a0,auStack_48);
      func_0x0001000d76cc("APPSTORE",&puStack_c0);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      uStack_88 = 0x105add2bc;
      puStack_80 = &UNK_1108434b0;
      ppuVar3 = &puStack_98;
      _objc_copyWeak(auStack_78,auStack_48);
      func_0x0001000d76cc("APPSTORE",&puStack_98);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105add280;
    puStack_58 = &UNK_1108434b0;
    ppuVar3 = &puStack_70;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x0001000d76cc("APPSTORE",&puStack_70);
  }
  _objc_destroyWeak(ppuVar3 + 4);
  _objc_destroyWeak(auStack_48);
LAB_105add184:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105add280; end: 105add323;  */

void FUN_105add280(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bedc460(param_1,param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105add324; end: 105add333; -[SCStoriesEverywhereViewController searchQueryResultControllerShouldReloadFreshResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105add324(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11272f30c);
}



/* Entry: 105add334; end: 105add337; -[SCStoriesEverywhereViewController presentingViewControllerForSearchQueryResultController:] */

void FUN_105add334(void)

{
  return;
}



/* Entry: 105add338; end: 105add33b; -[SCStoriesEverywhereViewController searchQueryResultController:willUpdateResultForQuery:fromQuery:] */

void FUN_105add338(void)

{
  return;
}



/* Entry: 105add33c; end: 105add35f; -[SCStoriesEverywhereViewController searchQueryResultControllerDidUpdateQueryResult:] */

void FUN_105add33c(undefined8 param_1)

{
  func_0x00010bdcc4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdfe230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didFinishLoading_11255d228);
  return;
}



/* Entry: 105add360; end: 105add363; -[SCStoriesEverywhereViewController searchQueryResultControllerDidSkipUpdateQueryResult:] */

void FUN_105add360(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfe230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didFinishLoading_11255d228);
  return;
}



/* Entry: 105add364; end: 105add40b; -[SCStoriesEverywhereViewController _didFinishLoading] */

void FUN_105add364(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105add40c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105add40c; end: 105add457;  */

void FUN_105add40c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee3ce0(param_1);
    func_0x00010be92600(param_1);
    func_0x00010be54bc0(param_1);
    func_0x00010be771e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105add458; end: 105add54f; -[SCStoriesEverywhereViewController _updateViewOnMainThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105add458(undefined8 param_1,double param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  func_0x00010bf4d5e0(*(undefined8 *)(param_3 + _DAT_11272f2d4));
  dVar5 = *(double *)(param_3 + _DAT_11272f2d8);
  dVar6 = ABS(dVar5 - param_2);
  dVar5 = ABS(param_2 + dVar5) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
    bVar1 = dVar6 < dVar5;
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_3 + _DAT_11272f2d8) = param_2;
  lVar4 = (long)_DAT_11272f288;
  uVar2 = param_3 + lVar4;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_3 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf4c0a0(param_2);
    _objc_release(lVar4);
  }
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105add550; end: 105add557; -[SCStoriesEverywhereViewController pageViewName] */

undefined8 FUN_105add550(void)

{
  return 0x13d;
}



/* Entry: 105add558; end: 105add643; -[SCStoriesEverywhereViewController _onCommand:] */

void FUN_105add558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105add644;
  puStack_20 = &UNK_110841f50;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105add650;
  puStack_48 = &UNK_1108c9ee8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x105add6bc;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105add6d8;
  puStack_98 = &UNK_110842e18;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bf700(param_3,param_2,&puStack_38,&puStack_60,&PTR___NSConcreteGlobalBlock_1108d44f0
                      ,&PTR___NSConcreteGlobalBlock_1108d4510,&puStack_88,
                      &PTR___NSConcreteGlobalBlock_1108d4530,&PTR___NSConcreteGlobalBlock_1108d4550,
                      &puStack_b0,&PTR___NSConcreteGlobalBlock_1108d4570,
                      &PTR___NSConcreteGlobalBlock_1108d4590);
  return;
}



/* Entry: 105add644; end: 105add64f;  */

void FUN_105add644(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handlePullToRefreshWithCompleti_1125693d8,
             param_2);
  return;
}


