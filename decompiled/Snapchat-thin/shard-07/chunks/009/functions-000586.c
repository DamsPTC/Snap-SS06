/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105add650; end: 105add6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105add650(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272f260);
  _objc_retain(param_2);
  func_0x00010bf2eb20(uVar1);
  func_0x00010bfd19a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11272f274));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105add6b4; end: 105add6e7;  */

void FUN_105add6b4(void)

{
  return;
}



/* Entry: 105add6e8; end: 105add7b3; -[SCStoriesEverywhereViewController _handlePullToRefreshWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105add6e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c288fe0(*(undefined8 *)(param_1 + _DAT_11272f2ec));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f298);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a960();
  _objc_release(uVar1);
  func_0x00010be14860(param_1,param_2,&PTR____CFConstantStringClassReference_110e202f8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f2c4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab520();
  _objc_release(uVar1);
  func_0x000107cb35ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbc00(param_1,param_2,&PTR____CFConstantStringClassReference_110f41498,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105add7b4; end: 105add9a3; -[SCStoriesEverywhereViewController _announceSectionOrder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105add7b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (*(char *)(param_1 + _DAT_11272f30c) == '\x01') {
    lVar1 = *(long *)(param_1 + _DAT_11272f2f4);
    func_0x00010bf5fee0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(lVar1);
    lVar6 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_140,auStack_e8,0x10);
    if (lVar6 != 0) {
      lVar9 = *plStack_130;
      do {
        lVar10 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(lVar1);
          }
          lVar3 = *(long *)(lStack_138 + lVar10 * 8);
          func_0x0001079af428();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x0001079d6398();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            func_0x00010befa120(puVar2,param_2,lVar4);
          }
          _objc_release(lVar4);
          _objc_release(lVar3);
          lVar10 = lVar10 + 1;
        } while (lVar6 != lVar10);
        lVar6 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_140,auStack_e8,0x10);
      } while (lVar6 != 0);
    }
    _objc_release(lVar1);
    puVar5 = puVar2;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110f42d98;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_f0 = puVar2;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f0,&ppuStack_f8,
                          1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdcbc00(param_1,param_2,&PTR____CFConstantStringClassReference_110f41418,puVar5);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(lVar1 + _DAT_11272f2f4);
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    *(undefined1 *)(lVar1 + _DAT_11272f314) = 1;
  }
  else if (((*(byte *)(lVar1 + _DAT_11272f310) & 1) == 0) &&
          (*(char *)(lVar1 + _DAT_11272f318) == '\x01')) {
    uVar8 = *(undefined8 *)(lVar1 + _DAT_11272f308);
    uVar11 = *(undefined8 *)(lVar1 + _DAT_11272f2ac);
    uVar7 = *(undefined8 *)(lVar1 + _DAT_11272f28c);
    func_0x00010c0f1e60(uVar7);
    lVar6 = lVar1;
    func_0x00010bfc64e0(uVar11,lVar1,param_2,uVar8,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcbc00(lVar1,param_2,&PTR____CFConstantStringClassReference_110f415b8,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 105add9a4; end: 105adda8f; -[SCStoriesEverywhereViewController _logImpressionsOnMainThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105add9a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_11272f2f4);
  func_0x00010bf5fee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + _DAT_11272f314) = 1;
  }
  else if (((*(byte *)(param_1 + _DAT_11272f310) & 1) == 0) &&
          (*(char *)(param_1 + _DAT_11272f318) == '\x01')) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11272f308);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11272f2ac);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272f28c);
    func_0x00010c0f1e60(uVar2);
    lVar1 = param_1;
    func_0x00010bfc64e0(uVar4,param_1,param_2,uVar3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcbc00(param_1,param_2,&PTR____CFConstantStringClassReference_110f415b8,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105adda90; end: 105addbb7; -[SCStoriesEverywhereViewController _announceEventOnPerformerWithEventName:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adda90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f280);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105addbb8; end: 105addbeb;  */

void FUN_105addbb8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcbb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105addbec; end: 105addd33; -[SCStoriesEverywhereViewController _announceEvent:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105addbec(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
  }
  else {
    puVar1 = param_4;
    func_0x00010c0d3c80();
  }
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    if (*(long *)(param_1 + _DAT_11272f308) != 0) {
      func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + _DAT_11272f308),
                          &PTR____CFConstantStringClassReference_110e5f1f8);
    }
  }
  else {
    _objc_release();
  }
  puVar2 = puVar1;
  func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2740,
                        &PTR____CFConstantStringClassReference_110dcad78);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272f284);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010bf7dbc0(uVar3,param_2,param_3,param_1,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105addd34; end: 105added3; -[SCStoriesEverywhereViewController _resetCarouselSectionsOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105addd34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_11272f2f4;
  lVar1 = *(long *)(param_1 + lVar12);
  func_0x00010bf40a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar10 = 0;
    do {
      uVar4 = *(ulong *)(param_1 + lVar12);
      func_0x00010bf40a20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bed88;
      _objc_opt_class(PTR_PTR_1126bed88);
      uVar9 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar9 & 1) != 0) {
        puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + _DAT_11272f2d4);
        uVar8 = *(undefined8 *)(param_1 + lVar12);
        func_0x00010bf40a20(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108fcf40c(puVar7,uVar11,uVar8);
        _objc_release(uVar8);
        _objc_release(puVar7);
      }
      uVar10 = uVar10 + 1;
      uVar9 = *(ulong *)(param_1 + lVar12);
      func_0x00010bf40a20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010c156b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
      _objc_release(uVar9);
    } while (uVar10 < uVar6);
  }
  return;
}



/* Entry: 105added4; end: 105addf27; -[SCStoriesEverywhereViewController _prefetchFirstSnapMediaForVisibleFriendStoriesIfNeccesary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105added4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f268);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1080c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105addf28; end: 105ade0bb; -[SCStoriesEverywhereViewController _logFeedPageUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105addf28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ed79b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e5f1f8;
  puVar6 = *(undefined **)(param_1 + _DAT_11272f308);
  puVar2 = puVar6;
  puStack_88 = puVar1;
  if (puVar6 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2740;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dcad78;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f41cb8;
  uVar3 = 0x2a;
  puStack_80 = puVar2;
  func_0x00010baf8a44();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2758;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f41c18;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f43398;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_70 = uVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_b8,6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  func_0x00010bdcbc00(param_1,param_2,&PTR____CFConstantStringClassReference_110f414f8,puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(puVar5 + _DAT_11272f27c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105ade0bc; end: 105ade0ff; -[SCStoriesEverywhereViewController _saveStoriesToDiskIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ade0bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f27c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ade100; end: 105ade23f; -[SCStoriesEverywhereViewController _setClientRerankThresholdTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ade100(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f26c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c258260();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ade240;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_70);
  lVar4 = (long)_DAT_11272f31c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  _objc_release(uVar3);
  uVar1 = 0;
  _dispatch_time(0,(long)(int)uVar2 * 1000000000);
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010058c530(uVar1,uVar2,*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105ade240; end: 105ade26b;  */

void FUN_105ade240(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ade26c; end: 105ade3b3; -[SCStoriesEverywhereViewController _performClientRerank] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ade26c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272f26c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf92840();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272f2a4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c130a20(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f298);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ade3b4; end: 105ade413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ade3b4(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272f298);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a960();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ade414; end: 105ade48b; -[SCStoriesEverywhereViewController _handleFriendsFeedFeedPageEvent:] */

void FUN_105ade414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
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
  pcStack_28 = FUN_105ade48c;
  puStack_20 = &UNK_1108450c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ade524;
  puStack_48 = &UNK_1108d45b0;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bdfc0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 105ade48c; end: 105ade517;  */

void FUN_105ade48c(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105ade518;
  puStack_38 = &UNK_110841f80;
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 105ade518; end: 105ade523;  */

void FUN_105ade518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be532b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logFeedPageOpenEventWithChatFee_112572648,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105ade524; end: 105ade5e7;  */

void FUN_105ade524(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ade5e8;
  puStack_58 = &UNK_110858b70;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105ade5e8; end: 105ade5fb;  */

void FUN_105ade5e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be53330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logFeedPageViewEventWithChatFee_112572668,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 105ade5fc; end: 105ade8a3; -[SCStoriesEverywhereViewController _logFeedPageOpenEventWithChatFeedSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ade5fc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_11272f318) = 1;
  if (*(char *)(param_1 + _DAT_11272f314) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11272f314) = 0;
    _objc_initWeak(auStack_b8,param_1);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_105ade8a4;
    puStack_c8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x0001000d76cc("APPSTORE",&puStack_e0);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  lVar5 = (long)_DAT_11272f308;
  puVar4 = *(undefined **)(param_1 + lVar5);
  _objc_retain(puVar4);
  _objc_retain(param_3);
  if (puVar4 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar4);
    }
    else {
      puVar1 = puVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar4);
      if (((ulong)puVar1 & 1) != 0) goto LAB_105ade844;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    func_0x00010c187780(*(undefined8 *)(param_1 + _DAT_11272f260));
    ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2740;
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110dcad78;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f41c58;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110eb5378;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = *(undefined8 *)(param_1 + lVar5);
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e5f1f8;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f41d38;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2770;
    ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2770;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110ed79b8;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f418b8;
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puStack_70 = puVar1;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010bdcbc00(param_1);
  }
  _objc_release(puVar4);
LAB_105ade844:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_destroyWeak(puVar4 + 0x20);
    _objc_destroyWeak(auStack_b8);
    __Unwind_Resume();
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained();
    if (param_3 != (undefined *)0x0) {
      func_0x00010be54bc0(param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105ade8a4; end: 105ade8d7;  */

void FUN_105ade8a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be54bc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ade8d8; end: 105adebfb; -[SCStoriesEverywhereViewController _logFeedPageViewEventWithChatFeedSessionId:chatFeedLoggingDict:hasAdBillboard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ade8d8(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar16 = (long)_DAT_11272f308;
    lVar1 = *(long *)(param_1 + lVar16);
    if (((lVar1 == param_3) || (lVar14 = param_3, func_0x00010c071ae0(), (int)lVar1 != 0)) &&
       (lVar1 = (long)_DAT_11272f318, *(char *)(param_1 + lVar1) == '\x01')) {
      func_0x00010bedc460(param_1);
      lVar14 = (long)_DAT_11272f2ec;
      puVar2 = *(undefined **)(param_1 + lVar14);
      func_0x00010bfcac40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = *(undefined **)(param_1 + lVar16);
      puVar6 = puVar15;
      if (puVar15 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar8 = param_4;
      if (param_4 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00c560(puVar3);
      _objc_release(puVar10);
      _objc_release(puVar9);
      if (param_4 == (undefined *)0x0) {
        _objc_release(puVar8);
      }
      if (puVar2 == (undefined *)0x0) {
        _objc_release(puVar7);
      }
      if (puVar15 == (undefined *)0x0) {
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
      uVar11 = *(undefined8 *)(param_1 + lVar14);
      func_0x00010bfc9400(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar3);
      puVar4 = puVar3;
      func_0x00010bdcbc00(param_1);
      uVar12 = *(undefined8 *)(param_1 + lVar16);
      *(undefined8 *)(param_1 + lVar16) = 0;
      _objc_release(uVar12);
      lVar14 = 0;
      func_0x00010c187780(*(undefined8 *)(param_1 + _DAT_11272f260));
      *(undefined1 *)(param_1 + lVar1) = 0;
      _objc_release(uVar11);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c288010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_11272f2ec),
             PTR_s_updateNumStoriesAndThumbnailsVis_11267fa28,
             *(undefined8 *)(param_3 + _DAT_11272f2d4),lVar14,puVar4);
  return;
}



/* Entry: 105adebfc; end: 105adec23; -[SCStoriesEverywhereViewController _updateNumStoriesAndThumbnailsVisibleWithUserScrolled:leavingFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adebfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f2ec),
             PTR_s_updateNumStoriesAndThumbnailsVis_11267fa28,
             *(undefined8 *)(param_1 + _DAT_11272f2d4),param_3,param_4);
  return;
}



/* Entry: 105adec24; end: 105aded33; -[SCStoriesEverywhereViewController _logLatencyForStoryCellWillDisplay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adec24(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f8a858);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    lVar6 = (long)_DAT_11272f320;
    if ((*(byte *)(param_2 + lVar6) & 1) == 0) {
      uVar3 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c2100;
      _objc_opt_class(PTR_PTR_1126c2100);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar2);
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_2 + _DAT_11272f2b4);
        _CACurrentMediaTime();
        func_0x00010852f530(uVar5,(long)(param_1 - *(double *)(param_2 + _DAT_11272f2b0)));
        *(undefined1 *)(param_2 + lVar6) = 1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aded34; end: 105aded43; -[SCStoriesEverywhereViewController isPresentingUnderChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105aded34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11272f248);
}



/* Entry: 105aded44; end: 105aded53; -[SCStoriesEverywhereViewController setIsPresentingUnderChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aded44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11272f248) = param_3;
  return;
}



/* Entry: 105aded54; end: 105aded63; -[SCStoriesEverywhereViewController contentCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105aded54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f2d4);
}



/* Entry: 105aded64; end: 105adeda3; -[SCStoriesEverywhereViewController setContentCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aded64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f2d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105adeda4; end: 105adedb3; -[SCStoriesEverywhereViewController queryResultController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105adeda4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f2f4);
}



/* Entry: 105adedb4; end: 105adedf3; -[SCStoriesEverywhereViewController setQueryResultController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adedb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f2f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105adedf4; end: 105adf0bb; -[SCStoriesEverywhereViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105adedf4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272f2f4,0);
  _objc_storeStrong(param_1 + _DAT_11272f2d4,0);
  _objc_storeStrong(param_1 + _DAT_11272f2e4,0);
  _objc_storeStrong(param_1 + _DAT_11272f2c8,0);
  _objc_storeStrong(param_1 + _DAT_11272f31c,0);
  _objc_storeStrong(param_1 + _DAT_11272f308,0);
  _objc_storeStrong(param_1 + _DAT_11272f2e0,0);
  _objc_storeStrong(param_1 + _DAT_11272f29c,0);
  _objc_storeStrong(param_1 + _DAT_11272f304,0);
  _objc_storeStrong(param_1 + _DAT_11272f300,0);
  _objc_storeStrong(param_1 + _DAT_11272f2e8,0);
  _objc_storeStrong(param_1 + _DAT_11272f2ec,0);
  _objc_storeStrong(param_1 + _DAT_11272f2dc,0);
  _objc_storeStrong(param_1 + _DAT_11272f2b8,0);
  _objc_storeStrong(param_1 + _DAT_11272f2f8,0);
  _objc_storeStrong(param_1 + _DAT_11272f294,0);
  _objc_destroyWeak(param_1 + _DAT_11272f2c0);
  _objc_storeStrong(param_1 + _DAT_11272f254,0);
  _objc_storeStrong(param_1 + _DAT_11272f28c,0);
  _objc_destroyWeak(param_1 + _DAT_11272f288);
  _objc_storeStrong(param_1 + _DAT_11272f2b4,0);
  _objc_storeStrong(param_1 + _DAT_11272f2bc,0);
  _objc_storeStrong(param_1 + _DAT_11272f2a0,0);
  _objc_storeStrong(param_1 + _DAT_11272f2a8,0);
  _objc_storeStrong(param_1 + _DAT_11272f2a4,0);
  _objc_storeStrong(param_1 + _DAT_11272f2fc,0);
  _objc_storeStrong(param_1 + _DAT_11272f27c,0);
  _objc_storeStrong(param_1 + _DAT_11272f278,0);
  _objc_storeStrong(param_1 + _DAT_11272f2c4,0);
  _objc_storeStrong(param_1 + _DAT_11272f274,0);
  _objc_storeStrong(param_1 + _DAT_11272f270,0);
  _objc_storeStrong(param_1 + _DAT_11272f26c,0);
  _objc_storeStrong(param_1 + _DAT_11272f298,0);
  _objc_storeStrong(param_1 + _DAT_11272f268,0);
  _objc_storeStrong(param_1 + _DAT_11272f280,0);
  _objc_storeStrong(param_1 + _DAT_11272f290,0);
  _objc_storeStrong(param_1 + _DAT_11272f2f0,0);
  _objc_storeStrong(param_1 + _DAT_11272f264,0);
  _objc_storeStrong(param_1 + _DAT_11272f260,0);
  _objc_storeStrong(param_1 + _DAT_11272f25c,0);
  _objc_storeStrong(param_1 + _DAT_11272f258,0);
  _objc_storeStrong(param_1 + _DAT_11272f2cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272f284,0);
  return;
}



/* Entry: 105adf0bc; end: 105adfb93; +[SCDiscoverFeedUnifiedProfileActionHandlerPluginFactory buildWithSystemScope:userSessionScope:circumstanceEngineServices:navigationServices:storiesMetricServices:impalaProfilePresentHandlerServices:customStatusBarStyleContextServices:creatorSettingsService:discoverFeedDataServices:discoverFeedRankingServices:discoverFeedNotificationServices:discoverFeedLoggingServices:bitmojiFetchServices:bitmojiFriendInfoServices:snapchatterServices:adConfigService:adConfigProviderService:adReportServices:networkImageServices:userSegmentsServices:snapTokenServices:storiesNetworkingServices:offPlatformLinkGenerationServices:grapheneServices:composerCoreUIServices:composerServices:valdiCOFStoresServices:storiesExperimentServices:networkConnectivityMonitorServices:contentBlockingServices:adRenderDataParserServices:imageFetchingServices:customAppThemeServices:userLocationServices:promotedStoryShareScopeServices:promotedStoryReportScopeServices:promotedStoryAdInfoScopeServices:promotedStoryHideScopeServices:dsaExplainerScopeServices:promotedStoryShareScopeExposer:promotedStoryReportScopeExposer:promotedStoryAdInfoScopeExposer:promotedStoryHideScopeExposer:shareFriendScopeExposer:safetyReportScopeExposer:deeplinkSendToScopeExposer:adReportScopeExposer:dsaExplainerScopeExposer:] */

void FUN_105adf0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50)

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
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  
  puVar1 = PTR_PTR_1126c2220;
  _objc_retain();
  _objc_retain(param_49);
  _objc_retain(param_48);
  _objc_retain(param_47);
  _objc_retain(param_46);
  _objc_retain(param_45);
  _objc_retain(param_44);
  _objc_retain(param_43);
  _objc_retain(param_42);
  _objc_retain(param_41);
  _objc_retain(param_40);
  _objc_retain(param_39);
  _objc_retain(param_38);
  _objc_retain(param_37);
  _objc_retain(param_36);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_33);
  _objc_retain(param_32);
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_29);
  _objc_retain(param_28);
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = param_5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar4 = param_6;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_7;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar7 = param_8;
  func_0x00010c08d480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_10;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  uVar10 = param_11;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_12;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  uVar12 = param_13;
  func_0x00010c0dc480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  uVar13 = param_11;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  uVar14 = param_14;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_14);
  uVar15 = param_15;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_16;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_16);
  uVar17 = param_15;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_15);
  uVar18 = param_17;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_17;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_17;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_17);
  uVar21 = param_18;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_18);
  uVar22 = param_19;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_19);
  uVar23 = param_20;
  func_0x00010c118240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_20);
  uVar24 = param_21;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_21);
  uVar25 = param_22;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_22);
  uVar26 = param_25;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_25);
  uVar27 = param_23;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_23);
  uVar28 = uVar27;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_24;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_24);
  func_0x00010bdf4400(param_1,param_2,param_28,param_29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_29);
  _objc_release(param_28);
  uVar30 = param_27;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_27);
  uVar31 = param_26;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_26);
  uVar32 = param_3;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar33 = param_30;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_30);
  uVar34 = param_31;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_31);
  uVar35 = param_32;
  func_0x00010bf4be60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_32);
  uVar36 = param_33;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_33);
  uVar37 = param_34;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_34);
  uVar38 = param_35;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_35);
  uVar39 = param_36;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_36);
  func_0x00010c05d280(puVar1,param_2,uVar2,uVar3,uVar5,uVar6,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13
                      ,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,
                      uVar25,uVar26,param_42,param_37,param_43,param_38,param_44,param_39,param_45,
                      param_40,param_46,param_47,param_48,param_49,uVar28,uVar29,param_1,uVar30,
                      uVar31,uVar32,uVar33,uVar34,param_50,param_41,uVar35,uVar36,uVar37,uVar38,
                      uVar39);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(param_1);
  _objc_release(uVar29);
  _objc_release(uVar28);
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
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_9;
  func_0x00010c25e020(param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar3 = uVar2;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188840(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105adfb94; end: 105adfc8b; +[SCDiscoverFeedUnifiedProfileActionHandlerPluginFactory _createSubscriptionWorkflowWithComposerServices:valdiCOFStoresServices:] */

void FUN_105adfb94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126c2228;
  uVar2 = param_3;
  func_0x00010c295440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105adfc8c;
  puStack_40 = &UNK_1108d45e0;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bf12000(puVar3,param_2,uVar2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105adfc8c; end: 105adfce3;  */

void FUN_105adfc8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2230;
  func_0x00010bfbc0e0(PTR_PTR_1126c2230,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc07c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105adfce4; end: 105adfd7b;  */

void FUN_105adfce4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf816e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b7a10;
  _objc_opt_class(PTR_PTR_1126b7a10);
  uVar1 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105adfd7c; end: 105adff4f; -[SCDiscoverFeedBadgeProvider _setUpBadgeRanker:] */

void FUN_105adfd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1468;
  _objc_alloc(PTR_PTR_1126b1468);
  func_0x00010c055e20();
  uVar4 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c1270c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_new();
  _objc_retain();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar3;
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c13cc80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar3);
  uVar4 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105adff50; end: 105adffbb;  */

void FUN_105adff50(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  puVar2 = PTR_PTR_1126b1460;
  if ((uVar1 & 1) == 0) {
    func_0x00010c0db7e0(PTR_PTR_1126b1460);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef0400();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105adffbc; end: 105ae00cf;  */

void FUN_105adffbc(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = param_2;
    func_0x00010c06b700();
    puVar3 = PTR____kCFBooleanFalse_11034ab60;
    if ((int)puVar2 != 0) {
      puVar2 = param_2;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR____kCFBooleanFalse_11034ab60;
      if (puVar2 != (undefined *)0x0) {
        puVar3 = param_2;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar2);
    }
    puVar2 = puVar3;
    func_0x00010bf1f3c0();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    if ((int)puVar2 != (int)uVar5) {
      func_0x00010c06b700(param_2);
      func_0x00010be87520(lVar1);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ae00d0; end: 105ae01fb; -[SCDiscoverFeedBadgeProvider _discoverNotificationInAppBadgingAllowlist] */

void FUN_105ae00d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar1 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x16);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x73);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf010e0();
  _objc_release(uVar5);
  if ((int)uVar6 != 0) {
    puVar1 = PTR_PTR_1126b1370;
    func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x9a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar1);
    _objc_release(puVar1);
  }
  puVar1 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ae01fc; end: 105ae0227;  */

void FUN_105ae01fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdddf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ae0228; end: 105ae0267; -[SCDiscoverFeedBadgeProvider endSubscribeBadgeUpdate] */

void FUN_105ae0228(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ae0268; end: 105ae02ab; -[SCDiscoverFeedBadgeProvider dealloc] */

void FUN_105ae0268(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf955a0();
  puStack_28 = PTR_PTR_1126ebcb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105ae02ac; end: 105ae0333;  */

void FUN_105ae02ac(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x70);
      uVar1 = *(undefined8 *)(lVar2 + 0x78);
      func_0x00010bf23b00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(uVar1);
      _objc_release(uVar3);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105ae0334; end: 105ae066f; -[SCDiscoverFeedBadgeProvider _discoverBadgeCountChanged:] */

void FUN_105ae0334(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2238;
  func_0x00010bfb49a0(PTR_PTR_1126c2238);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010bf1f3c0(uVar3);
    func_0x00010bdf8bc0(param_1);
    goto LAB_105ae0648;
  }
  uVar3 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2238;
  func_0x00010bfddee0(PTR_PTR_1126c2238);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2238;
  func_0x00010bf15280(PTR_PTR_1126c2238);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2238;
  func_0x00010c26d820(PTR_PTR_1126c2238);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  lVar8 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  uVar6 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((((int)uVar6 == 0) && (uVar3 = uVar4, func_0x00010bf1f3c0(), (int)uVar3 == 0)) &&
     (uVar3 = uVar5, func_0x00010bf1f3c0(), (int)uVar3 == 0)) {
    if ((lVar9 != 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) {
      func_0x00010bf1f3c0(lVar9);
      goto LAB_105ae062c;
    }
  }
  else {
LAB_105ae062c:
    func_0x00010bdf8bc0(param_1);
  }
  _objc_release(lVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_105ae0648:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ae0670; end: 105ae0773; -[SCDiscoverFeedBadgeProvider _dedupAndshowBadge:forReason:] */

void FUN_105ae0670(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if ((uint)*(byte *)(param_1 + 0x18) != (uint)param_3) {
    if (param_4 < 2) {
      if (param_4 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beb7da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar1);
        return;
      }
      if (param_4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010beb7d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showBadgeForCache__11258b908,param_3);
        return;
      }
    }
    else {
      if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010beb7dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__showBadgeForFriendStory__11258b918,param_3);
        return;
      }
      if (param_4 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010beb7df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__showBadgeForSubscription__11258b920,param_3);
        return;
      }
      if (param_4 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010beb7e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__showBadgeForThumbnail__11258b928,param_3);
        return;
      }
    }
  }
  return;
}



/* Entry: 105ae0774; end: 105ae07cb; -[SCDiscoverFeedBadgeProvider _showBadgeForThumbnail:] */

void FUN_105ae0774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb7d40(param_1,param_2,param_3,1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ae07cc; end: 105ae07cf; -[SCDiscoverFeedBadgeProvider _showBadgeForForce:hideBadgeCount:count:] */

void FUN_105ae07cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb7d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showBadge_hideBadgeCount_count__11258b8f8);
  return;
}



/* Entry: 105ae07d0; end: 105ae0827; -[SCDiscoverFeedBadgeProvider _showBadgeForCache:] */

void FUN_105ae07d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb7d40(param_1,param_2,param_3,1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ae0828; end: 105ae094b; -[SCDiscoverFeedBadgeProvider _showBadgeForFriendStory:] */

void FUN_105ae0828(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb7d40(param_1,param_2,1,1,puVar3);
    _objc_release(puVar3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e1c878);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105ae094c; end: 105ae0a6f; -[SCDiscoverFeedBadgeProvider _showBadgeForSubscription:] */

void FUN_105ae094c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb7d40(param_1,param_2,1,1,puVar3);
    _objc_release(puVar3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e1c878);
    _objc_release(puVar3);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105ae0a70; end: 105ae0b57; -[SCDiscoverFeedBadgeProvider _showBadge:hideBadgeCount:count:] */

void FUN_105ae0a70(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ae0b58;
  puStack_58 = &UNK_110859060;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  uStack_3f = param_4;
  _objc_retain(param_5);
  uStack_50 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 105ae0b58; end: 105ae0b9b;  */

void FUN_105ae0b58(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010beb7e40(lVar1,param_2,*(undefined1 *)(param_1 + 0x30),
                        *(undefined1 *)(param_1 + 0x31),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ae0b9c; end: 105ae0cdb; -[SCDiscoverFeedBadgeProvider _showBadgeOnMain:hideBadgeCount:count:] */

void FUN_105ae0b9c(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar2 = param_1;
    func_0x00010be1e460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (((lVar3 != 0) && (lVar3 = lVar2, func_0x00010c0720c0(), param_3 != 0)) && ((int)lVar3 != 0))
    {
      func_0x00010bdd2760(param_1);
      _objc_release(lVar2);
      goto LAB_105ae0cc4;
    }
    _objc_release(lVar2);
  }
  *(char *)(param_1 + 0x18) = (char)param_3;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x80));
  puVar4 = PTR_PTR_1126ae820;
  uVar6 = *(ulong *)(param_1 + 0xa0);
  _objc_retain(uVar6);
  _objc_opt_class(puVar4);
  uVar5 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar1 = uVar6;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(uVar1);
  _objc_release(puVar4);
  if (*(long *)(param_1 + 0x88) == 0) {
    func_0x00010be87520(param_1);
  }
LAB_105ae0cc4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105ae0cdc; end: 105ae0d5f; -[SCDiscoverFeedBadgeProvider _recordBadgeShown:] */

void FUN_105ae0cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0a5210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logDiscoverFeedBadgeStatusChange_112606e90,
             param_3);
  return;
}



/* Entry: 105ae0d60; end: 105ae0f5f; -[SCDiscoverFeedBadgeProvider _setupObservingEventsWithApplicationLifecycleEvents:discoverFeedFriendStoriesDataCoordinator:friendsFeedViewLifecycleListener:] */

void FUN_105ae0d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  uVar2 = param_3;
  func_0x00010c2a6fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105ae0f60;
  puStack_88 = &UNK_110846510;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar1 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0e0b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar1 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ae0f60; end: 105ae0f8b;  */

void FUN_105ae0f60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be94380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ae0f8c; end: 105ae1033;  */

void FUN_105ae0f8c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ae1034;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ae1034; end: 105ae1067;  */

void FUN_105ae1034(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed3d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ae1068; end: 105ae1073;  */

void FUN_105ae1068(void)

{
  return;
}



/* Entry: 105ae1074; end: 105ae109b; -[SCDiscoverFeedBadgeProvider _getCurrentPage] */

void FUN_105ae1074(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ae109c; end: 105ae113b; -[SCDiscoverFeedBadgeProvider _resetUserPreferenceOnAppTerminate] */

void FUN_105ae109c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ae113c; end: 105ae122f; -[SCDiscoverFeedBadgeProvider _updateBadgeOnFriendStoryFetchingRequest:] */

void FUN_105ae113c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb6e60(param_1,param_2,param_3);
  if ((int)lVar1 == 0) goto LAB_105ae1218;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c08a7e0(param_3);
  func_0x00010bf655e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (puVar3 == (undefined *)0x0)) {
    _objc_release(puVar3);
    if (puVar3 != (undefined *)0x0) goto LAB_105ae1200;
  }
  else {
    puVar4 = puVar3;
    func_0x00010bf433a0(puVar3,param_2,lVar1);
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x1) {
LAB_105ae1200:
      func_0x00010bdf8bc0(param_1,param_2,1,2);
    }
  }
  _objc_release(lVar1);
LAB_105ae1218:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ae1230; end: 105ae1257; -[SCDiscoverFeedBadgeProvider _shouldUpdateBadgeOnFriendStoryFetchingRequest:] */

bool FUN_105ae1230(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010c27c360();
  return param_3 == 2 || (param_3 & 0xfffffffffffffffd) == 1;
}



/* Entry: 105ae1258; end: 105ae1323; -[SCDiscoverFeedBadgeProvider .cxx_destruct] */

void FUN_105ae1258(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ae1324; end: 105ae13f3; -[SCDiscoverFeedForYouExtension initWithFeatureSettingsService:circumstanceEngine:] */

undefined1 *
FUN_105ae1324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ebcb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c2240;
    _objc_alloc();
    uVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011d00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ae13f4; end: 105ae13fb; -[SCDiscoverFeedForYouExtension localSectionDescriptorProviders] */

undefined8 FUN_105ae13f4(void)

{
  return 0;
}



/* Entry: 105ae13fc; end: 105ae147b; -[SCDiscoverFeedForYouExtension remoteSectionProviders] */

undefined * FUN_105ae13fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c27d0;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c27e8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_20 = uStack_28;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_28,&ppuStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 105ae147c; end: 105ae1483; -[SCDiscoverFeedForYouExtension collectionViewSectionCreators] */

undefined8 FUN_105ae147c(void)

{
  return 0;
}



/* Entry: 105ae1484; end: 105ae148b; -[SCDiscoverFeedForYouExtension loggingParsers] */

undefined8 FUN_105ae1484(void)

{
  return 0;
}



/* Entry: 105ae148c; end: 105ae1497; -[SCDiscoverFeedForYouExtension .cxx_destruct] */

void FUN_105ae148c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ae1498; end: 105ae153b; -[SCDiscoverFeedForYouRemoteSectionParser initWithFeatureSettingsService:circumstanceEngine:] */

undefined1 *
FUN_105ae1498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebcc0;
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



/* Entry: 105ae153c; end: 105ae15ef; -[SCDiscoverFeedForYouRemoteSectionParser parseSectionMetadataWithDisplayName:loggingKey:feedType:eof:] */

void FUN_105ae153c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010b0aeb1c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
  }
  puVar2 = PTR_PTR_1126c2248;
  _objc_alloc(PTR_PTR_1126c2248);
  func_0x00010c0126e0();
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ae15f0; end: 105ae17b7; -[SCDiscoverFeedForYouRemoteSectionParser remoteSectionDescriptorWithSectionMetadata:circumstanceEngine:] */

void FUN_105ae15f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010bfa4340();
  ppuVar1 = &PTR_PTR_110cab530;
  if (lVar2 != 0xf7) {
    ppuVar1 = &PTR_PTR_110cab538;
  }
  puVar7 = *ppuVar1;
  _objc_retain(puVar7);
  uVar3 = 0;
  func_0x0001079b7d94(0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2180;
  _objc_alloc(PTR_PTR_1126c2180);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_7);
  func_0x00010c0df840(puVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010bf86660(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x000108f54a98();
  func_0x00010c0127c0(puVar4);
  _objc_release(lVar2);
  _objc_release(puVar5);
  func_0x000107c27608(puVar7);
  dVar8 = 0.021299999207258224;
  func_0x00010b8169fc(0x3f95cfaac0000000);
  dVar9 = dVar8;
  func_0x00010b816218();
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(param_1,param_2,0,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x0001079b7bc4((double)(long)(dVar8 * dVar9) / dVar9,puVar7,uVar3,puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105ae17b8; end: 105ae17bf; -[SCDiscoverFeedForYouRemoteSectionParser remoteSectionDescriptorWithSection:] */

void FUN_105ae17b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 1;
  lVar2 = param_7;
  func_0x00010c08cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    iVar1 = 1;
  }
  else {
    lVar2 = param_7;
    func_0x00010c08cb80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c233900();
    iVar1 = (int)lVar6;
    _objc_release(lVar2);
    lVar2 = param_7;
    func_0x00010c08cb80(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154d40();
    _objc_release(lVar2);
    lVar2 = param_7;
    func_0x00010c08cb80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c08d100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar6 != 0) {
      lVar2 = param_7;
      func_0x00010c08cb80(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08d100();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puStack_e0 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a0 = 0x2020000000;
      uStack_98 = 0;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      puStack_c8 = &UNK_1079af5fc;
      puStack_c0 = &UNK_1109f3658;
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      puStack_f0 = &UNK_1079af660;
      puStack_e8 = &UNK_1109f3688;
      puStack_b8 = puStack_e0;
      puStack_a8 = puStack_e0;
      func_0x00010c0c1440(lVar6);
      __Block_object_dispose(&uStack_b0,8);
      _objc_release(lVar6);
      _objc_release(lVar6);
      _objc_release(lVar2);
      lVar2 = param_7;
      func_0x00010c08cb80(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08d100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1440();
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
  }
  lVar2 = param_7;
  func_0x00010bfa4340(param_7);
  func_0x000108f53fe8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2180;
  _objc_alloc(PTR_PTR_1126c2180);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_7);
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_7;
    func_0x00010bf86660(param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0127c0(puVar3);
  if (iVar1 != 0) {
    _objc_release(lVar6);
  }
  _objc_release(puVar4);
  func_0x000107c27608(lVar2);
  if (*(char *)(puStack_118 + 3) == '\x01') {
    dVar7 = 0.021299999207258224;
    func_0x00010b8169fc(0x3f95cfaac0000000);
  }
  else {
    dVar8 = 0.021299999207258224;
    func_0x00010b8169fc(0x3f95cfaac0000000);
    dVar7 = dVar8;
    func_0x00010b816218();
    dVar7 = (double)(long)(dVar8 * dVar7) / dVar7;
  }
  lVar6 = lVar2;
  if (*(char *)(puStack_118 + 3) == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001079b7cb4(dVar7,lVar2,puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
    func_0x0001079b7d94(0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001079b7bc4(dVar7,lVar2,puVar5,puVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105ae17c0; end: 105ae17ef; -[SCDiscoverFeedForYouRemoteSectionParser .cxx_destruct] */

void FUN_105ae17c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ae17f0; end: 105ae17f3; -[SCDiscoverFeedEntryPoint begin] */

void FUN_105ae17f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd35f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginImmediately_112552718);
  return;
}



/* Entry: 105ae17f4; end: 105ae182f; -[SCDiscoverFeedEntryPoint end] */

void FUN_105ae17f4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ebcc8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ae1830; end: 105ae2f8b; -[SCDiscoverFeedEntryPoint _beginImmediately] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae1830(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  long lVar142;
  long lVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  long lVar149;
  long lVar150;
  long lVar151;
  long lVar152;
  undefined *puVar153;
  undefined8 uVar154;
  long lVar155;
  long lVar156;
  long lVar157;
  long lVar158;
  long lVar159;
  long lVar160;
  long lVar161;
  long lVar162;
  long lVar163;
  long lVar164;
  long lVar165;
  long lVar166;
  long lVar167;
  long lVar168;
  long lVar169;
  long lVar170;
  long lVar171;
  long lStack_1e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126c2250;
  _objc_alloc();
  func_0x00010bff9420();
  lVar2 = param_1 + _DAT_11272f380;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_11272f384;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar168 = (long)_DAT_11272f388;
  lVar2 = param_1 + lVar168;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010bf81640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126ae720;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105ae2f8c;
  puStack_90 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11272f38c;
  _objc_loadWeakRetained();
  puStack_d0 = puVar7;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105ae2fcc;
  puStack_b8 = &UNK_1108d4750;
  puVar7 = PTR_PTR_1126ae720;
  lStack_b0 = lVar2;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar161 = (long)_DAT_11272f390;
  uVar154 = *(undefined8 *)(param_1 + lVar161);
  *(undefined **)(param_1 + lVar161) = puVar7;
  _objc_release(uVar154);
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar162 = (long)_DAT_11272f394;
  uVar8 = param_1 + lVar162;
  _objc_loadWeakRetained();
  puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c071ae0();
  _objc_release(puVar9);
  _objc_release(uVar8);
  if ((uVar10 & 1) == 0) {
    lVar162 = param_1 + lVar162;
    _objc_loadWeakRetained();
    lStack_1e0 = lVar162;
    func_0x00010c069300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar162);
  }
  else {
    lStack_1e0 = 0;
  }
  puVar9 = PTR_PTR_1126c2258;
  _objc_alloc();
  lVar163 = (long)_DAT_11272f398;
  lVar162 = param_1 + lVar163;
  _objc_loadWeakRetained();
  lVar11 = lVar162;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272f39c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  lVar165 = param_1 + _DAT_11272f3a0;
  _objc_loadWeakRetained();
  lVar14 = lVar165;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11272f3a4;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_11272f3a8;
  _objc_loadWeakRetained();
  lVar156 = (long)_DAT_11272f3ac;
  lVar17 = param_1 + lVar156;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11272f3b0;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + lVar156;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar166 = (long)_DAT_11272f3b4;
  lVar23 = param_1 + lVar166;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar158 = (long)_DAT_11272f3b8;
  lVar25 = param_1 + lVar158;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar156;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c0cbf40();
  _objc_retainAutoreleasedReturnValue();
  lVar158 = param_1 + lVar158;
  _objc_loadWeakRetained();
  lVar29 = lVar158;
  func_0x00010c131580();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_11272f3bc;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c155c20();
  _objc_retainAutoreleasedReturnValue();
  lVar168 = param_1 + lVar168;
  _objc_loadWeakRetained();
  lVar32 = lVar168;
  func_0x00010beee6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar154 = *(undefined8 *)(param_1 + lVar161);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  func_0x00010bdea400();
  _objc_retainAutoreleasedReturnValue();
  lVar170 = (long)_DAT_11272f3c0;
  lVar161 = param_1 + lVar170;
  _objc_loadWeakRetained();
  lVar34 = lVar161;
  func_0x00010c107680();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar170;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010bf81c80();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_11272f3c4;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar169 = (long)_DAT_11272f3c8;
  lVar39 = param_1 + lVar169;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c08d360();
  _objc_retainAutoreleasedReturnValue();
  lVar159 = (long)_DAT_11272f3cc;
  lVar41 = param_1 + lVar159;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bf9a540();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + lVar159;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_11272f3d0;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010c0ebe80();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + _DAT_11272f3d4;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar160 = (long)_DAT_11272f3d8;
  lVar49 = param_1 + lVar160;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + _DAT_11272f3dc;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + _DAT_11272f3e0;
  _objc_loadWeakRetained();
  lVar54 = lVar53;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + _DAT_11272f3e4;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + _DAT_11272f3e8;
  _objc_loadWeakRetained();
  lVar58 = param_1 + _DAT_11272f3ec;
  _objc_loadWeakRetained();
  lVar59 = lVar58;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + _DAT_11272f3f0;
  _objc_loadWeakRetained();
  lVar61 = param_1 + lVar166;
  _objc_loadWeakRetained();
  lVar62 = lVar61;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar63 = param_1 + _DAT_11272f3f4;
  _objc_loadWeakRetained();
  lVar64 = lVar63;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar170 = param_1 + lVar170;
  _objc_loadWeakRetained();
  lVar65 = lVar170;
  func_0x00010bf40000();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = lVar65;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + _DAT_11272f4dc;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010c08d480();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = lVar68;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar171 = (long)_DAT_11272f3f8;
  lVar70 = param_1 + lVar171;
  _objc_loadWeakRetained();
  lVar71 = lVar70;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar163 = param_1 + lVar163;
  _objc_loadWeakRetained();
  lVar72 = lVar163;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar166 = param_1 + lVar166;
  _objc_loadWeakRetained();
  lVar73 = lVar166;
  func_0x00010c08d920();
  _objc_retainAutoreleasedReturnValue();
  lVar74 = param_1 + _DAT_11272f3fc;
  _objc_loadWeakRetained();
  lVar75 = lVar74;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1 + _DAT_11272f400;
  _objc_loadWeakRetained();
  lVar77 = lVar76;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = param_1 + _DAT_11272f404;
  _objc_loadWeakRetained();
  lVar79 = lVar78;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar80 = param_1 + _DAT_11272f408;
  _objc_loadWeakRetained();
  lVar81 = lVar80;
  func_0x00010bef2860();
  _objc_retainAutoreleasedReturnValue();
  lVar82 = param_1 + lVar159;
  _objc_loadWeakRetained();
  lVar83 = lVar82;
  func_0x00010bf82700();
  _objc_retainAutoreleasedReturnValue();
  lVar169 = param_1 + lVar169;
  _objc_loadWeakRetained();
  lVar84 = lVar169;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  lVar85 = param_1 + _DAT_11272f40c;
  _objc_loadWeakRetained();
  lVar86 = lVar85;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  lVar87 = param_1 + _DAT_11272f410;
  _objc_loadWeakRetained();
  lVar88 = param_1 + lVar171;
  _objc_loadWeakRetained();
  lVar89 = param_1 + _DAT_11272f414;
  _objc_loadWeakRetained();
  lVar90 = param_1 + _DAT_11272f418;
  _objc_loadWeakRetained();
  lVar91 = lVar90;
  func_0x00010c0dc960();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = param_1 + _DAT_11272f41c;
  _objc_loadWeakRetained();
  lVar93 = lVar92;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar164 = (long)_DAT_11272f420;
  lVar94 = param_1 + lVar164;
  _objc_loadWeakRetained();
  lVar95 = lVar94;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar164 = param_1 + lVar164;
  _objc_loadWeakRetained();
  lVar96 = lVar164;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar97 = param_1 + _DAT_11272f424;
  _objc_loadWeakRetained();
  lVar98 = lVar97;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar171 = param_1 + lVar171;
  _objc_loadWeakRetained();
  lVar99 = lVar171;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar100 = param_1 + _DAT_11272f42c;
  _objc_loadWeakRetained();
  lVar101 = param_1 + _DAT_11272f430;
  _objc_loadWeakRetained();
  lVar102 = lVar101;
  func_0x00010bf8b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar103 = param_1 + _DAT_11272f434;
  _objc_loadWeakRetained();
  lVar104 = lVar103;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar105 = param_1 + _DAT_11272f438;
  _objc_loadWeakRetained();
  lVar106 = lVar105;
  func_0x00010c24c420();
  _objc_retainAutoreleasedReturnValue();
  lVar107 = param_1 + _DAT_11272f43c;
  _objc_loadWeakRetained();
  lVar108 = lVar107;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar109 = param_1 + lVar156;
  _objc_loadWeakRetained();
  lVar110 = lVar109;
  func_0x00010c258ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar152 = param_1 + _DAT_11272f440;
  lVar111 = lVar152;
  _objc_loadWeakRetained();
  lVar112 = lVar111;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  lVar113 = param_1 + _DAT_11272f444;
  _objc_loadWeakRetained();
  lVar114 = lVar113;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar160 = param_1 + lVar160;
  _objc_loadWeakRetained();
  lVar115 = lVar160;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar116 = param_1 + _DAT_11272f448;
  _objc_loadWeakRetained();
  lVar117 = lVar116;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar118 = param_1 + _DAT_11272f44c;
  _objc_loadWeakRetained();
  lVar119 = lVar118;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar120 = param_1 + _DAT_11272f450;
  _objc_loadWeakRetained();
  lVar121 = lVar120;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  lVar122 = param_1 + _DAT_11272f454;
  _objc_loadWeakRetained();
  lVar123 = lVar122;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar156 = param_1 + lVar156;
  _objc_loadWeakRetained();
  lVar124 = lVar156;
  func_0x00010c258240();
  _objc_retainAutoreleasedReturnValue();
  lVar155 = (long)_DAT_11272f458;
  lVar125 = param_1 + lVar155;
  _objc_loadWeakRetained();
  lVar126 = lVar125;
  func_0x00010bf826e0();
  _objc_retainAutoreleasedReturnValue();
  lVar127 = param_1 + lVar155;
  _objc_loadWeakRetained();
  lVar128 = lVar127;
  func_0x00010bfb4340();
  _objc_retainAutoreleasedReturnValue();
  lVar159 = param_1 + lVar159;
  _objc_loadWeakRetained();
  lVar129 = lVar159;
  func_0x00010bf82540();
  _objc_retainAutoreleasedReturnValue();
  lVar130 = param_1 + _DAT_11272f45c;
  _objc_loadWeakRetained();
  lVar131 = lVar130;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar132 = param_1 + _DAT_11272f460;
  _objc_loadWeakRetained();
  lVar133 = lVar132;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  lVar134 = param_1 + _DAT_11272f464;
  _objc_loadWeakRetained();
  lVar135 = lVar134;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar136 = param_1 + _DAT_11272f468;
  _objc_loadWeakRetained();
  lVar137 = lVar136;
  func_0x00010c23c800();
  _objc_retainAutoreleasedReturnValue();
  lVar138 = param_1 + _DAT_11272f46c;
  _objc_loadWeakRetained();
  lVar139 = lVar138;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  lVar140 = param_1 + _DAT_11272f474;
  _objc_loadWeakRetained();
  lVar141 = param_1 + _DAT_11272f478;
  _objc_loadWeakRetained();
  lVar142 = lVar141;
  func_0x00010bf40600();
  _objc_retainAutoreleasedReturnValue();
  lVar143 = param_1 + _DAT_11272f47c;
  _objc_loadWeakRetained();
  lVar144 = lVar143;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar145 = param_1 + _DAT_11272f480;
  _objc_loadWeakRetained();
  lVar146 = lVar145;
  func_0x00010c153e40();
  _objc_retainAutoreleasedReturnValue();
  lVar157 = (long)_DAT_11272f484;
  lVar147 = param_1 + lVar157;
  _objc_loadWeakRetained();
  lVar148 = lVar147;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar157 = param_1 + lVar157;
  _objc_loadWeakRetained();
  lVar149 = lVar157;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar150 = lVar149;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar151 = lVar150;
  func_0x00010bfa0b80();
  if ((int)lVar151 == 0) {
    lVar167 = 0;
  }
  else {
    lVar167 = param_1;
    func_0x00010be7ad60();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0028a0();
  if ((int)lVar151 != 0) {
    _objc_release(lVar167);
  }
  _objc_release(lVar150);
  _objc_release(lVar149);
  _objc_release(lVar157);
  _objc_release(lVar148);
  _objc_release(lVar147);
  _objc_release(lVar146);
  _objc_release(lVar145);
  _objc_release(lVar144);
  _objc_release(lVar143);
  _objc_release(lVar142);
  _objc_release(lVar141);
  _objc_release(lVar140);
  _objc_release(lVar139);
  _objc_release(lVar138);
  _objc_release(lVar137);
  _objc_release(lVar136);
  _objc_release(lVar135);
  _objc_release(lVar134);
  _objc_release(lVar133);
  _objc_release(lVar132);
  _objc_release(lVar131);
  _objc_release(lVar130);
  _objc_release(lVar129);
  _objc_release(lVar159);
  _objc_release(lVar128);
  _objc_release(lVar127);
  _objc_release(lVar126);
  _objc_release(lVar125);
  _objc_release(lVar124);
  _objc_release(lVar156);
  _objc_release(lVar123);
  _objc_release(lVar122);
  _objc_release(lVar121);
  _objc_release(lVar120);
  _objc_release(lVar119);
  _objc_release(lVar118);
  _objc_release(lVar117);
  _objc_release(lVar116);
  _objc_release(lVar115);
  _objc_release(lVar160);
  _objc_release(lVar114);
  _objc_release(lVar113);
  _objc_release(lVar112);
  _objc_release(lVar111);
  _objc_release(lVar110);
  _objc_release(lVar109);
  _objc_release(lVar108);
  _objc_release(lVar107);
  _objc_release(lVar106);
  _objc_release(lVar105);
  _objc_release(lVar104);
  _objc_release(lVar103);
  _objc_release(lVar102);
  _objc_release(lVar101);
  _objc_release(lVar100);
  _objc_release(lVar99);
  _objc_release(lVar171);
  _objc_release(lVar98);
  _objc_release(lVar97);
  _objc_release(lVar96);
  _objc_release(lVar164);
  _objc_release(lVar95);
  _objc_release(lVar94);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar169);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar166);
  _objc_release(lVar72);
  _objc_release(lVar163);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar170);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar161);
  _objc_release(lVar33);
  _objc_release(uVar154);
  _objc_release(lVar32);
  _objc_release(lVar168);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar158);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar165);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar162);
  _objc_loadWeakRetained(lVar152);
  lVar162 = lVar152;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065280();
  _objc_release(lVar162);
  _objc_release(lVar152);
  lVar161 = (long)_DAT_11272f488;
  lVar162 = param_1 + lVar161;
  _objc_loadWeakRetained(lVar162);
  lVar168 = lVar162;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar168;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188840(puVar9);
  _objc_release(lVar12);
  _objc_release(lVar168);
  _objc_release(lVar162);
  puVar153 = PTR_PTR_1126c2260;
  _objc_alloc();
  lVar162 = param_1 + _DAT_11272f490;
  _objc_loadWeakRetained(lVar162);
  lVar168 = param_1 + _DAT_11272f494;
  _objc_loadWeakRetained(lVar168);
  lVar12 = lVar168;
  func_0x00010bf280c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e120();
  lVar165 = (long)_DAT_11272f498;
  uVar154 = *(undefined8 *)(param_1 + lVar165);
  *(undefined **)(param_1 + lVar165) = puVar153;
  _objc_release(uVar154);
  _objc_release(lVar12);
  _objc_release(lVar168);
  _objc_release(lVar162);
  lVar161 = param_1 + lVar161;
  _objc_loadWeakRetained(lVar161);
  lVar162 = lVar161;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  lVar168 = lVar162;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188840(*(undefined8 *)(param_1 + lVar165));
  _objc_release(lVar168);
  _objc_release(lVar162);
  _objc_release(lVar161);
  lVar162 = param_1 + lVar155;
  _objc_loadWeakRetained(lVar162);
  lVar168 = lVar162;
  func_0x00010c0f3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d90c0(puVar9);
  _objc_release(lVar168);
  _objc_release(lVar162);
  func_0x00010c18b5e0(puVar9);
  puVar153 = puVar9;
  func_0x00010bfdf5e0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47060(puVar9);
  _objc_release(puVar153);
  lVar162 = (long)_DAT_11272f49c;
  _objc_retain(puVar9);
  uVar154 = *(undefined8 *)(param_1 + lVar162);
  *(undefined **)(param_1 + lVar162) = puVar9;
  _objc_release(uVar154);
  param_1 = param_1 + lVar155;
  _objc_loadWeakRetained(param_1);
  lVar162 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar162);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(lStack_1e0);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_d8);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 105ae2f8c; end: 105ae3067;  */

void FUN_105ae2f8c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf9060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ae3068; end: 105ae308b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae3068(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11272f4dc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ae308c; end: 105ae30d3; -[SCDiscoverFeedEntryPoint _deeplinkHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae308c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11272f4a0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf817c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ae30d4; end: 105ae311b; -[SCDiscoverFeedEntryPoint _creatorSubscriptionsInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae30d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11272f4a4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c260aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ae311c; end: 105ae3243; -[SCDiscoverFeedEntryPoint _presentCreatorSubscriptionsBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae311c(long param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + _DAT_11272f4a8;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105ae31a4;
  puStack_30 = &UNK_110845c10;
  lStack_28 = param_1;
  _objc_retain();
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(lStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105ae3244; end: 105ae32e7;  */

void FUN_105ae3244(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126c2268;
  _objc_alloc(PTR_PTR_1126c2268);
  func_0x00010c04ac00();
  puVar3 = PTR_PTR_1126c2270;
  _objc_alloc(PTR_PTR_1126c2270);
  func_0x00010c0585c0();
  func_0x00010bf21f80(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ae32e8; end: 105ae3423; -[SCDiscoverFeedEntryPoint impalaShowProfileActionHandlerWithPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae32e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c2278;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  FUN_105ae3068(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08d480();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11272f3e8;
  lVar5 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ab20(puVar1,param_2,0x13,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1e1580(puVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ae3424; end: 105ae355f; -[SCDiscoverFeedEntryPoint impalaPublisherProfileActionHandlerWithPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae3424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c2280;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1;
  FUN_105ae3068(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08d480();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11272f3e8;
  lVar5 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ab20(puVar1,param_2,0x13,lVar4,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1e1580(puVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ae3560; end: 105ae35e7; -[SCDiscoverFeedEntryPoint createActionHandlerForPageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae3560(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bdc43e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f390);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdea400(param_1,param_2,param_3,lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ae35e8; end: 105ae410f; -[SCDiscoverFeedEntryPoint _createActionHandlerForPageType:actionHandlersFuture:crashLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae35e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + _DAT_11272f384;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c2158;
  _objc_alloc();
  lVar72 = (long)_DAT_11272f3e8;
  lVar1 = param_1 + lVar72;
  _objc_loadWeakRetained(lVar1);
  lVar4 = lVar1;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1 + _DAT_11272f3f4;
  _objc_loadWeakRetained(lVar71);
  lVar66 = lVar71;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar66;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = (long)_DAT_11272f444;
  lVar6 = param_1 + lVar64;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00cd60();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar66);
  _objc_release(lVar71);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_initWeak(auStack_70,param_1);
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11272f380;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar10 = PTR_PTR_1126c2160;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272f3a0;
  _objc_loadWeakRetained();
  lVar11 = lVar1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1 + _DAT_11272f3bc;
  _objc_loadWeakRetained();
  lVar12 = lVar71;
  func_0x00010c155c20();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = (long)_DAT_11272f3b8;
  lVar6 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar13 = lVar6;
  func_0x00010c131580();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = (long)_DAT_11272f3ac;
  lVar4 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar14 = lVar4;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar15 = lVar66;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = (long)_DAT_11272f3b4;
  lVar5 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar16 = lVar5;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11272f3d0;
  _objc_loadWeakRetained();
  lVar17 = lVar7;
  func_0x00010c0ebe80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11272f3cc;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar72;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = param_1 + lVar72;
  _objc_loadWeakRetained();
  lVar22 = lVar72;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar23 = lVar67;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = (long)_DAT_11272f3c0;
  lVar24 = param_1 + lVar68;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c29d900();
  _objc_retainAutoreleasedReturnValue();
  lVar68 = param_1 + lVar68;
  _objc_loadWeakRetained();
  lVar26 = lVar68;
  func_0x00010bf40000();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11272f3e4;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_11272f400;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11272f3ec;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = (long)_DAT_11272f424;
  lVar34 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c2527c0();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + lVar69;
  _objc_loadWeakRetained();
  lVar36 = lVar69;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1 + _DAT_11272f41c;
  _objc_loadWeakRetained();
  lVar38 = lVar37;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = (long)_DAT_11272f3f8;
  lVar39 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + _DAT_11272f3fc;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + _DAT_11272f3d8;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_11272f3dc;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar70 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar47 = lVar70;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_11272f398;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_11272f40c;
  _objc_loadWeakRetained();
  lVar51 = lVar50;
  func_0x00010c293640();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1 + lVar65;
  _objc_loadWeakRetained();
  lVar52 = lVar65;
  func_0x00010bf81860();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + _DAT_11272f4b0;
  _objc_loadWeakRetained();
  lVar54 = param_1 + _DAT_11272f4b8;
  _objc_loadWeakRetained();
  lVar55 = param_1 + _DAT_11272f4bc;
  _objc_loadWeakRetained();
  lVar56 = lVar55;
  func_0x00010c11a360();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + lVar64;
  _objc_loadWeakRetained();
  lVar57 = lVar64;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_11272f448;
  _objc_loadWeakRetained();
  lVar59 = lVar58;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + _DAT_11272f4c4;
  _objc_loadWeakRetained();
  lVar61 = param_1 + _DAT_11272f4cc;
  _objc_loadWeakRetained();
  lVar62 = param_1 + _DAT_11272f484;
  _objc_loadWeakRetained();
  lVar63 = lVar62;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e580();
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar64);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar65);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar70);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar69);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar68);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar67);
  _objc_release(lVar22);
  _objc_release(lVar72);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar7);
  _objc_release(lVar16);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(lVar66);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar71);
  _objc_release(lVar11);
  _objc_release(lVar1);
  lVar71 = (long)_DAT_11272f3f0;
  lVar1 = param_1 + lVar71;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c293ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f480(puVar10);
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar71;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c24ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182020(puVar10);
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar71 = param_1 + lVar71;
  _objc_loadWeakRetained(lVar71);
  lVar1 = lVar71;
  func_0x00010bf82ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f220(puVar10);
  _objc_release(lVar1);
  _objc_release(lVar71);
  param_1 = param_1 + _DAT_11272f4d0;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c08d840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0520(puVar10);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105ae4110; end: 105ae414f;  */

void FUN_105ae4110(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf6100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ae4150; end: 105ae42bb; -[SCDiscoverFeedEntryPoint _actionHandlersFuture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae4150(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = param_1 + _DAT_11272f458;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar5 = 0;
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11272f4fc);
  }
  _objc_retain(uVar5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ae42bc;
  puStack_48 = &UNK_1108d4780;
  lStack_40 = lVar3;
  _objc_copyWeak(auStack_68,auStack_38);
  _objc_retain(puVar1);
  func_0x00010bf9d5c0(uVar5);
  _objc_release(uVar5);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105ae42bc; end: 105ae4317;  */

void FUN_105ae42bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2288;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bfeee00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ae4318; end: 105ae4437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae4318(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar3 = (undefined *)(lVar2 + _DAT_11272f508);
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010bf22660();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar1 = puVar4;
    }
    _objc_retain(puVar1);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(lVar2 + _DAT_11272f4d4);
    *(undefined **)(lVar2 + _DAT_11272f4d4) = puVar1;
    _objc_retain(puVar1);
    _objc_release(uVar7);
    uVar7 = param_2;
    func_0x00010c0d3c80(param_2);
    func_0x00010befa160();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = uVar7;
    func_0x00010bf51e00(uVar7);
    func_0x00010bf43d60(uVar6);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ae4438; end: 105ae44f3; -[SCDiscoverFeedEntryPoint onboardingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae4438(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c2290;
  _objc_alloc(PTR_PTR_1126c2290);
  lVar2 = param_1 + _DAT_11272f3f4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272f41c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012120(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ae44f4; end: 105ae455b; -[SCDiscoverFeedEntryPoint uiContainerForSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae44f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5f80;
  _objc_alloc(PTR_PTR_1126b5f80);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272f49c);
  func_0x00010bf4dd20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,uVar2,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ae455c; end: 105ae4a73; -[SCDiscoverFeedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae455c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272f508);
  _objc_destroyWeak(param_1 + _DAT_11272f4b0);
  _objc_destroyWeak(param_1 + _DAT_11272f484);
  _objc_destroyWeak(param_1 + _DAT_11272f4a4);
  _objc_destroyWeak(param_1 + _DAT_11272f47c);
  _objc_destroyWeak(param_1 + _DAT_11272f480);
  _objc_destroyWeak(param_1 + _DAT_11272f46c);
  _objc_destroyWeak(param_1 + _DAT_11272f460);
  _objc_destroyWeak(param_1 + _DAT_11272f45c);
  _objc_destroyWeak(param_1 + _DAT_11272f4a8);
  _objc_destroyWeak(param_1 + _DAT_11272f474);
  _objc_storeStrong(param_1 + _DAT_11272f470,0);
  _objc_storeStrong(param_1 + _DAT_11272f4c0,0);
  _objc_destroyWeak(param_1 + _DAT_11272f4c4);
  _objc_destroyWeak(param_1 + _DAT_11272f4b8);
  _objc_storeStrong(param_1 + _DAT_11272f4b4,0);
  _objc_storeStrong(param_1 + _DAT_11272f4ac,0);
  _objc_destroyWeak(param_1 + _DAT_11272f42c);
  _objc_storeStrong(param_1 + _DAT_11272f428,0);
  _objc_storeStrong(param_1 + _DAT_11272f504,0);
  _objc_storeStrong(param_1 + _DAT_11272f500,0);
  _objc_storeStrong(param_1 + _DAT_11272f4fc,0);
  _objc_storeStrong(param_1 + _DAT_11272f4f8,0);
  _objc_storeStrong(param_1 + _DAT_11272f4f4,0);
  _objc_storeStrong(param_1 + _DAT_11272f4f0,0);
  _objc_storeStrong(param_1 + _DAT_11272f4ec,0);
  _objc_storeStrong(param_1 + _DAT_11272f4e8,0);
  _objc_destroyWeak(param_1 + _DAT_11272f4cc);
  _objc_storeStrong(param_1 + _DAT_11272f4c8,0);
  _objc_storeStrong(param_1 + _DAT_11272f4e4,0);
  _objc_storeStrong(param_1 + _DAT_11272f48c,0);
  _objc_storeStrong(param_1 + _DAT_11272f4e0,0);
  _objc_destroyWeak(param_1 + _DAT_11272f464);
  _objc_destroyWeak(param_1 + _DAT_11272f44c);
  _objc_destroyWeak(param_1 + _DAT_11272f448);
  _objc_destroyWeak(param_1 + _DAT_11272f444);
  _objc_destroyWeak(param_1 + _DAT_11272f468);
  _objc_destroyWeak(param_1 + _DAT_11272f430);
  _objc_destroyWeak(param_1 + _DAT_11272f38c);
  _objc_destroyWeak(param_1 + _DAT_11272f440);
  _objc_destroyWeak(param_1 + _DAT_11272f454);
  _objc_destroyWeak(param_1 + _DAT_11272f450);
  _objc_destroyWeak(param_1 + _DAT_11272f420);
  _objc_destroyWeak(param_1 + _DAT_11272f418);
  _objc_destroyWeak(param_1 + _DAT_11272f394);
  _objc_destroyWeak(param_1 + _DAT_11272f388);
  _objc_destroyWeak(param_1 + _DAT_11272f40c);
  _objc_destroyWeak(param_1 + _DAT_11272f414);
  _objc_destroyWeak(param_1 + _DAT_11272f410);
  _objc_destroyWeak(param_1 + _DAT_11272f41c);
  _objc_destroyWeak(param_1 + _DAT_11272f424);
  _objc_destroyWeak(param_1 + _DAT_11272f4dc);
  _objc_destroyWeak(param_1 + _DAT_11272f490);
  _objc_destroyWeak(param_1 + _DAT_11272f494);
  _objc_destroyWeak(param_1 + _DAT_11272f404);
  _objc_destroyWeak(param_1 + _DAT_11272f408);
  _objc_destroyWeak(param_1 + _DAT_11272f4d0);
  _objc_destroyWeak(param_1 + _DAT_11272f3f0);
  _objc_destroyWeak(param_1 + _DAT_11272f400);
  _objc_destroyWeak(param_1 + _DAT_11272f488);
  _objc_destroyWeak(param_1 + _DAT_11272f438);
  _objc_destroyWeak(param_1 + _DAT_11272f3fc);
  _objc_destroyWeak(param_1 + _DAT_11272f384);
  _objc_destroyWeak(param_1 + _DAT_11272f3f8);
  _objc_destroyWeak(param_1 + _DAT_11272f4d8);
  _objc_destroyWeak(param_1 + _DAT_11272f3f4);
  _objc_destroyWeak(param_1 + _DAT_11272f3dc);
  _objc_destroyWeak(param_1 + _DAT_11272f3d8);
  _objc_destroyWeak(param_1 + _DAT_11272f3d4);
  _objc_destroyWeak(param_1 + _DAT_11272f4bc);
  _objc_destroyWeak(param_1 + _DAT_11272f3a0);
  _objc_destroyWeak(param_1 + _DAT_11272f3d0);
  _objc_destroyWeak(param_1 + _DAT_11272f3cc);
  _objc_destroyWeak(param_1 + _DAT_11272f3e0);
  _objc_destroyWeak(param_1 + _DAT_11272f3ec);
  _objc_destroyWeak(param_1 + _DAT_11272f3c8);
  _objc_destroyWeak(param_1 + _DAT_11272f3e8);
  _objc_destroyWeak(param_1 + _DAT_11272f434);
  _objc_destroyWeak(param_1 + _DAT_11272f3c4);
  _objc_destroyWeak(param_1 + _DAT_11272f3c0);
  _objc_destroyWeak(param_1 + _DAT_11272f3bc);
  _objc_destroyWeak(param_1 + _DAT_11272f3b8);
  _objc_destroyWeak(param_1 + _DAT_11272f3b4);
  _objc_destroyWeak(param_1 + _DAT_11272f398);
  _objc_destroyWeak(param_1 + _DAT_11272f3e4);
  _objc_destroyWeak(param_1 + _DAT_11272f3b0);
  _objc_destroyWeak(param_1 + _DAT_11272f39c);
  _objc_destroyWeak(param_1 + _DAT_11272f3ac);
  _objc_destroyWeak(param_1 + _DAT_11272f3a8);
  _objc_destroyWeak(param_1 + _DAT_11272f3a4);
  _objc_destroyWeak(param_1 + _DAT_11272f380);
  _objc_destroyWeak(param_1 + _DAT_11272f458);
  _objc_destroyWeak(param_1 + _DAT_11272f43c);
  _objc_destroyWeak(param_1 + _DAT_11272f4a0);
  _objc_destroyWeak(param_1 + _DAT_11272f478);
  _objc_storeStrong(param_1 + _DAT_11272f4d4,0);
  _objc_storeStrong(param_1 + _DAT_11272f390,0);
  _objc_storeStrong(param_1 + _DAT_11272f49c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272f498,0);
  return;
}



/* Entry: 105ae4a74; end: 105ae4b87; -[SCDiscoverFeedWorkflow initWithUserSession:presentingViewController:chatScopeExposer:chatScopeServices:callLauncher:] */

undefined1 *
FUN_105ae4a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ebcd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
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



/* Entry: 105ae4b88; end: 105ae4c8f; -[SCDiscoverFeedWorkflow _navigateToChat:deepLinkURL:] */

void FUN_105ae4b88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b41f8;
  _objc_retain(param_3);
  func_0x00010c13a640(puVar1,param_2,param_4);
  puVar1 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  puVar2 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c038f40(puVar2,param_2,lVar3,1);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22b00(uVar4,param_2,param_3,puVar1,param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ae4c90; end: 105ae4cdf; -[SCDiscoverFeedWorkflow chatScopeDidDismiss:] */

void FUN_105ae4c90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


