/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f94250; end: 105f9427f; -[SCPremiumStoryShareActionHandler setIgnoreCallingHandleStoryTap:] */

void FUN_105f94250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f94280; end: 105f942eb; -[SCPremiumStoryShareActionHandler .cxx_destruct] */

void FUN_105f94280(long param_1)

{
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



/* Entry: 105f942ec; end: 105f94537; -[SCPremiumStoryShareDataProvider initWithMessage:renderForQuotedMessage:renderForQuotedMessagePreview:storyFetcher:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:lazyDiscoverFeedEventsLogger:chatContentDelivery:forwardabilityListener:messagingMessageProvider:] */

undefined8 *
FUN_105f942ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126ee778;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0xc) = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x11) = param_4;
    *(undefined1 *)((long)puVar1 + 0x89) = param_5;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[3];
    puVar1[3] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[5];
    puVar1[5] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_13;
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f94538; end: 105f949bf; -[SCPremiumStoryShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:] */

void FUN_105f94538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar14 = param_3;
  _objc_retainBlock();
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar14;
  _objc_release(uVar11);
  lVar12 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar12);
  lVar13 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar14);
  bVar1 = *(byte *)(param_1 + 0x88);
  _os_unfair_lock_unlock(param_1 + 0x60);
  if ((lVar12 == 0) || (lVar13 == 0)) {
    lVar2 = *(long *)(param_1 + 0x90);
    func_0x00010c0cbe00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    if ((bVar1 & 1) == 0) {
      func_0x00010bf4df40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c11ebc0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = lVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010c22ac80();
    if ((int)lVar3 == 0x1b) {
      lVar3 = lVar4;
      func_0x00010c108ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar3);
      func_0x00010c220e20(lVar6);
      lVar3 = lVar6;
      func_0x000108f52130();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c108ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar5);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      lVar5 = lVar8;
      func_0x00010bfe5ea0(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340();
      _objc_release(lVar5);
      lVar5 = lVar4;
      func_0x00010c108ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f0540();
      _objc_release(lVar5);
      lVar5 = lVar2;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 == 0) {
        puVar10 = PTR_PTR_1126b5bc8;
        _objc_alloc(PTR_PTR_1126b5bc8);
        func_0x00010c000be0();
        func_0x00010be14960(param_1);
        _objc_release(puVar10);
      }
      else {
        _objc_initWeak(auStack_70,param_1);
        _objc_copyWeak(auStack_b0,auStack_70);
        _objc_retain(param_5);
        _objc_retain(param_4);
        func_0x00010be10500(param_1);
        _objc_release(param_4);
        _objc_release(param_5);
        _objc_destroyWeak(auStack_b0);
        _objc_destroyWeak(auStack_70);
      }
      _objc_release(puVar9);
      _objc_release(lVar8);
      _objc_release(lVar3);
      _objc_release(lVar6);
    }
    else if ((int)lVar3 == 8) {
      _objc_initWeak(auStack_70,param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_105f949c0;
      puStack_90 = &UNK_110900a58;
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(param_5);
      uStack_88 = param_5;
      _objc_retain(param_4);
      uStack_80 = param_4;
      func_0x00010bde6ec0(param_1);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  else {
    func_0x00010be8e5e0(param_1);
  }
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f949c0; end: 105f94a77;  */

void FUN_105f949c0(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be14960();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105f94a78; end: 105f94bcf; -[SCPremiumStoryShareDataProvider _fetchStoryForShareModel:storyThumbnailUrlUpdateBlock:videoContextUpdateBlock:] */

void FUN_105f94a78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010bf454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf82020(uVar2);
  _objc_release(uVar1);
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



/* Entry: 105f94bd0; end: 105f94c2f;  */

void FUN_105f94bd0(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be8e5e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105f94c30; end: 105f957b7; -[SCPremiumStoryShareDataProvider _renderTileWithDiscoverFeedStory:shareModel:thumbnailUrlUpdateBlock:videoContextUpdateBlock:] */

undefined *
FUN_105f94c30(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,long param_5,
             long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _os_unfair_lock_lock(param_1 + 0x60);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_4;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c6870;
  func_0x00010c25b100();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar25;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  puVar25 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar25;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  uVar1 = param_4;
  func_0x00010c241220(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    if (puVar4 == (undefined *)0x0) {
      puVar25 = (undefined *)0x0;
      puStack_198 = (undefined *)0x0;
      puStack_190 = (undefined *)0x0;
      goto LAB_105f95470;
    }
    puVar25 = puVar4;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar25;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c11b6a0(puVar4);
    func_0x00010bf651a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar5;
    func_0x0001084866e4();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar25 = puVar4;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar25;
    func_0x00010bf52a60();
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar25);
      uVar19 = 0;
LAB_105f95198:
      puVar25 = puVar4;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar25;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar25);
    }
    else {
      uVar19 = 0;
      puVar21 = (undefined *)0x0;
      lVar23 = *plStack_120;
      do {
        puVar24 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar23) {
            _objc_enumerationMutation(puVar25);
          }
          puVar22 = *(undefined **)(lStack_128 + (long)puVar24 * 8);
          puVar7 = puVar22;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c0720c0();
          _objc_release(puVar7);
          if ((int)puVar8 != 0) {
            _objc_retain(puVar22);
            _objc_release(puVar21);
            puVar21 = puVar22;
          }
          func_0x00010c23ffa0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar22;
          func_0x00010c23fe00();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x000108f56ee8();
          _objc_release(puVar7);
          _objc_release(puVar22);
          uVar19 = (uint)puVar8 | uVar19;
          puVar24 = puVar24 + 1;
        } while (puVar6 != puVar24);
        puVar6 = puVar25;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
      _objc_release(puVar25);
      if (puVar21 == (undefined *)0x0) goto LAB_105f95198;
    }
    puVar25 = puVar21;
    func_0x00010c23ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar25;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    puVar25 = puVar6;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar25;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar25);
    puVar7 = puVar4;
    func_0x00010c11af80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfad760();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar8;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar24;
    func_0x00010bdc2b80(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(puVar7);
    puVar7 = puVar24;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar7;
    _objc_release(uVar18);
    puVar7 = puVar4;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar7;
    _objc_release(uVar18);
    (**(code **)(param_6 + 0x10))(param_6,puVar6);
    lVar23 = *(long *)(param_1 + 0x90);
    func_0x00010c0cbe00();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar19 & 1) != 0) {
      lVar9 = lVar23;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c08fa60();
      _objc_release(lVar10);
      _objc_release(lVar9);
      if (lVar11 != 0) {
        lVar9 = lVar23;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar23;
        func_0x00010bf490e0(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar23;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c0c5180(lVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar9;
        func_0x000108543a00(lVar9,lVar10,lVar12,0,0);
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        uVar18 = *(undefined8 *)(param_1 + 0x58);
        *(long *)(param_1 + 0x58) = lVar14;
        _objc_retain(lVar14);
        _objc_release(uVar18);
        uVar18 = *(undefined8 *)(param_1 + 0x38);
        lVar9 = lVar23;
        func_0x00010bf490e0(lVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe1f60(uVar18);
        _objc_release(lVar14);
        _objc_release(lVar9);
      }
    }
    _objc_release(lVar23);
    _objc_release(puVar24);
    _objc_release(puVar6);
    _objc_release(puVar21);
    _objc_release(puVar5);
    goto LAB_105f95470;
  }
  puVar25 = puVar3;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar25;
  func_0x00010bfb57e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar25);
  puVar25 = puVar3;
  func_0x00010c2387e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar25;
  func_0x00010c23aa60();
  if (puVar5 == (undefined *)0x3) {
LAB_105f95038:
    _objc_release(puVar25);
LAB_105f95040:
    puVar25 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c11b6a0(puVar3);
    func_0x00010bf651a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar25;
    func_0x0001084866e4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar3;
    func_0x00010c2387e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c154b00();
    if ((int)puVar6 < 1) {
      _objc_release(puVar5);
      goto LAB_105f95038;
    }
    puVar6 = puVar3;
    func_0x00010c2387e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar6;
    func_0x00010bf984c0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar25);
    puStack_190 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar21 < 1) goto LAB_105f95040;
    func_0x00010807446c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c2387e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154b00();
    puVar6 = puVar3;
    func_0x00010c2387e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf984c0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar25);
  puVar5 = puVar3;
  func_0x00010c11af80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfad760();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar6;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2a2900(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar5;
  func_0x00010847dea8(puVar5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar21;
  func_0x00010bfe8f00(puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(puVar5);
  puVar5 = puVar21;
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar5;
  _objc_release(uVar18);
  puVar5 = puVar3;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar5;
  _objc_release(uVar18);
  _objc_release(puVar21);
LAB_105f95470:
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c11b1e0();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar15;
  func_0x00010bf5b7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar15);
  if (((*(byte *)(param_1 + 0x88) & 1) == 0) && (*(char *)(param_1 + 0x89) != '\x01')) {
    func_0x00010c080120();
    func_0x00010c2a7620(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bb3c0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ba960(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bb0a0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a9180(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar16 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c112dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar16;
    func_0x00010bfe1180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8e20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar15);
    _objc_release(uVar16);
    puVar5 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = (undefined8 *)(param_1 + 0x70);
    uVar15 = *puVar20;
    *puVar20 = puVar5;
    _objc_release(uVar15);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x10))(*(long *)(param_1 + 0x68),*puVar20);
  }
  else {
    lVar23 = *(long *)(param_1 + 0x68);
    puVar5 = PTR_PTR_1126c6870;
    func_0x00010c25b100(PTR_PTR_1126c6870);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar23 + 0x10))(lVar23,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x58));
  _os_unfair_lock_unlock(param_1 + 0x60);
  _objc_initWeak(auStack_138,param_1);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_105f957d8;
  puStack_148 = &UNK_1108434b0;
  _objc_copyWeak(auStack_140,auStack_138);
  ppuVar17 = &puStack_160;
  func_0x0001000d76cc("APPSTORE",ppuVar17);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(uVar18);
  _objc_release(uVar1);
  _objc_release(puVar25);
  _objc_release(puStack_190);
  _objc_release(puStack_198);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(param_3);
  func_0x00010c0c6c20(ppuVar17);
  return (undefined *)(ulong)((int)ppuVar17 == 2);
}



/* Entry: 105f957b8; end: 105f957d7;  */

bool FUN_105f957b8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0c6c20(param_2);
  return (int)param_2 == 2;
}



/* Entry: 105f957d8; end: 105f9581b;  */

void FUN_105f957d8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0xa0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf49700();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9581c; end: 105f95857; -[SCPremiumStoryShareDataProvider discoverFeedStory] */

void FUN_105f9581c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f95858; end: 105f95893; -[SCPremiumStoryShareDataProvider storyShareModel] */

void FUN_105f95858(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f95894; end: 105f958cf; -[SCPremiumStoryShareDataProvider publisher] */

void FUN_105f95894(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f958d0; end: 105f9590b; -[SCPremiumStoryShareDataProvider storyThumbnailUrl] */

void FUN_105f958d0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f9590c; end: 105f95947; -[SCPremiumStoryShareDataProvider bitmojiAvatarIds] */

void FUN_105f9590c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f95948; end: 105f95b2b; -[SCPremiumStoryShareDataProvider subscribe] */

void FUN_105f95948(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _os_unfair_lock_lock(param_1 + 0x60);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c11b1e0();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x60);
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b4028;
    func_0x00010c258c40(PTR_PTR_1126b4028);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar4 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    uVar5 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9260(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 105f95b2c; end: 105f95b77;  */

void FUN_105f95b2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be595c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f95b78; end: 105f95b7b;  */

void FUN_105f95b78(void)

{
  return;
}



/* Entry: 105f95b7c; end: 105f95b97; -[SCPremiumStoryShareDataProvider shouldOverrideMediaSize] */

byte FUN_105f95b7c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x89);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 105f95b98; end: 105f95bab; -[SCPremiumStoryShareDataProvider overrideMediaSize] */

undefined1  [16] FUN_105f95b98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4064000000000000;
  auVar1._0_8_ = 0x4056800000000000;
  return auVar1;
}



/* Entry: 105f95bac; end: 105f95d73; -[SCPremiumStoryShareDataProvider _updateUiBlockWithSubscribed:] */

void FUN_105f95bac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _os_unfair_lock_lock(param_1 + 0x60);
  puVar1 = PTR_PTR_1126c6938;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c260dc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c26e520(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c25a980(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf15520(*(undefined8 *)(param_1 + 0x70));
  func_0x00010bfdff00();
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf98d60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf9dcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c29c5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf12c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053860();
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x68) + 0x10))
            (*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x60);
  return;
}



/* Entry: 105f95d74; end: 105f95e6f; -[SCPremiumStoryShareDataProvider _logSubscriptionEvent] */

void FUN_105f95d74(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _os_unfair_lock_lock(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x60);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = 6;
  func_0x000107cb4cfc(6,uVar3,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560(puVar1);
  _objc_release(uVar2);
  func_0x00010c1d0640(puVar1);
  func_0x00010c1d0640(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bf7dbc0(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f95e70; end: 105f96053; -[SCPremiumStoryShareDataProvider _constructPremiumStoryShareModelFromLegacyMessage:completion:] */

void FUN_105f95e70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0c5180(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b4c0();
    _objc_release(lVar1);
    _objc_release(uVar3);
    if ((int)uVar4 == 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c125f80(uVar4);
      _objc_release(uVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    else {
      func_0x00010be76720(param_1);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f96054; end: 105f96087;  */

void FUN_105f96054(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f96088; end: 105f961db; -[SCPremiumStoryShareDataProvider _postProcessChatMediaForMessage:completion:] */

void FUN_105f96088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c0cbe00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c104be0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f961dc; end: 105f963e3;  */

void FUN_105f961dc(long param_1,int param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_4);
  if ((param_2 == 0) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    lVar1 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar4);
      lVar5 = param_4;
      func_0x00010c0e00e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be26680(lVar4);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    puVar6 = PTR_PTR_1126c6980;
    _objc_alloc(PTR_PTR_1126c6980);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005fa0(puVar6);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b5bc8;
    _objc_alloc(PTR_PTR_1126b5bc8);
    puVar8 = puVar6;
    func_0x000108f51f98(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000be0(puVar7);
    _objc_release(puVar8);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f963e4; end: 105f96413; -[SCPremiumStoryShareDataProvider _handleBitmojiStoryWithIds:] */

void FUN_105f963e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f96414; end: 105f96693; -[SCPremiumStoryShareDataProvider _fetchChatMediaForBitmojiStory:compositeStoryId:snapId:overrideTimestamp:completion:] */

void FUN_105f96414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b5bc8;
    _objc_alloc();
    func_0x00010c000be0();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c5180(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4b4c0();
    _objc_release(lVar3);
    _objc_release(uVar5);
    if ((int)uVar6 == 0) {
      _objc_initWeak(auStack_68,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      _objc_retain(puVar4);
      _objc_retain(param_7);
      func_0x00010c125f80(uVar6);
      _objc_release(uVar6);
      _objc_release(param_7);
      _objc_release(puVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    else {
      func_0x00010be76700(param_1);
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f96694; end: 105f966cb;  */

void FUN_105f96694(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f966cc; end: 105f9684f; -[SCPremiumStoryShareDataProvider _postProcessChatMediaForBitmojiStoriesMessage:shareModel:completion:] */

void FUN_105f966cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c0cbe00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c104be0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f96850; end: 105f968df;  */

void FUN_105f96850(long param_1,int param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_4);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010be26680(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000105f968d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105f968e0; end: 105f96b2b; -[SCPremiumStoryShareDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105f968e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar8);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126b4030;
    func_0x00010bf5b300(PTR_PTR_1126b4030);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) {
      puVar4 = PTR_PTR_1126b4030;
      func_0x00010bf5b340(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      _objc_release(puVar3);
      if ((int)uVar1 == 0) goto LAB_105f96b04;
    }
    else {
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126b4038;
    func_0x00010bf5b6e0(PTR_PTR_1126b4038);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b4040;
    _objc_opt_class(PTR_PTR_1126b4040);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar7 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar5);
    _os_unfair_lock_lock(param_1 + 0x60);
    uVar5 = uVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c11b1e0();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(uVar5);
    _os_unfair_lock_unlock(param_1 + 0x60);
    if ((int)uVar7 != 0) {
      puVar3 = PTR_PTR_1126b4030;
      func_0x00010bf5b300(PTR_PTR_1126b4030);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(param_3);
      func_0x00010bee2be0(param_1);
      _objc_release(puVar3);
    }
  }
LAB_105f96b04:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f96b2c; end: 105f96b67; -[SCPremiumStoryShareDataProvider removeCreatorSettingsListener] */

void FUN_105f96b2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f96b68; end: 105f96b7f; -[SCPremiumStoryShareDataProvider storySharePlaybackPresenterDelegate] */

void FUN_105f96b68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f96b80; end: 105f96b8b; -[SCPremiumStoryShareDataProvider setStorySharePlaybackPresenterDelegate:] */

void FUN_105f96b80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 105f96b8c; end: 105f96ba3; -[SCPremiumStoryShareDataProvider storyShareDataListener] */

void FUN_105f96b8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f96ba4; end: 105f96baf; -[SCPremiumStoryShareDataProvider setStoryShareDataListener:] */

void FUN_105f96ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 105f96bb0; end: 105f96c97; -[SCPremiumStoryShareDataProvider .cxx_destruct] */

void FUN_105f96bb0(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105f96c98; end: 105f96e87; -[SCPremiumStoryShareMessageStoryFetcher initWithNetworkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:adConfigProvider:circumstanceEngine:adRenderDataParser:] */

undefined1 *
FUN_105f96c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ee780;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x50) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
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



/* Entry: 105f96e88; end: 105f9705f; -[SCPremiumStoryShareMessageStoryFetcher discoverFeedStoryForCompositeStoryId:completion:] */

void FUN_105f96e88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar4 = *(long *)(param_1 + 0x58);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x50);
  if (lVar4 == 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___dispatch_main_q_11034be20;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105f97060;
    puStack_88 = &UNK_110900b08;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uStack_80 = param_3;
    _objc_retain(param_4);
    lStack_78 = param_4;
    func_0x00010846f16c(uVar5,0,&PTR____CFConstantStringClassReference_110e346b8,uVar1,uVar2,param_3
                        ,0,puVar3,&puStack_a0,*(undefined8 *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x48));
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar5);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,lVar4);
  }
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f97060; end: 105f970cf;  */

void FUN_105f97060(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bdd7d80();
    _objc_release(lVar1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 105f970d0; end: 105f9714b; -[SCPremiumStoryShareMessageStoryFetcher _cacheStoryForStoryId:story:] */

void FUN_105f970d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x50);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,param_4,param_3);
  _os_unfair_lock_unlock(param_1 + 0x50);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f9714c; end: 105f971db; -[SCPremiumStoryShareMessageStoryFetcher .cxx_destruct] */

void FUN_105f9714c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105f971dc; end: 105f974f7; -[SCPremiumStorySharePlaybackDataProvider initWithPremiumStoryShareDataProviding:composerRenderedPlugin:operaPresenterDelegate:cachedReadReceiptViewStateProvider:readReceiptCoordinator:grapheneRegistry:circumstanceEngine:discoverOperaPluginCreator:discoverDataFetcher:storiesConfigProvider:viewModelGenerator:composerStoryAutoAdvanceHandlerFactory:discoverFeedDataMutator:isGroup:message:] */

undefined8 *
FUN_105f971dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18)

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
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126ee788;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
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
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x12) = param_16;
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
  }
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



/* Entry: 105f974f8; end: 105f97547; -[SCPremiumStorySharePlaybackDataProvider operaLaunchingCandidates] */

void FUN_105f974f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bde6d80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa0) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0xa0);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105f97548; end: 105f978df; -[SCPremiumStorySharePlaybackDataProvider playlistPlugins] */

void FUN_105f97548(long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010bf81fc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    puVar2 = PTR_PTR_1126b1118;
    _objc_alloc();
    func_0x00010c043160();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110f41c18;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110dcad78;
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c41f8;
    ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4210;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f42758;
    puVar3 = *(undefined **)(param_1 + 0x98);
    func_0x000107d04eec();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110f42778;
    puStack_a0 = puVar13;
    if (*(char *)(param_1 + 0x90) == '\x01') {
      puVar4 = *(undefined **)(param_1 + 0x98);
      func_0x000107d04f3c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110e02998;
    puVar5 = puVar1;
    puStack_98 = puVar4;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110f42798;
    puVar8 = *(undefined **)(param_1 + 0x98);
    puStack_90 = puVar7;
    func_0x000107d04fac();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    if (puVar8 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_b0,&ppuStack_e0,6
                       );
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      _objc_release(puVar9);
    }
    _objc_release(puVar8);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar13);
    }
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar3;
    _objc_release(uVar12);
    puVar3 = *(undefined **)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010be21840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be74b80();
    _objc_retainAutoreleasedReturnValue();
    param_3 = 0;
    puVar13 = puVar3;
    func_0x00010bfb7ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(lVar11);
    _objc_release(puVar3);
    _objc_release(puVar10);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar13 = PTR_PTR_1126b23f0;
    _objc_retain(param_3);
    _objc_alloc(puVar13);
    func_0x00010c011ae0();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105f978e0; end: 105f9794f; -[SCPremiumStorySharePlaybackDataProvider operaSessionContextWithIntentDate:] */

void FUN_105f978e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f97950; end: 105f97967; -[SCPremiumStorySharePlaybackDataProvider operaPresenterDelegate] */

void FUN_105f97950(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f97968; end: 105f979a7; -[SCPremiumStorySharePlaybackDataProvider parentViewController] */

void FUN_105f97968(long param_1)

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



/* Entry: 105f979a8; end: 105f97baf; -[SCPremiumStorySharePlaybackDataProvider upNextConfig] */

void FUN_105f979a8(long param_1)

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
  long lVar10;
  undefined *puVar11;
  
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf80be0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf81fc0();
    _objc_retainAutoreleasedReturnValue();
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
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010c0309a0();
      lVar4 = param_1;
      func_0x00010bf695c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x000100504554();
      func_0x00010befa160(puVar6);
      _objc_release(lVar7);
      puVar11 = PTR_PTR_1126c6948;
      _objc_alloc(PTR_PTR_1126c6948);
      puVar8 = puVar6;
      func_0x00010bf51e00(puVar6);
      lVar7 = param_1;
      func_0x00010bf695c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar3;
      func_0x00010bf454e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be21840(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0332c0(puVar11);
      _objc_release(param_1);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(puVar8);
      _objc_release(lVar4);
      _objc_release(puVar6);
    }
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105f97bb0; end: 105f97bf7;  */

void FUN_105f97bb0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 105f97bf8; end: 105f97e2b; -[SCPremiumStorySharePlaybackDataProvider contentProductPlaybackConfig] */

void FUN_105f97bf8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x98);
  func_0x000107d04eec();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    puVar2 = *(undefined **)(param_1 + 0x98);
    func_0x000107d04f3c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = *(undefined **)(param_1 + 0x98);
  func_0x000107d04fac();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
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
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf81fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c6950;
  _objc_alloc();
  uVar9 = uVar5;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01dd60();
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = *(undefined **)(puVar6 + 0x68);
    if (puVar10 == (undefined *)0x0) {
      puVar2 = *(undefined **)(puVar6 + 8);
      func_0x00010bf81fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126c6988;
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00cf80();
      uVar9 = *(undefined8 *)(puVar6 + 0x68);
      *(undefined **)(puVar6 + 0x68) = puVar10;
      _objc_release(uVar9);
      _objc_release(puVar1);
      puVar10 = *(undefined **)(puVar6 + 0x68);
      _objc_retain(puVar10);
      _objc_release();
    }
    else {
      puVar2 = puVar10;
      _objc_retain();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
      ___stack_chk_fail();
      puVar6 = *(undefined **)(puVar2 + 8);
      func_0x00010bf81fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(puVar2 + 8);
      func_0x00010c25b060(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0f0540();
      func_0x00010c0df780(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c241220(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar6;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar10;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar6;
      if (puVar4 == (undefined *)0x0) {
        if (puVar3 == (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          uVar5 = *(undefined8 *)(puVar2 + 8);
          func_0x00010bf1ad20(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108072c98(puVar6,uVar9,uVar5,*(undefined8 *)(puVar2 + 0x20),0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
        }
      }
      else {
        func_0x000107a413c0(puVar6,puVar1,0,0);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar9);
      _objc_release(puVar1);
      _objc_release(uVar7);
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105f97e2c; end: 105f97f37; -[SCPremiumStorySharePlaybackDataProvider _getPlaybackDataProvider] */

void FUN_105f97e2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x68);
  if (lVar10 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf81fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c6988;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00cf80();
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar2;
    _objc_release(uVar9);
    _objc_release(puVar3);
    lVar10 = *(long *)(param_1 + 0x68);
    _objc_retain(lVar10);
    _objc_release();
  }
  else {
    lVar1 = lVar10;
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar4 = *(long *)(lVar1 + 8);
    func_0x00010bf81fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c25b060(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0f0540();
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c241220(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar4;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010afefbe8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar4;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    lVar10 = lVar4;
    if (lVar8 == 0) {
      if (lVar6 == 0) {
        lVar10 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar1 + 8);
        func_0x00010bf1ad20(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108072c98(lVar4,uVar9,uVar7,*(undefined8 *)(lVar1 + 0x20),0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
      }
    }
    else {
      func_0x000107a413c0(lVar4,puVar2,0,0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar6);
    _objc_release(lVar8);
    _objc_release(uVar9);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 105f97f38; end: 105f980cb; -[SCPremiumStorySharePlaybackDataProvider _playableDataModel] */

void FUN_105f97f38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf81fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25b060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0f0540();
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar8;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar1;
  if (lVar5 == 0) {
    if (lVar6 == 0) {
      lVar8 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf1ad20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108072c98(lVar1,uVar4,uVar7,*(undefined8 *)(param_1 + 0x20),0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
    }
  }
  else {
    func_0x000107a413c0(lVar1,puVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 105f980cc; end: 105f981d3; -[SCPremiumStorySharePlaybackDataProvider defaultFallbackStories] */

void FUN_105f980cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010bf81fc0();
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
    func_0x000107d00a08(puVar7,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000107af933c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(lVar6);
    lVar6 = *(long *)(param_1 + 0x80);
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
  if (*(long *)(lVar3 + 0xa0) != 0) {
    return;
  }
  lVar4 = lVar3;
  func_0x00010bde6d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + 0xa0);
  *(long *)(lVar3 + 0xa0) = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105f981d4; end: 105f98213; -[SCPremiumStorySharePlaybackDataProvider constructOperaLaunchingCandidates] */

void FUN_105f981d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bde6d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f98214; end: 105f9837f; -[SCPremiumStorySharePlaybackDataProvider _constructOperaLaunchingCandidates] */

void FUN_105f98214(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  puVar9 = *(undefined **)(param_1 + 0xa0);
  if (puVar9 == (undefined *)0x0) {
    lVar1 = param_1;
    func_0x00010be74b80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf81fc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar9 = *(undefined **)(param_1 + 0xa0);
      _objc_retain(puVar9);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      func_0x00010c0309a0();
      uVar4 = *(ulong *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf80be0();
      _objc_release(uVar4);
      if ((uVar5 & 1) == 0) {
        lVar6 = param_1;
        func_0x00010bf695c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar2;
        func_0x00010799ad20(lVar2,lVar6,lVar1,uVar7,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        func_0x00010befa160(puVar3);
        _objc_release(lVar8);
        _objc_release(lVar6);
      }
      puVar9 = PTR_PTR_1126b23f8;
      _objc_alloc(PTR_PTR_1126b23f8);
      func_0x00010c0087a0();
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    _objc_retain(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105f98380; end: 105f98467; -[SCPremiumStorySharePlaybackDataProvider .cxx_destruct] */

void FUN_105f98380(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f98468; end: 105f98aef; -[SCPremiumStoryShareMessagePlugin initWithStorySharingServices:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:adConfigProvider:unifiedPublicProfilesPresenterScopeExposer:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:cachedReadReceiptViewStateProvider:readReceiptCoordinator:grapheneRegistry:circumstanceEngine:discoverOperaPluginCreator:storiesConfigProvider:discoverFeedDataFetcher:viewModelGenerator:premiumStoryShareSender:lazyDiscoverFeedEventsController:chatContentDelivery:composerStoryAutoAdvanceHandlerFactory:discoverFeedDataMutator:adRenderDataParser:spotlightScopeExposer:spotlightScopeServices:messagingMessageProvider:] */

undefined8 *
FUN_105f98468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31)

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
  _objc_retain();
  _objc_retain();
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
  _objc_retain(param_31);
  puStack_70 = PTR_PTR_1126ee790;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x1c] = 0;
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
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_31;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x20];
    puVar1[0x20] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c6990;
    _objc_alloc();
    func_0x00010c02f440();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_31);
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



/* Entry: 105f98af0; end: 105f98afb; -[SCPremiumStoryShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105f98af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee7570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__valdiContextParamsForMessage_co_112597700,param_3,param_4,0,0);
  return;
}



/* Entry: 105f98afc; end: 105f98fdf; -[SCPremiumStoryShareMessagePlugin _valdiContextParamsForMessage:conversationParticipants:renderForQuotedMessage:renderForQuotedMessagePreview:] */

void FUN_105f98afc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long **pplVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long *plStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  uint uStack_6c;
  
  uStack_6c = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar12 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00(uVar12,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  if ((param_5 & 1) == 0) {
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar21 = uVar13;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  uVar13 = uVar21;
  func_0x00010c22ac80();
  if (((int)uVar13 == 0x1b) || (uVar13 = uVar21, func_0x00010c22ac80(), (int)uVar13 == 8)) {
    uStack_90 = uVar21;
    _os_unfair_lock_lock(param_1 + 0xe0);
    uVar13 = uVar12;
    func_0x00010bf490e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(param_1 + 0xd0);
    func_0x00010c0e00e0(lVar14,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    plStack_a8 = (long *)(param_1 + 0xd8);
    lVar15 = *plStack_a8;
    plStack_a0 = (long *)(param_1 + 0xd0);
    lStack_78 = lVar14;
    func_0x00010c0e00e0(lVar15,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126c6880;
    lStack_88 = lVar15;
    if ((param_5 == 0) || (uStack_6c != 0)) {
      func_0x00010c0cbae0(PTR_PTR_1126c6880,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = puVar17;
    }
    else {
      uVar21 = param_3;
      func_0x00010c0cb340(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar21;
      func_0x00010c11ec40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11eda0(puVar17,param_2,uVar16);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = puVar17;
      _objc_release(uVar16);
      _objc_release(uVar21);
    }
    if ((((uStack_6c & 1) == 0) && ((param_5 & 1) == 0)) && (lStack_78 != 0)) {
      lVar14 = lStack_78;
      func_0x00010bf4ece0(lStack_78,param_2,puStack_80);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lStack_88 == 0) {
      puVar17 = PTR_PTR_1126c6998;
      _objc_alloc();
      func_0x00010c02b460();
      puVar18 = PTR_PTR_1126c69a0;
      puStack_98 = puVar17;
      _objc_alloc();
      lVar14 = param_1 + 0x130;
      _objc_loadWeakRetained(lVar14);
      uVar21 = *(undefined8 *)(param_1 + 0x68);
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      uVar16 = *(undefined8 *)(param_1 + 0x78);
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      uVar23 = *(undefined8 *)(param_1 + 0x88);
      uVar6 = *(undefined8 *)(param_1 + 0x90);
      uVar2 = *(undefined8 *)(param_1 + 0x98);
      uVar7 = *(undefined8 *)(param_1 + 0xa0);
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      uVar8 = *(undefined8 *)(param_1 + 200);
      uVar19 = param_4;
      func_0x0001070b1c70();
      func_0x00010c0386c0(puVar18,param_2,puStack_98,param_1,lVar14,uVar21,uVar4,uVar16,uVar5,uVar23
                          ,uVar2,uVar6,uVar7,uVar3,uVar8,(char)uVar19);
      _objc_release(lVar14);
      func_0x00010c20da20(puStack_98,param_2,puVar18);
      puVar20 = PTR_PTR_1126c69a8;
      _objc_alloc();
      lVar14 = param_1 + 0x140;
      _objc_loadWeakRetained(lVar14);
      uVar23 = *(undefined8 *)(param_1 + 0x48);
      uVar21 = *(undefined8 *)(param_1 + 0x108);
      uVar16 = *(undefined8 *)(param_1 + 0x110);
      lVar15 = param_1 + 0x150;
      _objc_loadWeakRetained(lVar15);
      func_0x00010c0386e0(puVar20,param_2,puStack_98,lVar14,uVar23,uVar21,uVar16,lVar15);
      _objc_release(lVar15);
      _objc_release(lVar14);
      iVar11 = (int)*(undefined8 *)(param_1 + 0x80);
      func_0x000108f4b690();
      puVar17 = PTR____kCFBooleanFalse_11034ab60;
      if (iVar11 == 0) {
        puVar17 = PTR____kCFBooleanTrue_11034ab68;
      }
      func_0x00010c1a9cc0(puVar20,param_2,puVar17);
      lVar15 = *(long *)(param_1 + 8);
      func_0x00010c295300(lVar15);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = *(undefined8 *)(param_1 + 8);
      func_0x00010c240440(uVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uStack_6c;
      puVar17 = (undefined *)0x0;
      if (uStack_6c == 0) {
        puVar17 = puVar18;
      }
      puVar1 = (undefined *)0x0;
      if (param_5 == 0 && uStack_6c == 0) {
        puVar1 = puVar20;
      }
      lVar22 = lVar14;
      func_0x00010bf4ef00(lVar14,param_2,puStack_98,puVar17,uVar21,puVar1,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar21);
      _objc_release(lVar14);
      _objc_release(lVar15);
      pplVar9 = &plStack_a8;
      if (param_5 == 0 && uVar10 == 0) {
        pplVar9 = &plStack_a0;
      }
      func_0x00010c1d0640(**pplVar9,param_2,lVar22,uVar13);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xf0),param_2,puStack_98,uVar13);
      lVar14 = lVar22;
      func_0x00010bf4ece0(lVar22,param_2,puStack_80);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar22);
      _objc_release(puVar20);
      _objc_release(puVar18);
      _objc_release(puStack_98);
    }
    else {
      lVar14 = lStack_88;
      func_0x00010bf4ece0(lStack_88,param_2,puStack_80);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puStack_80);
    _objc_release(lStack_88);
    _objc_release(lStack_78);
    _objc_release(uVar13);
    _os_unfair_lock_unlock(param_1 + 0xe0);
    uVar21 = uStack_90;
  }
  else {
    lVar14 = 0;
  }
  _objc_release(uVar21);
  _objc_release(uVar12);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar14);
  return;
}



/* Entry: 105f98fe0; end: 105f9900f; -[SCPremiumStoryShareMessagePlugin identifier] */

void FUN_105f98fe0(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebc78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebc78);
  return;
}



/* Entry: 105f99010; end: 105f99017; -[SCPremiumStoryShareMessagePlugin pluginType] */

undefined8 FUN_105f99010(void)

{
  return 0;
}



/* Entry: 105f99018; end: 105f99133; -[SCPremiumStoryShareMessagePlugin setActiveConversationIdObservable:] */

void FUN_105f99018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105f99134; end: 105f9915f;  */

void FUN_105f99134(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f99160; end: 105f991e3; -[SCPremiumStoryShareMessagePlugin _handleConversationChange] */

void FUN_105f99160(long param_1,undefined8 param_2)

{
  _os_unfair_lock_lock(param_1 + 0xe0);
  _os_unfair_lock_lock(param_1 + 0xe4);
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0xf0),param_2,&PTR___NSConcreteGlobalBlock_110900b78
                     );
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xd0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0xf0));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x100));
  _os_unfair_lock_unlock(param_1 + 0xe4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xe0);
  return;
}



/* Entry: 105f991e4; end: 105f991eb;  */

void FUN_105f991e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12bb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_removeCreatorSettingsListener_112628900);
  return;
}



/* Entry: 105f991ec; end: 105f993eb; -[SCPremiumStoryShareMessagePlugin dismissPresentedView] */

ulong FUN_105f991ec(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x108));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_release();
  if (uVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0xe0);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar8 = *(long *)(param_1 + 0xf0);
    _objc_retain(lVar8);
    param_4 = auStack_e8;
    lVar1 = lVar8;
    func_0x00010bf52a60(lVar8,param_2,&uStack_130,param_4,0x10);
    if (lVar1 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar8);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
          lVar4 = *(long *)(param_1 + 0xf0);
          func_0x00010c0e00e0(lVar4,param_2,uVar9);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c25b080();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar4);
          if (lVar5 != 0) {
            uVar6 = *(undefined8 *)(param_1 + 0xf0);
            func_0x00010c0e00e0(uVar6,param_2,uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar6;
            func_0x00010c25b080();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf376e0();
            _objc_release(uVar9);
            _objc_release(uVar6);
          }
          lVar11 = lVar11 + 1;
        } while (lVar1 != lVar11);
        param_4 = auStack_e8;
        lVar1 = lVar8;
        puVar7 = &uStack_130;
        func_0x00010bf52a60(lVar8,param_2,&uStack_130,param_4,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar8);
    uVar3 = param_1 + 0xe0;
    _os_unfair_lock_unlock();
    param_3 = (undefined1 *)puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar3;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0xe0);
  __Unwind_Resume();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(uVar3 + 0xe4);
  uVar6 = *(undefined8 *)(uVar3 + 0x118);
  func_0x00010c0cbe00(uVar6,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(uVar3 + 0x100);
  func_0x00010bf4b900(uVar6,param_2,uVar9);
  _objc_release(uVar9);
  _os_unfair_lock_unlock(uVar3 + 0xe4);
  _objc_release(param_4);
  _objc_release(param_3);
  return (ulong)((uint)uVar6 ^ 1);
}



/* Entry: 105f993ec; end: 105f994af; -[SCPremiumStoryShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

uint FUN_105f993ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0xe4);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b900(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0xe4);
  _objc_release(param_4);
  _objc_release(param_3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105f994b0; end: 105f99557; -[SCPremiumStoryShareMessagePlugin canForwardMessageFromCTA:] */

uint FUN_105f994b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xe4);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010bf4b900(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0xe4);
  _objc_release(param_3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105f99558; end: 105f996ab; -[SCPremiumStoryShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105f99558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010bec4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0040a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b0648;
    _objc_alloc(PTR_PTR_1126b0648);
    func_0x00010c01bf60();
    puVar4 = PTR_PTR_1126c6898;
    func_0x00010c08f300(PTR_PTR_1126c6898,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c68a0;
    func_0x00010c2990e0(0x3fe3aa03e88cb3c9,PTR_PTR_1126c68a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c68a8;
  _objc_alloc(PTR_PTR_1126c68a8);
  func_0x00010c039de0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105f996ac; end: 105f9998b; -[SCPremiumStoryShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105f996ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bec4de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bf026a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2b0820(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar5 = param_1;
  func_0x00010bec4920(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c241220(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x000107d0506c(lVar5,lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010c2aaec0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bf50b20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010c15c420(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105f9998c; end: 105f9999f;  */

void FUN_105f9998c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105f9999c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2 == 0);
  return;
}



/* Entry: 105f999a0; end: 105f99a3b; -[SCPremiumStoryShareMessagePlugin hideForwardButtonForCacheId:] */

void FUN_105f999a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xe4);
  uVar1 = *(ulong *)(param_1 + 0x100);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x100),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0xe4);
    param_1 = param_1 + 0x148;
    _objc_loadWeakRetained(param_1);
    func_0x00010c101c40();
    _objc_release(param_1);
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0xe4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f99a3c; end: 105f99b2f; -[SCPremiumStoryShareMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105f99a3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c22ac80();
  if (((int)uVar2 == 0x1b) || (uVar2 = uVar3, func_0x00010c22ac80(), (int)uVar2 == 8)) {
    func_0x00010bee7560(param_1,param_2,param_3,param_4,1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f99b30; end: 105f99c23; -[SCPremiumStoryShareMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_105f99b30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c22ac80();
  if (((int)uVar2 == 0x1b) || (uVar2 = uVar3, func_0x00010c22ac80(), (int)uVar2 == 8)) {
    func_0x00010bee7560(param_1,param_2,param_3,param_4,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105f99c24; end: 105f99c2b; -[SCPremiumStoryShareMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_105f99c24(void)

{
  return 1;
}



/* Entry: 105f99c2c; end: 105f99cc7; -[SCPremiumStoryShareMessagePlugin shouldDisplayContextualHeaderForMessage:] */

undefined8 FUN_105f99c2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010c22ac80();
  if (((int)uVar3 == 0x1b) || (uVar3 = uVar2, func_0x00010c22ac80(), (int)uVar3 == 8)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar2);
  return uVar3;
}



/* Entry: 105f99cc8; end: 105f99dbf; -[SCPremiumStoryShareMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_105f99cc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c22ac80();
  if (((int)uVar2 == 0x1b) || (uVar2 = uVar3, func_0x00010c22ac80(), (int)uVar2 == 8)) {
    puVar6 = PTR_PTR_1126c68c0;
    _objc_alloc(PTR_PTR_1126c68c0);
    puVar4 = puVar6;
    func_0x000108f59464();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c68c8;
    func_0x00010c131980(PTR_PTR_1126c68c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051540(puVar6,param_2,puVar4,0,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105f99dc0; end: 105f99e87; -[SCPremiumStoryShareMessagePlugin _storyShareModelForMessage:] */

void FUN_105f99dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xe0);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0xf0);
  func_0x00010c0e00e0(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0xe0);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x00010c25b060(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105f99e88; end: 105f99f4f; -[SCPremiumStoryShareMessagePlugin _storyForMessage:] */

void FUN_105f99e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xe0);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0xf0);
  func_0x00010c0e00e0(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0xe0);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x00010bf81fc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105f99f50; end: 105f9a017; -[SCPremiumStoryShareMessagePlugin _storyThumbnailUrlForMessage:] */

void FUN_105f99f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xe0);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf490e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0xf0);
  func_0x00010c0e00e0(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0xe0);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x00010c25b5e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105f9a018; end: 105f9a01f; -[SCPremiumStoryShareMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105f9a018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 105f9a020; end: 105f9a027; -[SCPremiumStoryShareMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105f9a020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 105f9a028; end: 105f9a057; -[SCPremiumStoryShareMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105f9a028(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f9a058; end: 105f9a06f; -[SCPremiumStoryShareMessagePlugin operaPresenterDelegate] */

void FUN_105f9a058(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9a070; end: 105f9a07b; -[SCPremiumStoryShareMessagePlugin setOperaPresenterDelegate:] */

void FUN_105f9a070(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x130,param_3);
  return;
}



/* Entry: 105f9a07c; end: 105f9a093; -[SCPremiumStoryShareMessagePlugin presentingViewController] */

void FUN_105f9a07c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9a094; end: 105f9a09f; -[SCPremiumStoryShareMessagePlugin setPresentingViewController:] */

void FUN_105f9a094(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x138,param_3);
  return;
}



/* Entry: 105f9a0a0; end: 105f9a0b7; -[SCPremiumStoryShareMessagePlugin uiContainer] */

void FUN_105f9a0a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9a0b8; end: 105f9a0c3; -[SCPremiumStoryShareMessagePlugin setUiContainer:] */

void FUN_105f9a0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x140,param_3);
  return;
}



/* Entry: 105f9a0c4; end: 105f9a0db; -[SCPremiumStoryShareMessagePlugin forwardingDelegate] */

void FUN_105f9a0c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9a0dc; end: 105f9a0e7; -[SCPremiumStoryShareMessagePlugin setForwardingDelegate:] */

void FUN_105f9a0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x148,param_3);
  return;
}



/* Entry: 105f9a0e8; end: 105f9a0ff; -[SCPremiumStoryShareMessagePlugin multiDirectionUIContainer] */

void FUN_105f9a0e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f9a100; end: 105f9a10b; -[SCPremiumStoryShareMessagePlugin setMultiDirectionUIContainer:] */

void FUN_105f9a100(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x150,param_3);
  return;
}



/* Entry: 105f9a10c; end: 105f9a2fb; -[SCPremiumStoryShareMessagePlugin .cxx_destruct] */

void FUN_105f9a10c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x150);
  _objc_destroyWeak(param_1 + 0x148);
  _objc_destroyWeak(param_1 + 0x140);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_destroyWeak(param_1 + 0x130);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
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



/* Entry: 105f9a2fc; end: 105f9a5a7; -[SCFriendingComposerMentionedFriendStore initWithSnapchatters:snapchattersDataMutator:snapchattersDataTracker:performerProvider:grapheneRegistry:] */

undefined8 *
FUN_105f9a2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ee798;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    uVar2 = puVar1[7];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x000100817178(uVar2,&PTR___NSConcreteGlobalBlock_110900b98);
    uVar4 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[8];
    puVar1[8] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[5];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c69b0;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[9];
    func_0x00010bf529e0(puVar1[3]);
    func_0x00010c0aa260(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = puVar1[8];
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f9a5a8; end: 105f9a5af;  */

void FUN_105f9a5a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105f9a5b0; end: 105f9a5db;  */

void FUN_105f9a5b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f9a5dc; end: 105f9a6f3; -[SCFriendingComposerMentionedFriendStore addMentionedFriendWithMentionedFriend:] */

void FUN_105f9a5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c290fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
  if (lVar4 != 0) {
    puVar1 = PTR_PTR_1126ae5c0;
    func_0x00010befca80(PTR_PTR_1126ae5c0,param_2,lVar4,0x2e5189e1,0x38,0,0,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8a80(uVar2,param_2,puVar1,uVar3,&PTR___NSConcreteGlobalBlock_110900bb8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}


