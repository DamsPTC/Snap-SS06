/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105761544; end: 10576158b;  */

void FUN_105761544(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26260();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10576158c; end: 105761663; -[SCAdUserStoriesAdPrefetcher _handleAvailableFriendStories:] */

void FUN_10576158c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105761664; end: 105761697;  */

void FUN_105761664(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105761698; end: 10576179b; -[SCAdUserStoriesAdPrefetcher _checkAvailableFriendStories:] */

void FUN_105761698(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = &PTR___NSConcreteGlobalBlock_1108afcd8;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108afcd8);
  lVar1 = param_3;
  func_0x00010bf529e0();
  *(long *)(param_1 + 0x70) = lVar1;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b8c98;
    func_0x00010bfb4b60();
    if (((ulong)puVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x69) = 0;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      func_0x00010c0acae0(*(undefined8 *)(param_1 + 0x38));
      goto LAB_1057616f8;
    }
  }
  func_0x00010bddd1e0(param_1);
LAB_1057616f8:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfddf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar3,PTR_s_hasUnviewedStories_1125d5188);
  return;
}



/* Entry: 10576179c; end: 1057617a3;  */

void FUN_10576179c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfddf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_hasUnviewedStories_1125d5188);
  return;
}



/* Entry: 1057617a4; end: 1057618c3; -[SCAdUserStoriesAdPrefetcher _checkAdPrefetchConditions] */

void FUN_1057617a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar1 != 0) {
    lVar5 = lVar1;
    if (lVar4 == 2) {
      func_0x00010bfbc300();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10576181c;
    }
    if (lVar4 == 1) {
      func_0x00010bfbc2e0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10576181c;
    }
  }
  lVar5 = 0;
LAB_10576181c:
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar5;
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar3 = *(ulong *)(param_1 + 0x48);
  func_0x00010bf6af00();
  if ((long)uVar3 < 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bddd210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkAdPrefetchConditionsAfterD_112554e20)
    ;
    return;
  }
  func_0x00010c0cd480((double)uVar3,PTR_PTR_1126afec0);
  func_0x00010c0f7fe0(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 1057618c4; end: 1057618cb;  */

void FUN_1057618c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkAdPrefetchConditionsAfterD_112554e20);
  return;
}



/* Entry: 1057618cc; end: 1057619f3; -[SCAdUserStoriesAdPrefetcher _checkAdPrefetchConditionsAfterDelay] */

void FUN_1057618cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    puVar1 = PTR_PTR_1126b8c98;
    func_0x00010bfb4b60();
    if (((ulong)puVar1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x69) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0acaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_logPrefetchThrottle__112608cc8,3);
      return;
    }
  }
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf60c00(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057619f4; end: 105761a27;  */

void FUN_1057619f4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105761a28; end: 105761b4f; -[SCAdUserStoriesAdPrefetcher _checkAdPrefetchConditionsWithCurrentViewLocation:] */

void FUN_105761a28(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (((param_3 & 0xfffffffffffffffd) == 4) &&
     (puVar1 = PTR_PTR_1126b8c98, func_0x00010bfb4b60(), ((ulong)puVar1 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x69) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c0acaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x38),PTR_s_logPrefetchThrottle__112608cc8,3);
    return;
  }
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf383e0(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105761b50; end: 105761b9f;  */

void FUN_105761b50(long param_1,ulong param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if ((param_2 & 1) == 0) {
    func_0x00010bfb4b60(PTR_PTR_1126b8c98);
  }
  func_0x00010becfa40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105761ba0; end: 105761caf; -[SCAdUserStoriesAdPrefetcher _triggerAdPrefetchWithShouldPrefetch:] */

void FUN_105761ba0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  if ((param_3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x69) = 0;
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf17b60();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_40 = puVar2;
    _objc_copyWeak(auStack_48,auStack_38);
    func_0x00010c11f8c0(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105761cb0; end: 105761d2b;  */

void FUN_105761cb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76f80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105761d2c; end: 105761e5b; -[SCAdUserStoriesAdPrefetcher _prefetchAdWithRankedStoryIds:] */

void FUN_105761d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_40 = puVar2;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  func_0x00010c25b360(uVar3);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105761e5c; end: 105761edb;  */

void FUN_105761e5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be310e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105761edc; end: 105761fdb; -[SCAdUserStoriesAdPrefetcher _handleStoriesSnapPlaybackInfoFetchResultWithRankedStoryIds:snapPlaybackInfoMap:] */

void FUN_105761edc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105761fdc; end: 10576200f;  */

void FUN_105761fdc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105762010; end: 1057624d3; -[SCAdUserStoriesAdPrefetcher _prefetchAdWithRankedStoryIds:snapPlaybackInfoMap:] */

void FUN_105762010(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2180();
  _objc_release(uVar1);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(uVar2);
  uVar17 = uVar2;
  func_0x00010bf52a60();
  if (uVar17 != 0) {
    lVar15 = *plStack_120;
    do {
      uVar14 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(uVar2);
        }
        lVar9 = param_4;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bef2d20();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bef3aa0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c08fa60();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar7 != 0) {
          lVar4 = lVar9;
          func_0x00010bfb1920(lVar9);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bef2d20();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bef3aa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lVar9);
        uVar14 = uVar14 + 1;
      } while (uVar17 != uVar14);
      uVar17 = uVar2;
      func_0x00010bf52a60();
    } while (uVar17 != 0);
  }
  _objc_release(uVar2);
  _objc_initWeak(auStack_138,param_1);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1057624d4;
  puStack_148 = &UNK_1108afc58;
  _objc_copyWeak(auStack_140,auStack_138);
  ppuVar8 = &puStack_160;
  _objc_retainBlock();
  uVar17 = param_1;
  func_0x00010be62080();
  if ((uVar17 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar17 = param_1;
    func_0x00010becabc0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined **)(param_1 + 0x50);
    func_0x00010c11de00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar17;
    func_0x00010c1072c0(uVar1);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar9;
    func_0x00010c0c2180();
    _objc_release(lVar9);
    if (*(long *)(param_1 + 0x40) == 2) {
      uVar17 = 0;
    }
    else {
      if (lVar15 < 2) {
        lVar15 = 1;
      }
      uVar17 = param_3;
      func_0x0001057605e4(param_3,param_4,lVar15);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(param_3);
    func_0x00010c0df840(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126bdc30;
    _objc_alloc(PTR_PTR_1126bdc30);
    func_0x00010c059460();
    uVar16 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = param_1;
    func_0x00010becabc0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf8bea0(uVar16);
    _objc_release(uVar1);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  _objc_release(puVar10);
  _objc_release(uVar17);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(param_3);
  _objc_retain(uVar14);
  lVar15 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar15);
  func_0x00010be76f60();
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar15);
  return;
}



/* Entry: 1057624d4; end: 10576252b;  */

void FUN_1057624d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76f60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10576252c; end: 10576265b; -[SCAdUserStoriesAdPrefetcher _prefetchAdMediaWithAdResponse:success:] */

long FUN_10576252c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x69) = 0;
  if ((param_4 != 0) && (param_3 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107da0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010bef4060();
    if (iVar1 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      lVar4 = param_1;
      func_0x00010be5e940(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c107180(uVar6,param_2,param_3,lVar4,uVar2,0);
      _objc_release(uVar2);
      _objc_release(lVar4);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_3 + 0x28);
  func_0x00010c269d40(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf1f480();
  _objc_release(lVar5);
  return lVar4;
}



/* Entry: 10576265c; end: 1057626a3; -[SCAdUserStoriesAdPrefetcher _navBadgeOperaContextMatchEnabled] */

undefined8 FUN_10576265c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1057626a4; end: 1057626fb; -[SCAdUserStoriesAdPrefetcher _targetingParameters] */

void FUN_1057626a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x0001063f9f48(0,uVar1,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057626fc; end: 1057627b7; -[SCAdUserStoriesAdPrefetcher _mediaLoadContexts] */

void FUN_1057626fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c23f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x90,0);
  _objc_storeStrong(puVar1 + 0x88,0);
  _objc_storeStrong(puVar1 + 0x80,0);
  _objc_storeStrong(puVar1 + 0x78,0);
  _objc_storeStrong(puVar1 + 0x60,0);
  _objc_storeStrong(puVar1 + 0x58,0);
  _objc_storeStrong(puVar1 + 0x50,0);
  _objc_storeStrong(puVar1 + 0x48,0);
  _objc_storeStrong(puVar1 + 0x38,0);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1057627b8; end: 105762883; -[SCAdUserStoriesAdPrefetcher .cxx_destruct] */

void FUN_1057627b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105762884; end: 1057628a7;  */

undefined8 FUN_105762884(long param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined8 *)(&UNK_10ddbd028 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1057628a8; end: 105762a4f; -[SCAdPrefetchHelper initWithAdProvider:adMediaFetcher:adConfigProvider:adConfigProviderV2:adWebViewPrefetchHintsManager:adsPreferencesProvider:grapheneRegistry:lifecycleTracker:] */

undefined1 *
FUN_1057628a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126ea140;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
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



/* Entry: 105762a50; end: 105762a5f; -[SCAdPrefetchHelper prefetchAdsWithTargetingParams:adOrganicSignals:completionQueue:completionBlock:] */

void FUN_105762a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1072b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_prefetchAdsWithTargetingParams_a_11261f6c8,param_3,param_4,0,param_5,
             param_6);
  return;
}



/* Entry: 105762a60; end: 105762a97; -[SCAdPrefetchHelper prefetchAdsWithTargetingParams:adOrganicSignals:adViewLocation:completionQueue:completionBlock:] */

void FUN_105762a60(void)

{
  func_0x00010be0f2e0();
  return;
}



/* Entry: 105762a98; end: 105762ac3; -[SCAdPrefetchHelper prefetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:completionQueue:completionBlock:] */

void FUN_105762a98(void)

{
  func_0x00010be0f2e0();
  return;
}



/* Entry: 105762ac4; end: 105762afb; -[SCAdPrefetchHelper earlyFetchAdsWithTargetingParams:adOrganicSignals:adViewLocation:completionQueue:completionBlock:] */

void FUN_105762ac4(void)

{
  func_0x00010be0f2e0();
  return;
}



/* Entry: 105762afc; end: 105762b27; -[SCAdPrefetchHelper earlyFetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:completionQueue:completionBlock:] */

void FUN_105762afc(void)

{
  func_0x00010be0f2e0();
  return;
}



/* Entry: 105762b28; end: 105762b5b; -[SCAdPrefetchHelper prefetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:requestOrigin:completionQueue:completionBlock:onServeDecision:] */

void FUN_105762b28(void)

{
  func_0x00010be0f2e0();
  return;
}



/* Entry: 105762b5c; end: 105762b8f; -[SCAdPrefetchHelper earlyFetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:requestOrigin:completionQueue:completionBlock:onServeDecision:] */

void FUN_105762b5c(void)

{
  func_0x00010be0f2e0();
  return;
}



/* Entry: 105762b90; end: 105762e6f; -[SCAdPrefetchHelper _fetchAdsWithTargetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:isEarlyFetch:requestOrigin:completionQueue:completionBlock:onServeDecision:] */

void FUN_105762b90(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10,long param_11,long param_12,
                  undefined8 param_13)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lVar1 = param_4;
  func_0x00010c06a3c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_4;
    func_0x00010bef4240();
    if (lVar1 == 7) {
      if ((param_11 != 0) && (param_12 != 0)) {
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_105762e70;
        puStack_88 = &UNK_110849530;
        _objc_retain(param_12);
        lStack_80 = param_12;
        func_0x00010007380c(param_11,&puStack_a0);
        _objc_release(lStack_80);
      }
      goto LAB_105762dec;
    }
  }
  else {
    _objc_release();
  }
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  _objc_initWeak(auStack_a8,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_a8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_c0 = param_10;
  uStack_c8 = param_8;
  uStack_b8 = param_1;
  uStack_b0 = param_9;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  func_0x00010c0f6fe0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
LAB_105762dec:
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105762e70; end: 105762e83;  */

void FUN_105762e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105762e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105762e84; end: 105762f03;  */

void FUN_105762e84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2e520(*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105762f04; end: 10576331b; -[SCAdPrefetchHelper prefetchAdMediaWithAdResponse:mediaLoadContexts:completionQueue:completionBlock:] */

void FUN_105762f04(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010bef60a0();
  if ((lVar2 == 7) || (lVar2 = param_3, func_0x00010bef60a0(), lVar2 == 0x17)) {
LAB_105762fc4:
    if (param_6 == 0) goto LAB_105762fd8;
    pcVar11 = *(code **)(param_6 + 0x10);
    uVar10 = 1;
  }
  else {
    lVar2 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_105762fc4;
    lVar2 = param_3;
    func_0x00010bef60a0();
    if (lVar2 != 0x12) {
      lVar2 = param_3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010c107160();
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126ae4e8;
      ppuVar1 = &PTR____CFConstantStringClassReference_110dfc438;
      if ((int)uVar10 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dfc458;
      }
      _objc_retain(ppuVar1);
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf17b60();
      _objc_release(ppuVar1);
      _objc_release(puVar5);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_3);
      _objc_retain(lVar3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010bfa87a0(uVar10);
      _objc_release(uVar10);
      lVar2 = lVar3;
      func_0x00010bef60a0();
      if (lVar2 == 3) {
        lVar2 = lVar3;
        func_0x00010c242040();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010bf20540();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c2a4740();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1d600();
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar2);
        func_0x00010bef5840();
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010bf5ac40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef60a0();
        lVar6 = lVar3;
        func_0x00010c242040(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf20540();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c2a4740();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c109d60(uVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar2);
        _objc_release(uVar10);
        lVar2 = param_3;
        func_0x00010bef4240();
        if (lVar2 == 0x16) {
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c107dc0();
          _objc_release(uVar10);
        }
      }
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(lVar3);
      _objc_release(lVar3);
      goto LAB_105762fd8;
    }
    if (param_6 == 0) goto LAB_105762fd8;
    pcVar11 = *(code **)(param_6 + 0x10);
    uVar10 = 0;
  }
  (*pcVar11)(param_6,uVar10);
LAB_105762fd8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10576331c; end: 105763437;  */

void FUN_10576331c(long param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dfc478;
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = *(long *)(param_1 + 0x38);
  if ((lVar3 != 0) && (puVar2 = *(undefined **)(param_1 + 0x40), puVar2 != (undefined *)0x0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105763438;
    puStack_60 = &UNK_11084a9b8;
    _objc_retain(puVar2);
    puStack_58 = puVar2;
    uStack_50 = param_2;
    func_0x00010007380c(lVar3,&puStack_78);
    puVar1 = puStack_58;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105763448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))(*(long *)(puVar1 + 0x20),puVar1[0x28]);
  return;
}



/* Entry: 105763438; end: 10576344f;  */

void FUN_105763438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105763448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105763450; end: 105763e7b; -[SCAdPrefetchHelper _handlePrefetchAdCacheResponse:targetingParams:adOrganicSignals:upcomingStoriesContext:engagement:adViewLocation:isEarlyFetch:requestOrigin:prefetchStartTime:completionQueue:completionBlock:onServeDecision:] */

void FUN_105763450(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined *puStack_1f8;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c107240();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1708;
    func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1708);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bef4240(param_5);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c2ac460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(puVar7);
    if (param_9 == 0) {
      lVar9 = -1;
    }
    else {
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_9;
      func_0x0001084c0f40(param_9,uVar8);
      _objc_release(uVar8);
    }
    puVar1 = PTR_PTR_1126afeb0;
    _objc_alloc();
    func_0x000108534aa8(lVar9);
    func_0x00010c04e0c0();
    puStack_1f8 = puVar1;
    func_0x00010c2b7120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (param_9 == 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001084c0d90(lVar9,uVar8);
      _objc_release(uVar8);
    }
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    _objc_initWeak(auStack_c8,param_2);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf17b60();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17be0();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240();
    uVar8 = uVar3;
    func_0x00010bf1f480();
    if ((int)uVar8 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x0001063fc8d0();
      if ((int)uVar8 != 0) {
        func_0x00010bef4240(param_5);
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar3);
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x2020000000;
    uStack_d0 = 0;
    puVar1 = PTR_PTR_1126bdc48;
    _objc_alloc(PTR_PTR_1126bdc48);
    puStack_f8 = puVar5;
    _objc_copyWeak(auStack_100,auStack_c8);
    _objc_retain(param_5);
    uStack_f0 = param_1;
    _objc_retain(in_stack_00000010);
    _objc_retain(in_stack_00000018);
    _objc_retain(in_stack_00000020);
    _objc_retain(param_5);
    _objc_retain(in_stack_00000010);
    _objc_retain(in_stack_00000018);
    func_0x00010c04f440(puVar1);
    puVar5 = PTR_PTR_1126bdc50;
    func_0x00010bef4c40(PTR_PTR_1126bdc50);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar6);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c13e1c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_5);
    func_0x00010bef4240(param_5);
    func_0x00010be6dee0();
    _objc_retain(in_stack_00000020);
    func_0x00010bef66c0(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(in_stack_00000020);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(in_stack_00000018);
    _objc_release(in_stack_00000010);
    _objc_release(param_5);
    _objc_release(in_stack_00000020);
    _objc_release(in_stack_00000018);
    _objc_release(in_stack_00000010);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_100);
    __Block_object_dispose(&uStack_e8,8);
    _objc_destroyWeak(auStack_c8);
  }
  else {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c16f0;
    func_0x00010c25d700(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c16f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bef4240(param_5);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puStack_1f8 = puVar5;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dad058;
    func_0x00010bef4240(param_4);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0a06a0(param_1,uVar8,uVar3);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    if (in_stack_00000020 != 0) {
      (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,0);
    }
    if ((in_stack_00000010 != 0) && (in_stack_00000018 != 0)) {
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_105763e7c;
      puStack_a8 = &UNK_11084aaa8;
      _objc_retain(in_stack_00000018);
      lStack_98 = in_stack_00000018;
      _objc_retain(param_4);
      lStack_a0 = param_4;
      func_0x00010007380c(in_stack_00000010,&puStack_c0);
      _objc_release(lStack_a0);
      _objc_release(lStack_98);
    }
  }
  _objc_release(puStack_1f8);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  __Block_object_dispose(&uStack_e8,8);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x000105763e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x28) + 0x10))
            (*(long *)(param_4 + 0x28),1,*(undefined8 *)(param_4 + 0x20));
  return;
}



/* Entry: 105763e7c; end: 105763e8f;  */

void FUN_105763e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105763e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),1,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105763e90; end: 1057640af;  */

void FUN_105763e90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be2e580(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1057640b0; end: 1057640c3;  */

void FUN_1057640b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001057640c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1057640c4; end: 10576418b;  */

void FUN_1057640c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dfc518);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94200();
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10576418c; end: 105764407; -[SCAdPrefetchHelper _handlePrefetchSuccessWithAdResponse:targetingParams:prefetchStartTime:completionQueue:completionBlock:] */

void FUN_10576418c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110dad058;
    func_0x00010bef4240(param_5);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if ((param_6 == 0) || (param_7 == 0)) goto LAB_1057643b0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105764408;
    puStack_88 = &UNK_110849530;
    _objc_retain(param_7);
    lStack_80 = param_7;
    func_0x00010007380c(param_6,&puStack_a0);
    lVar3 = lStack_80;
  }
  else {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dad058;
    func_0x00010bef4240(param_5);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c0a06a0(param_1,uVar4,uVar1);
    _objc_release(uVar1);
    if ((param_6 == 0) || (param_7 == 0)) goto LAB_1057643b0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10576441c;
    puStack_b8 = &UNK_11084aaa8;
    _objc_retain(param_7);
    lStack_a8 = param_7;
    _objc_retain(param_4);
    lStack_b0 = param_4;
    func_0x00010007380c(param_6,&puStack_d0);
    _objc_release(lStack_b0);
    lVar3 = lStack_a8;
  }
  _objc_release(lVar3);
LAB_1057643b0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105764418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x20) + 0x10))(*(long *)(param_4 + 0x20),0,0);
  return;
}



/* Entry: 105764408; end: 10576442f;  */

void FUN_105764408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105764418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 105764430; end: 10576443f; -[SCAdPrefetchHelper _operaTypeForAdProductType:] */

undefined8 FUN_105764430(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 == 6) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 105764440; end: 1057644b7; -[SCAdPrefetchHelper .cxx_destruct] */

void FUN_105764440(long param_1)

{
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



/* Entry: 1057644b8; end: 105764613; -[SCAdPrefetchRuleTracker initWithAdProductType:adConfigProvider:grapheneRegistry:performer:adViewingHistory:userTrackedLogger:bandwidthEstimator:] */

undefined1 *
FUN_1057644b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ea148;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105764614; end: 10576461f; -[SCAdPrefetchRuleTracker checkPrefetchConditionsFromPrefetchConfigs:adPrefetchSource:unviewedFriendStoriesCount:completionBlock:] */

void FUN_105764614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *(undefined8 *)(param_1 + 0x78) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bf383d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_checkPrefetchConditionsFromPrefe_1125aba98,param_3,param_4,param_6);
  return;
}



/* Entry: 105764620; end: 10576475f; -[SCAdPrefetchRuleTracker checkPrefetchConditionsFromPrefetchConfigs:adPrefetchSource:completionBlock:] */

void FUN_105764620(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  dVar5 = *(double *)(param_1 + 0x40);
  if (dVar5 != 0.0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    *(double *)(param_1 + 0x88) = dVar5 - *(double *)(param_1 + 0x40);
  }
  if ((param_3 == 0) || (*(char *)(param_1 + 0x48) == '\x01')) {
    uVar3 = 0;
    uVar4 = 7;
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_3;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010bef40c0();
    if (lVar2 < 1) {
      uVar3 = 0;
      uVar4 = 1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x30);
      lVar1 = *(long *)(param_1 + 0x38);
      func_0x00010bef4040();
      if (lVar1 <= lVar2) {
        if (*(double *)(param_1 + 0x40) != 0.0) {
          dVar5 = *(double *)(param_1 + 0x88);
          lVar2 = *(long *)(param_1 + 0x30);
          func_0x00010bef3fc0();
          if (dVar5 < (double)lVar2) {
            uVar3 = 2;
            uVar4 = 3;
            goto LAB_105764698;
          }
        }
        func_0x00010bdde4e0(param_1,param_2,param_5);
        goto LAB_1057646a0;
      }
      uVar3 = 1;
      uVar4 = 2;
    }
  }
LAB_105764698:
  func_0x00010be01ea0(param_1,param_2,uVar3,uVar4,param_5);
LAB_1057646a0:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105764760; end: 105764803; -[SCAdPrefetchRuleTracker _checkUserEngagementScoreWithCompletionBlock:] */

void FUN_105764760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x50) == 2) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfbc380();
    _objc_release(lVar1);
  }
  else {
    lVar2 = 0;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bef4080();
  if (lVar2 < lVar1) {
    func_0x00010be01ea0(param_1,param_2,4,4,param_3);
  }
  else {
    *(long *)(param_1 + 0x68) = lVar2;
    func_0x00010bdddea0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105764804; end: 1057649b3; -[SCAdPrefetchRuleTracker _checkMaxAdIndexWithCompletionBlock:] */

void FUN_105764804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf88900();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x50) == 2) {
    FUN_105762884(uVar3);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfbc2a0();
    _objc_release(lVar2);
    if (lVar4 < 0) {
      func_0x00010be01ea0(param_1);
      goto LAB_105764970;
    }
  }
  else {
    lVar4 = 0;
  }
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  lStack_50 = lVar4;
  _objc_retain(param_3);
  func_0x00010bef6360(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
LAB_105764970:
  _objc_release(param_3);
  return;
}



/* Entry: 1057649b4; end: 1057649fb;  */

void FUN_1057649b4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be255a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057649fc; end: 105764a1f; -[SCAdPrefetchRuleTracker _handleAdViewCount:maxAdIndex:completionBlock:] */

void FUN_1057649fc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  *(long *)(param_1 + 0x80) = param_4;
  if (param_4 < param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010be01eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__disallowPrefetchWithPrefetchThr_11255e148,5,5);
    return;
  }
  *(long *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdca290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__allowPrefetchWithCompletionBloc_112550240,param_5);
  return;
}



/* Entry: 105764a20; end: 105764a9b; -[SCAdPrefetchRuleTracker _allowPrefetchWithCompletionBlock:] */

void FUN_105764a20(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_4 != 0) {
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
    puVar1 = PTR_PTR_1126afec0;
    _objc_retain(param_4);
    func_0x00010bf604c0(puVar1);
    *(undefined8 *)(param_2 + 0x40) = param_1;
    *(undefined1 *)(param_2 + 0x48) = 0;
    func_0x00010be57220(param_2);
    (**(code **)(param_4 + 0x10))(param_4,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 105764a9c; end: 105764b17; -[SCAdPrefetchRuleTracker _disallowPrefetchWithPrefetchThrottleType:skipReason:completionBlock:] */

void FUN_105764a9c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  _objc_retain(param_5);
  if (param_5 != 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    if (param_3 != 0) {
      func_0x00010c0acae0(param_1);
    }
    if (param_4 != 7) {
      func_0x00010be57240(param_1);
    }
    (**(code **)(param_5 + 0x10))(param_5,0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105764b18; end: 105764c7b; -[SCAdPrefetchRuleTracker logPrefetchThrottle:] */

void FUN_105764b18(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b8d98;
    func_0x00010c107260(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24a38,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x50)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar6);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 105764c7c; end: 105764d0f; -[SCAdPrefetchRuleTracker _logPrefetchRequestInfo] */

void FUN_105764c7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bdc58;
  _objc_opt_new(PTR_PTR_1126bdc58);
  func_0x00010c163800();
  func_0x00010c196400(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x0001084b952c(uVar2);
  func_0x00010c163f80(puVar1,param_2,uVar2);
  func_0x00010c16d820(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105764d10; end: 105764e4f; -[SCAdPrefetchRuleTracker _logPrefetchSkipInfo:] */

void FUN_105764d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x0001084b952c(uVar1);
  uVar2 = uVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bdc60;
  _objc_opt_new(PTR_PTR_1126bdc60);
  func_0x00010c206c40();
  func_0x00010c1e0600(puVar3,param_2,uVar2);
  func_0x00010c1e0620(puVar3,param_2,param_3);
  func_0x00010c163f80(puVar3,param_2,uVar1);
  func_0x00010c1e0540(puVar3,param_2,(long)*(double *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bef3fc0(uVar1);
  func_0x00010c1e0680(puVar3,param_2,uVar1);
  func_0x00010c196400(puVar3,param_2,*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bef4080(uVar1);
  func_0x00010c196420(puVar3,param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bef40c0(uVar1);
  func_0x00010c1ce9e0(puVar3,param_2,uVar1);
  func_0x00010c1e0480(puVar3,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c222ea0(puVar3,param_2,*(undefined8 *)(param_1 + 0x70));
  func_0x00010c222ec0(puVar3,param_2,*(undefined8 *)(param_1 + 0x80));
  func_0x00010c16d820(puVar3,param_2,*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105764e50; end: 105764ebb; -[SCAdPrefetchRuleTracker .cxx_destruct] */

void FUN_105764e50(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105764ebc; end: 105765063; -[SCAdPromotedStoryAttachmentPreloader initWithConfigProvider:attachmentPreloader:grapheneRegistry:notificationPool:mainQueuePerformer:performer:] */

undefined1 *
FUN_105764ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ea150;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
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



/* Entry: 105765064; end: 105765087;  */

void FUN_105765064(void)

{
  _objc_alloc(PTR_PTR_1126bdc68);
  func_0x00010c0469e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105765088; end: 1057650cf; -[SCAdPromotedStoryAttachmentPreloader _isPlayableAttachmentPreloadingEnabled] */

undefined8 FUN_105765088(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1057650d0; end: 1057652df; -[SCAdPromotedStoryAttachmentPreloader preloadPromotedTileCtaAttachment:tileVisibility:tilePosition:] */

void FUN_1057650d0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf0ae40(*(undefined8 *)(param_2 + 0x40));
  uVar2 = param_4;
  func_0x00010bef4a60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  lVar3 = param_2;
  func_0x00010bdd5d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  if ((lVar3 != 0) && (lVar4 = lVar1, func_0x00010c08fa60(), lVar4 != 0)) {
    uVar5 = *(ulong *)(param_2 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf4b840();
    _objc_release(uVar5);
    iVar9 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010c2827c0(param_6);
    func_0x00010bf4b800();
    if ((iVar9 != 0) &&
       (func_0x00010bf885a0(param_5),
       ABS(param_1 + -1.0) < 2.220446049250313e-16 && (uVar6 & 1) == 0)) {
      _objc_initWeak(auStack_70,param_2);
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(uVar8);
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(lVar1);
      func_0x00010c0f7fc0(uVar7);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_78);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_70);
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1057652e0; end: 105765393;  */

void FUN_1057652e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2d180();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1085e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be6ad60();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105765394; end: 1057657f7; -[SCAdPromotedStoryAttachmentPreloader _buildAttachmentDataModel:cacheKey:] */

void FUN_105765394(int param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x0001084c1998();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c067fc0();
  if (ppuVar2 == (undefined **)0x0) {
    puVar13 = (undefined *)0x0;
    goto LAB_1057657c4;
  }
  ppuVar2 = param_3;
  func_0x00010bef3880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bdc70;
  _objc_alloc(PTR_PTR_1126bdc70);
  ppuVar4 = ppuVar1;
  func_0x00010c067fc0(ppuVar1);
  puVar13 = PTR_PTR_1126bdc78;
  _objc_alloc(PTR_PTR_1126bdc78);
  ppuVar5 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = param_3;
  func_0x00010bef4240(param_3);
  ppuVar9 = param_3;
  func_0x00010bef27a0();
  func_0x00010bff1740(puVar13,param_2,ppuVar5,ppuVar6,ppuVar7,1,ppuVar8,
                      &PTR____CFConstantStringClassReference_110dfc558,0,0,ppuVar9);
  puVar10 = PTR_PTR_1126aecb0;
  func_0x00010c0d83c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff33e0(puVar3,param_2,ppuVar4,0,ppuVar2,0,4,puVar13,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar13);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  ppuVar4 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c0fec20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  ppuVar4 = ppuVar7;
  func_0x00010c0fed40();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 == (undefined **)0x0) {
LAB_105765774:
    ppuVar4 = ppuVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = ppuVar4;
    puVar13 = PTR_PTR_1126bdc88;
    func_0x00010bf05740(PTR_PTR_1126bdc88,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = ppuVar7;
    func_0x00010c26ea80();
    if (((ulong)ppuVar5 & 1) == 0) {
      ppuVar5 = ppuVar7;
      func_0x00010c0e9500();
      _objc_release(ppuVar4);
      if (((ulong)ppuVar5 & 1) == 0) goto LAB_105765774;
    }
    else {
      _objc_release(ppuVar4);
    }
    func_0x00010be42ac0();
    if (param_1 == 0) goto LAB_105765774;
    ppuVar4 = param_3;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf054e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    puVar10 = PTR_PTR_1126bdc80;
    _objc_alloc();
    ppuVar5 = ppuVar7;
    func_0x00010c0fed40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c0feb40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar4 = ppuVar8;
    }
    ppuVar9 = ppuVar6;
    func_0x00010bfe5400(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar9;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar6;
    func_0x00010bf06520(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    func_0x00010bf42900(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036ba0(puVar10,param_2,ppuVar5,ppuVar4,ppuVar11,ppuVar12,puVar13,puVar3,0);
    _objc_release(puVar13);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar5);
    ppuVar4 = ppuVar7;
    func_0x00010c0fed40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = ppuVar5;
    _objc_release(ppuVar4);
    puVar13 = PTR_PTR_1126bdc88;
    func_0x00010c0fede0(PTR_PTR_1126bdc88,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar7);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
LAB_1057657c4:
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1057657f8; end: 1057658f7; -[SCAdPromotedStoryAttachmentPreloader _onPreloadAttachment:cacheKey:] */

void FUN_1057657f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057658f8; end: 1057659f3;  */

void FUN_1057658f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057659f4;
  puStack_68 = &UNK_1108aff48;
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_copyWeak(auStack_88,param_1 + 0x30);
  func_0x00010c0c0800(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1057659f4; end: 105765a47;  */

void FUN_1057659f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105765a48; end: 105765a8f;  */

void FUN_105765a48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57260();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105765a90; end: 105765b6b; -[SCAdPromotedStoryAttachmentPreloader _doOnPreloadSuccess:cacheKey:] */

void FUN_105765a90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010c26eb20(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105765b6c; end: 105765bf3; -[SCAdPromotedStoryAttachmentPreloader _logPreloadError:] */

void FUN_105765b6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010c26eb00(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105765bf4; end: 105765c53; -[SCAdPromotedStoryAttachmentPreloader _showNotificationWithTitle:] */

void FUN_105765bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf57f80(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105765c54; end: 105765ccb; -[SCAdPromotedStoryAttachmentPreloader .cxx_destruct] */

void FUN_105765c54(long param_1)

{
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



/* Entry: 105765ccc; end: 105765d03;  */

void FUN_105765ccc(void)

{
  _objc_alloc_init(PTR_PTR_1126bdc90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105765d04; end: 105765d8b;  */

void FUN_105765d04(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be83100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105765d8c; end: 105765f3b; -[SCAdPromotedStoryDataServicesEntryPoint _promotedStoryRequestProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105765d8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126bdca8;
  _objc_alloc(PTR_PTR_1126bdca8);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112728f34;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar9;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_105765f3c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112728f44;
    _objc_loadWeakRetained(lVar10);
  }
  lVar5 = lVar10;
  func_0x00010c291140(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112728f48;
    _objc_loadWeakRetained(lVar11);
  }
  lVar6 = lVar11;
  func_0x00010c1067a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_112728f60;
    _objc_loadWeakRetained(lVar7);
  }
  lVar8 = lVar7;
  func_0x00010c113e60(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ca0(puVar1,param_2,lVar2,lVar4,lVar5,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105765f3c; end: 105765f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105765f3c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112728f38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105765f60; end: 10576633b; -[SCAdPromotedStoryDataServicesEntryPoint _promotedStoryLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105765f60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
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
  
  puVar1 = PTR_PTR_1126bdcb0;
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_1;
  FUN_105765f3c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112728f3c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar21;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112728f4c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar22;
  func_0x00010c118180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bdcb8;
  _objc_opt_new();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112728f40;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar23;
  func_0x00010bef5fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112728f64;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar24;
  func_0x00010bef5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf05380();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf053a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_112728f6c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar25;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_112728f50;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar26;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_112728f70;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar27;
  func_0x00010c108d60();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112728f2c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar28 = 0;
  }
  else {
    lVar28 = param_1 + _DAT_112728f54;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar28;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = 0;
  if (param_1 != 0) {
    lVar19 = param_1 + _DAT_112728f58;
    _objc_loadWeakRetained();
  }
  lVar20 = lVar19;
  func_0x00010bf2cf40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1200(puVar1,param_2,lVar3,lVar4,lVar5,param_3,puVar6,lVar7,lVar8,lVar10,lVar11,
                      lVar12,lVar13,puVar14,lVar15,lVar17,lVar18,lVar20);
  _objc_release(param_3);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar28);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar27);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar26);
  _objc_release(lVar11);
  _objc_release(lVar25);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar24);
  _objc_release(lVar7);
  _objc_release(lVar23);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar22);
  _objc_release(lVar4);
  _objc_release(lVar21);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10576633c; end: 10576635b; -[SCAdPromotedStoryDataServicesEntryPoint appImpressionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10576633c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112728f5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10576635c; end: 10576636f; -[SCAdPromotedStoryDataServicesEntryPoint setAppImpressionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10576635c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112728f5c,param_3);
  return;
}



/* Entry: 105766370; end: 105766477; -[SCAdPromotedStoryDataServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105766370(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112728f28,0);
  _objc_destroyWeak(param_1 + _DAT_112728f70);
  _objc_destroyWeak(param_1 + _DAT_112728f6c);
  _objc_destroyWeak(param_1 + _DAT_112728f68);
  _objc_destroyWeak(param_1 + _DAT_112728f64);
  _objc_destroyWeak(param_1 + _DAT_112728f60);
  _objc_destroyWeak(param_1 + _DAT_112728f5c);
  _objc_destroyWeak(param_1 + _DAT_112728f58);
  _objc_destroyWeak(param_1 + _DAT_112728f54);
  _objc_destroyWeak(param_1 + _DAT_112728f50);
  _objc_destroyWeak(param_1 + _DAT_112728f4c);
  _objc_destroyWeak(param_1 + _DAT_112728f48);
  _objc_destroyWeak(param_1 + _DAT_112728f44);
  _objc_destroyWeak(param_1 + _DAT_112728f40);
  _objc_destroyWeak(param_1 + _DAT_112728f2c);
  _objc_destroyWeak(param_1 + _DAT_112728f3c);
  _objc_destroyWeak(param_1 + _DAT_112728f38);
  _objc_destroyWeak(param_1 + _DAT_112728f34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112728f30);
  return;
}



/* Entry: 105766478; end: 1057664ff; -[SCAdPromotedStoryStateProvider init] */

undefined1 * FUN_105766478(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea158;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105766500; end: 105766553; -[SCAdPromotedStoryStateProvider markAdSnapViewedForSnapId:] */

void FUN_105766500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c09faa0(uVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 105766554; end: 1057665b3; -[SCAdPromotedStoryStateProvider isAdSnapViewedForSnapId:] */

undefined8 FUN_105766554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c09faa0(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 8));
  return uVar1;
}



/* Entry: 1057665b4; end: 1057665e3; -[SCAdPromotedStoryStateProvider .cxx_destruct] */

void FUN_1057665b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057665e4; end: 105766697; -[SCAdPromotedTileAppStorePrefetcherCacheMap initWithSize:] */

undefined1 * FUN_1057665e4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea160;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c36e0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6c60(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1d00(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105766698; end: 10576682b; -[SCAdPromotedTileAppStorePrefetcherCacheMap setValue:forKey:] */

void FUN_105766698(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010c073f60();
    uVar2 = param_1;
    func_0x00010c0868e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010c0868e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3c0();
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010c0b85e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0();
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010c0868e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar2);
      func_0x00010c0b85e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      _objc_release(param_1);
      param_1 = uVar1;
      goto LAB_105766804;
    }
    func_0x00010befa120();
    _objc_release(uVar2);
  }
  func_0x00010c0b85e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
LAB_105766804:
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10576682c; end: 105766897; -[SCAdPromotedTileAppStorePrefetcherCacheMap valueForKey:] */

void FUN_10576682c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0b85e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105766898; end: 105766913; -[SCAdPromotedTileAppStorePrefetcherCacheMap containsKey:] */

bool FUN_105766898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c0b85e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 105766914; end: 10576696b; -[SCAdPromotedTileAppStorePrefetcherCacheMap isFull] */

bool FUN_105766914(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c0868e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  func_0x00010c0c2e00(param_1);
  _objc_release(uVar1);
  return param_1 <= uVar2;
}



/* Entry: 10576696c; end: 1057669ab; -[SCAdPromotedTileAppStorePrefetcherCacheMap isEmpty] */

bool FUN_10576696c(long param_1)

{
  long lVar1;
  
  func_0x00010c0868e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 1057669ac; end: 1057669b3; -[SCAdPromotedTileAppStorePrefetcherCacheMap maxSize] */

undefined8 FUN_1057669ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057669b4; end: 1057669bb; -[SCAdPromotedTileAppStorePrefetcherCacheMap setMaxSize:] */

void FUN_1057669b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1057669bc; end: 1057669c3; -[SCAdPromotedTileAppStorePrefetcherCacheMap keyOrder] */

undefined8 FUN_1057669bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057669c4; end: 1057669f3; -[SCAdPromotedTileAppStorePrefetcherCacheMap setKeyOrder:] */

void FUN_1057669c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057669f4; end: 1057669fb; -[SCAdPromotedTileAppStorePrefetcherCacheMap map] */

undefined8 FUN_1057669f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057669fc; end: 105766a2b; -[SCAdPromotedTileAppStorePrefetcherCacheMap setMap:] */

void FUN_1057669fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105766a2c; end: 105766a5b; -[SCAdPromotedTileAppStorePrefetcherCacheMap .cxx_destruct] */

void FUN_105766a2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


