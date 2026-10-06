/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108eed7c8; end: 108eed837; -[SCLegacyPreviewViewControllerShim play] */

void FUN_108eed7c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0fe360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108eed838; end: 108eed8a7; -[SCLegacyPreviewViewControllerShim pause] */

void FUN_108eed838(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0f5b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108eed8a8; end: 108eed917; -[SCLegacyPreviewViewControllerShim start] */

void FUN_108eed8a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c24d960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108eed918; end: 108eed987; -[SCLegacyPreviewViewControllerShim stop] */

void FUN_108eed918(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c255780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108eed988; end: 108eed98f; -[SCLegacyPreviewViewControllerShim .cxx_destruct] */

void FUN_108eed988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108eed990; end: 108eed9fb;  */

void FUN_108eed990(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain();
  uVar1 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_mediaViewInsets_11260f670);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b4da8;
    _objc_alloc(PTR_PTR_1126b4da8);
    func_0x00010c0c7160(param_1);
    func_0x00010c01e380(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108eed9fc; end: 108eede33;  */

void FUN_108eed9fc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_2 == 0) {
    puVar10 = (undefined *)0x0;
    goto LAB_108eedde8;
  }
  uVar9 = param_2;
  _objc_opt_respondsToSelector(param_2,PTR_s_chatMessage_1125ab558);
  if ((uVar9 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_2;
    func_0x00010bf36ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(param_2);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_retain();
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  puVar10 = PTR_PTR_1126b07e8;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_alloc(puVar10);
  func_0x00010c061960();
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar12 = param_2;
  func_0x00010c29e380();
  puVar11 = (undefined *)0x0;
  uVar3 = param_2;
  if ((long)uVar12 < 3) {
    if (uVar12 == 0) {
      func_0x00010c0c70e0(param_2);
      puVar11 = PTR_PTR_1126b07f0;
      func_0x00010c299100(PTR_PTR_1126b07f0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (uVar12 == 1) {
        func_0x00010c0c70e0(param_2);
        FUN_108eed990();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = param_2;
        _objc_opt_respondsToSelector(param_2,PTR_s_titleLabel_112679f30);
        if ((uVar12 & 1) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = param_2;
          func_0x00010c271420(param_2);
          _objc_retainAutoreleasedReturnValue();
        }
        puVar4 = PTR_PTR_1126b2960;
        _objc_alloc();
        uVar5 = param_2;
        func_0x00010c2711a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_2;
        func_0x00010c260dc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00d260(param_1);
        _objc_release(uVar6);
        _objc_release(uVar5);
        puVar11 = PTR_PTR_1126b07f0;
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe43e0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar4);
        _objc_release(uVar12);
        goto LAB_108eedd7c;
      }
      if (uVar12 == 2) {
        puVar11 = PTR_PTR_1126b07f0;
        func_0x00010bfbb840(PTR_PTR_1126b07f0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  else if (uVar12 == 3) {
    func_0x00010c0c70e0(param_2);
    FUN_108eed990(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126b07f0;
    func_0x00010bfbb880(param_1,PTR_PTR_1126b07f0);
    _objc_retainAutoreleasedReturnValue();
LAB_108eedd7c:
    _objc_release(uVar3);
  }
  else if (uVar12 == 4) {
    puVar11 = PTR_PTR_1126b07f0;
    func_0x00010bfe1300(PTR_PTR_1126b07f0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (uVar12 == 5) {
    puVar11 = PTR_PTR_1126b07f0;
    func_0x00010c26c4e0(PTR_PTR_1126b07f0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar10);
  _objc_release(param_2);
  puVar10 = PTR_PTR_1126b07f8;
  _objc_alloc(PTR_PTR_1126b07f8);
  func_0x00010c01ddc0(0x4053000000000000);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(uVar9);
LAB_108eedde8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0c70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x20),PTR_s_mediaView_11260f648);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108eede34; end: 108eede3b;  */

void FUN_108eede34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_mediaView_11260f648);
  return;
}



/* Entry: 108eede3c; end: 108eede97;  */

void FUN_108eede3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc740;
  _objc_alloc(PTR_PTR_1126dc740);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c022380(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eede98; end: 108eee1cf; -[SCMatchaSendToSelectionItemAdaptor initWithGroupsDataFetcher:snapchattersDataFetcher:snapchattersDataSearcher:snapchattersSynchronousFetcher:userInfoProvider:snapchatterPublicInfoFetcher:customStoriesDataFetcher:customStoriesDataMutator:myStoriesDataCoordinator:publicStoriesDataCoordinator:selectionStoriesLastPostTimeRepository:storyRankingConfigurationService:enableStoriesMetadataCapture:circumstanceEngine:snapProProfilesProvider:] */

undefined8 *
FUN_108eede98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18)

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
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126ff278;
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
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
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
    *(undefined1 *)(puVar1 + 0xd) = param_15;
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 108eee1d0; end: 108eeee7b; -[SCMatchaSendToSelectionItemAdaptor selectionItemsForReplyParameters:storyConfiguration:] */

void FUN_108eee1d0(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c077de0();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = param_3;
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010c08fa60();
    if (puVar15 == (undefined *)0x0) {
      puVar15 = param_3;
      func_0x00010c1322e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar15;
      func_0x00010c08fa60();
      _objc_release(puVar15);
      _objc_release(puVar2);
      if (puVar3 == (undefined *)0x0) goto LAB_108eee230;
    }
    else {
      _objc_release(puVar2);
    }
    puVar15 = param_3;
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar15;
    func_0x00010c08fa60();
    puVar12 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    puVar13 = param_3;
    if (puVar3 == (undefined *)0x0) {
      func_0x00010c1322e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ee940();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1322c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ee920();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar15);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_3;
      func_0x00010c1322c0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      if (puVar15 == (undefined *)0x0) goto LAB_108eeec98;
      puVar15 = param_3;
      func_0x00010c1322c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = (undefined *)0x0;
      func_0x00010be449a0();
      puVar2 = puStack_68;
      _objc_retain(puStack_68);
      _objc_release(puVar15);
      if (puVar2 == (undefined *)0x0) {
        if ((int)param_1 == 0) goto LAB_108eeec98;
        puVar15 = param_3;
        func_0x00010c1322e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar15;
        func_0x00010c08fa60();
        if (puVar2 == (undefined *)0x0) {
          puVar2 = param_3;
          func_0x00010c1322c0(param_3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar2 = param_3;
          func_0x00010c1322e0(param_3);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar15);
        puVar15 = PTR_PTR_1126b3558;
        _objc_alloc(PTR_PTR_1126b3558);
        puVar3 = param_3;
        func_0x00010c1322c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03d4e0(puVar15);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126b3560;
        _objc_alloc(PTR_PTR_1126b3560);
        puVar13 = param_3;
        func_0x00010c131ca0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01bce0(puVar3);
        _objc_release(puVar13);
        puVar13 = PTR_PTR_1126b3568;
        _objc_alloc(PTR_PTR_1126b3568);
        func_0x00010c03d400();
        func_0x00010befa120(puVar1);
        _objc_release(puVar13);
        _objc_release(puVar3);
        goto LAB_108eee74c;
      }
    }
    puVar15 = puVar2;
    FUN_108ef82c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
LAB_108eee74c:
    _objc_release(puVar15);
  }
  else {
LAB_108eee230:
    puVar2 = param_3;
    func_0x00010c077de0();
    if ((int)puVar2 == 0) {
LAB_108eee3ac:
      puVar2 = param_3;
      func_0x00010befc200();
      if ((int)puVar2 == 0) {
        puVar2 = param_3;
        func_0x00010c0780a0();
        if ((int)puVar2 != 0) {
          puVar2 = param_3;
          func_0x00010bfceb60();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar2;
          func_0x00010bf529e0();
          puVar3 = PTR___NSConcreteStackBlock_11034bd00;
          if (puVar15 != (undefined *)0x0) {
            lVar7 = *(long *)(param_1 + 8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010bfc61c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            lVar7 = lVar8;
            func_0x00010bf529e0();
            if (lVar7 != 0) {
              uVar9 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar9;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar9);
              uVar4 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              uVar9 = uVar4;
              func_0x00010c293a00();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar9;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR___NSConcreteStackBlock_11034bd00;
              _objc_release(uVar9);
              _objc_release(uVar4);
              puStack_98 = puVar3;
              uStack_90 = 0xc2000000;
              pcStack_88 = FUN_108eeee7c;
              puStack_80 = &UNK_110aca900;
              uStack_78 = uVar10;
              uStack_70 = uVar11;
              _objc_retain(uVar11);
              _objc_retain(uVar10);
              lVar7 = lVar8;
              func_0x000107c31908(lVar8,&puStack_98);
              func_0x00010befa160(puVar1);
              _objc_release(lVar7);
              _objc_release(uStack_70);
              _objc_release(uStack_78);
              _objc_release(uVar11);
              _objc_release(uVar10);
            }
            _objc_release(lVar8);
          }
          puVar15 = param_3;
          func_0x00010c292720();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar15;
          func_0x00010bf529e0();
          if (puVar13 != (undefined *)0x0) {
            uStack_b8 = 0xc2000000;
            pcStack_b0 = FUN_108eeeecc;
            puStack_a8 = &UNK_11089b0f0;
            puVar13 = puVar15;
            puStack_c0 = puVar3;
            lStack_a0 = param_1;
            func_0x000107c31908(puVar15,&puStack_c0);
            puVar3 = puVar13;
            func_0x00010bf529e0();
            if (puVar3 != (undefined *)0x0) {
              puVar3 = puVar13;
              func_0x000107c31908(puVar13,&PTR___NSConcreteGlobalBlock_110aca930);
              func_0x00010befa160(puVar1);
              _objc_release(puVar3);
            }
            _objc_release(puVar13);
          }
          goto LAB_108eee74c;
        }
        puVar2 = param_3;
        func_0x00010c077e60();
        if ((int)puVar2 != 0) {
          puVar2 = param_3;
          func_0x00010c1322e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar2;
          func_0x00010c08fa60();
          _objc_release(puVar2);
          if (puVar15 != (undefined *)0x0) goto LAB_108eeec98;
        }
        puVar2 = param_3;
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar2;
        func_0x00010c08fa60();
        _objc_release(puVar2);
        if (puVar15 == (undefined *)0x0) {
          puVar2 = param_3;
          func_0x00010c0729c0();
          if ((int)puVar2 == 0) goto LAB_108eeec98;
          puVar15 = param_3;
          func_0x00010bfa09a0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar15 == (undefined *)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
            func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar3;
            func_0x00010bdc3580();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
          }
          else {
            _objc_retain(puVar15);
            puVar2 = puVar15;
          }
          _objc_release(puVar15);
          ppuVar16 = (undefined **)PTR_PTR_1126b3558;
          _objc_alloc(PTR_PTR_1126b3558);
          func_0x00010c03d4e0();
          puVar15 = PTR_PTR_1126b3560;
          _objc_alloc(PTR_PTR_1126b3560);
          puVar3 = puVar15;
          func_0x000108f59884();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01bce0(puVar15);
          _objc_release(puVar3);
          puVar3 = PTR_PTR_1126b3568;
          _objc_alloc(PTR_PTR_1126b3568);
          func_0x00010c03d400();
          func_0x00010befa120(puVar1);
        }
        else {
          puVar2 = param_3;
          func_0x00010bf252a0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar2 == (undefined *)0x0) {
LAB_108eee8e0:
            puVar15 = *(undefined **)(param_1 + 0x78);
            puVar2 = param_3;
            func_0x00010bf25140(param_3);
            _objc_retainAutoreleasedReturnValue();
            FUN_108f04f08(puVar15,puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            puVar2 = puVar15;
            func_0x00010c074e40();
            if ((int)puVar2 == 0) {
              puVar3 = puVar15;
              func_0x00010c1164a0();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar3;
              func_0x00010c2711a0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar13;
              func_0x00010c08fa60();
              if (puVar2 == (undefined *)0x0) {
                func_0x000108f591dc();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                puVar12 = puVar15;
                func_0x00010c1164a0(puVar15);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = puVar12;
                func_0x00010c2711a0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar12);
              }
              _objc_release(puVar13);
              _objc_release(puVar3);
            }
            else {
              func_0x000108f591dc();
              _objc_retainAutoreleasedReturnValue();
            }
            ppuVar16 = &PTR____CFConstantStringClassReference_110f52d38;
            _objc_retain(&PTR____CFConstantStringClassReference_110f52d38);
            _objc_release(puVar15);
          }
          else {
            puVar15 = param_3;
            func_0x00010bf252a0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar15;
            func_0x00010c067fc0();
            puVar13 = PTR_PTR_1126c3320;
            func_0x00010bfa0ac0();
            _objc_release(puVar15);
            _objc_release(puVar2);
            if (puVar3 != puVar13) goto LAB_108eee8e0;
            puVar15 = param_3;
            func_0x00010c131ca0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar15;
            func_0x00010c08fa60();
            if (puVar2 == (undefined *)0x0) {
              func_0x000108f58d8c();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar2 = param_3;
              func_0x00010c131ca0(param_3);
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(puVar15);
            ppuVar16 = &PTR____CFConstantStringClassReference_110f52ef8;
            _objc_retain(&PTR____CFConstantStringClassReference_110f52ef8);
          }
          puVar15 = PTR_PTR_1126b3558;
          _objc_alloc(PTR_PTR_1126b3558);
          puVar3 = param_3;
          func_0x00010bf25140(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c03d4e0(puVar15);
          _objc_release(puVar3);
          puVar3 = PTR_PTR_1126b3560;
          _objc_alloc(PTR_PTR_1126b3560);
          func_0x00010c01bce0();
          puVar13 = PTR_PTR_1126b3568;
          _objc_alloc(PTR_PTR_1126b3568);
          func_0x00010c03d400();
          func_0x00010befa120(puVar1);
          _objc_release(puVar13);
        }
        _objc_release(puVar3);
      }
      else {
        puVar2 = PTR_PTR_1126b3558;
        _objc_alloc(PTR_PTR_1126b3558);
        func_0x00010c03d4e0();
        ppuVar16 = (undefined **)PTR_PTR_1126b3560;
        _objc_alloc(PTR_PTR_1126b3560);
        ppuVar6 = ppuVar16;
        func_0x000108f57dfc();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01bce0(ppuVar16);
        _objc_release(ppuVar6);
        puVar15 = PTR_PTR_1126b3568;
        _objc_alloc(PTR_PTR_1126b3568);
        func_0x00010c03d400();
        func_0x00010befa120(puVar1);
      }
      _objc_release(puVar15);
      _objc_release(ppuVar16);
    }
    else {
      puVar2 = param_3;
      func_0x00010c1322e0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      if (puVar15 == (undefined *)0x0) goto LAB_108eee3ac;
      puVar3 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_3;
      func_0x00010c1322e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bfc61a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar3);
      if (puVar2 != (undefined *)0x0) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar4;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010c293a00();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar9;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar2;
        FUN_108ef14b4(puVar2,uVar10,uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        _objc_release(uVar9);
        _objc_release(uVar5);
        _objc_release(uVar10);
        _objc_release(uVar4);
        puVar3 = puVar15;
        FUN_108ef7600(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        goto LAB_108eee74c;
      }
    }
  }
  _objc_release(puVar2);
LAB_108eeec98:
  puVar2 = param_3;
  func_0x00010befc240();
  if ((int)puVar2 != 0) {
    puVar2 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    func_0x00010c03d4e0();
    puVar15 = PTR_PTR_1126b3560;
    _objc_alloc(PTR_PTR_1126b3560);
    puVar3 = param_3;
    func_0x00010c1322e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    func_0x00010c131ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bce0(puVar15);
    _objc_release(puVar13);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b3568;
    _objc_alloc(PTR_PTR_1126b3568);
    func_0x00010c03d400();
    func_0x00010befa120(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar15);
    _objc_release(puVar2);
  }
  uVar14 = param_4;
  func_0x00010c075080();
  if ((((uVar14 & 1) == 0) && (uVar14 = param_4, func_0x00010c07de40(), (uVar14 & 1) == 0)) &&
     (puVar2 = param_3, func_0x00010befc300(), (int)puVar2 != 0)) {
    puVar2 = PTR_PTR_1126b3558;
    _objc_alloc(PTR_PTR_1126b3558);
    func_0x00010c03d4e0();
    puVar15 = PTR_PTR_1126b3560;
    _objc_alloc(PTR_PTR_1126b3560);
    puVar3 = puVar15;
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bce0(puVar15);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b3568;
    _objc_alloc(PTR_PTR_1126b3568);
    func_0x00010c03d400();
    func_0x00010befa120(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar15);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eeee7c; end: 108eeeecb;  */

void FUN_108eeee7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_108ef14b4(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_108ef7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108eeeecc; end: 108eeef93;  */

void FUN_108eeeecc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfebfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar4 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108eeef94; end: 108eeef9b;  */

void FUN_108eeef94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b3560;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  FUN_108ef8240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_10901d7c4(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01bce0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108eeef9c; end: 108eef203; -[SCMatchaSendToSelectionItemAdaptor legacySendToSelectionFromSelectedItems:selectedPhoneNumbers:additionalText:newlyCreatedCustomStories:selectedTopics:placeTagsMetadata:spotlightDescription:spotlightDescriptionMentions:spotlightMemberRoleBusinessId:shouldCreateHighlight:shareAnonymously:selectedSponsor:goLiveTimestamp:shouldAllowSpotlightRemixing:spotlightTile:externalDestinations:completion:] */

void FUN_108eeef9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000048);
  func_0x00010bea0a40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000048);
  return;
}



/* Entry: 108eef204; end: 108eef443; -[SCMatchaSendToSelectionItemAdaptor senderDataModelFromSelectedItems:selectedPhoneNumbers:additionalText:newlyCreatedCustomStories:selectedTopics:placeTagsMetadata:spotlightDescription:spotlightDescriptionMentions:spotlightMemberRoleBusinessId:shouldCreateHighlight:shareAnonymously:selectedSponsor:goLiveTimestamp:shouldAllowSpotlightRemixing:spotlightTile:completion:] */

void FUN_108eef204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 in_stack_00000048;
  
  _objc_retain(in_stack_00000048);
  _objc_retain(in_stack_00000048);
  func_0x00010bea0a40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12);
  _objc_release(in_stack_00000048);
  _objc_release(in_stack_00000048);
  return;
}



/* Entry: 108eef444; end: 108ef07b3; -[SCMatchaSendToSelectionItemAdaptor _sendToDataFromSelectedItems:selectedPhoneNumbers:additionalText:newlyCreatedCustomStories:selectedTopics:placeTagsMetadata:spotlightDescription:spotlightDescriptionMentions:spotlightMemberRoleBusinessId:shouldCreateHighlight:shareAnonymously:selectedSponsor:goLiveTimestamp:shouldAllowSpotlightRemixing:spotlightTile:completion:] */

void FUN_108eef444(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19,long param_20)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
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
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  undefined *puVar31;
  ulong uVar32;
  long lVar33;
  undefined *puVar34;
  undefined **ppuStack_430;
  ulong uStack_408;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined1 auStack_330 [8];
  ulong uStack_328;
  undefined1 uStack_320;
  undefined1 uStack_31f;
  undefined1 uStack_31e;
  undefined1 auStack_318 [8];
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_19);
  _objc_retain(param_20);
  if (param_20 == 0) goto LAB_108ef0638;
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x3032000000;
  uStack_1a0 = 0x108ef07b4;
  uStack_198 = 0x108ef07c4;
  uStack_190 = 0;
  puStack_1e0 = &uStack_1e8;
  uStack_1e8 = 0;
  uStack_1d8 = 0x3032000000;
  uStack_1d0 = 0x108ef07b4;
  uStack_1c8 = 0x108ef07c4;
  uStack_1c0 = 0;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = &uStack_218;
  uStack_218 = 0;
  uStack_208 = 0x3032000000;
  uStack_200 = 0x108ef07b4;
  uStack_1f8 = 0x108ef07c4;
  uStack_1f0 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  _objc_retain(param_3);
  lVar28 = param_3;
  func_0x00010bf52a60();
  if (lVar28 == 0) {
    uStack_408 = 0;
    ppuStack_430 = (undefined **)0x0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uStack_408 = 0;
    ppuStack_430 = (undefined **)0x0;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    lVar33 = *plStack_250;
    do {
      lVar30 = 0;
      do {
        if (*plStack_250 != lVar33) {
          _objc_enumerationMutation(param_3);
        }
        uVar32 = *(ulong *)(lStack_258 + lVar30 * 8);
        uVar15 = uVar32;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar15;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        uVar15 = uVar16;
        func_0x00010c15ab60();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar15;
        func_0x00010c0720c0();
        _objc_release(uVar15);
        if ((int)uVar17 == 0) {
          uVar15 = uVar16;
          func_0x00010c15ab60();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar15;
          func_0x00010c0720c0();
          _objc_release(uVar15);
          if ((int)uVar17 == 0) {
            uVar15 = uVar16;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = uVar15;
            func_0x00010c0720c0();
            _objc_release(uVar15);
            if ((int)uVar17 == 0) {
              uVar15 = uVar16;
              func_0x00010c15ab60();
              _objc_retainAutoreleasedReturnValue();
              uVar17 = uVar15;
              func_0x00010c0720c0();
              _objc_release(uVar15);
              if ((int)uVar17 == 0) {
                uVar15 = uVar16;
                func_0x00010c15ab60();
                _objc_retainAutoreleasedReturnValue();
                uVar17 = uVar15;
                func_0x00010c0720c0();
                _objc_release(uVar15);
                if ((int)uVar17 == 0) {
                  uVar15 = uVar16;
                  func_0x00010c15ab60();
                  _objc_retainAutoreleasedReturnValue();
                  uVar17 = uVar15;
                  func_0x00010c0720c0();
                  _objc_release(uVar15);
                  if ((int)uVar17 == 0) {
                    uVar15 = uVar16;
                    func_0x00010c15ab60();
                    _objc_retainAutoreleasedReturnValue();
                    uVar17 = uVar15;
                    func_0x00010c0720c0();
                    _objc_release(uVar15);
                    if ((int)uVar17 == 0) {
                      uVar15 = uVar16;
                      func_0x00010c15ab60();
                      _objc_retainAutoreleasedReturnValue();
                      uVar17 = uVar15;
                      func_0x00010c0720c0();
                      _objc_release(uVar15);
                      if ((int)uVar17 == 0) {
                        uVar15 = uVar16;
                        func_0x00010c15ab60();
                        _objc_retainAutoreleasedReturnValue();
                        uVar17 = uVar15;
                        func_0x00010c0720c0();
                        _objc_release(uVar15);
                        if ((int)uVar17 == 0) {
                          uVar15 = uVar16;
                          func_0x00010c15ab60();
                          _objc_retainAutoreleasedReturnValue();
                          uVar17 = uVar15;
                          func_0x00010c0720c0();
                          if ((uVar17 & 1) == 0) {
                            uVar17 = uVar16;
                            func_0x00010c15ab60();
                            _objc_retainAutoreleasedReturnValue();
                            uVar18 = uVar17;
                            func_0x00010c0720c0();
                            if ((uVar18 & 1) != 0) {
LAB_108eefca8:
                              _objc_release(uVar17);
                              goto LAB_108eefcb0;
                            }
                            uVar18 = uVar16;
                            func_0x00010c15ab60();
                            _objc_retainAutoreleasedReturnValue();
                            uVar19 = uVar18;
                            func_0x00010c0720c0();
                            if ((uVar19 & 1) != 0) {
LAB_108eefca0:
                              _objc_release(uVar18);
                              goto LAB_108eefca8;
                            }
                            uVar19 = uVar16;
                            func_0x00010c15ab60();
                            _objc_retainAutoreleasedReturnValue();
                            uVar20 = uVar19;
                            func_0x00010c0720c0();
                            if ((uVar20 & 1) != 0) {
                              _objc_release(uVar19);
                              goto LAB_108eefca0;
                            }
                            uVar20 = uVar16;
                            func_0x00010c15ab60();
                            _objc_retainAutoreleasedReturnValue();
                            uVar21 = uVar20;
                            func_0x00010c0720c0();
                            _objc_release(uVar20);
                            _objc_release(uVar19);
                            _objc_release(uVar18);
                            _objc_release(uVar17);
                            _objc_release(uVar15);
                            if ((uVar21 & 1) == 0) {
                              uVar15 = uVar16;
                              func_0x00010c15ab60();
                              _objc_retainAutoreleasedReturnValue();
                              uVar17 = uVar15;
                              func_0x00010c0720c0();
                              _objc_release(uVar15);
                              if ((int)uVar17 == 0) {
                                uVar15 = uVar16;
                                func_0x00010c15ab60();
                                _objc_retainAutoreleasedReturnValue();
                                uVar17 = uVar15;
                                func_0x00010c0720c0();
                                _objc_release(uVar15);
                                if ((int)uVar17 != 0) {
                                  func_0x00010befa120(puVar4);
                                }
                                goto LAB_108eef994;
                              }
                              uVar15 = uVar16;
                              func_0x00010c122b80();
                              _objc_retainAutoreleasedReturnValue();
                              uVar17 = uVar15;
                              func_0x00010c08fa60();
                              if (uVar17 == 0) {
LAB_108eefdec:
                                uVar17 = uVar15;
                                func_0x00010c08fa60();
                                if (uVar17 != 0) {
                                  puVar22 = PTR_PTR_1126c5070;
                                  _objc_alloc(PTR_PTR_1126c5070);
                                  uVar17 = uVar32;
                                  func_0x00010c122a80();
                                  _objc_retainAutoreleasedReturnValue();
                                  uVar18 = uVar17;
                                  func_0x00010c0d5140(uVar17);
                                  _objc_retainAutoreleasedReturnValue();
                                  FUN_108f43540(uVar32);
                                  func_0x000108ef07cc();
                                  func_0x00010c03bfc0(puVar22);
                                  func_0x00010befa120(puVar13);
                                  _objc_release(puVar22);
                                  _objc_release(uVar18);
                                  _objc_release(uVar17);
                                }
                              }
                              else {
                                puVar22 = PTR__OBJC_CLASS___NSUUID_1126b0270;
                                _objc_alloc();
                                func_0x00010c057ea0();
                                _objc_release();
                                if (puVar22 != (undefined *)0x0) goto LAB_108eefdec;
                              }
                              _objc_release(uVar15);
                              goto LAB_108eef994;
                            }
                          }
                          else {
LAB_108eefcb0:
                            _objc_release(uVar15);
                          }
                          uVar15 = uVar16;
                          func_0x00010c122b80();
                          _objc_retainAutoreleasedReturnValue();
                          uVar17 = uVar15;
                          func_0x00010c08fa60();
                          if (uVar17 != 0) {
                            func_0x00010befa120(puVar12);
                            puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                            FUN_108f43540(uVar32);
                            func_0x000108ef07cc();
                            func_0x00010c0df7c0(puVar22);
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010c1d0640(puVar14);
                            _objc_release(puVar22);
                          }
                          _objc_release(uVar15);
                        }
                        else {
                          func_0x00010befa120(puVar4);
                          bVar3 = true;
                        }
                      }
                      else {
                        uVar15 = uVar16;
                        func_0x00010c122b80();
                        _objc_retainAutoreleasedReturnValue();
                        uVar17 = uVar15;
                        func_0x00010c08fa60();
                        if (uVar17 != 0) {
                          func_0x00010befa120(puVar11);
                        }
                        _objc_release(uVar15);
                      }
                      goto LAB_108eef994;
                    }
                    uVar15 = uVar16;
                    func_0x00010c122b80();
                    _objc_retainAutoreleasedReturnValue();
                    uVar17 = uVar15;
                    func_0x00010c08fa60();
                    if (uVar17 != 0) {
                      puVar31 = PTR_PTR_1126c3320;
                      func_0x00010c272080(PTR_PTR_1126c3320);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010befa120(puVar8);
                      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      FUN_108f43540();
                      func_0x00010c0df7c0(puVar22);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar9);
                      _objc_release(puVar22);
                      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010bfa0ac0(PTR_PTR_1126c3320);
                      func_0x00010c0df780(puVar22);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar10);
                      _objc_release(puVar22);
                      _objc_release(puVar31);
                    }
                    _objc_release(uVar15);
                  }
                  else {
                    uVar15 = uVar16;
                    func_0x00010c122b80();
                    _objc_retainAutoreleasedReturnValue();
                    uVar17 = uVar15;
                    func_0x00010c08fa60();
                    if (uVar17 != 0) {
                      func_0x00010befa120(puVar8);
                      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      FUN_108f43540();
                      func_0x00010c0df7c0(puVar22);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar9);
                      _objc_release(puVar22);
                    }
                    _objc_release(uVar15);
                  }
                  bVar2 = true;
                  goto LAB_108eef994;
                }
                FUN_108f43540();
                func_0x000108ef07cc();
                ppuStack_430 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0ac8;
                uStack_408 = uVar32;
              }
              else {
                FUN_108f43540();
                func_0x000108ef07cc();
                ppuStack_430 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0ab0;
                uStack_408 = uVar32;
              }
              bVar1 = true;
            }
            else {
              FUN_108f43540();
              func_0x000108ef07cc();
              bVar1 = true;
              uStack_408 = uVar32;
            }
          }
          else {
            uVar15 = uVar16;
            func_0x00010c122b80();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = uVar15;
            func_0x00010c08fa60();
            if (uVar17 != 0) {
              func_0x00010befa120(puVar6);
            }
            func_0x00010c122a80();
            _objc_retainAutoreleasedReturnValue();
            uVar17 = uVar32;
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar32);
            uVar32 = uVar17;
            func_0x00010c08fa60();
            if (uVar32 != 0) {
              func_0x00010befa120(puVar7);
            }
            _objc_release(uVar17);
            _objc_release(uVar15);
          }
        }
        else {
          uVar15 = uVar16;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar15;
          func_0x00010c08fa60();
          if (uVar17 != 0) {
            func_0x00010befa120(puVar5);
          }
          _objc_release(uVar15);
        }
LAB_108eef994:
        _objc_release(uVar16);
        lVar30 = lVar30 + 1;
      } while (lVar28 != lVar30);
      lVar28 = param_3;
      func_0x00010bf52a60();
    } while (lVar28 != 0);
  }
  _objc_release(param_3);
  puVar22 = puVar4;
  func_0x00010bf529e0();
  if (puVar22 == (undefined *)0x0) {
    puVar31 = (undefined *)0x0;
  }
  else {
    func_0x000108f580b4();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR_PTR_1126cc7d0;
    _objc_alloc();
    func_0x00010c04d720();
    _objc_release(puVar23);
    _objc_release();
  }
  _dispatch_group_create();
  uVar24 = 0x19;
  func_0x000107c312b8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar6;
  func_0x00010bf529e0();
  puVar23 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar25 == (undefined *)0x0) {
LAB_108ef009c:
    _dispatch_group_enter(puVar22);
    puStack_290 = puVar23;
    uStack_288 = 0xc2000000;
    pcStack_280 = FUN_108ef07e8;
    puStack_278 = &UNK_110860220;
    puStack_268 = &uStack_1b8;
    _objc_retain(puVar22);
    puStack_270 = puVar22;
    func_0x00010be4f3a0(param_1);
    puVar25 = puStack_270;
  }
  else {
    puVar25 = puVar6;
    func_0x00010bf529e0();
    puVar29 = puVar7;
    func_0x00010bf529e0();
    if (puVar25 != puVar29) goto LAB_108ef009c;
    puVar29 = puVar6;
    func_0x00010bd86738(puVar6,puVar7,&PTR___NSConcreteGlobalBlock_110aca9d0);
    puVar25 = (undefined *)puStack_1b0[5];
    puStack_1b0[5] = puVar29;
  }
  _objc_release(puVar25);
  uVar26 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bfc61c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar26);
  _dispatch_group_enter(puVar22);
  uVar26 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar26);
  _objc_retainAutoreleasedReturnValue();
  puStack_2d0 = puVar23;
  uStack_2c8 = 0xc2000000;
  pcStack_2c0 = FUN_108ef083c;
  puStack_2b8 = &UNK_110a12b10;
  puStack_2a0 = &uStack_1e8;
  _objc_retain(puVar14);
  puStack_298 = &uStack_218;
  puStack_2b0 = puVar14;
  _objc_retain(puVar22);
  puStack_2a8 = puVar22;
  func_0x00010bf62520(uVar26);
  _objc_release(uVar26);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    puVar25 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    if ((bVar1) && (lVar28 = *(long *)(param_1 + 0x58), lVar28 != 0)) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c287ea0();
      _objc_release(lVar28);
    }
    if ((bVar2) && (lVar28 = *(long *)(param_1 + 0x58), lVar28 != 0)) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c287ec0();
      _objc_release(lVar28);
    }
    if ((bVar3) && (lVar28 = *(long *)(param_1 + 0x58), lVar28 != 0)) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2877a0();
      _objc_release(lVar28);
    }
    _objc_release(puVar25);
  }
  puVar29 = *(undefined **)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar29;
  func_0x00010c071800();
  if ((int)puVar25 == 0) {
LAB_108ef037c:
    _objc_release(puVar29);
  }
  else {
    puVar25 = puVar8;
    func_0x00010bf529e0();
    _objc_release(puVar29);
    if (puVar25 != (undefined *)0x0) {
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      plStack_300 = (long *)0x0;
      _objc_retain(puVar8);
      puVar25 = puVar8;
      func_0x00010bf52a60();
      puVar29 = puVar8;
      if (puVar25 != (undefined *)0x0) {
        lVar28 = *plStack_300;
        do {
          puVar34 = (undefined *)0x0;
          do {
            if (*plStack_300 != lVar28) {
              _objc_enumerationMutation(puVar8);
            }
            uVar26 = *(undefined8 *)(param_1 + 0x50);
            func_0x00010c269d40(uVar26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c288ee0();
            _objc_release(uVar26);
            puVar34 = puVar34 + 1;
          } while (puVar25 != puVar34);
          puVar25 = puVar8;
          func_0x00010bf52a60();
        } while (puVar25 != (undefined *)0x0);
      }
      goto LAB_108ef037c;
    }
  }
  _objc_initWeak(auStack_318,param_1);
  puStack_3d8 = puVar23;
  uStack_3d0 = 0xc2000000;
  pcStack_3c8 = FUN_108ef0a4c;
  puStack_3c0 = &UNK_110acaa60;
  uStack_328 = uStack_408;
  ppuStack_3b8 = ppuStack_430;
  puStack_348 = &uStack_1e8;
  puStack_3b0 = puVar31;
  puStack_3a8 = puVar13;
  uStack_320 = bVar1;
  _objc_retain(param_6);
  uStack_3a0 = param_6;
  _objc_retain(param_15);
  uStack_398 = param_15;
  _objc_retain(param_16);
  uStack_390 = param_16;
  uStack_31f = param_17;
  puStack_388 = puVar9;
  puStack_380 = puVar8;
  puStack_378 = puVar10;
  uStack_31e = bVar2;
  _objc_retain(param_20);
  puStack_340 = &uStack_1b8;
  lStack_350 = param_20;
  uStack_370 = uVar27;
  puStack_368 = puVar11;
  _objc_retain(param_4);
  uStack_360 = param_4;
  _objc_retain(param_5);
  uStack_358 = param_5;
  _objc_retain(puVar11);
  _objc_retain(uVar27);
  _objc_retain(puVar10);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(puVar13);
  _objc_retain(puVar31);
  _objc_copyWeak(auStack_330,auStack_318);
  puStack_338 = &uStack_218;
  func_0x000107c27d98(puVar22,PTR___dispatch_main_q_11034be20,&puStack_3d8);
  _objc_destroyWeak(auStack_330);
  _objc_release(uStack_358);
  _objc_release(uStack_360);
  _objc_release(puStack_368);
  _objc_release(uStack_370);
  _objc_release(lStack_350);
  _objc_release(puStack_378);
  _objc_release(puStack_380);
  _objc_release(puStack_388);
  _objc_release(uStack_390);
  _objc_release(uStack_398);
  _objc_release(uStack_3a0);
  _objc_release(puStack_3a8);
  _objc_release(puStack_3b0);
  _objc_release(ppuStack_3b8);
  _objc_destroyWeak(auStack_318);
  _objc_release(puStack_2a8);
  _objc_release(puStack_2b0);
  _objc_release(uVar24);
  _objc_release(puVar22);
  __Block_object_dispose(&uStack_218,8);
  _objc_release(uStack_1f0);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar13);
  _objc_release(puVar31);
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_1e8,8);
  _objc_release(uStack_1c0);
  _objc_release(uVar27);
  __Block_object_dispose(&uStack_1b8,8);
  _objc_release(uStack_190);
LAB_108ef0638:
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_end_catch();
  __Block_object_dispose(&uStack_218,8);
  __Block_object_dispose(&uStack_1e8,8);
  lVar28 = 8;
  __Block_object_dispose(&uStack_1b8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar28 + 0x28);
  *(undefined8 *)(lVar28 + 0x28) = 0;
  return;
}



/* Entry: 108ef07b4; end: 108ef07e7;  */

void FUN_108ef07b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108ef07e8; end: 108ef0833;  */

void FUN_108ef07e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c31908(param_2,&PTR___NSConcreteGlobalBlock_110acaa10);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108ef0834; end: 108ef083b;  */

void FUN_108ef0834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126dc760;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar8 = uVar7;
  func_0x00010bf1c0a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d6a0(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ef083c; end: 108ef092b;  */

void FUN_108ef083c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108ef092c;
  puStack_40 = &UNK_110acaa30;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar2 = uVar1;
  uStack_38 = uVar4;
  func_0x000107c31908(uVar1,&puStack_58);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_38);
  return;
}



/* Entry: 108ef092c; end: 108ef0a4b;  */

void FUN_108ef092c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c5070;
  _objc_alloc(PTR_PTR_1126c5070);
  uVar1 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_2);
  func_0x00010c1143e0(param_2);
  func_0x00010c075620(param_2);
  uVar3 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c03bfc0(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef0a4c; end: 108ef0bcb;  */

void FUN_108ef0a4c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b5cc0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf09f80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf51e00();
  func_0x00010c037e40(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar5 = *(long *)(param_1 + 0x88);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 8) + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar5 + 0x10))
            (lVar5,uVar6,uVar3,uVar4,uVar7,puVar1,uVar2,*(undefined8 *)(param_1 + 0x80));
  _objc_release(uVar2);
  param_1 = param_1 + 0xa8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd920();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ef0bcc; end: 108ef0d4f;  */

void FUN_108ef0bcc(long param_1,long param_2)

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
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),7);
  __Block_object_assign(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90),8);
  __Block_object_assign(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98),8);
  __Block_object_assign(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0xa8,param_2 + 0xa8);
  return;
}



/* Entry: 108ef0d50; end: 108ef0e1b; -[SCMatchaSendToSelectionItemAdaptor _isThirdPartyBotWithUserId:resolvedSnapchatter:] */

undefined8 FUN_108ef0d50(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010bf274e0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar3 != 0) && (uVar2 = uVar3, func_0x000107c2aaa8(uVar3,param_3), (int)uVar2 != 0)) {
      if (param_4 != (ulong *)0x0) {
        _objc_retainAutorelease(uVar3);
        *param_4 = uVar3;
      }
      uVar4 = 1;
      goto LAB_108ef0df0;
    }
  }
  uVar4 = 0;
  func_0x000107c2aaa8(0,param_3);
LAB_108ef0df0:
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108ef0e1c; end: 108ef1053; -[SCMatchaSendToSelectionItemAdaptor _localSnapchattersForUserIds:completionQueue:completionHandler:] */

void FUN_108ef0e1c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar3;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_5;
  _objc_retain();
  iVar2 = (int)lVar3;
  if ((param_4 != 0) && (param_5 != 0)) {
    func_0x000107c30ac4();
    if (iVar2 == 0) {
LAB_108ef0f90:
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      func_0x00010c09d7c0(uVar4);
      _objc_release(uVar4);
    }
    else {
      _objc_retain(param_3);
      lVar3 = param_3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar6 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          iVar2 = 0;
          func_0x000107c2aaa8(0,*(undefined8 *)(lVar6 * 8));
          if (iVar2 != 0) {
            _objc_release(param_3);
            goto LAB_108ef0f90;
          }
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      func_0x00010c244e80(uVar4);
      _objc_release(uVar4);
    }
    _objc_release(param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108ef1060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 108ef1054; end: 108ef1073;  */

void FUN_108ef1054(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108ef1060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 108ef1074; end: 108ef116b; -[SCMatchaSendToSelectionItemAdaptor _updatePostTimestampWithCustomStoriesMetadata:] */

void FUN_108ef1074(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = 0x11;
    func_0x000107c312b8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108ef116c;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x000107c27d8c(uVar2,&puStack_68);
    _objc_release(uVar2);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108ef116c; end: 108ef11c7;  */

void FUN_108ef116c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287580();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ef11c8; end: 108ef1287; -[SCMatchaSendToSelectionItemAdaptor .cxx_destruct] */

void FUN_108ef11c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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



/* Entry: 108ef1288; end: 108ef14b3;  */

void FUN_108ef1288(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
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
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  puVar15 = &uStack_130;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar16 = *plStack_120;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(param_1);
        }
        uVar18 = *(undefined8 *)(lStack_128 + (long)puVar17 * 8);
        puVar3 = PTR_PTR_1126dc748;
        _objc_alloc();
        uVar4 = uVar18;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar18;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar18;
        func_0x00010c0d5140();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar18;
        func_0x00010bf40c40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar18;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1c0a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05c060();
        _objc_release(uVar18);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar19);
        _objc_release(uVar4);
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        puVar17 = puVar17 + 1;
      } while (puVar2 != puVar17);
      puVar15 = &uStack_130;
      puVar2 = param_1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(puVar15);
    puVar1 = param_1;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar2;
    func_0x000108ef4ffc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_retain(puVar1);
    _objc_retain(puVar17);
    _objc_retain(puVar15);
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = puVar17;
      func_0x00010bf529e0();
      puStack_1c8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar2 == (undefined *)0x0) {
        func_0x000108ef1f50();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        if (lRam000000011372ee10 != -1) {
          func_0x000107c27d9c(0x11372ee10,&PTR___NSConcreteGlobalBlock_110acaa90);
        }
        uVar4 = uRam000000011372ee08;
        uVar19 = 0x4031000000000000;
        puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c099280();
        puStack_1c8 = puVar17;
        FUN_108ef62d0(uVar4,uVar19,puVar17,puVar2,1,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
    }
    else {
      _objc_retain(puVar1);
      puStack_1c8 = puVar1;
    }
    _objc_release(puVar15);
    _objc_release(puVar17);
    _objc_release(puVar1);
    _objc_retain(puVar17);
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      puStack_1d0 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      if (lRam000000011372ee10 != -1) {
        func_0x000107c27d9c(0x11372ee10,&PTR___NSConcreteGlobalBlock_110acaa90);
      }
      uVar4 = uRam000000011372ee08;
      uVar19 = 0x4028000000000000;
      puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099280();
      puStack_1d0 = puVar17;
      FUN_108ef62d0(uVar4,uVar19,puVar17,puVar2,1,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar17);
    puVar3 = param_1;
    FUN_108ef2144(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar17;
    FUN_108ef18d0(puVar17,puVar3,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c50f0;
    _objc_alloc();
    puVar9 = param_1;
    func_0x00010bfceb20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010bfcef60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010c0ecc20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    FUN_108ef1288();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    func_0x00010c0891c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010bf5ab40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dca60();
    func_0x00010c018d80();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1c8);
    _objc_release(puVar17);
    _objc_release(puVar1);
    _objc_release(puVar15);
    _objc_release(param_2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef14b4; end: 108ef18cf;  */

void FUN_108ef14b4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_90;
  undefined *puStack_88;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000108ef4ffc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_retain(puVar2);
  _objc_retain(puVar4);
  _objc_retain(param_3);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar4;
    func_0x00010bf529e0();
    puStack_88 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar3 == (undefined *)0x0) {
      func_0x000108ef1f50();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      if (lRam000000011372ee10 != -1) {
        func_0x000107c27d9c(0x11372ee10,&PTR___NSConcreteGlobalBlock_110acaa90);
      }
      uVar1 = uRam000000011372ee08;
      uVar13 = 0x4031000000000000;
      puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099280();
      puStack_88 = puVar4;
      FUN_108ef62d0(uVar1,uVar13,puVar4,puVar3,1,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  else {
    _objc_retain(puVar2);
    puStack_88 = puVar2;
  }
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_retain(puVar4);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puStack_90 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    if (lRam000000011372ee10 != -1) {
      func_0x000107c27d9c(0x11372ee10,&PTR___NSConcreteGlobalBlock_110acaa90);
    }
    uVar1 = uRam000000011372ee08;
    uVar13 = 0x4028000000000000;
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    puStack_90 = puVar4;
    FUN_108ef62d0(uVar1,uVar13,puVar4,puVar3,1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  puVar3 = param_1;
  FUN_108ef2144(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_108ef18d0(puVar4,puVar3,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c50f0;
  _objc_alloc();
  puVar7 = param_1;
  func_0x00010bfceb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bfcef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010c0ecc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  FUN_108ef1288();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1;
  func_0x00010bf5ab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dca60();
  func_0x00010c018d80();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puStack_90);
  _objc_release(puStack_88);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108ef18d0; end: 108ef1a83;  */

void FUN_108ef18d0(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar13 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010bf529e0();
  if (param_1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    puVar13 = (undefined8 *)param_3;
    func_0x00010c0ecd80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x00010c0ecd20();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_2);
    puVar1 = param_2;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar15 = *plStack_110;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_110 != lVar15) {
            _objc_enumerationMutation(param_2);
          }
          puVar14 = *(undefined1 **)(lStack_118 + (long)puVar16 * 8);
          puVar2 = puVar4;
          func_0x00010bf529e0();
          if (puVar2 == (undefined *)0x3) goto LAB_108ef1a10;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar14;
          func_0x00010c08fa60();
          if ((puVar3 != (undefined1 *)0x0) &&
             (puVar3 = puVar14, puVar13 = (undefined8 *)param_3, func_0x00010c0720c0(),
             ((ulong)puVar3 & 1) == 0)) {
            puVar13 = (undefined8 *)puVar14;
            func_0x00010befa120(puVar4);
          }
          _objc_release(puVar14);
          puVar16 = puVar16 + 1;
        } while (puVar1 != puVar16);
        puVar1 = param_2;
        puVar13 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
LAB_108ef1a10:
    _objc_release(param_2);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(puVar12);
    _objc_retain(puVar13);
    puVar1 = param_2;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_2;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    func_0x000108ef4ffc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_retain(puVar1);
    _objc_retain(puVar16);
    _objc_retain(puVar13);
    puVar4 = puVar1;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = puVar16;
      func_0x00010bf529e0();
      puStack_198 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar4 == (undefined *)0x0) {
        func_0x000108ef1f50();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      else {
        puStack_198 = puVar16;
        FUN_108ef5cac();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      _objc_retain(puVar1);
      puStack_198 = puVar1;
    }
    _objc_release(puVar13);
    _objc_release(puVar16);
    _objc_release(puVar1);
    _objc_retain(puVar16);
    puVar4 = puVar1;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puStack_1a0 = (undefined *)0x0;
    }
    else {
      puStack_1a0 = puVar16;
      FUN_108ef5cac();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar16);
    puVar2 = param_2;
    FUN_108ef2144(param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar16;
    FUN_108ef18d0(puVar16,puVar2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c50f0;
    _objc_alloc();
    puVar6 = param_2;
    func_0x00010bfceb20(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_2;
    func_0x00010bfcef60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_2;
    func_0x00010c0ecc20(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    FUN_108ef1288();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_2;
    func_0x00010c0891c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_2;
    func_0x00010bf5ab40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dca60();
    func_0x00010c018d80();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puStack_1a0);
    _objc_release(puStack_198);
    _objc_release(puVar16);
    _objc_release(puVar1);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ef1a84; end: 108ef1d8b;  */

void FUN_108ef1a84(undefined *param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108ef4ffc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x00010bf529e0();
    uStack_78 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar2 == (undefined *)0x0) {
      func_0x000108ef1f50();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    else {
      uStack_78 = puVar3;
      FUN_108ef5cac();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(puVar1);
    uStack_78 = puVar1;
  }
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_retain(puVar3);
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    uStack_80 = (undefined *)0x0;
  }
  else {
    uStack_80 = puVar3;
    FUN_108ef5cac();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  puVar2 = param_1;
  FUN_108ef2144(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_108ef18d0(puVar3,puVar2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c50f0;
  _objc_alloc();
  puVar6 = param_1;
  func_0x00010bfceb20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010bfcef60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010c0ecc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  FUN_108ef1288();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1;
  func_0x00010bf5ab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dca60();
  func_0x00010c018d80();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108ef1d8c; end: 108ef1dd7;  */

void FUN_108ef1d8c(undefined8 param_1,undefined8 param_2,double param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dRam000000011372ee08 = param_3 + -100.0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ef1dd8; end: 108ef1e83;  */

void FUN_108ef1dd8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain();
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108ef1e84;
  puStack_48 = &UNK_110acaab0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retainBlock(&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ef1e84; end: 108ef1e93;  */

void FUN_108ef1e84(long param_1,undefined *param_2)

{
  undefined8 uVar1;
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
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puStack_90;
  undefined *puStack_88;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  puVar4 = param_2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000108ef4ffc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  _objc_retain(uVar2);
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x00010bf529e0();
    puStack_88 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar5 == (undefined *)0x0) {
      func_0x000108ef1f50();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      if (lRam000000011372ee10 != -1) {
        func_0x000107c27d9c(0x11372ee10,&PTR___NSConcreteGlobalBlock_110acaa90);
      }
      uVar3 = uRam000000011372ee08;
      uVar15 = 0x4031000000000000;
      puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099280();
      puStack_88 = puVar6;
      FUN_108ef62d0(uVar3,uVar15,puVar6,puVar5,1,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    _objc_release(puVar5);
  }
  else {
    _objc_retain(puVar4);
    puStack_88 = puVar4;
  }
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_retain(puVar6);
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    puStack_90 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    if (lRam000000011372ee10 != -1) {
      func_0x000107c27d9c(0x11372ee10,&PTR___NSConcreteGlobalBlock_110acaa90);
    }
    uVar3 = uRam000000011372ee08;
    uVar15 = 0x4028000000000000;
    puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    puStack_90 = puVar6;
    FUN_108ef62d0(uVar3,uVar15,puVar6,puVar5,1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(puVar6);
  puVar5 = param_2;
  FUN_108ef2144(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  FUN_108ef18d0(puVar6,puVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c50f0;
  _objc_alloc();
  puVar9 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_2;
  func_0x00010bfcef60(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_2;
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  FUN_108ef1288();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_2;
  func_0x00010bf5ab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dca60();
  func_0x00010c018d80();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puStack_90);
  _objc_release(puStack_88);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108ef1e94; end: 108ef1f3f;  */

void FUN_108ef1e94(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain();
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108ef1f40;
  puStack_48 = &UNK_110acaab0;
  uStack_40 = param_1;
  uStack_38 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_retainBlock(&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ef1f40; end: 108ef1f67;  */

void FUN_108ef1f40(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  puVar3 = param_2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000108ef4ffc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  _objc_retain(uVar2);
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = puVar5;
    func_0x00010bf529e0();
    uStack_78 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)0x0) {
      func_0x000108ef1f50();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    else {
      uStack_78 = puVar5;
      FUN_108ef5cac();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(puVar3);
    uStack_78 = puVar3;
  }
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_retain(puVar5);
  puVar4 = puVar3;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x0) {
    uStack_80 = (undefined *)0x0;
  }
  else {
    uStack_80 = puVar5;
    FUN_108ef5cac();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  puVar4 = param_2;
  FUN_108ef2144(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  FUN_108ef18d0(puVar5,puVar4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c50f0;
  _objc_alloc();
  puVar8 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_2;
  func_0x00010bfcef60(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_2;
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  FUN_108ef1288();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_2;
  func_0x00010c0891c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bf5ab40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dca60();
  func_0x00010c018d80();
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108ef1f68; end: 108ef20c3;  */

undefined * FUN_108ef1f68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126dc750;
  if (param_1 == 0) {
    puVar7 = (undefined *)0x40;
  }
  else {
    _objc_retain();
    _objc_alloc_init(puVar2);
    puVar7 = (undefined *)0x40;
    func_0x00010c1c36e0();
    puVar3 = PTR_PTR_1126af7d0;
    _objc_opt_new(PTR_PTR_1126af7d0);
    puVar4 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    lVar5 = param_1;
    func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110f03b58,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126dc750;
    lVar6 = lVar5;
    func_0x00010c296d80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c0f40e0(puVar4,param_2,lVar6,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_58;
    _objc_release(lVar6);
    if (lVar1 == 0) {
      puVar7 = puVar4;
      func_0x00010c0c2e00();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)0x40;
      }
      else {
        puVar7 = puVar4;
        func_0x00010c0c2e00(puVar4);
      }
    }
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return puVar7;
}



/* Entry: 108ef20c4; end: 108ef2117;  */

void FUN_108ef20c4(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372ee18 != -1) {
    func_0x000107c27d9c(0x11372ee18,&PTR___NSConcreteGlobalBlock_110acaae0);
  }
  uVar1 = uRam000000011372ee20;
  _objc_retain(uRam000000011372ee20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef2118; end: 108ef2143;  */

void FUN_108ef2118(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam000000011372ee20;
  puRam000000011372ee20 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ef2144; end: 108ef281b;  */

undefined * FUN_108ef2144(undefined *param_1,undefined **param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = param_1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c089e00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010b88a328();
  _objc_retain(puVar2);
  _objc_retain(puVar4);
  _objc_retain(param_2);
  if (puVar3 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a120();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      func_0x00010befa120(puVar5);
      _objc_release(puVar6);
    }
    if (param_2 != (undefined **)0x0) {
      func_0x00010befa120(puVar5);
    }
    _objc_retain(puVar2);
    puVar6 = puVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar2);
        }
        lVar19 = *(long *)((long)puVar16 * 8);
        if ((int)puVar18 != 0) {
          lVar7 = lVar19;
          func_0x00010c0d5140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(lVar7);
        }
        lVar7 = lVar19;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          lVar7 = lVar19;
          func_0x00010bf1acc0(lVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(lVar7);
        }
        lVar7 = lVar19;
        func_0x00010bf1c0a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          func_0x00010bf1c0a0(lVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(lVar19);
        }
        puVar16 = puVar16 + 1;
      } while (puVar6 != puVar16);
      puVar6 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    puVar18 = puVar5;
    func_0x00010bf51e00();
    _objc_release(puVar5);
  }
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  FUN_108ef20c4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puVar4 = puVar18;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = param_1;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    puVar6 = param_1;
    if (puVar5 == (undefined *)0x1) {
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c0d3c80();
      _objc_release(puVar2);
      _objc_release(puVar6);
      puVar2 = puVar4;
    }
    else {
      puVar4 = param_1;
      func_0x00010c089e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_1);
      puVar5 = puVar4;
      func_0x00010c086f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = param_1;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &PTR___NSConcreteGlobalBlock_110acab30;
      puVar16 = puVar4;
      func_0x000107c31914();
      _objc_release(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar5);
          }
          uVar14 = *(ulong *)((long)puVar15 * 8);
          func_0x00010c0720c0();
          if ((uVar14 & 1) == 0) {
            puVar17 = puVar16;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar17 != (undefined *)0x0) {
              func_0x00010befa120(puVar2);
            }
            _objc_release(puVar17);
          }
          puVar15 = puVar15 + 1;
        } while (puVar4 != puVar15);
        puVar4 = puVar5;
        func_0x00010bf52a60();
      }
      _objc_release(puVar5);
      puVar15 = param_1;
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar15;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar15);
          }
          uVar20 = *(undefined8 *)((long)puVar17 * 8);
          uVar8 = uVar20;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c0720c0();
          if ((int)uVar9 == 0) {
            puVar10 = param_1;
            func_0x00010c089e00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2923e0(uVar20);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar20);
            _objc_release(puVar10);
            _objc_release(uVar8);
            if (puVar11 == (undefined *)0x0) {
              func_0x00010befa120(puVar2);
            }
          }
          else {
            _objc_release(uVar8);
          }
          puVar17 = puVar17 + 1;
        } while (puVar4 != puVar17);
        puVar4 = puVar15;
        func_0x00010bf52a60();
      }
      _objc_release(puVar15);
      _objc_release(puVar16);
      _objc_release(puVar5);
      _objc_release(param_1);
    }
    FUN_108ef20c4();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf51e00();
    puVar4 = puVar5;
    func_0x00010c1d0560(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar6);
    puVar5 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar18);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  if ((ppuVar12 != (undefined **)0x0) && (puVar4 != (undefined *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_compare__1125ae690,ppuVar12);
    return puVar4;
  }
  puVar2 = (undefined *)0x1;
  if (ppuVar12 == (undefined **)0x0) {
    puVar2 = (undefined *)0xffffffffffffffff;
  }
  return puVar2;
}



/* Entry: 108ef281c; end: 108ef2847;  */

long FUN_108ef281c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_compare__1125ae690,param_2);
    return param_3;
  }
  lVar1 = 1;
  if (param_2 == 0) {
    lVar1 = -1;
  }
  return lVar1;
}



/* Entry: 108ef2848; end: 108ef286f;  */

void FUN_108ef2848(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108ef2870; end: 108ef2c33;  */

/* WARNING: Possible PIC construction at 0x000108ef296c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ef2970) */
/* WARNING: Removing unreachable block (ram,0x000108ef2998) */
/* WARNING: Removing unreachable block (ram,0x000108ef29c0) */
/* WARNING: Removing unreachable block (ram,0x000108ef29cc) */
/* WARNING: Removing unreachable block (ram,0x000108ef2958) */

void FUN_108ef2870(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  FUN_108ef4e14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_retain(ppuVar3);
  ppuVar2 = ppuVar3;
  func_0x00010bf52a60();
  uVar7 = uRam0000000000000000;
  if (ppuVar2 == (undefined **)0x0) {
    _objc_release(ppuVar3);
    ppuVar2 = ppuVar1;
    func_0x00010bf529e0();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar2 = ppuVar3;
      func_0x000107c31908(ppuVar3,&PTR___NSConcreteGlobalBlock_110acab70);
      ppuVar4 = &PTR____CFConstantStringClassReference_110f03b78;
      uVar7 = 0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f03b78,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar2 = ppuVar1;
      func_0x00010bf529e0();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (ppuVar2 == (undefined **)0x1) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110f03b98;
        uVar7 = 0;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f03b98,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar2 = ppuVar1;
        func_0x00010bf529e0();
        if (ppuVar2 == (undefined **)0x2) {
          ppuVar2 = ppuVar1;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar5 = ppuVar1;
          func_0x00010c25e980();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = &PTR____CFConstantStringClassReference_110dc4178;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4178,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar5;
          func_0x00010bf446e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar4);
          _objc_release(ppuVar5);
        }
        ppuVar4 = ppuVar1;
        func_0x00010bf529e0();
        ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar4 < (undefined **)0x4) {
          ppuVar5 = ppuVar1;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bf529e0();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
        }
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar6 = &PTR____CFConstantStringClassReference_110f03bb8;
        uVar7 = 0;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110f03bb8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
      }
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
      return;
    }
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_userId_112682320);
  return;
}



/* Entry: 108ef2c34; end: 108ef2c3b;  */

void FUN_108ef2c34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108ef2c3c; end: 108ef2f83;  */

void FUN_108ef2c3c(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = param_2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar1 = param_2;
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf529e0();
    _objc_release(ppuVar1);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar2 == (undefined **)0x1) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110eb7778;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7778,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar1 = param_2;
      func_0x00010c0ecc20(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x000108ef4ffc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      ppuVar1 = ppuVar2;
      FUN_108ef620c(param_1,ppuVar2,param_3,1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar2);
  }
  else {
    ppuVar1 = param_2;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108ef2f84; end: 108ef35d7;  */

undefined ** FUN_108ef2f84(undefined **param_1,ulong param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **unaff_x24;
  undefined8 uVar13;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  long lVar14;
  undefined **unaff_x28;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_300;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined **ppuStack_2a8;
  undefined1 **ppuStack_2a0;
  undefined8 uStack_298;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar1 = param_1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  uVar5 = param_3;
  FUN_108ef4e14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  _objc_retain(ppuVar2);
  ppuVar1 = &puStack_130;
  ppuVar12 = ppuVar2;
  func_0x00010bf52a60();
  ppuVar11 = (undefined **)0x0;
  if (ppuVar12 != (undefined **)0x0) {
    unaff_x28 = (undefined **)*puStack_120;
    uStack_138 = param_3;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x28) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x25 = *(undefined ***)(lStack_128 + (long)ppuVar11 * 8);
        unaff_x24 = unaff_x25;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_2;
        func_0x00010c06d5a0();
        if ((uVar3 & 1) == 0) {
          _objc_release(unaff_x24);
        }
        else {
          unaff_x26 = param_1;
          func_0x00010bf1d700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          ppuVar1 = unaff_x25;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(unaff_x25);
          _objc_release(unaff_x26);
          _objc_release(unaff_x24);
          if (unaff_x27 == (undefined **)0x0) {
            ppuVar11 = (undefined **)0x1;
            param_3 = uStack_138;
            goto LAB_108ef3128;
          }
        }
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar12 != ppuVar11);
      ppuVar1 = &puStack_130;
      ppuVar12 = ppuVar2;
      func_0x00010bf52a60();
    } while (ppuVar12 != (undefined **)0x0);
    ppuVar11 = (undefined **)0x0;
    param_3 = uStack_138;
  }
LAB_108ef3128:
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  ppuVar12 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  uStack_148 = 0x108ef3190;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = unaff_x28;
  ppuStack_198 = unaff_x27;
  ppuStack_190 = unaff_x26;
  ppuStack_188 = unaff_x25;
  ppuStack_180 = unaff_x24;
  ppuStack_178 = ppuVar11;
  ppuStack_170 = ppuVar2;
  uStack_168 = param_3;
  uStack_160 = param_2;
  ppuStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(uVar5);
  _objc_retain(ppuVar1);
  ppuStack_278 = ppuVar12;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar12;
  ppuVar6 = ppuVar1;
  ppuStack_288 = ppuVar1;
  FUN_108ef4e14();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar12);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  puStack_260 = (undefined8 *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  ppuStack_280 = ppuVar2;
  _objc_retain(ppuVar11);
  puVar8 = &uStack_270;
  ppuVar2 = ppuVar11;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar12 = (undefined **)*puStack_260;
    do {
      ppuVar10 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_260 != ppuVar12) {
          _objc_enumerationMutation(ppuVar11);
        }
        unaff_x27 = *(undefined ***)(lStack_268 + (long)ppuVar10 * 8);
        unaff_x26 = unaff_x27;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010c06d5a0();
        if ((int)uVar13 == 0) {
LAB_108ef3338:
          _objc_release(unaff_x26);
        }
        else {
          unaff_x28 = ppuStack_278;
          func_0x00010bf1d700();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = unaff_x27;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = unaff_x28;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(ppuVar1);
          _objc_release(unaff_x28);
          _objc_release(unaff_x26);
          if (ppuVar4 == (undefined **)0x0) {
            unaff_x26 = unaff_x27;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuStack_280);
            goto LAB_108ef3338;
          }
        }
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      } while (ppuVar2 != ppuVar10);
      puVar8 = &uStack_270;
      ppuVar2 = ppuVar11;
      func_0x00010bf52a60();
      unaff_x25 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar11);
  ppuVar10 = ppuStack_280;
  ppuVar2 = ppuStack_280;
  func_0x00010bf51e00();
  _objc_release(ppuVar10);
  _objc_release(ppuVar11);
  _objc_release(ppuStack_288);
  _objc_release(uVar5);
  ppuVar4 = ppuStack_278;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    puVar9 = &uStack_3c0;
    ppuStack_2a8 = ppuVar10;
    uStack_298 = 0x108ef33e8;
    lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_2f0 = unaff_x28;
    ppuStack_2e8 = unaff_x27;
    ppuStack_2e0 = unaff_x26;
    ppuStack_2d8 = unaff_x25;
    ppuStack_2d0 = ppuVar2;
    ppuStack_2c8 = ppuVar12;
    ppuStack_2c0 = ppuVar11;
    ppuStack_2b8 = ppuVar1;
    uStack_2b0 = uVar5;
    ppuStack_2a0 = &puStack_150;
    _objc_retain(ppuVar6);
    _objc_retain(puVar8);
    func_0x00010c0ecc20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar4;
    puVar7 = puVar8;
    FUN_108ef4e14();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    plStack_3b0 = (long *)0x0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    _objc_retain(ppuVar1);
    ppuVar2 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      lVar14 = *plStack_3b0;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*plStack_3b0 != lVar14) {
            _objc_enumerationMutation(ppuVar1);
          }
          uVar13 = *(undefined8 *)(lStack_3b8 + (long)ppuVar12 * 8);
          uVar5 = uVar13;
          func_0x00010c2923e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar6;
          func_0x00010c0d4260();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar5);
          if (ppuVar10 == (undefined **)0x0) {
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar11);
            _objc_release(uVar13);
          }
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar2 != ppuVar12);
        ppuVar2 = ppuVar1;
        puVar9 = &uStack_3c0;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    ppuVar2 = ppuVar11;
    func_0x00010bf51e00();
    _objc_release(ppuVar11);
    _objc_release(ppuVar1);
    _objc_release(puVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_300) {
      ___stack_chk_fail();
      _objc_retain(puVar7);
      _objc_retain(puVar9);
      func_0x00010c0ecc20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar6;
      func_0x00010bf529e0();
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (ppuVar1 == (undefined **)0x1) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110eb7778;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7778,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar1 = ppuVar6;
        func_0x000108ef4ffc(ppuVar6,puVar7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar1;
        FUN_108ef5cac();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar1);
      _objc_release(ppuVar6);
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return ppuVar2;
}



/* Entry: 108ef35d8; end: 108ef36cf;  */

void FUN_108ef35d8(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010bf529e0();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (ppuVar1 == (undefined **)0x1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb7778;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eb7778,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = param_1;
    func_0x000108ef4ffc(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    FUN_108ef5cac();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108ef36d0; end: 108ef3727;  */

bool FUN_108ef36d0(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain();
  if ((param_1 == 0) || (uVar2 = param_1, func_0x00010c08fa60(), uVar2 == 0)) {
    bVar1 = false;
  }
  else {
    uVar2 = param_1;
    func_0x00010c08fac0(param_1,param_2,4);
    bVar1 = uVar2 < 0x33;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 108ef3728; end: 108ef37e3;  */

void FUN_108ef3728(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_1;
  if (lVar2 == 0) {
    FUN_108ef35d8(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108ef37e4; end: 108ef386b;  */

void FUN_108ef37e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c0ecc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_108ef386c(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef386c; end: 108ef395f;  */

void FUN_108ef386c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
LAB_108ef38cc:
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    FUN_10901d7c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar1 == 0) {
      FUN_108ef5c94();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108ef3930;
    }
  }
  else {
    lVar1 = param_2;
    FUN_108ef3e6c(param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) goto LAB_108ef38cc;
  }
  lVar2 = lVar1;
  func_0x00010bcbeb70(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
LAB_108ef3930:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108ef3960; end: 108ef3aff;  */

void FUN_108ef3960(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  FUN_108ef37e4(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (((param_2 == 0) && (puVar2 = param_1, func_0x00010c0720c0(), (int)puVar2 == 0)) &&
     (puVar2 = param_1, func_0x00010c0720c0(), (int)puVar2 == 0)) {
    puVar2 = PTR_PTR_1126b2c18;
    func_0x00010bfb1120(PTR_PTR_1126b2c18);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef3b00; end: 108ef3b17;  */

void FUN_108ef3b00(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(lVar2);
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
LAB_108ef38cc:
    lVar4 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    FUN_10901d7c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar3 == 0) {
      FUN_108ef5c94();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108ef3930;
    }
  }
  else {
    lVar3 = lVar1;
    FUN_108ef3e6c(lVar1,param_2);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) goto LAB_108ef38cc;
  }
  lVar4 = lVar3;
  func_0x00010bcbeb70(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
LAB_108ef3930:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108ef3b18; end: 108ef3dcf;  */

/* WARNING: Possible PIC construction at 0x000108ef3e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108ef3e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ef3e08) */
/* WARNING: Removing unreachable block (ram,0x000108ef3e28) */
/* WARNING: Removing unreachable block (ram,0x000108ef3e18) */
/* WARNING: Removing unreachable block (ram,0x000108ef3e34) */
/* WARNING: Removing unreachable block (ram,0x000108ef3e40) */

void FUN_108ef3b18(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *unaff_x21;
  ulong uVar7;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined1 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 uVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x25 = *plStack_120;
    unaff_x21 = puVar2;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(ulong *)(lStack_128 + (long)unaff_x26 * 8);
        unaff_x23 = uVar7;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c0720c0();
        _objc_release(unaff_x23);
        if ((unaff_x24 & 1) != 0) {
          _objc_retain(uVar7);
          goto LAB_108ef3c1c;
        }
        unaff_x26 = unaff_x26 + 1;
      } while (unaff_x21 != unaff_x26);
      unaff_x21 = param_1;
      func_0x00010bf52a60();
    } while (unaff_x21 != (undefined1 *)0x0);
  }
  uVar7 = 0;
LAB_108ef3c1c:
  _objc_release(param_1);
  _objc_release(param_2);
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  uVar8 = 0x108ef3c74;
  ___stack_chk_fail();
  puVar1 = &uStack_130;
  do {
    puVar6 = (undefined1 *)((long)puVar1 + -0x130);
    *(undefined8 *)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined8 *)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -0x50) = unaff_x26;
    *(long *)((long)puVar1 + -0x48) = unaff_x25;
    *(ulong *)((long)puVar1 + -0x40) = unaff_x24;
    *(ulong *)((long)puVar1 + -0x38) = unaff_x23;
    *(ulong *)((long)puVar1 + -0x30) = uVar7;
    *(undefined1 **)((long)puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)((long)puVar1 + -0x20) = param_2;
    *(undefined1 **)((long)puVar1 + -0x18) = param_1;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar3;
    *(undefined8 *)((long)puVar1 + -8) = uVar8;
    *(undefined8 *)((long)puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    param_1 = puVar5;
    _objc_retain();
    _objc_retain(puVar5);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      unaff_x25 = **(long **)((long)puVar1 + -0x120);
      unaff_x21 = puVar3;
      do {
        unaff_x26 = (undefined1 *)0x0;
        do {
          if (**(long **)((long)puVar1 + -0x120) != unaff_x25) {
            _objc_enumerationMutation(puVar2);
          }
          uVar7 = *(ulong *)(*(long *)((long)puVar1 + -0x128) + (long)unaff_x26 * 8);
          unaff_x23 = uVar7;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          puVar6 = puVar5;
          func_0x00010c0720c0();
          _objc_release(unaff_x23);
          if ((unaff_x24 & 1) != 0) {
            _objc_retain(uVar7);
            goto LAB_108ef3d78;
          }
          unaff_x26 = unaff_x26 + 1;
        } while (unaff_x21 != unaff_x26);
        unaff_x21 = puVar2;
        puVar6 = (undefined1 *)((long)puVar1 + -0x130);
        func_0x00010bf52a60();
      } while (unaff_x21 != (undefined1 *)0x0);
    }
    uVar7 = 0;
LAB_108ef3d78:
    _objc_release(puVar2);
    _objc_release(puVar5);
    puVar4 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x68))
    goto _objc_autoreleaseReturnValue;
    ___stack_chk_fail();
    *(ulong *)((long)puVar1 + -0x160) = uVar7;
    *(undefined1 **)((long)puVar1 + -0x158) = unaff_x21;
    *(undefined1 **)((long)puVar1 + -0x150) = puVar5;
    *(undefined1 **)((long)puVar1 + -0x148) = puVar2;
    *(undefined1 **)((long)puVar1 + -0x140) = (undefined1 *)((long)puVar1 + -0x10);
    *(code **)((long)puVar1 + -0x138) = FUN_108ef3dd0;
    puVar3 = (undefined1 *)((long)puVar1 + -0x140);
    _objc_retain(param_1);
    _objc_retain(puVar6);
    uVar8 = 0x108ef3e08;
    puVar1 = (undefined8 *)((long)puVar1 + -0x160);
    puVar2 = puVar4;
    puVar5 = puVar6;
    param_2 = puVar6;
    unaff_x21 = puVar4;
  } while( true );
}



/* Entry: 108ef3dd0; end: 108ef3e6b;  */

void FUN_108ef3dd0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x000108ef3c74(param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = param_2;
    func_0x000108ef3c74(param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    lVar1 = param_1;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108ef3e6c; end: 108ef3eaf;  */

void FUN_108ef3e6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000108ef3c74();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef3eb0; end: 108ef3ef3;  */

void FUN_108ef3eb0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e12b58);
  if ((int)param_1 != 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x105);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ef3ef4; end: 108ef421b;  */

void FUN_108ef3ef4(float param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == (undefined *)0x0) {
LAB_108ef40cc:
    puVar2 = param_2;
    func_0x00010c071ae0();
    if (((int)puVar2 != 0) || (puVar2 = param_2, func_0x00010c071ae0(), (int)puVar2 != 0)) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108ef41d4;
    }
    puVar1 = param_2;
    FUN_108ef3eb0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
  }
  else {
    puVar1 = param_5;
    func_0x00010bf41140();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((int)puVar1 != 3) {
      if ((int)puVar1 == 2) {
        func_0x00010bf40c40(param_5);
        func_0x00010bf41580(puVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108ef41d4;
      }
      goto LAB_108ef40cc;
    }
    if (param_6 == (undefined *)0x0) goto LAB_108ef40cc;
    puVar2 = param_5;
    func_0x00010c099480();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c257060();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((undefined *)0x1 < puVar1) {
      puVar2 = param_5;
      func_0x00010c099480(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c257040();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x000107c31908();
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar1 = PTR_PTR_1126ba2c0;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf41060(param_5);
      func_0x00010c0df820(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_5;
      func_0x00010c099480(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf02b40();
      func_0x00010bfcda80((double)param_1,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar4 = param_6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010bfcd9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(puVar3);
      if (puVar2 != (undefined *)0x0) goto LAB_108ef41d4;
      goto LAB_108ef40cc;
    }
    puVar1 = param_5;
    func_0x00010c099480(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c257040();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40c40();
    func_0x00010bf41580(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_108ef41d4:
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ef421c; end: 108ef4363;  */

void FUN_108ef421c(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ba318;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf40c40(param_3);
  func_0x00010bf41580(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40(param_3);
  _objc_release(param_3);
  func_0x00010bfffae0((double)param_1,puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ef4364; end: 108ef44cb;  */

void FUN_108ef4364(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x000108ef3c74(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bf41120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 != (undefined *)0x0) && (puVar1 != (undefined *)0x0)) {
    puVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bf41120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfcd9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar3 != (undefined *)0x0) goto LAB_108ef449c;
  }
  puVar1 = param_1;
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_2;
    FUN_108ef3eb0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar1);
      puVar3 = puVar1;
    }
    _objc_release(puVar1);
  }
  else {
    puVar3 = param_1;
    func_0x00010bf40c40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_108ef449c:
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ef44cc; end: 108ef46af;  */

void FUN_108ef44cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108ef46b0;
  uStack_70 = 0x108ef46c0;
  uStack_68 = 0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_retain(param_4);
    _objc_retain(param_1);
    _objc_retain(param_4);
    func_0x00010c0bf240(param_3);
    _objc_release(param_4);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_2);
    _objc_release(param_1);
    puVar1 = (undefined *)puStack_88[5];
    if (puVar1 != (undefined *)0x0) {
      _objc_retain(puVar1);
      goto LAB_108ef4640;
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
LAB_108ef4640:
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ef46b0; end: 108ef46c7;  */

void FUN_108ef46b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108ef46c8; end: 108ef475f;  */

void FUN_108ef46c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf613a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ef3ef4(uVar1,uVar2,param_2,param_5,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108ef4760; end: 108ef47bb;  */

void FUN_108ef4760(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_108ef4364();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ef47bc; end: 108ef497f;  */

void FUN_108ef47bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_108ef46b0;
  uStack_60 = 0x108ef46c0;
  uStack_58 = 0;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0bf240(param_3);
  puVar1 = PTR_PTR_1126ba2c0;
  puVar2 = (undefined *)puStack_78[5];
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad6a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ef4980; end: 108ef4cab;  */

void FUN_108ef4980(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = *(undefined **)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf613a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(uVar7);
  _objc_retain(param_3);
  puVar2 = param_6;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
LAB_108ef4a40:
    puVar4 = puVar1;
    func_0x00010c071ae0();
    if ((((ulong)puVar4 & 1) != 0) || (puVar4 = puVar1, func_0x00010c071ae0(), (int)puVar4 != 0)) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 != (undefined *)0x0) goto LAB_108ef4c2c;
    }
    puVar3 = puVar1;
    FUN_108ef3eb0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar4 = puVar3;
    }
LAB_108ef4c24:
    _objc_release(puVar3);
  }
  else {
    puVar3 = puVar2;
    func_0x00010bf41140();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((int)puVar3 == 3) {
      puVar4 = puVar2;
      func_0x00010c099480();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c257060();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      if ((undefined *)0x1 < puVar3) {
        puVar3 = puVar2;
        func_0x00010c099480(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c257040();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x000107c31908();
        _objc_release(puVar5);
        _objc_release(puVar3);
        puVar5 = PTR_PTR_1126ba2c0;
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf41060(puVar2);
        func_0x00010c0df820(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c099480(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf02b40();
        func_0x00010bfcda80((double)param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar3);
        goto LAB_108ef4c48;
      }
      puVar3 = puVar2;
      func_0x00010c099480(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c257040();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40c40();
      func_0x00010bf41580(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      goto LAB_108ef4c24;
    }
    if ((int)puVar3 != 2) goto LAB_108ef4a40;
    func_0x00010bf40c40(puVar2);
    func_0x00010bf41580(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_108ef4c2c:
  puVar5 = PTR_PTR_1126ba2c0;
  func_0x00010bfad6a0();
  _objc_retainAutoreleasedReturnValue();
LAB_108ef4c48:
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(puVar1);
  _objc_release(param_3);
  lVar8 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar5;
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 108ef4cac; end: 108ef4e13;  */

void FUN_108ef4cac(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar6);
  puVar1 = param_2;
  func_0x000108ef3c74(param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf41120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126ba2c0;
    if (puVar3 == (undefined *)0x0) {
      puVar2 = puVar6;
      FUN_108ef3eb0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar2);
        puVar3 = puVar2;
      }
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126ba2c0;
    }
    else {
      puVar3 = puVar1;
      func_0x00010bf40c40(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bfad6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf41120();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(puVar6);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ef4e14; end: 108ef5347;  */

undefined * FUN_108ef4e14(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long lVar10;
  undefined *puVar11;
  long unaff_x27;
  undefined *puVar12;
  undefined *unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
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
  puVar4 = param_2;
  _objc_retain();
  puVar7 = param_2;
  _objc_retain();
  FUN_108ef53f4();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar11 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    puVar12 = param_1;
    func_0x00010bf52a60();
    if (puVar12 != (undefined *)0x0) {
      unaff_x27 = *plStack_120;
      do {
        unaff_x28 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(param_1);
          }
          unaff_x24 = *(ulong *)(lStack_128 + (long)unaff_x28 * 8);
          unaff_x25 = unaff_x24;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c0720c0();
          _objc_release(unaff_x25);
          if ((unaff_x26 & 1) == 0) {
            func_0x00010befa120(puVar7);
          }
          unaff_x28 = unaff_x28 + 1;
        } while (puVar12 != unaff_x28);
        puVar12 = param_1;
        func_0x00010bf52a60();
      } while (puVar12 != (undefined *)0x0);
    }
    puVar12 = param_1;
    _objc_release(param_1);
    FUN_108ef53f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(puVar12);
    puVar12 = puVar7;
    func_0x00010bf51e00();
    _objc_release(puVar7);
  }
  else {
    _objc_retain(puVar11);
    puVar12 = puVar11;
  }
  _objc_release(puVar11);
  _objc_release(param_2);
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar6 = &uStack_260;
    uStack_138 = 0x108ef4ffc;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar4;
    puStack_190 = unaff_x28;
    lStack_188 = unaff_x27;
    uStack_180 = unaff_x26;
    uStack_178 = unaff_x25;
    uStack_170 = unaff_x24;
    puStack_168 = puVar12;
    puStack_160 = puVar7;
    puStack_158 = puVar11;
    puStack_150 = param_2;
    puStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(puVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    _objc_retain(puVar2);
    puVar11 = puVar2;
    func_0x00010bf52a60();
    if (puVar11 != (undefined *)0x0) {
      lVar10 = *plStack_250;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_250 != lVar10) {
            _objc_enumerationMutation(puVar2);
          }
          uVar8 = *(ulong *)(lStack_258 + (long)puVar12 * 8);
          uVar9 = uVar8;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar9;
          func_0x00010c0720c0();
          _objc_release(uVar9);
          if ((uVar3 & 1) == 0) {
            func_0x00010c0d5140();
            _objc_retainAutoreleasedReturnValue();
            if (uVar8 != 0) {
              func_0x00010befa120(puVar7);
            }
            _objc_release(uVar8);
          }
          puVar12 = puVar12 + 1;
        } while (puVar11 != puVar12);
        puVar11 = puVar2;
        puVar6 = &uStack_260;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar12 = puVar7;
    func_0x00010bf51e00();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(puVar5);
      _objc_retain(puVar6);
      puVar7 = puVar5;
      func_0x00010bf529e0();
      puVar11 = puVar2;
      func_0x00010bf529e0();
      if ((puVar7 == puVar11) &&
         (puVar7 = puVar5, func_0x00010bf529e0(), puVar7 != (undefined *)0x0)) {
        _objc_retain(puVar5);
        puVar7 = puVar5;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar7 != (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar5);
            }
            uVar9 = *(ulong *)((long)puVar11 * 8);
            func_0x00010c0720c0();
            if ((uVar9 & 1) == 0) {
              puVar4 = puVar2;
              func_0x00010bf51e00();
              puVar12 = puVar4;
              func_0x000108ef3c74();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(puVar4);
              if (puVar12 == (undefined *)0x0) {
                puVar7 = (undefined *)0x0;
                goto LAB_108ef52e8;
              }
            }
            puVar11 = puVar11 + 1;
          } while (puVar7 != puVar11);
          puVar7 = puVar5;
          func_0x00010bf52a60();
        }
        puVar7 = (undefined *)0x1;
LAB_108ef52e8:
        _objc_release(puVar5);
      }
      else {
        puVar7 = (undefined *)0x0;
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return puVar7;
      }
      ___stack_chk_fail();
      puVar12 = PTR_PTR_1126d78b8;
      _objc_retain();
      _objc_alloc(puVar12);
      puVar7 = puVar2;
      func_0x00010bf1a5c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d0e40();
      puVar11 = puVar2;
      func_0x00010bf1a5c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010bf65700(puVar11);
      func_0x00010c02c8c0(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 108ef5348; end: 108ef53f3;  */

void FUN_108ef5348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d78b8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bf1a5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d0e40();
  uVar4 = param_1;
  func_0x00010bf1a5c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar5 = uVar4;
  func_0x00010bf65700(uVar4);
  func_0x00010c02c8c0(puVar1,param_2,(uint)uVar3 & 0xff,(uint)uVar5 & 0xff);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ef53f4; end: 108ef5447;  */

void FUN_108ef53f4(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372ee28 != -1) {
    func_0x000107c27d9c(0x11372ee28,&PTR___NSConcreteGlobalBlock_110acac50);
  }
  uVar1 = uRam000000011372ee30;
  _objc_retain(uRam000000011372ee30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef5448; end: 108ef5473;  */

void FUN_108ef5448(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam000000011372ee30;
  puRam000000011372ee30 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ef5474; end: 108ef554f;  */

void FUN_108ef5474(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108ef5550;
  uStack_30 = 0x108ef5560;
  uStack_28 = 0;
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef5550; end: 108ef5567;  */

void FUN_108ef5550(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108ef5568; end: 108ef559f;  */

void FUN_108ef5568(long param_1,undefined8 param_2)

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



/* Entry: 108ef55a0; end: 108ef567b;  */

void FUN_108ef55a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108ef5550;
  uStack_30 = 0x108ef5560;
  uStack_28 = 0;
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef567c; end: 108ef56b3;  */

void FUN_108ef567c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108ef56b4; end: 108ef578f;  */

void FUN_108ef56b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_108ef5550;
  uStack_30 = 0x108ef5560;
  uStack_28 = 0;
  func_0x00010c0bf240(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef5790; end: 108ef57c7;  */

void FUN_108ef5790(long param_1,undefined8 param_2)

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



/* Entry: 108ef57c8; end: 108ef587f;  */

undefined1 FUN_108ef57c8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bf240(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ef5880; end: 108ef5893;  */

void FUN_108ef5880(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108ef5894; end: 108ef59a7;  */

void FUN_108ef5894(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_108ef5550;
    uStack_40 = 0x108ef5560;
    uStack_38 = 0;
    _objc_retain(param_2);
    func_0x00010c0bf240(param_1);
    uVar1 = puStack_58[5];
    _objc_retain(uVar1);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef59a8; end: 108ef5a3f;  */

void FUN_108ef59a8(long param_1)

{
  int iVar1;
  long lVar2;
  long in_x4;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(in_x4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    lVar2 = in_x4;
    func_0x00010c122dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = in_x4;
      func_0x00010c122dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(long *)(lVar4 + 0x28) = lVar2;
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 108ef5a40; end: 108ef5c93;  */

void FUN_108ef5a40(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_240 [8];
  long lStack_238;
  long lStack_230;
  long lStack_228;
  
  puVar6 = auStack_240;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    func_0x00010b656760(auStack_240,0);
    lVar2 = param_1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar1 = lStack_238;
    auStack_240[0] = 0;
    lStack_238 = lVar2;
    _objc_release(lVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar1 = lStack_230;
    auStack_240[0] = 0;
    lStack_230 = lVar2;
    _objc_release(lVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c0d5140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar1 = lStack_228;
    auStack_240[0] = 0;
    lStack_228 = lVar2;
    _objc_release(lVar1);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b14b8;
    _objc_alloc(PTR_PTR_1126b14b8);
    lVar1 = param_1;
    func_0x00010bf1acc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf1c0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf1c000(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf1af00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0(puVar3);
    func_0x00010b6570f8(auStack_240,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010b656cf8(auStack_240);
    _objc_retainAutoreleasedReturnValue();
    FUN_108c0bf38(auStack_240);
    puVar7 = puVar6;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108ef5c94; end: 108ef5cab;  */

void FUN_108ef5c94(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f03bd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f03bd8,
                      &PTR____CFConstantStringClassReference_110f03bf8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108ef5cac; end: 108ef5d53;  */

void FUN_108ef5cac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  puVar1 = &UNK_10f5285f7;
  func_0x000107c31820(&UNK_10f5285f7);
  puVar2 = puVar1;
  func_0x00010b0af2fc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf446e0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108ef5d54; end: 108ef601f;  */

void FUN_108ef5d54(undefined *param_1,undefined8 param_2)

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
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain();
  puVar1 = &UNK_10f52861e;
  func_0x000107c31820();
  puVar2 = param_1;
  func_0x00010c246d00(param_1,param_2,PTR_s_caseInsensitiveCompare__1125aa560);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_108ef70f0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar4 == (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c0d3c80(param_1);
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d440(puVar5,param_2,puVar3);
    _objc_release(puVar3);
    puVar6 = puVar5;
    func_0x00010bf51e00(puVar5);
    puVar7 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_opt_new();
    puVar8 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    _objc_opt_new();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108ef6020;
    puStack_88 = &UNK_11088c820;
    _objc_retain(puVar7);
    puStack_80 = puVar7;
    _objc_retain(puVar8);
    puStack_78 = puVar8;
    func_0x00010bf97e80(puVar6,param_2,&puStack_a0);
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puStack_d8 = puVar3;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_108ef60b4;
    puStack_c0 = &UNK_11089d0d8;
    _objc_retain(puVar7);
    puStack_b8 = puVar7;
    _objc_retain(puVar8);
    puStack_b0 = puVar8;
    _objc_retain(puVar9);
    puVar3 = puVar6;
    puStack_a8 = puVar9;
    func_0x00010bf97e80(puVar6,param_2,&puStack_d8);
    FUN_108ef70f0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf51e00(puVar9);
    func_0x00010c1d0560(puVar3,param_2,puVar10,puVar2);
    _objc_release(puVar10);
    _objc_release(puVar3);
    puVar3 = puVar9;
    func_0x00010bf51e00(puVar9);
    _objc_release(puStack_a8);
    _objc_release(puStack_b0);
    _objc_release(puStack_b8);
    _objc_release(puVar9);
    _objc_release(puStack_78);
    _objc_release(puStack_80);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    _objc_retain(puVar4);
    puVar3 = puVar4;
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ef6020; end: 108ef60b3;  */

void FUN_108ef6020(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2c18;
  _objc_retain(param_2);
  func_0x00010bfb1120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2c18;
  func_0x00010c22d920(PTR_PTR_1126b2c18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ef60b4; end: 108ef6187;  */

void FUN_108ef60b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b2c18;
  func_0x00010bfb1120(PTR_PTR_1126b2c18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2c18;
  func_0x00010c22d920(PTR_PTR_1126b2c18);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf52b00();
  func_0x00010bf52b00();
  if (lVar3 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ef6188; end: 108ef620b;  */

void FUN_108ef6188(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ef620c; end: 108ef62cf;  */

void FUN_108ef620c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = &UNK_10f528663;
  func_0x000107c31820(&UNK_10f528663);
  uVar2 = param_2;
  FUN_108ef62d0(param_1,0x7fefffffffffffff,param_2,param_3,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31828(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ef62d0; end: 108ef70ef;  */

void FUN_108ef62d0(double param_1,double param_2,undefined **param_3,undefined **param_4,int param_5
                  ,int param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  double dVar19;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_120;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  puVar2 = &UNK_10f528680;
  func_0x000107c31820();
  _objc_retain(param_4);
  ppuVar3 = param_3;
  func_0x00010bf51e00();
  pcVar4 = (code *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b8 = ppuVar3;
  ppuStack_b0 = param_4;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_a8 = pcVar4;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar5;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_98 = ppuVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(ppuVar6);
  _objc_release(puVar5);
  _objc_release(pcVar4);
  _objc_release();
  FUN_108ef7170();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  if (ppuVar6 != (undefined **)0x0) {
    _objc_retain(ppuVar6);
    goto LAB_108ef6fc0;
  }
  func_0x00010b0af2fc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = param_3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  if (param_6 != 0) {
    dVar19 = 1.79769313486232e+308;
    func_0x00010c14dd00(param_1,ppuVar8);
    if (dVar19 <= param_2) goto LAB_108ef6488;
LAB_108ef64b8:
    _objc_retain(param_3);
    puVar5 = &UNK_10f528648;
    func_0x000107c31820(&UNK_10f528648);
    ppuVar6 = param_3;
    FUN_108ef5d54();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b8 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_b0 = (undefined **)0xc2000000;
    pcStack_a8 = FUN_108ef6188;
    puStack_a0 = &UNK_110894890;
    _objc_retain();
    ppuVar3 = param_3;
    ppuStack_98 = ppuVar6;
    func_0x000107c31908(param_3,&ppuStack_b8);
    _objc_release(ppuStack_98);
    _objc_release(ppuVar6);
    func_0x000107c31828(puVar5);
    _objc_release(param_3);
    ppuVar9 = ppuVar3;
    FUN_108ef5cac();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      if (param_6 == 0) {
        dVar19 = 1.79769313486232e+308;
        func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff,ppuVar9);
        if (param_1 < dVar19) goto LAB_108ef65bc;
      }
      else {
        dVar19 = 1.79769313486232e+308;
        func_0x00010c14dd00(param_1,ppuVar9);
        if (param_2 < dVar19) {
LAB_108ef65bc:
          _objc_retain(ppuVar3);
          _objc_retain(param_4);
          puStack_168 = &UNK_10f5286a7;
          func_0x000107c31820();
          func_0x00010bcbe380("APPSTORE",0x11372ee60,&PTR___NSConcreteGlobalBlock_110acace0);
          bVar1 = bRam000000011372ee38;
          ppuVar10 = ppuVar3;
          func_0x00010c0d3c80();
          lVar18 = -1;
          ppuVar17 = &PTR____CFConstantStringClassReference_110daafd8;
          ppuVar14 = (undefined **)0x0;
          do {
            ppuVar6 = ppuVar10;
            func_0x00010bf51e00();
            ppuVar11 = ppuVar6;
            FUN_108ef5cac();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar17);
            _objc_release(ppuVar6);
            if (param_6 == 0) {
              dVar19 = 1.79769313486232e+308;
              func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff,ppuVar11);
              if (dVar19 <= param_1) goto LAB_108ef669c;
            }
            else {
              dVar19 = 1.79769313486232e+308;
              func_0x00010c14dd00(param_1,ppuVar11);
              if (dVar19 <= param_2) {
LAB_108ef669c:
                ppuVar13 = ppuVar14;
                if (lVar18 == 0) {
                  ppuVar6 = ppuVar14;
                  func_0x00010c08fa60();
                  ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                  ppuStack_120 = ppuVar6;
                  if ((undefined **)0x1 < ppuVar6) {
                    ppuStack_120 = (undefined **)0x2;
                  }
                  if ((bVar1 & 1) == 0) {
                    func_0x000108ef7250();
                    _objc_retainAutoreleasedReturnValue();
                    ppuStack_148 = ppuVar6;
                  }
                  else {
                    func_0x000108ef7238();
                    _objc_retainAutoreleasedReturnValue();
                    ppuStack_150 = ppuVar6;
                  }
                  ppuVar6 = ppuVar14;
                  func_0x00010c260c80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c14de00();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                  if ((bVar1 & 1) == 0) {
                    _objc_release(ppuStack_148);
                    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                    func_0x00010bf0a140();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    _objc_release(ppuStack_150);
                    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
                    ppuStack_b8 = ppuVar17;
                    ppuStack_b0 = ppuVar11;
                    func_0x00010bf0a140();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  ppuVar12 = ppuVar6;
                  FUN_108ef5cac();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                  if (param_6 == 0) {
                    dVar19 = 1.79769313486232e+308;
                    func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff,ppuVar12);
                    if (dVar19 <= param_1) goto LAB_108ef6be0;
                  }
                  else {
                    dVar19 = 1.79769313486232e+308;
                    func_0x00010c14dd00(param_1,ppuVar12);
                    if (dVar19 <= param_2) {
LAB_108ef6be0:
                      _objc_retain(ppuVar12);
                      ppuVar6 = ppuVar12;
                      goto LAB_108ef6bf0;
                    }
                  }
                }
                else {
                  if (lVar18 == -1) {
                    _objc_retain(ppuVar11);
                    ppuVar6 = ppuVar11;
                    goto LAB_108ef6f48;
                  }
                  ppuVar6 = ppuVar14;
                  func_0x00010c08fa60();
                  ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                  ppuStack_120 = ppuVar6;
                  if ((undefined **)0x1 < ppuVar6) {
                    ppuStack_120 = (undefined **)0x2;
                  }
                  if ((bVar1 & 1) == 0) {
                    func_0x000108ef7250();
                    _objc_retainAutoreleasedReturnValue();
                    ppuStack_160 = ppuVar6;
                  }
                  else {
                    func_0x000108ef7238();
                    _objc_retainAutoreleasedReturnValue();
                    ppuStack_158 = ppuVar6;
                  }
                  ppuVar6 = ppuVar14;
                  func_0x00010c260c80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c14de00();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar6);
                  if ((bVar1 & 1) == 0) {
                    ppuStack_140 = ppuStack_160;
                    _objc_release();
                    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x000108ef7280();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    ppuStack_138 = ppuStack_158;
                    _objc_release();
                    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x000108ef7268();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  func_0x00010c14de00();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar6 = ppuStack_138;
                  if ((bVar1 & 1) == 0) {
                    ppuVar6 = ppuStack_140;
                  }
                  _objc_release(ppuVar6);
                  if (param_6 == 0) {
                    dVar19 = 1.79769313486232e+308;
                    func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff,ppuVar12);
                    if (dVar19 <= param_1) goto LAB_108ef6d7c;
                  }
                  else {
                    dVar19 = 1.79769313486232e+308;
                    func_0x00010c14dd00(param_1,ppuVar12);
                    if (dVar19 <= param_2) {
LAB_108ef6d7c:
                      _objc_retain(ppuVar12);
                      ppuVar6 = ppuVar12;
                      goto LAB_108ef6d88;
                    }
                  }
                }
                _objc_release(ppuVar12);
                _objc_release(ppuVar17);
              }
            }
            ppuVar13 = ppuVar10;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar14);
            func_0x00010c12cd60(ppuVar10);
            ppuVar12 = ppuVar10;
            func_0x00010bf529e0();
            ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            lVar18 = lVar18 + 1;
            ppuVar17 = ppuVar11;
            ppuVar14 = ppuVar13;
          } while (ppuVar12 != (undefined **)0x0);
          if ((bVar1 & 1) == 0) {
            func_0x000108ef72b0();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x000108ef7298();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar12);
          ppuVar17 = ppuVar13;
          func_0x00010c08fa60();
          if (((undefined **)0x2 < ppuVar17) &&
             (ppuVar17 = ppuVar13, func_0x00010c08fa60(), 1 < (long)ppuVar17 + -1)) {
            do {
              ppuVar14 = ppuVar6;
              if (param_6 == 0) {
                dVar19 = 1.79769313486232e+308;
                func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff);
                if (dVar19 <= param_1) break;
              }
              else {
                dVar19 = 1.79769313486232e+308;
                func_0x00010c14dd00(param_1);
                if (dVar19 <= param_2) break;
              }
              ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              if ((bVar1 & 1) == 0) {
                func_0x000108ef7250();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_120 = ppuVar14;
              }
              else {
                func_0x000108ef7238();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_138 = ppuVar14;
              }
              ppuVar17 = (undefined **)((long)ppuVar17 + -1);
              ppuVar14 = ppuVar13;
              func_0x00010c260c80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar14);
              if ((bVar1 & 1) == 0) {
                ppuVar15 = ppuStack_120;
                _objc_release();
                ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                if (lVar18 == 0) goto LAB_108ef6b94;
                func_0x000108ef72b0();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_140 = ppuVar15;
LAB_108ef6b60:
                func_0x00010c14de00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar6);
                ppuVar15 = ppuStack_148;
                ppuVar6 = ppuVar14;
                if ((bVar1 & 1) == 0) {
                  ppuVar15 = ppuStack_140;
                }
              }
              else {
                ppuVar15 = ppuStack_138;
                _objc_release();
                ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                if (lVar18 != 0) {
                  func_0x000108ef7298();
                  _objc_retainAutoreleasedReturnValue();
                  ppuStack_148 = ppuVar15;
                  goto LAB_108ef6b60;
                }
LAB_108ef6b94:
                _objc_retain(ppuVar12);
                ppuVar15 = ppuVar6;
                ppuVar6 = ppuVar12;
              }
              _objc_release(ppuVar15);
              _objc_release(ppuVar12);
            } while (2 < (long)ppuVar17);
          }
          goto LAB_108ef6f48;
        }
      }
    }
    _objc_retain(ppuVar9);
    ppuVar6 = ppuVar9;
    goto LAB_108ef6f7c;
  }
  dVar19 = 1.79769313486232e+308;
  func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff,ppuVar8);
  if (param_1 < dVar19) goto LAB_108ef64b8;
LAB_108ef6488:
  ppuVar3 = ppuVar8;
  _objc_retain(ppuVar8);
  ppuVar6 = ppuVar8;
  goto LAB_108ef6f8c;
LAB_108ef6d88:
  ppuVar15 = ppuVar12;
  if (param_6 == 0) {
    dVar19 = 1.79769313486232e+308;
    func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff,ppuVar15);
    if (param_1 < dVar19) goto LAB_108ef6f38;
  }
  else {
    dVar19 = 1.79769313486232e+308;
    func_0x00010c14dd00(param_1,ppuVar15);
    if (param_2 < dVar19) goto LAB_108ef6f38;
  }
  ppuVar12 = ppuVar14;
  func_0x00010c08fa60();
  if (ppuVar12 <= ppuStack_120) goto LAB_108ef6f38;
  _objc_retain(ppuVar15);
  _objc_release();
  ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((bVar1 & 1) == 0) {
    func_0x000108ef7250();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_150 = ppuVar6;
  }
  else {
    func_0x000108ef7238();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_148 = ppuVar6;
  }
  ppuVar6 = ppuVar14;
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar17);
  _objc_release(ppuVar6);
  if ((bVar1 & 1) == 0) {
    ppuStack_140 = ppuStack_150;
    _objc_release();
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108ef7280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuStack_138 = ppuStack_148;
    _objc_release();
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108ef7268();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar15);
  ppuVar6 = ppuStack_138;
  if ((bVar1 & 1) == 0) {
    ppuVar6 = ppuStack_140;
  }
  _objc_release(ppuVar6);
  ppuStack_120 = (undefined **)((long)ppuStack_120 + 1);
  ppuVar6 = ppuVar15;
  ppuVar17 = ppuVar16;
  goto LAB_108ef6d88;
LAB_108ef6f38:
  _objc_release(ppuVar15);
  _objc_release(ppuVar17);
  goto LAB_108ef6f48;
LAB_108ef6bf0:
  ppuVar15 = ppuVar12;
  if (param_6 == 0) {
    dVar19 = 1.79769313486232e+308;
    func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff,ppuVar15);
    if (param_1 < dVar19) goto LAB_108ef6f24;
  }
  else {
    dVar19 = 1.79769313486232e+308;
    func_0x00010c14dd00(param_1,ppuVar15);
    if (param_2 < dVar19) goto LAB_108ef6f24;
  }
  ppuVar12 = ppuVar14;
  func_0x00010c08fa60();
  if (ppuVar12 <= ppuStack_120) goto LAB_108ef6f24;
  _objc_retain(ppuVar15);
  _objc_release();
  ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((bVar1 & 1) == 0) {
    func_0x000108ef7250();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_140 = ppuVar6;
  }
  else {
    func_0x000108ef7238();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_138 = ppuVar6;
  }
  ppuVar6 = ppuVar14;
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar17);
  _objc_release(ppuVar6);
  if ((bVar1 & 1) == 0) {
    _objc_release(ppuStack_140);
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(ppuStack_138);
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar12 = ppuVar6;
  FUN_108ef5cac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar15);
  _objc_release(ppuVar6);
  ppuStack_120 = (undefined **)((long)ppuStack_120 + 1);
  ppuVar6 = ppuVar15;
  ppuVar17 = ppuVar16;
  goto LAB_108ef6bf0;
LAB_108ef6f24:
  _objc_release(ppuVar15);
  _objc_release(ppuVar17);
LAB_108ef6f48:
  _objc_release(ppuVar13);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  func_0x000107c31828(puStack_168);
  _objc_release(param_4);
  _objc_release(ppuVar3);
LAB_108ef6f7c:
  _objc_release(ppuVar9);
  _objc_release(ppuVar3);
LAB_108ef6f8c:
  FUN_108ef7170();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(ppuVar3);
  _objc_retain(ppuVar6);
  _objc_release(ppuVar8);
LAB_108ef6fc0:
  _objc_release(ppuVar6);
  _objc_release(puVar7);
  func_0x000107c31828(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    func_0x000107c31828(puStack_168);
    func_0x000107c31828(puVar2);
    __Unwind_Resume(param_3);
    if (lRam000000011372ee40 != -1) {
      func_0x000107c27d9c(0x11372ee40,&PTR___NSConcreteGlobalBlock_110acaca0);
    }
    ppuVar6 = ppuRam000000011372ee48;
    _objc_retain(ppuRam000000011372ee48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 108ef70f0; end: 108ef7143;  */

void FUN_108ef70f0(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372ee40 != -1) {
    func_0x000107c27d9c(0x11372ee40,&PTR___NSConcreteGlobalBlock_110acaca0);
  }
  uVar1 = uRam000000011372ee48;
  _objc_retain(uRam000000011372ee48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef7144; end: 108ef716f;  */

void FUN_108ef7144(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam000000011372ee48;
  puRam000000011372ee48 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ef7170; end: 108ef71c3;  */

void FUN_108ef7170(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372ee50 != -1) {
    func_0x000107c27d9c(0x11372ee50,&PTR___NSConcreteGlobalBlock_110acacc0);
  }
  uVar1 = uRam000000011372ee58;
  _objc_retain(uRam000000011372ee58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ef71c4; end: 108ef71ef;  */

void FUN_108ef71c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam000000011372ee58;
  puRam000000011372ee58 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ef71f0; end: 108ef7237;  */

void FUN_108ef71f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  uRam000000011372ee38 = puVar2 == (undefined *)0x1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ef7238; end: 108ef72d3;  */

void FUN_108ef7238(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f03c38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f03c38,
                      &PTR____CFConstantStringClassReference_110f03c18,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}


