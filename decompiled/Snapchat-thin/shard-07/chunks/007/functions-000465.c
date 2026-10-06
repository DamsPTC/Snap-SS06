/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058abe58; end: 1058abe83; -[SCGalleryHighlightContentDataSource _numFeaturedStoriesInFirstNPositionToPrefetch] */

ulong FUN_1058abe58(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x140);
  func_0x00010c0b5020(uVar1,param_2,&PTR____CFConstantStringClassReference_110e099d8,10000,0);
  return uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 1058abe84; end: 1058abeaf; -[SCGalleryHighlightContentDataSource _minNumberOfSnapsToPrefetchForAllFeaturedStories] */

uint FUN_1058abe84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e099f8,0,0);
  return (uint)uVar1 & ((int)(uint)uVar1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 1058abeb0; end: 1058ac5bf; -[SCGalleryHighlightContentDataSource _preloadMediaForNewEntryIds:snapFeedSnapIdsToPrefetch:collections:context:completionBlock:] */

void FUN_1058abeb0(double param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))
                (0,param_8,0,0,0,0,0,0,&PTR____CFConstantStringClassReference_110e09b18,1,0,0,0);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar20 = *(undefined8 *)(param_2 + 0x20);
    *(undefined **)(param_2 + 0x20) = puVar3;
    _objc_release(uVar20);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar20 = *(undefined8 *)(param_2 + 0x28);
    *(undefined **)(param_2 + 0x28) = puVar3;
    _objc_release(uVar20);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1058ac5c0;
    puStack_98 = &UNK_1108bba28;
    uVar1 = param_4;
    uStack_90 = uVar20;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bf9e8;
    _objc_alloc();
    func_0x00010bffe1e0();
    puVar6 = puVar5;
    func_0x00010bfa3300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c0c4760();
    func_0x00010be653c0();
    func_0x00010be605c0();
    uVar21 = uVar1;
    func_0x00010bf529e0();
    if (uVar21 != 0) {
      uVar21 = 0;
      do {
        uVar7 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x000107e754b8();
        param_1 = param_1 * 10.0;
        FUN_1058b7314(*(undefined8 *)(param_2 + 0x180),(long)param_1);
        uVar8 = uVar7;
        func_0x00010bf977c0();
        lVar9 = (long)(int)uVar8;
        func_0x00010b5f5864(lVar9,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf9e140();
        _objc_retainAutoreleasedReturnValue();
        if (uVar8 != 0) {
          uVar10 = uVar7;
          func_0x00010bfa34a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar7;
          func_0x00010bfa3440();
          _objc_retainAutoreleasedReturnValue();
          uStack_d0 = 0xc2000000;
          pcStack_c8 = FUN_1058ac5d8;
          puStack_c0 = &UNK_1108bbf18;
          uVar16 = param_6;
          puStack_d8 = puVar3;
          uStack_b8 = uVar7;
          func_0x00010c14cca0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar16;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar16);
          lVar13 = param_2;
          func_0x00010be227e0();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar7;
          func_0x00010bf59960();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar7;
          func_0x00010bfa3220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
          puVar5 = PTR_PTR_1126af4d0;
          uVar16 = *(undefined8 *)(param_2 + 0x80);
          func_0x00010c269d40(uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7380();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar16);
          puVar17 = puVar5;
          func_0x00010bf529e0();
          uVar18 = uVar7;
          func_0x000107e7553c(uVar7,*(undefined8 *)(param_2 + 0x140));
          if ((int)uVar18 == 0) {
            _objc_initWeak(auStack_e0,param_2);
            uVar16 = 0;
            _dispatch_time(0,(long)puVar17 * 5000000000);
            uStack_158 = 0xc2000000;
            pcStack_150 = FUN_1058ac648;
            puStack_148 = &UNK_1108bba58;
            puStack_160 = puVar3;
            _objc_copyWeak(auStack_f8,auStack_e0);
            _objc_retain(param_8);
            lStack_100 = param_8;
            _objc_retain(uVar8);
            uStack_140 = uVar8;
            _objc_retain(puVar2);
            puStack_138 = puVar2;
            uStack_f0 = param_7;
            _objc_retain(lVar9);
            lStack_130 = lVar9;
            puStack_e8 = puVar17;
            _objc_retain(uVar10);
            uStack_128 = uVar10;
            _objc_retain(uVar11);
            uStack_120 = uVar11;
            uStack_118 = uVar14;
            uStack_110 = uVar15;
            lStack_108 = lVar13;
            func_0x00010058c530(uVar16,PTR___dispatch_main_q_11034be20,&puStack_160);
            puVar3 = puVar5;
            func_0x00010c0d3c80(puVar5);
            func_0x00010be77a00(param_2);
            _objc_release(puVar3);
            _objc_release(uStack_120);
            _objc_release(uStack_128);
            _objc_release(lStack_130);
            _objc_release(puStack_138);
            _objc_release(uStack_140);
            _objc_release(lStack_100);
            _objc_destroyWeak(auStack_f8);
            _objc_destroyWeak(auStack_e0);
          }
          else {
            func_0x00010c12d360(*(undefined8 *)(param_2 + 0x20));
            puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            _objc_release(puVar3);
            uVar19 = *(undefined8 *)(param_2 + 0x28);
            func_0x00010c0e00e0(uVar19);
            _objc_retainAutoreleasedReturnValue();
            uVar16 = uVar19;
            func_0x00010c2827c0();
            _objc_release(uVar19);
            (**(code **)(param_8 + 0x10))
                      (param_8,puVar17,uVar16,lVar9,uVar8,uVar10,uVar11,
                       &PTR____CFConstantStringClassReference_110e099b8,1,uVar14,uVar15,lVar13);
          }
          _objc_release(puVar5);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(lVar13);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          puVar3 = PTR___NSConcreteStackBlock_11034bd00;
        }
        _objc_release(uVar8);
        _objc_release(lVar9);
        _objc_release(uVar7);
        uVar21 = uVar21 + 1;
        uVar7 = uVar1;
        func_0x00010bf529e0();
      } while (uVar21 < uVar7);
    }
    _objc_release(puVar6);
    _objc_release(uVar1);
    _objc_release(uVar20);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1058ac5c0; end: 1058ac5d7;  */

void FUN_1058ac5c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa70b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126af4c0,PTR_s_fetchGalleryEntryWithEntryId_dat_1125c75d0,param_2,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1058ac5d8; end: 1058ac647;  */

undefined8 FUN_1058ac5d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf3fe40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9e140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1058ac648; end: 1058ac7f3;  */

void FUN_1058ac648(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar2 = param_2 + 0x68;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar8 = *(long *)(param_2 + 0x60);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x10))
                (0,lVar8,0,0,0,0,0,0,&PTR____CFConstantStringClassReference_110e09b38,1);
    }
  }
  else {
    iVar1 = (int)*(undefined8 *)(lVar2 + 0x20);
    func_0x00010bf4b900();
    if (iVar1 != 0) {
      func_0x00010c12d360(*(undefined8 *)(lVar2 + 0x20));
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar3);
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2827c0();
      _objc_release(uVar4);
      uVar6 = *(undefined8 *)(param_2 + 0x70);
      func_0x00010b5f0f80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar2 + 0x148);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c0c8b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b5f2144(param_1);
      _objc_release(uVar4);
      _objc_release(uVar7);
      (**(code **)(*(long *)(param_2 + 0x60) + 0x10))
                (param_1,*(long *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x78),uVar5,
                 *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x20),
                 *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
                 &PTR____CFConstantStringClassReference_110e09998,1);
      _objc_release(uVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1058ac7f4; end: 1058ac86b;  */

void FUN_1058ac7f4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 1058ac86c; end: 1058acba7; -[SCGalleryHighlightContentDataSource _preDownloadMediaForCurrentSnapAndContinueForSnap:externalId:featuredStoryTemplateName:featuredStoryLoggingInfo:galleryCollectionCategory:numberOfSnapsToPrefetch:snapToSnapDetailMap:snaps:startTime:totalSnapCount:activationDate:expirationDate:infoArray:snapFeedSnapIdsToPrefetch:completionBlock:] */

void FUN_1058ac86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_initWeak(auStack_70,param_1);
  func_0x00010bf529e0();
  _objc_copyWeak(auStack_88,auStack_70);
  _objc_retain(param_17);
  _objc_retain(param_4);
  _objc_retain(param_10);
  uStack_80 = param_12;
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  uStack_78 = param_8;
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  func_0x00010be779e0(param_1);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(param_17);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058acba8; end: 1058acccb;  */

void FUN_1058acba8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x80;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))
                (0,lVar4,0,0,0,0,0,0,&PTR____CFConstantStringClassReference_110e09b58,1,0,0,0);
    }
  }
  else {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c0e00e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x28));
      _objc_release(puVar3);
    }
    func_0x00010be77a00(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058acccc; end: 1058acddb;  */

void FUN_1058acccc(long param_1,long param_2)

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
  __Block_object_assign(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x80,param_2 + 0x80);
  return;
}



/* Entry: 1058acddc; end: 1058ace9b; -[SCGalleryHighlightContentDataSource _preloadLensIfNeededForSnapDoc:snapId:] */

void FUN_1058acddc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000107e64248();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x118);
    func_0x00010bf4b900();
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x1d0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x118));
        FUN_1058b738c(*(undefined8 *)(param_1 + 0x180),
                      &PTR____CFConstantStringClassReference_110de1318,
                      &PTR____CFConstantStringClassReference_110e09b78,1);
        func_0x00010c2a1bc0(lVar3);
      }
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058ace9c; end: 1058acedf; -[SCGalleryHighlightContentDataSource _forgetPreloadedSoundSyncTrackId:] */

void FUN_1058ace9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058acee0; end: 1058ad1af; -[SCGalleryHighlightContentDataSource _preloadSnapDocMediaForSnap:completion:] */

void FUN_1058acee0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b25c0;
  uVar5 = param_3;
  func_0x00010c23ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar2 = *(long *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0 || lVar2 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    uVar5 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be77a20(param_1);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be779a0(param_1);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x000108017660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    lVar4 = *(long *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x00010be06040(param_1);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x180);
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar6);
      _objc_initWeak(auStack_68,param_1);
      _objc_retain(uVar6);
      _objc_retain(uVar5);
      _objc_retain(param_3);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(puVar1);
      _objc_retain(param_4);
      func_0x00010c11d720(lVar4);
      _objc_release(param_4);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_70);
      _objc_release(param_3);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_68);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058ad1b0; end: 1058ad2ab;  */

void FUN_1058ad1b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = param_2;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_40,param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1058ad2ac; end: 1058ad393;  */

void FUN_1058ad2ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010be06040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  FUN_1058b738c(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110db9458,
                &PTR____CFConstantStringClassReference_110dfbe18,1);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddec80(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058ad37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1058ad394; end: 1058ad5b7; -[SCGalleryHighlightContentDataSource _downloadPreloadMediaForSnap:snapDoc:snapDocKey:completion:] */

void FUN_1058ad394(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
  else {
    FUN_1058b738c(*(undefined8 *)(param_1 + 0x180),&PTR____CFConstantStringClassReference_110db9458,
                  &PTR____CFConstantStringClassReference_110e09b78,1);
    uVar3 = *(undefined8 *)(param_1 + 0x180);
    _objc_retain(uVar3);
    puVar2 = auStack_68;
    _objc_initWeak(puVar2,param_1);
    func_0x000108017f48();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010bf89260(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058ad5b8; end: 1058ad67f;  */

void FUN_1058ad5b8(long param_1,int param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad2d8;
  }
  FUN_1058b738c(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110db9458,
                ppuVar1,1);
  if (param_2 != 0) {
    lVar2 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddec80(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058ad668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1058ad680; end: 1058ad79b; -[SCGalleryHighlightContentDataSource _claimPreloadedMediaForSnapDoc:snapDocKey:snapId:] */

/* WARNING: Removing unreachable block (ram,0x0001058ad748) */

void FUN_1058ad680(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010bf10640(lVar1);
      _objc_retain(0);
      FUN_1058b738c(*(undefined8 *)(param_1 + 0x180),
                    &PTR____CFConstantStringClassReference_110e09bb8,
                    &PTR____CFConstantStringClassReference_110dab0d8,1);
      _objc_release(0);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058ad79c; end: 1058ad7df;  */

bool FUN_1058ad79c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c09d820(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 1058ad7e0; end: 1058ad9df; -[SCGalleryHighlightContentDataSource _preloadSoundSyncIfNeededForMusicTrack:snapId:] */

void FUN_1058ad7e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfdc6e0();
  if (((int)lVar1 != 0) && (lVar1 = param_3, func_0x00010c277e80(), lVar1 != 0)) {
    uVar5 = *(ulong *)(param_1 + 0x128);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar2);
    if ((uVar5 & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x120);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x128);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar6);
        _objc_release(puVar2);
        FUN_1058b738c(*(undefined8 *)(param_1 + 0x180),
                      &PTR____CFConstantStringClassReference_110e09bd8,
                      &PTR____CFConstantStringClassReference_110e09b78,1);
        uVar6 = *(undefined8 *)(param_1 + 0x180);
        _objc_retain(uVar6);
        _objc_initWeak(auStack_58,param_1);
        lVar4 = lVar3;
        func_0x00010bfc7be0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar6);
        lStack_60 = lVar1;
        _objc_copyWeak(auStack_68,auStack_58);
        func_0x00010c297260(lVar4);
        _objc_release(lVar4);
        _objc_destroyWeak(auStack_68);
        _objc_release(uVar6);
        _objc_destroyWeak(auStack_58);
        _objc_release(uVar6);
      }
      _objc_release(lVar3);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058ad9e0; end: 1058ada5f;  */

void FUN_1058ad9e0(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_2 == 0 || param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad2d8;
  }
  FUN_1058b738c(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e09bd8,
                ppuVar1,1);
  if (param_2 != 0 && param_3 == 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be189c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058ada60; end: 1058adb47; -[SCGalleryHighlightContentDataSource _claimPreloadedMusicAudioAtURL:snapId:] */

void FUN_1058ada60(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e09bf8;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e09bf8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf39aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      ppuVar2 = &PTR____CFConstantStringClassReference_110dab0d8;
      if (lVar3 != 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110dad2d8;
      }
      FUN_1058b738c(*(undefined8 *)(param_1 + 0x180),
                    &PTR____CFConstantStringClassReference_110e09c18,ppuVar2,1);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058adb48; end: 1058ae11b; -[SCGalleryHighlightContentDataSource _preloadMusicAudioIfNeededForSnapDoc:snapId:] */

void FUN_1058adb48(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [136];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x000107e6408c();
  if ((int)lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x108);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x110);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 != 0) && (lVar3 != 0)) {
      FUN_1058b738c(*(undefined8 *)(param_1 + 0x180),
                    &PTR____CFConstantStringClassReference_110e09c38,
                    &PTR____CFConstantStringClassReference_110e09b78,1);
      uVar4 = *(undefined8 *)(param_1 + 0x180);
      _objc_retain();
      _objc_initWeak(auStack_f8,param_1);
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar11 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar11;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      lVar11 = lVar5;
      func_0x00010bf52a60();
      if (lVar11 != 0) {
        lVar13 = *plStack_130;
        do {
          lVar12 = 0;
          do {
            if (*plStack_130 != lVar13) {
              _objc_enumerationMutation(lVar5);
            }
            lVar16 = *(long *)(lStack_138 + lVar12 * 8);
            lVar6 = lVar16;
            func_0x00010c08c3a0();
            if ((int)lVar6 == 4) {
              lVar6 = lVar16;
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010c0840e0();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010bf96da0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar8;
              func_0x00010bf96ee0();
              _objc_release(lVar8);
              _objc_release(lVar7);
              _objc_release(lVar6);
              if ((int)lVar9 == 7) {
                func_0x00010bf5cc00();
                _objc_retainAutoreleasedReturnValue();
                lVar11 = lVar16;
                func_0x00010c0840e0();
                _objc_retainAutoreleasedReturnValue();
                lVar13 = lVar11;
                func_0x00010bf96da0();
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar13;
                func_0x00010c0d3a00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar13);
                _objc_release(lVar11);
                _objc_release(lVar16);
                _objc_release(lVar5);
                if (lVar12 == 0) goto LAB_1058ade2c;
                func_0x00010be77b80(param_1);
                lVar11 = lVar12;
                func_0x00010bf939e0();
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar11;
                func_0x00010bf4db80();
                _objc_retainAutoreleasedReturnValue();
                lVar13 = lVar5;
                func_0x00010c08fa60();
                puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
                if (lVar13 == 0) {
                  puVar15 = (undefined *)0x0;
                }
                else {
                  lVar13 = lVar12;
                  func_0x00010bf939e0(lVar12);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar13;
                  func_0x00010bf4db80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bdc3460();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar6);
                  _objc_release(lVar13);
                }
                _objc_release(lVar5);
                _objc_release(lVar11);
                uVar10 = *(undefined8 *)(param_1 + 8);
                func_0x00010c11de00(uVar10);
                _objc_retainAutoreleasedReturnValue();
                puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_178 = 0xc2000000;
                pcStack_170 = FUN_1058ae11c;
                puStack_168 = &UNK_1108bbb98;
                _objc_retain(uVar4);
                uStack_160 = uVar4;
                _objc_retain(param_4);
                lStack_158 = param_4;
                _objc_copyWeak(auStack_148,auStack_f8);
                _objc_retain(puVar15);
                lVar11 = lVar12;
                puStack_150 = puVar15;
                func_0x00010c135ec0(lVar3);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(uVar10);
                _objc_release(puStack_150);
                _objc_destroyWeak(auStack_148);
                _objc_release(lStack_158);
                _objc_release(uStack_160);
                _objc_release(puVar15);
                _objc_release(lVar12);
                goto LAB_1058ae048;
              }
            }
            lVar12 = lVar12 + 1;
          } while (lVar11 != lVar12);
          lVar11 = lVar5;
          func_0x00010bf52a60();
        } while (lVar11 != 0);
      }
      _objc_release(lVar5);
LAB_1058ade2c:
      puStack_1a8 = &uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a0 = 0x3032000000;
      pcStack_198 = FUN_1058a5518;
      uStack_190 = 0x1058a5528;
      puVar15 = PTR_PTR_1126b0018;
      _objc_alloc();
      func_0x00010c047840();
      uVar10 = *(undefined8 *)(param_1 + 8);
      puStack_188 = puVar15;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = puStack_1a8[5];
      _objc_retain(uVar4);
      _objc_retain(param_4);
      _objc_retain(lVar3);
      _objc_retain(uVar10);
      _objc_copyWeak(auStack_1b8,auStack_f8);
      lVar11 = 2;
      func_0x00010c13e8a0(uVar14);
      _objc_destroyWeak(auStack_1b8);
      _objc_release(uVar10);
      _objc_release(lVar3);
      _objc_release(param_4);
      _objc_release(uVar4);
      _objc_release(uVar10);
      __Block_object_dispose(&uStack_1b0,8);
      _objc_release(puStack_188);
LAB_1058ae048:
      _objc_destroyWeak(auStack_f8);
      _objc_release(uVar4);
    }
    _objc_release();
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_4 + 0x38);
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (lVar11 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad2d8;
  }
  FUN_1058b738c(*(undefined8 *)(param_3 + 0x20),&PTR____CFConstantStringClassReference_110e09c38,
                ppuVar1,1);
  if (lVar11 != 0) {
    return;
  }
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  func_0x00010bddeca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058ae11c; end: 1058ae18f;  */

void FUN_1058ae11c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad2d8;
  }
  FUN_1058b738c(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e09c38,
                ppuVar1,1);
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddeca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058ae190; end: 1058ae323;  */

void FUN_1058ae190(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _objc_release(uVar1);
  lVar3 = param_2;
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    FUN_1058b738c(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e09c38,
                  &PTR____CFConstantStringClassReference_110dad2d8,1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    _objc_copyWeak(auStack_68,param_1 + 0x48);
    func_0x00010c135ea0(uVar1);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058ae324; end: 1058ae3eb;  */

void FUN_1058ae324(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad2d8;
  }
  FUN_1058b738c(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e09c38,
                ppuVar1,1);
  if (param_3 == 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    uVar2 = param_2;
    func_0x00010c0f9ac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddeca0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058ae3ec; end: 1058aec4b; -[SCGalleryHighlightContentDataSource _preloadMediaIfNeededForSnaps:totalSnapCount:galleryCollectionCategory:startTime:externalId:featuredStoryTemplateName:featuredStoryLoggingInfo:snapToSnapDetailMap:numberOfSnapsToPrefetch:activationDate:expirationDate:infoArray:snapFeedSnapIdsToPrefetch:completionBlock:] */

void FUN_1058ae3ec(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,long param_11,long param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,ulong param_16,long param_17)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010bf4b900();
  if (iVar1 == 0) goto LAB_1058aeba0;
  uVar3 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  iVar2 = (int)*(undefined8 *)(param_2 + 0x140);
  func_0x000108ec1ba8();
  uVar4 = param_4;
  func_0x00010bf529e0();
  uVar5 = param_4;
  func_0x00010bf529e0();
  iVar1 = 0;
  if (param_12 <= (long)(param_5 + ~uVar4)) {
    iVar1 = iVar2;
  }
  if ((uVar5 == 0) || (iVar1 != 0)) {
    uVar5 = uVar3;
    func_0x00010bf8b0c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_16;
    func_0x00010bf4b900();
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) goto LAB_1058ae574;
    lVar10 = param_11;
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x80);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 0xc2000000;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1058aec4c;
      puStack_88 = &UNK_110842e18;
      _objc_retain(param_11);
      lStack_80 = param_11;
      func_0x00010c0f8520(uVar7);
      _objc_release(uVar7);
      _objc_release(lStack_80);
    }
    uVar7 = *(undefined8 *)(param_2 + 0x160);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa3360();
    _objc_release(uVar7);
    if (param_17 != 0) {
      puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar11);
      func_0x00010c12d360(*(undefined8 *)(param_2 + 0x20));
      uVar12 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c0e00e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar12;
      func_0x00010c2827c0();
      _objc_release(uVar12);
      (**(code **)(param_17 + 0x10))
                (param_1,param_17,param_5,uVar7,param_6,param_8,param_9,param_10,0,1,param_13,
                 param_14,param_15);
    }
  }
  else {
LAB_1058ae574:
    func_0x00010c12d360(param_4);
    puVar11 = PTR_PTR_1126af4d0;
    uVar5 = uVar3;
    func_0x00010bf8b0c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x80);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
    puVar8 = PTR_PTR_1126bc7b8;
    if (puVar11 == (undefined *)0x0) {
      func_0x00010be77a00(param_2);
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x80);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar9 = *(ulong *)(param_2 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010c13a8c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c06cde0();
      _objc_release(uVar5);
      _objc_release(uVar9);
      if ((uVar6 & 1) == 0) {
        if ((long)(param_5 + ~uVar4) < param_12) {
          iVar1 = (int)*(undefined8 *)(param_2 + 0x140);
          func_0x000108ec0e58();
          if (iVar1 != 0) {
            func_0x00010c1d0640(param_11);
            _objc_initWeak(auStack_a8,param_2);
            uVar7 = *(undefined8 *)(param_2 + 0xe8);
            func_0x00010c269d40(uVar7);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = *(undefined8 *)(param_2 + 8);
            func_0x00010c11de00(uVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_c0,auStack_a8);
            _objc_retain(param_17);
            _objc_retain(uVar3);
            _objc_retain(param_8);
            _objc_retain(param_9);
            _objc_retain(param_10);
            _objc_retain(param_6);
            lStack_b8 = param_12;
            _objc_retain(param_11);
            _objc_retain(param_4);
            _objc_retain(param_7);
            lStack_b0 = param_5;
            _objc_retain(param_13);
            _objc_retain(param_14);
            _objc_retain(param_15);
            _objc_retain(param_16);
            func_0x00010c25c540(uVar7);
            _objc_release(uVar12);
            _objc_release(uVar7);
            _objc_release(param_16);
            _objc_release(param_15);
            _objc_release(param_14);
            _objc_release(param_13);
            _objc_release(param_7);
            _objc_release(param_4);
            _objc_release(param_11);
            _objc_release(param_6);
            _objc_release(param_10);
            _objc_release(param_9);
            _objc_release(param_8);
            _objc_release(uVar3);
            _objc_release(param_17);
            _objc_destroyWeak(auStack_c0);
            _objc_destroyWeak(auStack_a8);
            goto LAB_1058aeb80;
          }
        }
        func_0x00010be76ae0(param_2);
      }
      else if (puVar8 == (undefined *)0x0) {
        func_0x00010be77a00(param_2);
      }
      else {
        uVar7 = *(undefined8 *)(param_2 + 0x98);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080199ec(uVar3,puVar11,0,0,1,uVar7);
        _objc_release(uVar7);
        func_0x00010c1d0640(param_11);
        func_0x00010be77a00(param_2);
      }
LAB_1058aeb80:
      _objc_release(puVar8);
    }
    _objc_release(puVar11);
  }
  _objc_release(uVar3);
LAB_1058aeba0:
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1058aec4c; end: 1058aec5b;  */

void FUN_1058aec4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_enumerateKeysAndObjectsUsingBloc_1125c38e0,
             &PTR___NSConcreteGlobalBlock_1108bbc48);
  return;
}



/* Entry: 1058aec5c; end: 1058aed57;  */

void FUN_1058aec5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bf8f8;
  _objc_retain(param_2);
  func_0x00010c2aebe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1d0720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126bf8e8;
  func_0x00010bf5a9e0(PTR_PTR_1126bf8e8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0fd8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c580(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1058aed58; end: 1058af0db;  */

void FUN_1058aed58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))
                (0,lVar2,0,0,0,0,0,0,&PTR____CFConstantStringClassReference_110e09c58,1);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar15);
    uVar16 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar16);
    uVar17 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar17);
    uVar18 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar18);
    uVar19 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(uVar19);
    uVar20 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar20);
    uVar21 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar21);
    uVar22 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar22);
    uVar23 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar23);
    uVar24 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar24);
    uVar25 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar25);
    uVar26 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar26);
    uVar27 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar27);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar3);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar3);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058af0dc; end: 1058af1ef;  */

void FUN_1058af0dc(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c234fe0();
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    _objc_release(puVar2);
    func_0x00010be77a00(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be76ae0();
  }
  return;
}



/* Entry: 1058af1f0; end: 1058af30b;  */

void FUN_1058af1f0(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),7);
  return;
}



/* Entry: 1058af30c; end: 1058af35b;  */

void FUN_1058af30c(long param_1,undefined8 param_2)

{
  func_0x00010be77a00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 1058af35c; end: 1058af3e7;  */

void FUN_1058af35c(long param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),7);
  return;
}



/* Entry: 1058af3e8; end: 1058af55f; -[SCGalleryHighlightContentDataSource _preloadMediaIfNeeded:index:numberOfSnapsToPrefetch:completionBlock:] */

void FUN_1058af3e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_4 < param_5) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010bf89240(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(puVar3);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  else if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,1,0);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1058af560; end: 1058af573;  */

void FUN_1058af560(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058af56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1058af574; end: 1058afd53; -[SCGalleryHighlightContentDataSource _persistServletCollections:snapIds:snapIdsToServletSnapsMap:titleSnapIds:profile:] */

undefined *
FUN_1058af574(undefined **param_1,uint param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  long lVar25;
  undefined *puVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  ulong uVar30;
  long lVar31;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x000107e6b3d4();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = &PTR___NSConcreteGlobalBlock_1108bbd28;
  uVar3 = param_3;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar27 = uVar3;
  func_0x00010bf529e0();
  if (uVar27 != 0) {
    uVar27 = 0;
    do {
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar9 = uVar4;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar10 != 0) {
        uVar30 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar9);
          }
          lVar28 = *(long *)(uVar30 * 8);
          lVar11 = lVar28;
          func_0x00010bf393a0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010c08fa60();
          _objc_release(lVar11);
          if (lVar12 != 0) {
            lVar13 = lVar28;
            func_0x00010c245680();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar13;
            func_0x00010bf52a60();
            lVar12 = lRam0000000000000000;
            while (lVar11 != 0) {
              lVar31 = 0;
              do {
                if (lRam0000000000000000 != lVar12) {
                  _objc_enumerationMutation(lVar13);
                }
                uVar29 = *(undefined8 *)(lVar31 * 8);
                lVar14 = lVar28;
                func_0x00010bf393a0(lVar28);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c241220(uVar29);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar8);
                _objc_release(uVar29);
                _objc_release(lVar14);
                lVar31 = lVar31 + 1;
              } while (lVar11 != lVar31);
              lVar11 = lVar13;
              func_0x00010bf52a60();
            }
            _objc_release(lVar13);
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar10);
        uVar10 = uVar9;
        func_0x00010bf52a60();
      }
      _objc_release(uVar9);
      puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar6);
      _objc_retain(uVar4);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(puVar8);
      _objc_retain(puVar18);
      _objc_retain(puVar19);
      _objc_retain(puVar16);
      _objc_retain(puVar17);
      _objc_retain(uVar5);
      _objc_retain(param_7);
      _objc_retain(puVar15);
      _objc_retain(puVar7);
      func_0x00010bf97e80(uVar5);
      puVar20 = puVar15;
      func_0x00010bf529e0();
      if (puVar20 != (undefined *)0x0) {
        puVar20 = param_1[0xf];
        func_0x00010c269d40(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9aa0();
        _objc_release(puVar20);
      }
      puVar20 = puVar16;
      func_0x00010bf529e0();
      if (puVar20 != (undefined *)0x0) {
        puVar20 = param_1[0xf];
        func_0x00010c269d40(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f20();
        _objc_release(puVar20);
      }
      puVar20 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bf529e0(puVar7);
      func_0x00010bfed320(puVar20);
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = param_1;
      func_0x00010be0aa00();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar5;
      func_0x00010b7043dc(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206280(ppuVar21);
      _objc_release(uVar29);
      func_0x00010c066e00(ppuVar21);
      param_2 = 0;
      puVar22 = puVar19;
      func_0x00010b5fbcec(puVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2062c0(ppuVar21);
      _objc_release(puVar22);
      uVar10 = uVar4;
      func_0x00010bf33360();
      if (uVar10 == 0x44) {
        func_0x00010c1b1a80(ppuVar21);
        uVar10 = uVar4;
        func_0x00010bf3fe40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar10;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar30 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar10);
        if (uVar30 != 0) {
          uVar10 = uVar30;
          func_0x00010bf33240(uVar30);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          func_0x00010c19a100(ppuVar21);
          _objc_release(uVar10);
          func_0x00010c113e20(uVar30);
          func_0x00010c1e3380(ppuVar21);
        }
        _objc_release(uVar30);
      }
      ppuVar23 = ppuVar21;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      ppuVar24 = ppuVar23;
      func_0x00010befa120(puVar26);
      _objc_release(ppuVar23);
      _objc_release(ppuVar21);
      _objc_release(puVar20);
      _objc_release(puVar7);
      _objc_release(puVar15);
      _objc_release(param_7);
      _objc_release(uVar5);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar8);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar27 = uVar27 + 1;
      uVar10 = uVar3;
      func_0x00010bf529e0();
    } while (uVar27 < uVar10);
  }
  puVar7 = puVar26;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_release(puVar26);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar24);
  func_0x00010c113e20();
  ppuVar21 = ppuVar24;
  func_0x00010c113e20();
  _objc_release(ppuVar24);
  puVar26 = (undefined *)(ulong)((uint)ppuVar21 < param_2);
  if (param_2 < (uint)ppuVar21) {
    puVar26 = (undefined *)0xffffffffffffffff;
  }
  return puVar26;
}



/* Entry: 1058afd54; end: 1058afdaf;  */

ulong FUN_1058afd54(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010c113e20();
  uVar1 = param_3;
  func_0x00010c113e20();
  _objc_release(param_3);
  uVar2 = (ulong)((uint)uVar1 < param_2);
  if (param_2 < (uint)uVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 1058afdb0; end: 1058b0687;  */

void FUN_1058afdb0(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0ed100(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = *(undefined **)(param_2 + 0x40);
    func_0x00010bf4b900();
    if ((int)puVar2 != 0) {
      puVar3 = PTR_PTR_1126bf9f0;
      func_0x00010c2b1d00(PTR_PTR_1126bf9f0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126bc7f8;
      func_0x00010bf5a9c0(PTR_PTR_1126bc7f8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x48) + 0x80);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107ee904c(puVar3,puVar2,uVar4);
      _objc_release(uVar4);
      func_0x00010c1a7000(puVar3);
      func_0x00010c1b4ee0(puVar3);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf3fe40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199560(puVar3);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17c500(puVar3);
      _objc_release(uVar4);
      lVar10 = lVar1;
      func_0x00010bf93d20();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar10;
      func_0x000108dfcc4c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      if (lVar5 != 0) {
        func_0x00010bf93ce0(lVar5);
        puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
        lVar10 = lVar5;
        func_0x00010bf93ec0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf649c0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
        lVar10 = lVar5;
        func_0x00010bf93e80(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf649c0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        puVar8 = PTR_PTR_1126bf908;
        _objc_alloc(PTR_PTR_1126bf908);
        func_0x00010c020a60();
        func_0x00010c195c20(puVar3);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(lVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bf9f0;
    func_0x00010c2b1d00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c204680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar3 = puVar7;
    func_0x00010c0c6c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x58));
    }
    else {
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x60));
      puVar3 = puVar7;
      func_0x00010bf93d20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x000108dfcc4c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar6 == (undefined *)0x0) {
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x70));
      }
      else {
        puVar8 = puVar6;
        func_0x00010bf93ce0();
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        if (((ulong)puVar8 & 1) == 0) {
          puVar8 = puVar6;
          func_0x00010bf93ec0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf649c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
          puVar9 = puVar6;
          func_0x00010bf93e80(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf649c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          puVar9 = puVar3;
          func_0x00010c08fa60();
          if ((puVar9 == (undefined *)0x0) ||
             (puVar9 = puVar8, func_0x00010c08fa60(), puVar9 == (undefined *)0x0)) {
            func_0x00010befa120(*(undefined8 *)(param_2 + 0x70));
          }
          else {
            puVar9 = PTR_PTR_1126bf908;
            _objc_alloc(PTR_PTR_1126bf908);
            func_0x00010c020a60();
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x68));
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x68));
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar3);
            puVar3 = PTR_PTR_1126bc7f8;
            func_0x00010bf5a9c0(PTR_PTR_1126bc7f8);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x48) + 0x80);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x000107ee904c(puVar3,puVar7,uVar4);
            _objc_release(uVar4);
            func_0x00010c192ce0(puVar3);
            func_0x00010c1a7000(puVar3);
            func_0x00010c1b4ee0(puVar3);
            func_0x00010c1ac2c0(puVar3);
            lVar10 = *(long *)(param_2 + 0x68);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar10 != 0) {
              uVar4 = *(undefined8 *)(param_2 + 0x68);
              func_0x00010c0e00e0(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c195c20(puVar3);
              _objc_release(uVar4);
            }
            uVar4 = *(undefined8 *)(param_2 + 0x50);
            func_0x00010c0e00e0(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c17c500(puVar3);
            _objc_release(uVar4);
            puVar8 = PTR_PTR_1126af4d0;
            uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x48) + 0x80);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa72e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            func_0x000107ee9ddc(puVar3,puVar8);
            puVar9 = PTR_PTR_1126bc7b8;
            if (puVar8 != (undefined *)0x0) {
              uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x48) + 0x80);
              func_0x00010c269d40(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfa7160();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
              if (puVar9 != (undefined *)0x0) {
                puVar11 = PTR_PTR_1126bf8f8;
                func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                func_0x00010c1d0720();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar12;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar12);
                _objc_release(puVar11);
                puVar11 = PTR_PTR_1126bf8e8;
                func_0x00010bf5a9e0(PTR_PTR_1126bf8e8);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                func_0x00010c0fd8e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c18c580(puVar3);
                _objc_release(puVar12);
                _objc_release(puVar11);
                _objc_release(puVar13);
                _objc_release(puVar9);
              }
            }
            puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            _objc_release(puVar9);
            uVar14 = *(ulong *)(param_2 + 0x78);
            func_0x00010bf529e0(uVar14);
            dVar15 = (param_1 - (double)uVar14) + (double)param_4;
            puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf655e0(dVar15,PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c185360(puVar3);
            _objc_release(puVar9);
            puVar9 = puVar7;
            func_0x00010bf313c0(puVar7);
            func_0x000107ee8778();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c179340(puVar3);
            _objc_release(puVar9);
            lVar10 = *(long *)(param_2 + 0x28);
            func_0x00010bf33360();
            if (lVar10 - 9U < 0x14) {
              func_0x00010c206760(puVar3);
              uVar4 = *(undefined8 *)(param_2 + 0x28);
              func_0x00010c0fa720(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c185540(puVar3);
              _objc_release(uVar4);
            }
            func_0x00010c1d7bc0(puVar3);
            puVar9 = puVar7;
            func_0x00010c09ea00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar9 != (undefined *)0x0) {
              puVar9 = puVar7;
              func_0x00010c09ea00(puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar9;
              func_0x00010c08aca0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              dVar16 = dVar15;
              _objc_release(puVar11);
              _objc_release(puVar9);
              puVar9 = puVar7;
              func_0x00010c09ea00(puVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar9;
              func_0x00010c0b4fe0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              _objc_release(puVar11);
              _objc_release(puVar9);
              puVar9 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
              _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
              func_0x00010c021a60(dVar15,dVar16);
              func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x88));
              _objc_release(puVar9);
            }
            uVar4 = *(undefined8 *)(param_2 + 0x90);
            puVar9 = puVar3;
            func_0x00010c0fd8c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(uVar4);
            _objc_release(puVar9);
          }
          _objc_release(puVar8);
          _objc_release(puVar3);
        }
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058b0688; end: 1058b0a87; -[SCGalleryHighlightContentDataSource _logSyncEventWithTotalLatency:prefetchLatency:snapCount:prefetchSuccessCount:withBackgroundPush:galleryCollectionCategory:externalId:featuredStoryTemplateName:featuredStoryLoggingInfo:failureReason:activationDate:expirationDate:infoArray:] */

void FUN_1058b0688(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  func_0x00010c08fa60(in_stack_00000008);
  lVar2 = in_x5;
  func_0x00010bf51e00();
  uVar3 = in_x6;
  func_0x00010bf51e00();
  uVar4 = in_x7;
  func_0x00010bf51e00();
  uVar5 = in_stack_00000000;
  func_0x00010bf51e00();
  uVar6 = in_stack_00000008;
  func_0x00010bf51e00();
  uVar7 = in_stack_00000010;
  func_0x00010bf51e00();
  uVar8 = in_stack_00000018;
  func_0x00010bf51e00(in_stack_00000018);
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (in_stack_00000020 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    func_0x00010bf529e0(in_stack_00000020);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(in_stack_00000020);
    lVar9 = in_stack_00000020;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(in_stack_00000020);
        }
        uVar10 = *(undefined8 *)(lVar14 * 8);
        func_0x00010bf51e00(uVar10);
        func_0x00010befa120(puVar13);
        _objc_release(uVar10);
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
      lVar9 = in_stack_00000020;
      func_0x00010bf52a60();
    }
    _objc_release(in_stack_00000020);
  }
  puVar11 = PTR_PTR_1126bc750;
  _objc_opt_new(PTR_PTR_1126bc750);
  func_0x00010c218520();
  func_0x00010c1e0580(puVar11);
  func_0x00010c203cc0(puVar11);
  func_0x00010c1e0660(puVar11);
  func_0x00010c225d80(puVar11);
  func_0x00010c1a1a00(puVar11);
  func_0x00010c1a1a20(puVar11);
  func_0x00010c19ae80(puVar11);
  func_0x00010c19ae20(puVar11);
  func_0x00010c19a060(puVar11);
  func_0x00010c26f320(uVar7);
  func_0x00010c162460(puVar11);
  func_0x00010c26f320(uVar8);
  func_0x00010c198c40(puVar11);
  if (puVar13 != (undefined *)0x0) {
    func_0x00010c1a2780(puVar11);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar11);
  _objc_release(puVar13);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(in_x5 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(in_x5 + 0x28) + 0x28),
               PTR_s_setObject_forKeyedSubscript__112651bb8,0);
    return;
  }
  return;
}



/* Entry: 1058b0a88; end: 1058b0aa3;  */

void FUN_1058b0a88(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28),
               PTR_s_setObject_forKeyedSubscript__112651bb8,0);
    return;
  }
  return;
}



/* Entry: 1058b0aa4; end: 1058b0c13; -[SCGalleryHighlightContentDataSource _shouldFetchServerCollectionFromSetup:completion:] */

void FUN_1058b0aa4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  lVar1 = param_4;
  _objc_retain();
  func_0x00010b6fb1d4();
  if (lVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x138);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbce20();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      pcVar7 = *(code **)(param_4 + 0x10);
      goto LAB_1058b0b5c;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bfbcbe0();
    _objc_release(uVar6);
    if ((int)uVar5 == 0) {
      lVar4 = *(long *)(param_1 + 0xa8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c088b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar1 == 0) {
        pcVar7 = *(code **)(param_4 + 0x10);
        uVar5 = 1;
        uVar6 = 4;
      }
      else {
        func_0x00010beb3b60();
        pcVar7 = *(code **)(param_4 + 0x10);
        if ((int)param_1 == 0) {
          uVar5 = 0;
          uVar6 = 0;
        }
        else {
          uVar5 = 1;
          if (param_3 == 0) {
            uVar6 = 3;
          }
          else {
            uVar6 = 5;
          }
        }
      }
      (*pcVar7)(param_4,uVar5,uVar6);
      _objc_release(lVar1);
      goto LAB_1058b0b6c;
    }
    pcVar7 = *(code **)(param_4 + 0x10);
    uVar5 = 1;
    uVar6 = 1;
  }
  else {
    func_0x00010b6fb1d4();
    pcVar7 = *(code **)(param_4 + 0x10);
    if (lVar1 == 1) {
      uVar5 = 1;
      uVar6 = 2;
    }
    else {
LAB_1058b0b5c:
      uVar5 = 0;
      uVar6 = 0;
    }
  }
  (*pcVar7)(param_4,uVar5,uVar6);
LAB_1058b0b6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058b0c14; end: 1058b0d6b; -[SCGalleryHighlightContentDataSource _shouldFetchServerCollectionBasedOnLastSyncTime:] */

uint FUN_1058b0c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar3 = puVar2;
  func_0x00010c2bedc0(puVar2);
  puVar4 = puVar2;
  func_0x00010c0d0e40(puVar2);
  puVar5 = puVar2;
  func_0x00010bf65700(puVar2);
  func_0x00010bf65640(puVar1,param_2,puVar3,puVar4,puVar5,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(ulong *)(param_1 + 0x158);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c24d0c0();
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655c0((double)(uVar7 % 0xe10),PTR__OBJC_CLASS___NSDate_1126ae770,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c083d40();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return (uint)puVar4 ^ 1;
}



/* Entry: 1058b0d6c; end: 1058b0e63; -[SCGalleryHighlightContentDataSource _updateLastSyncToNow] */

void FUN_1058b0d6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f8520(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1058b0e64; end: 1058b0eef;  */

void FUN_1058b0e64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    puVar2 = PTR_PTR_1126b2508;
    func_0x00010bf350c0(PTR_PTR_1126b2508);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b7c00(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058b0ef0; end: 1058b10fb; -[SCGalleryHighlightContentDataSource _allSnapsExistLocally:] */

bool FUN_1058b0ef0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x140);
  func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e09c78,0,0);
  puVar6 = PTR_PTR_1126af4d0;
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar3 == 0) {
    func_0x00010bfa7480(puVar6,param_2,uVar4,param_3,0,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x1c0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar3 == 0) {
      puVar7 = puVar6;
      func_0x00010bf529e0(puVar6);
      puVar8 = param_3;
      func_0x00010bf529e0(param_3);
      bVar1 = puVar7 == puVar8;
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x140);
      func_0x000108ec0158();
      if (iVar2 == 0) {
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_1058b10fc;
        puStack_50 = &UNK_1108bbf88;
        puVar7 = puVar6;
        puStack_48 = param_1;
        func_0x00010bfaea20(puVar6,param_2,&puStack_68);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf529e0();
        puVar9 = param_3;
        func_0x00010bf529e0(param_3);
        bVar1 = puVar8 == puVar9;
      }
      else {
        puVar7 = puVar6;
        func_0x00010bf529e0();
        puVar8 = param_3;
        func_0x00010bf529e0();
        if (puVar7 != puVar8) {
          bVar1 = false;
          goto LAB_1058b105c;
        }
        func_0x00010be80360(param_1,param_2,puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_1;
        func_0x00010bf529e0();
        bVar1 = puVar7 == (undefined *)0x0;
        puVar7 = param_1;
      }
      _objc_release(puVar7);
    }
  }
  else {
    func_0x00010bfa74c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar7 = puVar6;
    func_0x00010bf529e0(puVar6);
    bVar1 = puVar7 == (undefined *)0x0;
  }
LAB_1058b105c:
  _objc_release(puVar6);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1058b10fc; end: 1058b11bf;  */

uint FUN_1058b10fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = puVar2;
  func_0x00010c07b240();
  if (((ulong)puVar3 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bf93d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0719c0();
    uVar5 = (uint)uVar4 ^ 1;
    _objc_release(uVar1);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 1058b11c0; end: 1058b13f7; -[SCGalleryHighlightContentDataSource _privateOrEncryptedSnapIdsForSnapsUsingBatchFetch:] */

void FUN_1058b11c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar10 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined1 *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af4c0;
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar12 = *plStack_120;
      do {
        puVar13 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(param_3);
          }
          lVar11 = *(long *)(lStack_128 + (long)puVar13 * 8);
          lVar5 = lVar11;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            puVar8 = puVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar8;
            func_0x00010c07b240();
            if ((int)puVar6 == 0) {
              func_0x00010bf93d20();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar11;
              func_0x00010c0719c0();
              _objc_release(lVar11);
              _objc_release(puVar8);
              if ((int)lVar7 == 0) goto LAB_1058b1340;
            }
            else {
              _objc_release(puVar8);
            }
            func_0x00010befa120(puVar2);
          }
LAB_1058b1340:
          _objc_release(lVar5);
          puVar13 = puVar13 + 1;
        } while (puVar1 != puVar13);
        puVar1 = param_3;
        puVar10 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar8 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar13 = (undefined1 *)puVar10;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  puVar9 = puVar13;
  func_0x00010bfbd100();
  puVar4 = PTR_PTR_1126bf7e0;
  puVar8 = PTR_DAT_1126a4ec8;
  puVar1 = puVar13;
  if (puVar9 == (undefined1 *)0x3) {
    _objc_retain(puVar13);
    _objc_opt_class(puVar4);
    puVar9 = puVar13;
    _objc_opt_isKindOfClass(puVar13,puVar4);
    if (((ulong)puVar9 & 1) == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar13);
    func_0x00010bea2700(param_3);
  }
  else {
    if (puVar9 != (undefined1 *)0x1) goto LAB_1058b14c4;
    _objc_retain(puVar13);
    puVar9 = puVar13;
    func_0x00010010fab4(puVar13,puVar8);
    if ((int)puVar9 == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar13);
    func_0x00010bea6b80(param_3);
  }
  _objc_release(puVar1);
LAB_1058b14c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 1058b13f8; end: 1058b14d7; -[SCGalleryHighlightContentDataSource setFeaturedStoryToBeHidden:] */

void FUN_1058b13f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfbd100();
  puVar3 = PTR_PTR_1126bf7e0;
  puVar1 = PTR_DAT_1126a4ec8;
  uVar4 = param_3;
  if (uVar2 == 3) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    func_0x00010bea2700(param_1);
  }
  else {
    if (uVar2 != 1) goto LAB_1058b14c4;
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    if ((int)uVar2 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    func_0x00010bea6b80(param_1);
  }
  _objc_release(uVar4);
LAB_1058b14c4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058b14d8; end: 1058b1573; -[SCGalleryHighlightContentDataSource _setRegularFeaturedStoryToBeHidden:] */

void FUN_1058b14d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  func_0x00010c074c20(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1058b1574;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    lStack_40 = param_3;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1058b1574; end: 1058b175f;  */

void FUN_1058b1574(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar8 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar8);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x000107e75140();
  puVar5 = PTR_PTR_1126af4c0;
  puVar7 = puVar8;
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9e140(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6f40(puVar5,param_2,uVar2,uVar3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar6 = puVar5;
    func_0x000107e756d8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar6);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1058b1760;
  puStack_60 = &UNK_110842e18;
  _objc_retain(puVar7);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  puStack_58 = puVar7;
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar5;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1058b17a4;
  puStack_90 = &UNK_1108bbd78;
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = puVar7;
  _objc_retain(puVar7);
  func_0x00010c0f8520(uVar2,param_2,&puStack_78,uVar3,&puStack_a8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puStack_88);
  _objc_release(puStack_58);
  _objc_release(puVar7);
  return;
}



/* Entry: 1058b1760; end: 1058b17e3;  */

void FUN_1058b1760(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058b17e4; end: 1058b1873; -[SCGalleryHighlightContentDataSource _setCRFeaturedStoryToBeHidden:] */

void FUN_1058b17e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1058b1874;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1058b1874; end: 1058b18d3;  */

void FUN_1058b1874(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x188);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174e40(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058b18d4; end: 1058b1963; -[SCGalleryHighlightContentDataSource setSeenInCarouselForAllFeaturedStories:] */

void FUN_1058b18d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1058b1964;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1058b1964; end: 1058b1b5f;  */

void FUN_1058b1964(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_1b0,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x00010bea7160(*(undefined8 *)(param_1 + 0x28),param_2,
                            *(undefined8 *)(lStack_1a8 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x48);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_1e0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1e0 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        uVar3 = *(undefined8 *)(lStack_1e8 + lVar10 * 8);
        func_0x00010bf53c00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x188);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c174e20(uVar4,param_2,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar4);
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar8;
      puVar7 = &uStack_1f0;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar5 = (undefined1 *)puVar7;
  func_0x00010c1577e0();
  if (((ulong)puVar5 & 1) == 0) {
    uVar6 = *(undefined8 *)(lVar8 + 0x80);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_1058b1c68;
    puStack_250 = &UNK_110842e18;
    _objc_retain(puVar7);
    uVar3 = *(undefined8 *)(lVar8 + 8);
    puStack_248 = (undefined1 *)puVar7;
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_290 = puVar1;
    uStack_288 = 0xc2000000;
    uStack_280 = 0x1058b1cac;
    puStack_278 = &UNK_110858d00;
    lStack_270 = lVar8;
    func_0x00010c0f8520(uVar6,param_2,&puStack_268,uVar3,&puStack_290);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(puStack_248);
  }
  _objc_release(puVar7);
  return;
}



/* Entry: 1058b1b60; end: 1058b1c67; -[SCGalleryHighlightContentDataSource _setSeenInCarouselForRegularFeaturedStory:] */

void FUN_1058b1b60(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c1577e0();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1058b1c68;
    puStack_60 = &UNK_110842e18;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uStack_58 = param_3;
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x1058b1cac;
    puStack_88 = &UNK_110858d00;
    lStack_80 = param_1;
    func_0x00010c0f8520(uVar3,param_2,&puStack_78,uVar4,&puStack_a0);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1058b1c68; end: 1058b1ceb;  */

void FUN_1058b1c68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058b1cec; end: 1058b1e07; -[SCGalleryHighlightContentDataSource setSnapLevelItemIdViewed:storyId:playbackItemIndex:isFromSnapFeed:viewedSnapLevelItemIdsInCurrentStory:] */

void FUN_1058b1cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1058b1e08;
  puStack_88 = &UNK_110867cb8;
  uStack_80 = param_4;
  lStack_78 = param_1;
  uStack_70 = param_3;
  uStack_68 = param_7;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1058b1e08; end: 1058b1fd7;  */

void FUN_1058b1e08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_1058b6a20(lVar1,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bf830;
  if (lVar1 == 0) {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07e800();
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126af4c0;
      if ((int)puVar4 != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa70a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        if (puVar5 != (undefined *)0x0) {
          func_0x00010bea7a40(*(undefined8 *)(param_1 + 0x28));
          _objc_release(puVar5);
        }
      }
    }
    goto LAB_1058b1fc0;
  }
  lVar2 = lVar1;
  func_0x00010bfa34e0();
  puVar4 = PTR_PTR_1126bf830;
  if (lVar2 == 1) {
    func_0x00010bea1f20(*(undefined8 *)(param_1 + 0x28));
  }
  else if (lVar2 == 0) {
    if (*(char *)(param_1 + 0x48) == '\x01') {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07e800();
      _objc_release(uVar3);
      if ((int)puVar4 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        lVar2 = lVar1;
        func_0x00010bfa3400(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea7a40(uVar3);
        _objc_release(lVar2);
        goto LAB_1058b1fb8;
      }
    }
    func_0x00010bea7a60(*(undefined8 *)(param_1 + 0x28));
  }
LAB_1058b1fb8:
  func_0x00010be17b80(*(undefined8 *)(param_1 + 0x28));
LAB_1058b1fc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058b1fd8; end: 1058b2967; -[SCGalleryHighlightContentDataSource _entryChangeRequestFromCollection:profile:] */

void FUN_1058b1fd8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bf8c8;
  func_0x00010c2aeac0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf59980(param_3);
  func_0x000107ee8778();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192cc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010bf3fe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c222da0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a1e00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf33360(param_3);
  func_0x00010b5fae1c();
  func_0x00010c196b00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b3960(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c113e20(param_3);
  func_0x00010c1e3380(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1b4ee0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf1b100(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170c20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010befcec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e4e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c26b0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010bfa3440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ae20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c0fa720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  else {
    puVar3 = param_3;
    func_0x00010c0fa720(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bdca080();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)lVar4 != 0) {
      puVar2 = param_3;
      func_0x00010c0fa740(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2144c0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010c0fa760(param_3);
      func_0x00010c2144e0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c079ec0(param_3);
      goto LAB_1058b23c0;
    }
  }
  puVar2 = param_3;
  func_0x00010c26e500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c26e560(param_3);
  func_0x00010c2144e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c080f60(param_3);
LAB_1058b23c0:
  func_0x00010c214000(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c271540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216480(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c271580(param_3);
  func_0x00010c2164a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf9c860();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c0cd340(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_3;
    func_0x00010bf9c860(param_3);
    func_0x000107ee8778();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c19ada0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010bef03a0(param_3);
  func_0x000107ee8778();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ade0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar3 = param_3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar3);
      }
      func_0x000107e6a278(*(undefined8 *)((long)puVar12 * 8));
      puVar12 = puVar12 + 1;
    } while (puVar2 != puVar12);
    puVar2 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  func_0x00010c1988c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar12 = param_3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar12;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar12);
      }
      lVar14 = *(long *)((long)puVar13 * 8);
      lVar5 = lVar14;
      func_0x00010c0848e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf529e0();
      _objc_release(lVar5);
      if (lVar6 != 0) {
        func_0x00010c0848e0(lVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
        _objc_release(lVar14);
      }
      puVar13 = puVar13 + 1;
    } while (puVar2 != puVar13);
    puVar2 = puVar12;
    func_0x00010bf52a60();
  }
  _objc_release(puVar12);
  func_0x00010c17cca0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain();
  func_0x00010bf97e80(puVar3);
  func_0x00010c2062e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc830;
  puVar13 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5a940(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  func_0x00010c1d7bc0(puVar2);
  puVar13 = param_3;
  func_0x00010bf93d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar13 != (undefined *)0x0) {
    puVar13 = param_3;
    func_0x00010bf93d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93ce0();
    _objc_release(puVar13);
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    puVar13 = param_3;
    func_0x00010bf93d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar13;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar13);
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    puVar13 = param_3;
    func_0x00010bf93d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar13;
    func_0x00010bf93e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar9 = param_3;
    func_0x00010bf3fe40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9540();
    _objc_release(uVar10);
    puVar9 = PTR_PTR_1126bf908;
    _objc_alloc();
    func_0x00010c020a60();
    func_0x00010c195c20(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_release(puVar8);
  }
  puVar13 = param_3;
  func_0x00010bf33360();
  if (puVar13 + -9 < (undefined *)0x14) {
    func_0x00010c17cee0(puVar2);
  }
  _objc_release(puVar12);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(param_2);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20));
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058b2968; end: 1058b29d7;  */

void FUN_1058b2968(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058b29d8; end: 1058b2a5f; -[SCGalleryHighlightContentDataSource fetchMemoriesOperaFeaturedStoriesSnapForEntry:] */

void FUN_1058b29d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_1058b569c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c127ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1058b2a60; end: 1058b2a9b; -[SCGalleryHighlightContentDataSource _fireGrapheneMetricsForFeatureSettingsPrefetchCallback] */

void FUN_1058b2a60(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010bfb0260(PTR_PTR_1126b24e0,param_2,*(undefined8 *)(param_1 + 0x148));
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}



/* Entry: 1058b2a9c; end: 1058b2bd3; -[SCGalleryHighlightContentDataSource _extractSnapIdsFromServletCollection:] */

void FUN_1058b2a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1058b2b6c;
  puStack_40 = &UNK_1108bbde8;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf97e80(uVar2,param_2,&puStack_58);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058b2bd4; end: 1058b2bdb;  */

void FUN_1058b2bd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 1058b2bdc; end: 1058b2cd7; -[SCGalleryHighlightContentDataSource _getLocalTemporarySnapsToDeleteInEntry:entrySnaps:collectionIdToResponseSnapIdsMap:] */

void FUN_1058b2bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1058b2cd8;
  puStack_50 = &UNK_1108bbe18;
  uStack_48 = param_3;
  uStack_40 = param_5;
  _objc_retain();
  puStack_38 = puVar2;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf97e80(param_4,param_2,&puStack_68);
  _objc_release(param_4);
  puVar1 = puStack_38;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058b2cd8; end: 1058b2de7;  */

void FUN_1058b2cd8(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf3d240();
  if ((uVar2 & 0xffff) == 0) {
    bVar1 = true;
  }
  else {
    lVar3 = param_2;
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    _objc_release();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf9e140(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf8b0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf4b900();
  if (((uVar5 & 1) == 0) && (lVar6 = param_2, func_0x00010c080ca0(), (int)lVar6 != 0)) {
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    if (bVar1) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058b2de8; end: 1058b3423; -[SCGalleryHighlightContentDataSource _categorizeLocalTemporaryFeaturedEntries:intoDeletedEntries:newCollectionIds:existingCollections:alreadySyncedCollectionIds:] */

ulong FUN_1058b2de8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                   undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2a0;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 auStack_200 [16];
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puVar13 = &uStack_240;
  puVar14 = auStack_f0;
  uVar15 = 0x10;
  uVar19 = param_3;
  func_0x00010bf52a60();
  if (uVar19 != 0) {
    lVar20 = *plStack_230;
    do {
      uVar17 = 0;
      do {
        if (*plStack_230 != lVar20) {
          _objc_enumerationMutation(param_3);
        }
        puVar21 = *(undefined **)(lStack_238 + uVar17 * 8);
        puVar2 = puVar21;
        func_0x00010bf9e140(puVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_5;
        func_0x00010bf4b900();
        _objc_release(puVar2);
        uVar15 = param_6;
        if (((uVar3 & 1) != 0) ||
           (puVar2 = puVar21, func_0x00010c080ca0(), uVar15 = param_4, (int)puVar2 != 0)) {
          func_0x00010befa120(uVar15);
        }
        puVar2 = puVar21;
        func_0x00010bf9e140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar2 == (undefined *)0x0) {
          puVar2 = puVar21;
          func_0x00010bf977c0();
          uVar1 = (int)puVar2 - 0x31;
          puVar2 = puVar21;
          if (uVar1 < 0x13 && (1 << (ulong)(uVar1 & 0x1f) & 0x43a3bU) != 0) {
            ppuStack_180 = &PTR____CFConstantStringClassReference_110e09cd8;
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            if (puVar2 == (undefined *)0x0) {
              puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
              func_0x00010c0ddbe0();
              _objc_retainAutoreleasedReturnValue();
              puStack_2a0 = puVar4;
            }
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuStack_178 = &PTR____CFConstantStringClassReference_110e09cf8;
            puStack_170 = puVar4;
            func_0x00010c080ca0(puVar21);
            func_0x00010c25d8c0();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_168 = puVar5;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108e00074(&PTR____CFConstantStringClassReference_110e09c98,
                                &PTR____CFConstantStringClassReference_110e09cb8,puVar21,
                                *(undefined8 *)(param_1 + 0x150));
            _objc_release(puVar21);
            _objc_release(puVar5);
            if (puVar2 == (undefined *)0x0) {
              _objc_release(puStack_2a0);
            }
          }
          else {
            func_0x00010befa120(param_4);
            ppuStack_160 = &PTR____CFConstantStringClassReference_110e09cd8;
            func_0x00010bf97200();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            if (puVar2 == (undefined *)0x0) {
              puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
              func_0x00010c0ddbe0();
              _objc_retainAutoreleasedReturnValue();
              puStack_2d0 = puVar4;
            }
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            ppuStack_158 = &PTR____CFConstantStringClassReference_110e09cf8;
            puStack_128 = puVar4;
            func_0x00010c080ca0(puVar21);
            func_0x00010c25d8c0();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_150 = &PTR____CFConstantStringClassReference_110e09d18;
            puVar4 = puVar21;
            puStack_120 = puVar5;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar4;
            if (puVar4 == (undefined *)0x0) {
              puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
              func_0x00010c0ddbe0();
              _objc_retainAutoreleasedReturnValue();
              puStack_2c0 = puVar6;
            }
            ppuStack_148 = &PTR____CFConstantStringClassReference_110e09d38;
            puVar7 = puVar21;
            puStack_118 = puVar6;
            func_0x00010c260dc0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar7;
            if (puVar7 == (undefined *)0x0) {
              puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
              func_0x00010c0ddbe0();
              _objc_retainAutoreleasedReturnValue();
              puStack_2c8 = puVar6;
            }
            puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            ppuStack_140 = &PTR____CFConstantStringClassReference_110e09d58;
            puStack_110 = puVar6;
            func_0x00010bfbdda0(puVar21);
            func_0x00010c0df760();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            ppuStack_138 = &PTR____CFConstantStringClassReference_110e09d78;
            puStack_108 = puVar8;
            func_0x00010bf977c0(puVar21);
            func_0x00010c0df760();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            ppuStack_130 = &PTR____CFConstantStringClassReference_110e09d98;
            puStack_100 = puVar6;
            func_0x00010bf3d240(puVar21);
            func_0x00010c0df760();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_f8 = puVar9;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108e00074(&PTR____CFConstantStringClassReference_110e09c98,
                                &PTR____CFConstantStringClassReference_110e09cb8,puVar21,
                                *(undefined8 *)(param_1 + 0x150));
            _objc_release(puVar21);
            _objc_release(puVar9);
            _objc_release(puVar6);
            _objc_release(puVar8);
            if (puVar7 == (undefined *)0x0) {
              _objc_release(puStack_2c8);
            }
            _objc_release(puVar7);
            if (puVar4 == (undefined *)0x0) {
              _objc_release(puStack_2c0);
            }
            _objc_release(puVar4);
            _objc_release(puVar5);
            if (puVar2 == (undefined *)0x0) {
              _objc_release(puStack_2d0);
            }
          }
LAB_1058b3064:
          _objc_release(puVar2);
        }
        else {
          puVar2 = puVar21;
          func_0x00010c080ca0();
          if ((int)puVar2 != 0) {
            func_0x00010bf9e140(puVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(param_5);
            puVar2 = puVar21;
            goto LAB_1058b3064;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar19 != uVar17);
      puVar13 = &uStack_240;
      puVar14 = auStack_f0;
      uVar15 = 0x10;
      uVar19 = param_3;
      func_0x00010bf52a60();
    } while (uVar19 != 0);
  }
  lVar20 = param_7;
  func_0x00010bf529e0();
  if (lVar20 != 0) {
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    _objc_retain(param_7);
    puVar13 = &uStack_280;
    puVar14 = auStack_200;
    uVar15 = 0x10;
    lVar20 = param_7;
    func_0x00010bf52a60();
    if (lVar20 != 0) {
      lVar16 = *plStack_270;
      do {
        lVar18 = 0;
        do {
          if (*plStack_270 != lVar16) {
            _objc_enumerationMutation(param_7);
          }
          uVar19 = param_5;
          func_0x00010bf4b900();
          if ((int)uVar19 != 0) {
            func_0x00010c12d360(param_5);
          }
          lVar18 = lVar18 + 1;
        } while (lVar20 != lVar18);
        puVar13 = &uStack_280;
        puVar14 = auStack_200;
        uVar15 = 0x10;
        lVar20 = param_7;
        func_0x00010bf52a60();
      } while (lVar20 != 0);
    }
    _objc_release(param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  _objc_retain(uVar15);
  puVar10 = puVar13;
  func_0x00010bf529e0();
  if (puVar10 == (undefined8 *)0x0) {
    uVar19 = 1;
  }
  else {
    puVar10 = puVar13;
    func_0x00010bf529e0();
    puVar11 = puVar14;
    func_0x00010bf529e0();
    uVar19 = (ulong)(puVar11 > puVar10);
    if (puVar11 <= puVar10) {
      func_0x00010bf977c0(uVar15);
      uVar12 = *(undefined8 *)(param_3 + 0x160);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c2c0();
    }
    else {
      uVar12 = *(undefined8 *)(param_3 + 0x160);
      func_0x00010c269d40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c300();
    }
    _objc_release(uVar12);
  }
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  return uVar19;
}



/* Entry: 1058b3424; end: 1058b351b; -[SCGalleryHighlightContentDataSource _shouldKeepEntryAfterDeletingTemporarySnaps:entrySnaps:entry:] */

bool FUN_1058b3424(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    bVar4 = true;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf529e0();
    uVar2 = param_4;
    func_0x00010bf529e0();
    bVar4 = uVar2 > uVar1;
    if (uVar2 <= uVar1) {
      func_0x00010bf977c0(param_5);
      uVar3 = *(undefined8 *)(param_1 + 0x160);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c2c0();
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x160);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c300();
    }
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 1058b351c; end: 1058b35d7; -[SCGalleryHighlightContentDataSource _deleteUneditedTemporarySnapsWithoutOriginalSnapsInFeaturedEntryDataModels:] */

undefined1 FUN_1058b351c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010bf97e80(param_3);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1058b35d8; end: 1058b39ab;  */

void FUN_1058b35d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c127ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_2;
    func_0x00010c127ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4c440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c127ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c26ad40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c071ae0();
    if ((int)lVar2 != 0) {
      func_0x00010c127ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010be20380();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf529e0();
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x160);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6c300();
        _objc_release(uVar7);
        lVar6 = lVar4;
        func_0x00010bf9c1c0();
        lVar8 = lVar4;
        func_0x00010bf3cec0();
        _objc_retainAutoreleasedReturnValue();
        if ((0 < (int)lVar6) && (lVar6 = lVar8, func_0x00010bf529e0(), lVar6 != 0)) {
          _objc_retain(lVar5);
          lVar6 = lVar5;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar6 != 0) {
            lVar12 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar5);
              }
              uVar7 = *(undefined8 *)(lVar12 * 8);
              func_0x00010c241220(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf4b900();
              _objc_release(uVar7);
              lVar12 = lVar12 + 1;
            } while (lVar6 != lVar12);
            lVar6 = lVar5;
            func_0x00010bf52a60();
          }
          _objc_release(lVar5);
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
          func_0x00010c11de00(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f8520(uVar7);
          _objc_release(uVar9);
          _objc_release(uVar7);
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
        _objc_release(lVar8);
      }
      lVar6 = lVar5;
      func_0x00010bf529e0();
      lVar8 = lVar2;
      func_0x00010bf529e0();
      if (lVar6 == lVar8) {
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x160);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6c2c0();
        _objc_release(uVar7);
      }
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1988c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 1058b39ac; end: 1058b39ef;  */

void FUN_1058b39ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1988c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058b39f0; end: 1058b39f3;  */

void FUN_1058b39f0(void)

{
  return;
}



/* Entry: 1058b39f4; end: 1058b3b4b; -[SCGalleryHighlightContentDataSource _getLocalTemporarySnapsWithoutOriginalSnapInDataModelSnaps:] */

void FUN_1058b39f4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x000107e76f14();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    puVar1 = PTR_PTR_1126af4d0;
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa74c0(puVar1,param_2,uVar4,puVar2,0,uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1058b3b4c;
      puStack_50 = &UNK_1108bbf88;
      puStack_48 = puVar1;
      _objc_retain(puVar1);
      puVar6 = param_3;
      func_0x00010bfaea20(param_3,param_2,&puStack_68);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_48);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1058b3b4c; end: 1058b3c67;  */

undefined8 FUN_1058b3b4c(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c080ca0();
  if ((int)lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000107e76f14();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf04920();
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar4;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c241220(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4);
  _objc_release(lVar5);
  return uVar4;
}



/* Entry: 1058b3c68; end: 1058b3cb3;  */

undefined8 FUN_1058b3c68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1058b3cb4; end: 1058b3fcb; -[SCGalleryHighlightContentDataSource _updatedSnapFeedViewedItemIdsForSnapFeaturedStory:viewedItemIdsInCurrentStory:] */

void FUN_1058b3cb4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = PTR_PTR_1126bf830;
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = *(undefined1 **)(param_1 + 0x140);
  uVar10 = 1;
  func_0x00010c07e800(puVar12,param_2,uVar1,puVar9,1);
  _objc_release(uVar1);
  if ((int)puVar12 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = param_3;
    func_0x00010c241100();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar12;
    func_0x00010c0d3c80();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
    _objc_release(puVar12);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    _objc_retain(param_4);
    puVar9 = auStack_f0;
    uVar10 = 0x10;
    lVar4 = param_4;
    func_0x00010bf52a60(param_4,param_2,&uStack_1b0,puVar9,0x10);
    if (lVar4 != 0) {
      lVar14 = *plStack_1a0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1a0 != lVar14) {
            _objc_enumerationMutation(param_4);
          }
          uVar1 = *(undefined8 *)(lStack_1a8 + lVar11 * 8);
          puVar12 = puVar3;
          func_0x00010bf4b900(puVar3,param_2,uVar1);
          if (((ulong)puVar12 & 1) == 0) {
            func_0x00010befa120(puVar3,param_2,uVar1);
          }
          puVar12 = PTR_PTR_1126af4d0;
          uVar1 = *(undefined8 *)(param_1 + 0x80);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7580(puVar12,param_2,param_4,uVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          _objc_retain(puVar12);
          puVar2 = puVar12;
          func_0x00010bf52a60(puVar12,param_2,&uStack_1f0,auStack_170,0x10);
          if (puVar2 != (undefined *)0x0) {
            lVar15 = *plStack_1e0;
            do {
              puVar13 = (undefined *)0x0;
              do {
                if (*plStack_1e0 != lVar15) {
                  _objc_enumerationMutation(puVar12);
                }
                lVar5 = *(long *)(lStack_1e8 + (long)puVar13 * 8);
                func_0x00010bf8b0c0();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x00010c08fa60();
                if ((lVar6 != 0) &&
                   (puVar7 = puVar3, func_0x00010bf4b900(puVar3,param_2,lVar5),
                   ((ulong)puVar7 & 1) == 0)) {
                  func_0x00010befa120(puVar3,param_2,lVar5);
                }
                _objc_release(lVar5);
                puVar13 = puVar13 + 1;
              } while (puVar2 != puVar13);
              puVar2 = puVar12;
              func_0x00010bf52a60(puVar12,param_2,&uStack_1f0,auStack_170,0x10);
            } while (puVar2 != (undefined *)0x0);
          }
          _objc_release(puVar12);
          _objc_release(puVar12);
          lVar11 = lVar11 + 1;
        } while (lVar11 != lVar4);
        puVar9 = auStack_f0;
        uVar10 = 0x10;
        lVar4 = param_4;
        func_0x00010bf52a60(param_4,param_2,&uStack_1b0,puVar9,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(param_4);
    puVar12 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  puVar12 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(param_3 + 0x80);
  _objc_retain(puVar9);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar12,param_2,puVar9,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(uVar1);
  if (puVar12 != (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bee5480(param_3,param_2,puVar12,uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + 0x80);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_288 = 0xc2000000;
    pcStack_280 = FUN_1058b4158;
    puStack_278 = &UNK_110841f80;
    _objc_retain(puVar12);
    uVar8 = *(undefined8 *)(param_3 + 8);
    puStack_270 = puVar12;
    puStack_268 = puVar3;
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_2c0 = puVar2;
    uStack_2b8 = 0xc2000000;
    uStack_2b0 = 0x1058b419c;
    puStack_2a8 = &UNK_1108bbd78;
    puStack_2a0 = puVar3;
    puStack_298 = param_3;
    func_0x00010c0f8520(uVar1,param_2,&puStack_290,uVar8,&puStack_2c0);
    _objc_release(uVar8);
    _objc_release(uVar1);
    _objc_release(puStack_270);
    _objc_release(puVar3);
  }
  _objc_release(puVar12);
  _objc_release(uVar10);
  return;
}



/* Entry: 1058b3fcc; end: 1058b4157; -[SCGalleryHighlightContentDataSource _setSnapFeedSnapIdViewed:featuredStory:viewedSnapLevelItemIdsInCurrentStory:] */

void FUN_1058b3fcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126af4c0;
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0(puVar2,param_2,param_4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar5);
  if (puVar2 != (undefined *)0x0) {
    lVar3 = param_1;
    func_0x00010bee5480(param_1,param_2,puVar2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1058b4158;
    puStack_78 = &UNK_110841f80;
    _objc_retain(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_70 = puVar2;
    lStack_68 = lVar3;
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x1058b419c;
    puStack_a8 = &UNK_1108bbd78;
    lStack_a0 = lVar3;
    lStack_98 = param_1;
    func_0x00010c0f8520(uVar5,param_2,&puStack_90,uVar4,&puStack_c0);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(puStack_70);
    _objc_release(lVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 1058b4158; end: 1058b41db;  */

void FUN_1058b4158(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2045e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058b41dc; end: 1058b4553; -[SCGalleryHighlightContentDataSource _setSnapIdViewed:featuredStory:] */

void FUN_1058b41dc(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c127ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = param_4;
  func_0x00010bfa3400(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar1 = PTR_PTR_1126af4c0;
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126af4d0;
  if (puVar1 != (undefined *)0x0) {
    if (puVar2 == (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    else {
      _objc_retain(puVar2);
      puVar5 = puVar2;
    }
    puVar6 = puVar5;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x00010bf529e0();
    puVar7 = puVar1;
    func_0x00010c245cc0();
    if ((puVar5 != (undefined *)(long)(int)puVar7) ||
       (puVar5 = puVar1, func_0x00010c1577e0(), ((ulong)puVar5 & 1) == 0)) {
      puVar5 = puVar1;
      func_0x00010c245800();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010b5fca54();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(puVar5);
      func_0x00010bfece40();
      func_0x00010bf529e0();
      puVar8 = puVar5;
      func_0x00010bf51e00(puVar5);
      lVar9 = param_1;
      func_0x00010bee5480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar1);
      uVar10 = *(undefined8 *)(param_1 + 8);
      func_0x00010c11de00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8520(uVar4);
      _objc_release(uVar10);
      _objc_release(uVar4);
      _objc_release(puVar1);
      _objc_release(lVar9);
      _objc_release(param_3);
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1058b4554; end: 1058b455b;  */

long FUN_1058b4554(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  if (param_2 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_2;
    func_0x00010b5fa088();
    if (lVar1 == 9999) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2;
      func_0x00010b5fa5d4(param_2);
    }
  }
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 1058b455c; end: 1058b4607;  */

undefined8 FUN_1058b455c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    *param_4 = 1;
  }
  return uVar2;
}



/* Entry: 1058b4608; end: 1058b46a3;  */

void FUN_1058b4608(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2063c0();
  func_0x00010c1f9e80(puVar1,param_2,1);
  func_0x00010c2045e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058b46a4; end: 1058b4797; -[SCGalleryHighlightContentDataSource _setAssetIdViewed:featuredStory:playbackItemIndex:isFromSnapFeed:viewedSnapLevelItemIdsInCurrentStory:] */

void FUN_1058b46a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf53c00(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a8a0(uVar3,param_2,param_3,uVar2,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1058b4798; end: 1058b484f; -[SCGalleryHighlightContentDataSource hasFeaturedStoryWithCollectionId:completionHandler:] */

void FUN_1058b4798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1058b4850;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058b4850; end: 1058b4907;  */

void FUN_1058b4850(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_1126af4c0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6f40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = *(long *)(param_1 + 0x30);
  puVar4 = puVar3;
  func_0x00010bf529e0(puVar3);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar4 != (undefined *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1058b4908; end: 1058b4953; -[SCGalleryHighlightContentDataSource isSavingFeaturedStory:] */

undefined8 FUN_1058b4908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1,param_2,param_3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1058b4954; end: 1058b49e7; -[SCGalleryHighlightContentDataSource willSaveFeaturedStory:] */

void FUN_1058b4954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x168) != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x168);
  }
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09f60(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  *(undefined **)(param_1 + 0x168) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c07d260(*(undefined8 *)(param_1 + 0x170),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058b49e8; end: 1058b4eb7; -[SCGalleryHighlightContentDataSource willSaveFeaturedStory:completion:] */

void FUN_1058b49e8(long param_1,undefined *param_2,undefined **param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
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
  ppuVar9 = param_3;
  func_0x00010c2a6ac0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c09aa40();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126af4d0;
  if (((int)uVar10 == 0) || (*(long *)(param_1 + 0x1d0) == 0)) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1b8 = 0;
    puStack_1c0 = (undefined *)0x0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    _objc_retain(puVar3);
    ppuVar9 = &puStack_1c0;
    puVar5 = puVar3;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar11 = *plStack_1b0;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_1b0 != lVar11) {
            _objc_enumerationMutation(puVar3);
          }
          puVar14 = PTR_PTR_1126b25c0;
          uVar10 = *(undefined8 *)(lStack_1b8 + (long)puVar13 * 8);
          uVar2 = uVar10;
          func_0x00010c23ff80(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f40e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          if ((puVar14 != (undefined *)0x0) &&
             (puVar6 = puVar14, func_0x00010c0d73c0(), (int)puVar6 != 0)) {
            func_0x00010c241220(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar12);
            _objc_release(uVar10);
            func_0x00010befa120(puVar4);
          }
          _objc_release(puVar14);
          puVar13 = puVar13 + 1;
        } while (puVar5 != puVar13);
        ppuVar9 = &puStack_1c0;
        puVar5 = puVar3;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    else {
      _dispatch_group_create();
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      _objc_retain(puVar4);
      puVar13 = puVar4;
      func_0x00010bf52a60();
      if (puVar13 != (undefined *)0x0) {
        lVar11 = *plStack_1f0;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_1f0 != lVar11) {
              _objc_enumerationMutation(puVar4);
            }
            uVar10 = *(undefined8 *)(lStack_1f8 + (long)puVar14 * 8);
            uVar2 = uVar10;
            func_0x00010c241220(uVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar12;
            func_0x00010c0e00e0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar2);
            _dispatch_group_enter(puVar5);
            lVar7 = *(long *)(param_1 + 0x1d0);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c12f680();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar7);
            if (lVar8 == 0) {
              _dispatch_group_leave(puVar5);
            }
            else {
              lVar7 = lVar8;
              func_0x00010c13cb40(lVar8);
              _objc_retainAutoreleasedReturnValue();
              puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_230 = 0xc2000000;
              pcStack_228 = FUN_1058b4eb8;
              puStack_220 = &UNK_1108bbec8;
              lStack_218 = param_1;
              uStack_210 = uVar10;
              _objc_retain(puVar5);
              puStack_208 = puVar5;
              func_0x00010c297260(lVar7);
              _objc_release(lVar7);
              _objc_release(puStack_208);
            }
            _objc_release(lVar8);
            _objc_release(puVar6);
            puVar14 = puVar14 + 1;
          } while (puVar13 != puVar14);
          puVar13 = puVar4;
          func_0x00010bf52a60();
        } while (puVar13 != (undefined *)0x0);
      }
      _objc_release(puVar4);
      puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_258 = 0xc2000000;
      uStack_250 = 0x1058b504c;
      puStack_248 = &UNK_110849530;
      _objc_retain(param_4);
      ppuVar9 = &puStack_260;
      param_2 = PTR___dispatch_main_q_11034be20;
      lStack_240 = param_4;
      func_0x000100bc0718(puVar5,PTR___dispatch_main_q_11034be20,ppuVar9);
      _objc_release(lStack_240);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107e62780(param_2,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == (undefined *)0x0) {
    _dispatch_group_leave(param_3[6]);
  }
  else {
    puVar3 = param_2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(param_3[4] + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar11 == 0) {
      _dispatch_group_leave(param_3[6]);
    }
    else {
      _objc_retain(puVar3);
      puVar12 = param_3[6];
      _objc_retain(puVar12);
      func_0x00010c0f8520(lVar11);
      _objc_release(puVar12);
      _objc_release(puVar3);
    }
    _objc_release(lVar11);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1058b4eb8; end: 1058b4fff;  */

void FUN_1058b4eb8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107e62780(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    lVar1 = param_2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x80);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      _objc_retain(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      func_0x00010c0f8520(lVar2);
      _objc_release(uVar3);
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1058b5000; end: 1058b5043;  */

void FUN_1058b5000(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c203f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058b5044; end: 1058b5057;  */

void FUN_1058b5044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1058b5058; end: 1058b5187; -[SCGalleryHighlightContentDataSource didSaveFeaturedStory:savedStory:] */

void FUN_1058b5058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1058b5120;
  puStack_40 = &UNK_110856a28;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfaea20(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = uVar2;
  _objc_release(uVar1);
  func_0x00010bf7a300(*(undefined8 *)(param_1 + 0x170),param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058b5188; end: 1058b5427; -[SCGalleryHighlightContentDataSource .cxx_destruct] */

void FUN_1058b5188(long param_1)

{
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
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
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058b5428; end: 1058b547b;  */

void FUN_1058b5428(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  undefined1 uStack_17;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1058b547c;
  puStack_20 = &UNK_1108bbfb8;
  uStack_18 = param_2;
  uStack_17 = param_3;
  func_0x0001006372a4(param_1,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058b547c; end: 1058b552b;  */

ulong FUN_1058b547c(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  if (((*(char *)(param_1 + 0x20) == '\x01') &&
      ((uVar1 = param_2, func_0x00010bf977c0(), (int)uVar1 == 0x4a ||
       (uVar1 = param_2, func_0x00010bf977c0(), (int)uVar1 == 0x50)))) ||
     ((*(char *)(param_1 + 0x21) == '\x01' &&
      (uVar1 = param_2, func_0x00010bf977c0(), (int)uVar1 == 0x51)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = param_2;
    func_0x00010c07b240();
    if (((uVar1 & 1) == 0) && (uVar1 = param_2, func_0x00010c080ca0(), (int)uVar1 != 0)) {
      uVar1 = param_2;
      func_0x000107e75380(param_2);
    }
    else {
      uVar1 = 0;
    }
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1058b552c; end: 1058b569b;  */

ulong FUN_1058b552c(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar6 = param_1;
  func_0x00010bf9c1c0(param_1);
  uVar2 = param_1;
  func_0x00010bf3cec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (uVar3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar2);
        }
        uVar4 = *(ulong *)(uVar9 * 8);
        uVar7 = param_1;
        func_0x000107e679c8(uVar4,param_1,param_2,param_3);
        lVar8 = lVar8 + (uVar4 & 0xffffffff);
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
      uVar3 = uVar2;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain();
    if (param_1 == 0) {
      uVar7 = 0;
    }
    else {
      _objc_retain(param_1);
      func_0x00010bfb2040(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return uVar7;
  }
  uVar6 = (int)uVar6 - lVar8;
  return uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 1058b569c; end: 1058b5737;  */

void FUN_1058b569c(long param_1,undefined8 param_2)

{
  _objc_retain();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    _objc_retain(param_1);
    func_0x00010bfb2040(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1058b5738; end: 1058b583b;  */

ulong FUN_1058b5738(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c127ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4c440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf97200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    uVar4 = param_2;
    func_0x00010c127ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c26ad40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    uVar7 = 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar7;
}


