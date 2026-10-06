/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106032ce8; end: 1060334c3; -[SCGroupMapView initWithUserSession:mapPeopleFriendsProvider:mapPeopleGroupsProvider:mapPersonLocationsProvider:imageDownloader:mapBitmojiAvatarGenerator:networkConnectivityMonitor:displayNameProvider:profileSessionID:isSecondaryLocationDevice:embeddedMapFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106032ce8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined **param_6,undefined **param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined **ppuVar22;
  ulong uVar23;
  undefined **ppuVar24;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puStack_a8 = PTR_PTR_1126ef2f8;
  puVar2 = &uStack_b0;
  puVar4 = PTR_s_init_1125d9248;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  ppuVar22 = param_6;
  ppuVar24 = param_7;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar2 + (long)_DAT_11273d578,param_3);
    lVar20 = (long)_DAT_11273d57c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_4;
    _objc_release(uVar3);
    lVar20 = (long)_DAT_11273d580;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_5;
    _objc_release(uVar3);
    lVar20 = (long)_DAT_11273d584;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined ***)((long)puVar2 + lVar20) = param_6;
    _objc_release(uVar3);
    lVar20 = (long)_DAT_11273d588;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined ***)((long)puVar2 + lVar20) = param_7;
    _objc_release(uVar3);
    lVar20 = (long)_DAT_11273d58c;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_8;
    _objc_release(uVar3);
    lVar20 = (long)_DAT_11273d590;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined8 *)((long)puVar2 + lVar20) = param_10;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11273d594) = param_12;
    lVar21 = (long)_DAT_11273d598;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar21);
    *(undefined8 *)((long)puVar2 + lVar21) = param_14;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273d59c);
    *(undefined **)((long)puVar2 + (long)_DAT_11273d59c) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    lVar20 = (long)_DAT_11273d5a0;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined **)((long)puVar2 + lVar20) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    lVar19 = (long)_DAT_11273d5a4;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar19);
    *(undefined **)((long)puVar2 + lVar19) = puVar4;
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126c73a0;
    _objc_alloc();
    func_0x00010c03b220();
    uVar3 = *(undefined8 *)((long)puVar2 + lVar21);
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = (long)_DAT_11273d5a8;
    uVar18 = *(undefined8 *)((long)puVar2 + lVar21);
    *(undefined8 *)((long)puVar2 + lVar21) = uVar3;
    _objc_release(uVar18);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar23 = *(ulong *)((long)puVar2 + lVar21);
    _objc_retain(uVar23);
    _objc_opt_class(puVar4);
    uVar6 = uVar23;
    _objc_opt_isKindOfClass(uVar23,puVar4);
    uVar1 = uVar23;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain();
    _objc_release(uVar23);
    if (uVar1 != 0) {
      func_0x00010c219b60(uVar23);
      func_0x00010befbb60(puVar2);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar6 = uVar23;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar23;
      uStack_a0 = uVar8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010bf1ff80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar23;
      uStack_98 = uVar11;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar2;
      func_0x00010c08de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_90 = uVar14;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar2;
      func_0x00010c2793a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar23;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar16;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar17);
      _objc_release(uVar16);
      _objc_release(puVar15);
      _objc_release(uVar23);
      _objc_release(uVar14);
      _objc_release(puVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(puVar7);
      _objc_release(uVar6);
    }
    _objc_initWeak(auStack_b8,puVar2);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1060334c4;
    puStack_c8 = &UNK_110908eb8;
    ppuVar22 = &puStack_e0;
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar19);
    puStack_108 = puVar4;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x10603350c;
    puStack_f0 = &UNK_11086a720;
    ppuVar24 = &puStack_108;
    puVar4 = auStack_b8;
    _objc_copyWeak(auStack_e8,puVar4);
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    puVar17 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_11273d5ac;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined **)((long)puVar2 + lVar20) = puVar17;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar2);
    func_0x00010befbd60(*(undefined8 *)((long)puVar2 + lVar20));
    *(undefined8 *)((long)puVar2 + (long)_DAT_11273d5b0) = 0xffffffffffffffff;
    puVar17 = PTR_PTR_1126c73a8;
    _objc_alloc();
    func_0x00010bf20c00(puVar2);
    func_0x00010c013e60();
    lVar20 = (long)_DAT_11273d5b4;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar20);
    *(undefined **)((long)puVar2 + lVar20) = puVar17;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar20));
    puVar17 = PTR_PTR_1126ba4e8;
    uVar3 = param_9;
    func_0x00010c269d40(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf48f60();
    func_0x00010c06f020();
    _objc_release(uVar3);
    if ((int)puVar17 != 0) {
      func_0x00010befbb60(puVar2);
    }
    puVar17 = PTR_PTR_1126c73b0;
    _objc_alloc(PTR_PTR_1126c73b0);
    func_0x00010c050900();
    func_0x00010c18b5e0();
    func_0x00010bef9040(*(undefined8 *)((long)puVar2 + lVar20));
    _objc_release(puVar17);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uVar1);
    _objc_release(puVar5);
  }
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
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar24 + 4);
  _objc_destroyWeak(ppuVar22 + 4);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume(param_3);
  _objc_retain(puVar4);
  puVar2 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar2);
  func_0x00010bedb180();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 1060334c4; end: 106033553;  */

void FUN_1060334c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedb180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106033554; end: 1060336b7; -[SCGroupMapView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106033554(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ef2f8;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11273d5ac));
  func_0x00010bf20c00(param_5);
  lVar1 = param_5;
  func_0x00010bf32c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar1);
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  if (0.0 < param_1) {
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    if (0.0 < param_1) {
      lVar1 = param_5;
      func_0x00010bf32c20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7e40(0x4038000000000000,0x4014000000000000,0x4020000000000000);
      _objc_release(lVar1);
    }
  }
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_11273d5b8;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010c181fe0(0,0,0x4039000000000000,0,*(undefined8 *)(param_5 + lVar1));
  lVar1 = param_5;
  func_0x00010bf32c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ff60();
  func_0x00010bed8560(param_5);
  _objc_release(lVar1);
  return;
}



/* Entry: 1060336b8; end: 10603371f; -[SCGroupMapView setGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060336b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11273d5bc;
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bed4ea0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106033720; end: 106033a37; -[SCGroupMapView _updateCarouselItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106033720(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c73b8;
  _objc_alloc(PTR_PTR_1126c73b8);
  lVar9 = (long)_DAT_11273d5bc;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  lVar10 = param_1 + (long)_DAT_11273d578;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c0189c0(puVar2,param_2,uVar8,lVar10,*(undefined8 *)(param_1 + (long)_DAT_11273d57c),
                      *(undefined8 *)(param_1 + (long)_DAT_11273d580),
                      *(undefined8 *)(param_1 + (long)_DAT_11273d584),
                      *(undefined8 *)(param_1 + (long)_DAT_11273d588),
                      *(undefined8 *)(param_1 + (long)_DAT_11273d590));
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar10);
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0ecc20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da540(param_1,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar3);
  uVar4 = param_1;
  func_0x00010c0f7b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010befa160(puVar1,param_2,uVar5);
  lVar10 = (long)_DAT_11273d5b0;
  if (*(long *)(param_1 + lVar10) != -1) {
    uVar4 = param_1;
    func_0x00010bf32c20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c29ff60();
    lVar9 = (long)_DAT_11273d5c0;
    uVar7 = *(ulong *)(param_1 + lVar9);
    func_0x00010bf529e0();
    _objc_release(uVar4);
    if (uVar6 < uVar7) {
      uVar8 = *(undefined8 *)(param_1 + lVar9);
      uVar4 = param_1;
      func_0x00010bf32c20(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c29ff60();
      func_0x00010c0dfd40(uVar8,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7de80();
      _objc_release(uVar8);
      _objc_release(uVar4);
    }
    *(undefined8 *)(param_1 + lVar10) = 0xffffffffffffffff;
  }
  puVar2 = puVar1;
  func_0x00010bf51e00();
  lVar10 = (long)_DAT_11273d5c0;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar2;
  _objc_release(uVar8);
  uVar6 = param_1;
  func_0x00010be248a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + (long)_DAT_11273d5a4),param_2,uVar6);
  uVar4 = param_1;
  func_0x00010bf32c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8ac0();
  _objc_release(uVar4);
  uVar7 = param_1;
  func_0x00010bf32c20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c29ff60();
  _objc_release(uVar7);
  uVar7 = *(ulong *)(param_1 + lVar10);
  func_0x00010bf529e0();
  if (uVar7 <= uVar4) {
    uVar4 = 0;
  }
  func_0x00010bed8560(param_1,param_2,uVar4,0);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106033a38; end: 106033bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106033a38(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c293740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273d57c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0b96e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106033bf4; end: 106033bff; -[SCGroupMapView mapCarouselContainer:didScrollToIndex:action:] */

void FUN_106033bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateForSelectedCarouselIndex__112593b00,param_4,1);
  return;
}



/* Entry: 106033c00; end: 106033ccb; -[SCGroupMapView _updateForSelectedCarouselIndex:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106033c00(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_11273d5b0;
  lVar2 = *(long *)(param_1 + lVar3);
  lVar4 = (long)_DAT_11273d5c0;
  if (lVar2 != param_3 && lVar2 != -1) {
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7de80();
    _objc_release(uVar1);
  }
  *(long *)(param_1 + lVar3) = param_3;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0dfd40(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0da880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf770a0(uVar1,param_2,param_4,lVar2,*(undefined8 *)(param_1 + _DAT_11273d5a0));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106033ccc; end: 106033d7b; -[SCGroupMapView noLocationOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106033ccc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11273d5b8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c73c8;
    _objc_alloc();
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar3 = param_1;
    func_0x00010bf32c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(param_1,param_2,uVar2,lVar3);
    _objc_release(lVar3);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106033d7c; end: 106033ebf; -[SCGroupMapView _tapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106033d7c(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bf01b40(*(undefined8 *)(param_2 + _DAT_11273d5b8));
  if (param_1 != 0.0) {
    return;
  }
  uVar2 = *(ulong *)(param_2 + _DAT_11273d5c0);
  func_0x00010c29ff60(*(undefined8 *)(param_2 + _DAT_11273d5b4));
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
LAB_106033e4c:
    uVar1 = uVar2;
    _objc_opt_respondsToSelector(uVar2,PTR_s_isGroupCard_1125fac48);
    if (((uVar1 & 1) == 0) || (uVar1 = uVar2, func_0x00010c0748e0(), (int)uVar1 == 0))
    goto LAB_106033e9c;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcedc0();
  }
  else {
    uVar1 = uVar2;
    func_0x00010c1345e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) goto LAB_106033e4c;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c1345e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcede0(param_2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
LAB_106033e9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106033ec0; end: 106033ec7; -[SCGroupMapView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_106033ec0(void)

{
  return 1;
}



/* Entry: 106033ec8; end: 106033fb3; -[SCGroupMapView _updateMapCamera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106033ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar4 = *(ulong *)(param_1 + _DAT_11273d5a8);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010c0bd140(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106033fb4; end: 106034587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106033fb4(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
  dVar12 = 0.0;
  if (0.0 <= param_3) {
    dVar12 = param_3;
  }
  dVar9 = (double)NEON_fminnm(dVar12,0x4039800000000000);
  _exp2(dVar9);
  dVar12 = -85.0511287798066;
  if (-85.0511287798066 <= param_1) {
    dVar12 = param_1;
  }
  dVar10 = (double)NEON_fminnm(dVar12,0x40554345b1a549d7);
  dVar10 = dVar10 * 0.017453292519943295;
  _cos(dVar10);
  dVar11 = 0.2617993877991494;
  _tan(0x3fd0c152382d7365);
  puVar1 = PTR_PTR_1126c5a00;
  _objc_alloc(PTR_PTR_1126c5a00);
  dVar12 = param_1;
  func_0x00010bffd4e0(param_1,param_2,0,0,
                      (((dVar10 * 6.283185307179586 * 6378137.0) / (dVar9 * 512.0)) * param_4 * 0.5)
                      / dVar11);
  lVar8 = (long)_DAT_11273d5a8;
  uVar2 = *(undefined8 *)(*(long *)(param_5 + 0x28) + lVar8);
  func_0x00010bf29d60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c071800();
  _objc_release(uVar2);
  if ((int)uVar7 == 0) {
    func_0x00010bf01f00(puVar1);
    puVar4 = *(undefined **)(*(long *)(param_5 + 0x28) + lVar8);
    func_0x00010c0baae0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    if (dVar12 <= 0.0) {
      func_0x00010c17a700(param_1,param_2,0,puVar4,param_6,1);
    }
    else {
      func_0x00010c176100(0x3fe0000000000000,puVar4,param_6,puVar1,0);
    }
  }
  else {
    puVar4 = PTR_PTR_1126b1dc8;
    func_0x00010c271ea0(param_1,param_2,PTR_PTR_1126b1dc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01f00(puVar1);
    if (param_1 <= 0.0) {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184590;
    }
    else {
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_3,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126b1dc8;
    func_0x00010bf2a160(PTR_PTR_1126b1dc8,param_6,ppuVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1dc8;
    func_0x00010bf03e20(PTR_PTR_1126b1dc8,param_6,1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_5 + 0x28) + lVar8);
    func_0x00010bf29d60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d1840();
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(ppuVar3);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106034588; end: 106034607; -[SCGroupMapView _updateVisibleUsers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273d5a8);
  _objc_retain(param_3);
  func_0x00010bf218e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21ef40(uVar2,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106034608; end: 106034713; -[SCGroupMapView _groupMemberUserIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034608(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar2 = param_1;
  func_0x00010c0f7b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  cVar1 = *(char *)(param_1 + _DAT_11273d594);
  param_1 = param_1 + _DAT_11273d578;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (cVar1 == '\x01') {
    func_0x00010c12d360();
    _objc_release(lVar2);
    _objc_release(param_1);
    func_0x00010bf51e00(puVar4);
  }
  else {
    func_0x00010c174bc0(puVar4,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106034714; end: 10603471b;  */

void FUN_106034714(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10603471c; end: 10603472b; -[SCGroupMapView group] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10603471c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d5bc);
}



/* Entry: 10603472c; end: 10603474b; -[SCGroupMapView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603472c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273d5c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10603474c; end: 10603475f; -[SCGroupMapView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603474c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273d5c4,param_3);
  return;
}



/* Entry: 106034760; end: 10603477f; -[SCGroupMapView userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034760(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273d578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106034780; end: 106034793; -[SCGroupMapView setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034780(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273d578,param_3);
  return;
}



/* Entry: 106034794; end: 1060347a3; -[SCGroupMapView carouselView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106034794(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d5b4);
}



/* Entry: 1060347a4; end: 1060347e3; -[SCGroupMapView setCarouselView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060347a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d5b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060347e4; end: 1060347f3; -[SCGroupMapView people] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060347e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d5c8);
}



/* Entry: 1060347f4; end: 1060347ff; -[SCGroupMapView setPeople:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060347f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106034800; end: 10603480f; -[SCGroupMapView carouselItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106034800(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d5c0);
}



/* Entry: 106034810; end: 10603481b; -[SCGroupMapView setCarouselItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034810(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10603481c; end: 10603485b; -[SCGroupMapView setNoLocationOverlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603481c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d5b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10603485c; end: 1060349a3; -[SCGroupMapView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603485c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d5b8,0);
  _objc_storeStrong(param_1 + _DAT_11273d5c0,0);
  _objc_storeStrong(param_1 + _DAT_11273d5c8,0);
  _objc_storeStrong(param_1 + _DAT_11273d5b4,0);
  _objc_destroyWeak(param_1 + _DAT_11273d578);
  _objc_destroyWeak(param_1 + _DAT_11273d5c4);
  _objc_storeStrong(param_1 + _DAT_11273d5bc,0);
  _objc_storeStrong(param_1 + _DAT_11273d59c,0);
  _objc_storeStrong(param_1 + _DAT_11273d5a8,0);
  _objc_storeStrong(param_1 + _DAT_11273d598,0);
  _objc_storeStrong(param_1 + _DAT_11273d5a4,0);
  _objc_storeStrong(param_1 + _DAT_11273d5a0,0);
  _objc_storeStrong(param_1 + _DAT_11273d590,0);
  _objc_storeStrong(param_1 + _DAT_11273d58c,0);
  _objc_storeStrong(param_1 + _DAT_11273d588,0);
  _objc_storeStrong(param_1 + _DAT_11273d584,0);
  _objc_storeStrong(param_1 + _DAT_11273d580,0);
  _objc_storeStrong(param_1 + _DAT_11273d57c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d5ac,0);
  return;
}



/* Entry: 1060349a4; end: 106034adf; -[SCGroupProfileCollectionViewMapCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060349a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ef300;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  lVar4 = (long)_DAT_11273d5cc;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010bf199e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c19f0e0(puVar2);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106034ae0; end: 106034b1f; -[SCGroupProfileCollectionViewMapCell setgroupMapViewCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273d5d4);
  *(undefined8 *)(param_1 + _DAT_11273d5d4) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beae030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupMapViewIfPossible_1125891b0);
  return;
}



/* Entry: 106034b20; end: 106034c0f; -[SCGroupProfileCollectionViewMapCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034b20(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a52a8);
  uVar1 = param_3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar5 = (long)_DAT_11273d5d8;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  if (uVar4 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar2 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar2 & 1) != 0) goto LAB_106034bf0;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar4;
    _objc_release(uVar3);
    func_0x00010beae020(param_1);
  }
LAB_106034bf0:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106034c10; end: 106034d0f; -[SCGroupProfileCollectionViewMapCell _setupMapViewIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034c10(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_1126a52a8;
  lVar4 = *(long *)(param_1 + _DAT_11273d5d8);
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010010fab4(lVar4,puVar2);
  lVar1 = lVar4;
  if ((int)lVar5 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  lVar5 = *(long *)(param_1 + _DAT_11273d5d4);
  if (lVar5 != 0 && lVar1 != 0) {
    lVar6 = (long)_DAT_11273d5cc;
    lVar4 = *(long *)(param_1 + lVar6);
    if (lVar4 == 0) {
      func_0x00010bf20c00(param_1);
      (**(code **)(lVar5 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(long *)(param_1 + lVar6) = lVar5;
      _objc_release(uVar3);
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
      lVar5 = param_1;
      func_0x00010bf31be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar5);
      lVar4 = *(long *)(param_1 + lVar6);
    }
    func_0x00010c1a4580(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106034d10; end: 106034d23; +[SCGroupProfileCollectionViewMapCell sizeWithViewModel:constrainedToSize:] */

void FUN_106034d10(void)

{
  return;
}



/* Entry: 106034d24; end: 106034dd3; -[SCGroupProfileCollectionViewMapCell groupMapView:wantsToShowPersonOnMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034d24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110eba518,uVar2);
  _objc_release(uVar2);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11273d5dc),param_2,param_1,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106034dd4; end: 106034e33; -[SCGroupProfileCollectionViewMapCell groupMapView:wantsToShowGroupOnMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034dd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11273d5dc),param_2,param_1,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106034e34; end: 106034e43; -[SCGroupProfileCollectionViewMapCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106034e34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d5d8);
}



/* Entry: 106034e44; end: 106034e53; -[SCGroupProfileCollectionViewMapCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106034e44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d5dc);
}



/* Entry: 106034e54; end: 106034e93; -[SCGroupProfileCollectionViewMapCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273d5dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106034e94; end: 106034ea3; -[SCGroupProfileCollectionViewMapCell groupMapViewCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106034e94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273d5d4);
}



/* Entry: 106034ea4; end: 106034eaf; -[SCGroupProfileCollectionViewMapCell setGroupMapViewCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106034eb0; end: 106034ebf; -[SCGroupProfileCollectionViewMapCell roundAllCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106034eb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273d5d0);
}



/* Entry: 106034ec0; end: 106034ecf; -[SCGroupProfileCollectionViewMapCell setRoundAllCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034ec0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273d5d0) = param_3;
  return;
}



/* Entry: 106034ed0; end: 106034f2f; -[SCGroupProfileCollectionViewMapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106034ed0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273d5dc,0);
  _objc_storeStrong(param_1 + _DAT_11273d5d8,0);
  _objc_storeStrong(param_1 + _DAT_11273d5d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273d5cc,0);
  return;
}



/* Entry: 106034f30; end: 10603507b; -[SCGroupProfileMapSectionActionHandler initWithGroupId:groupServices:dataProvider:displayContentDelegate:mapScopeLauncher:fullMapScopeServices:] */

undefined1 *
FUN_106034f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ef308;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10603507c; end: 1060350d7; -[SCGroupProfileMapSectionActionHandler setPresentingViewController:] */

void FUN_10603507c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x38,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c09f560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060350d8; end: 1060351bf; -[SCGroupProfileMapSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_1060350d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar3 != 0) {
    uVar4 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c08fa60();
    if (uVar4 == 0) {
      func_0x00010be2a660(param_1);
    }
    else {
      func_0x00010be29fe0(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  return uVar3;
}



/* Entry: 1060351c0; end: 1060352d7; -[SCGroupProfileMapSectionActionHandler _handleGroupMapTap] */

void FUN_1060351c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfcf8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfc6120(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1060352d8; end: 1060353c7;  */

void FUN_1060352d8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_2 != 0) {
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x00010c0ecc20(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100504554();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b5c58;
    lVar1 = param_2;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bf61620(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be6d340();
    _objc_release(param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1060353c8; end: 1060353cf;  */

void FUN_1060353c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1060353d0; end: 10603544f; -[SCGroupProfileMapSectionActionHandler _handleFriendMapTap:] */

void FUN_1060353d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b5c58;
    func_0x00010bfb92a0(PTR_PTR_1126b5c58,param_2,param_3,0,0,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6d340(param_1,param_2,puVar2,0xc);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106035450; end: 106035583; -[SCGroupProfileMapSectionActionHandler _openMapWithDestination:grapheneSource:] */

void FUN_106035450(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4dea0();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126b5c50;
    _objc_alloc(PTR_PTR_1126b5c50);
    func_0x00010c031b80();
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1;
    func_0x00010becd5c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar4,param_2,lVar1,1);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf22f00(uVar5,param_2,param_1,puVar3,puVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x28),param_2,uVar5,param_1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106035584; end: 10603562b; -[SCGroupProfileMapSectionActionHandler mapScopeDidEnd:] */

void FUN_106035584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf94c80(uVar1,param_2,param_3);
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10603562c;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010bf6f440(uVar1,param_2,&puStack_58);
  _objc_release(uVar1);
  return;
}



/* Entry: 10603562c; end: 10603565b;  */

void FUN_10603562c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf4c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10603565c; end: 10603570f; -[SCGroupProfileMapSectionActionHandler _topMostPresentedViewController] */

void FUN_10603565c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  while (uVar2 != 0) {
    uVar3 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06d1a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) break;
    uVar3 = uVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar2 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106035710; end: 106035727; -[SCGroupProfileMapSectionActionHandler presentingViewController] */

void FUN_106035710(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106035728; end: 10603578b; -[SCGroupProfileMapSectionActionHandler .cxx_destruct] */

void FUN_106035728(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 10603578c; end: 10603590b; -[SCGroupProfileMapSectionDataProvider initWithGroupId:groupServices:resourceDownloader:locationSharingController:groupMapViewCreator:isSecondaryLocationDevice:] */

undefined1 *
FUN_10603578c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

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
  puStack_58 = PTR_PTR_1126ef310;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    func_0x00010c1895c0(*(undefined8 *)((long)puVar1 + 0x28));
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x38) = param_8;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x00010bfcf900(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10603590c; end: 106035917; +[SCGroupProfileMapSectionDataProvider announcerIdentifier] */

undefined ** FUN_10603590c(void)

{
  return &PTR____CFConstantStringClassReference_110e394f8;
}



/* Entry: 106035918; end: 10603591f; -[SCGroupProfileMapSectionDataProvider addListener:] */

void FUN_106035918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106035920; end: 106035927; -[SCGroupProfileMapSectionDataProvider removeListener:] */

void FUN_106035920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106035928; end: 10603595b; -[SCGroupProfileMapSectionDataProvider setSectionDataModel:] */

void FUN_106035928(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10603595c; end: 1060359af; -[SCGroupProfileMapSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10603595c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1060359b0;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060359b0; end: 106035a4f;  */

void FUN_1060359b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be1e080(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010c0840e0();
  _objc_release(param_2);
  func_0x00010bffd260(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106035a50; end: 106035ae7; -[SCGroupProfileMapSectionDataProvider contentCellClassesByReuseIdentifier] */

undefined * FUN_106035a50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e394d8;
  puVar1 = PTR_PTR_1126aeaa8;
  _objc_opt_class();
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e394b8;
  puVar2 = PTR_PTR_1126c73d0;
  puStack_28 = puVar1;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_28,&ppuStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 106035ae8; end: 106035aef; -[SCGroupProfileMapSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_106035ae8(void)

{
  return 1;
}



/* Entry: 106035af0; end: 106035d07; -[SCGroupProfileMapSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_106035af0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_x25;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined1 *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  ppuVar3 = &puStack_f0;
  ppuVar2 = &puStack_f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_a0,param_1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106035d08;
  puStack_b0 = &UNK_110845ae0;
  puVar7 = auStack_a0;
  _objc_copyWeak(auStack_a8,puVar7);
  ppuVar1 = &puStack_c8;
  _objc_retainBlock();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e394b8;
    ppuVar2 = ppuVar1;
    _objc_retainBlock();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_70 = ppuVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = (undefined **)unaff_x25;
  }
  else {
    puStack_f0 = puVar6;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x106035d50;
    puStack_d8 = &UNK_110845ae0;
    puVar7 = auStack_a0;
    _objc_copyWeak(auStack_d0,puVar7);
    _objc_retainBlock();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e394b8;
    ppuVar4 = ppuVar1;
    _objc_retainBlock();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110e394d8;
    puVar5 = (undefined1 *)ppuVar3;
    ppuStack_88 = ppuVar4;
    _objc_retainBlock();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar5;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_d0);
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_a8);
  puVar5 = auStack_a0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)ppuVar2 + 0x20));
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar7);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bde5320();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106035d08; end: 106035d97;  */

void FUN_106035d08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5320();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106035d98; end: 106035e13; -[SCGroupProfileMapSectionDataProvider _configureMapCardCell:] */

void FUN_106035d98(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c73d0;
  _objc_opt_class(PTR_PTR_1126c73d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1a48c0(uVar1);
  func_0x00010c1ee920(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106035e14; end: 106035e83; -[SCGroupProfileMapSectionDataProvider _configureShareLocationCell:] */

void FUN_106035e14(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aeaa8;
  _objc_opt_class(PTR_PTR_1126aeaa8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1eccc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106035e84; end: 106035eb7; -[SCGroupProfileMapSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_106035e84(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106035eb8; end: 106035f3b; -[SCGroupProfileMapSectionDataProvider _getContentViewModelForIndexPath:] */

void FUN_106035eb8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0840e0();
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfcf8c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106035f3c; end: 106035f6f; -[SCGroupProfileMapSectionDataProvider chatLocationSharingController:didUpdateCellTypes:shouldAnimate:] */

void FUN_106035f3c(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106035f70; end: 106035fb3; -[SCGroupProfileMapSectionDataProvider didUpdateGroupsDataRequest:groupId:] */

void FUN_106035f70(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 2) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106035fb4; end: 106035fcb; -[SCGroupProfileMapSectionDataProvider dataProviderDelegate] */

void FUN_106035fb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106035fcc; end: 106035fd7; -[SCGroupProfileMapSectionDataProvider setDataProviderDelegate:] */

void FUN_106035fcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106035fd8; end: 106035fdf; -[SCGroupProfileMapSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106035fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106035fe0; end: 10603600f; -[SCGroupProfileMapSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106035fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106036010; end: 106036017; -[SCGroupProfileMapSectionDataProvider sectionDataModel] */

undefined8 FUN_106036010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106036018; end: 10603601f; -[SCGroupProfileMapSectionDataProvider locationSharingController] */

undefined8 FUN_106036018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106036020; end: 10603604f; -[SCGroupProfileMapSectionDataProvider setLocationSharingController:] */

void FUN_106036020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106036050; end: 1060360cf; -[SCGroupProfileMapSectionDataProvider .cxx_destruct] */

void FUN_106036050(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 1060360d0; end: 10603621b; -[SCMyUnifiedProfileMapSectionActionHandler initWithUserSession:mapScopeExposer:mapStatusFetcher:mapPeopleFriendsProvider:pageLauncher:fullMapScopeServices:] */

undefined1 *
FUN_1060360d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ef318;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10603621c; end: 1060362a3; -[SCMyUnifiedProfileMapSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_10603621c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110eba5f8);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      goto LAB_106036288;
    }
    func_0x00010be2bfc0(param_1);
  }
  else {
    func_0x00010be2bfe0(param_1);
  }
  uVar1 = 1;
LAB_106036288:
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 1060362a4; end: 10603631f; -[SCMyUnifiedProfileMapSectionActionHandler _handleMapTap] */

void FUN_1060362a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b5c58;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb92a0(puVar2,param_2,uVar1,0,0,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be6d320(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106036320; end: 10603642f; -[SCMyUnifiedProfileMapSectionActionHandler _openMapWithDestination:] */

void FUN_106036320(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b5c50;
    _objc_alloc(PTR_PTR_1126b5c50);
    func_0x00010c031b80();
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar4 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c038f40(puVar3,param_2,lVar4,1);
    _objc_release(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf22f00(uVar5,param_2,param_1,puVar2,puVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106036430; end: 10603650f; -[SCMyUnifiedProfileMapSectionActionHandler _handleMapSettings] */

void FUN_106036430(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b0ea8;
  _objc_opt_new(PTR_PTR_1126b0ea8);
  func_0x00010c19a840();
  puVar4 = PTR_PTR_1126b5538;
  _objc_opt_new(PTR_PTR_1126b5538);
  func_0x00010c1bfc40(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c020();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106036510; end: 1060365b3; -[SCMyUnifiedProfileMapSectionActionHandler mapScopeDidEnd:] */

void FUN_106036510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128e40();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060365b4; end: 1060365cb; -[SCMyUnifiedProfileMapSectionActionHandler presentingViewController] */

void FUN_1060365b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060365cc; end: 1060365d7; -[SCMyUnifiedProfileMapSectionActionHandler setPresentingViewController:] */

void FUN_1060365cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1060365d8; end: 10603663b; -[SCMyUnifiedProfileMapSectionActionHandler .cxx_destruct] */

void FUN_1060365d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10603663c; end: 106036b1b; -[SCMyUnifiedProfileMapSectionDataProvider initWithUserSession:locationSharingPreferencesProvider:lazyMapPeopleFriendsProvider:resourceDownloader:circumstanceEngine:userLocationPermissionsManager:mapSnapshotScopeServices:mapSnapshotScopeExposer:profileSessionID:embeddedMapFactoryServices:mapPersonLocationsProvider:mapFriendCompassFactoryServices:] */

undefined8 *
FUN_10603663c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  puStack_70 = PTR_PTR_1126ef320;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    lVar3 = puVar1[3];
    func_0x00010c1067e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = puVar1[3];
    func_0x00010c1068c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010befa120(puVar5);
    }
    if (lVar4 != 0) {
      func_0x00010befa120(puVar5);
    }
    _objc_initWeak(auStack_80,puVar1);
    puVar6 = puVar5;
    func_0x00010bf529e0();
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar6 != (undefined *)0x0) {
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x00010c0cab40();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar7;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106036b1c;
      puStack_90 = &UNK_1108f3470;
      _objc_copyWeak(auStack_88,auStack_80);
      puVar7 = puVar6;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[7];
      puVar1[7] = puVar7;
      _objc_release(uVar2);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_88);
    }
    uVar8 = puVar1[5];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c0f9ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_80);
    uVar9 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[8];
    puVar1[8] = uVar9;
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar8);
    uVar2 = puVar1[3];
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010bf96720(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    func_0x00010c13fe40(puVar1[3]);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
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



/* Entry: 106036b1c; end: 106036b63;  */

void FUN_106036b1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69ea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106036b64; end: 106036c0f;  */

void FUN_106036b64(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd7e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106036c10; end: 106036c43;  */

void FUN_106036c10(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e4fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106036c44; end: 106036c47;  */

void FUN_106036c44(void)

{
  return;
}



/* Entry: 106036c48; end: 106036c8b; -[SCMyUnifiedProfileMapSectionDataProvider dealloc] */

void FUN_106036c48(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8c780();
  puStack_28 = PTR_PTR_1126ef320;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106036c8c; end: 106036c8f; -[SCMyUnifiedProfileMapSectionDataProvider tearDown] */

void FUN_106036c8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeMapSnapshotScope_112580b80);
  return;
}



/* Entry: 106036c90; end: 106036d5b; -[SCMyUnifiedProfileMapSectionDataProvider _removeMapSnapshotScope] */

void FUN_106036c90(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106036d14;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 106036d5c; end: 106036d67; +[SCMyUnifiedProfileMapSectionDataProvider announcerIdentifier] */

undefined ** FUN_106036d5c(void)

{
  return &PTR____CFConstantStringClassReference_110e39558;
}


