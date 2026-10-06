/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fc4f90; end: 107fc5003;  */

void FUN_107fc4f90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be76b80(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc5004; end: 107fc50db; -[SCStoryQuickPostView _refreshOurStoryTopics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5004(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772cd0);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfca060(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107fc50dc; end: 107fc5123;  */

void FUN_107fc50dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc8c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc5124; end: 107fc5217; -[SCStoryQuickPostView _setSpotlightSubtext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5124(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar3 = (long)_DAT_112772cd4;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((param_3 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010bebeda0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x107fc51ec;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 107fc5218; end: 107fc5227; -[SCStoryQuickPostView _reloadTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772c5c),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 107fc5228; end: 107fc52a7; -[SCStoryQuickPostView customStoriesSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5228(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be08fa0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772c28);
  if ((int)lVar1 == 0) {
    func_0x00010bf51e00(uVar2);
  }
  else {
    func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_110a16638);
  }
  uVar3 = uVar2;
  func_0x000100504554();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107fc52a8; end: 107fc52cf;  */

void FUN_107fc52a8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107fc52d0; end: 107fc52db;  */

void FUN_107fc52d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5070;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_2);
  func_0x00010c1143e0(param_2);
  func_0x00010c075620(param_2);
  uVar3 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c03bfc0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fc52dc; end: 107fc547f; -[SCStoryQuickPostView ourStorySelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc52dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = (long)_DAT_112772cd8;
  if (((*(byte *)(param_1 + lVar7) & 1) == 0) && (*(char *)(param_1 + _DAT_112772cdc) != '\x01')) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = puVar1;
    if (*(char *)(param_1 + _DAT_112772cdc) == '\x01') {
      func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd3d8);
    }
    if (*(char *)(param_1 + lVar7) == '\x01') {
      puVar2 = puVar1;
      func_0x00010befa120(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd3f0);
    }
    func_0x00010853f454();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc7d0;
    _objc_alloc(PTR_PTR_1126cc7d0);
    puVar4 = puVar2;
    func_0x00010c259cc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_112772c50);
    uVar9 = *(undefined8 *)(param_1 + _DAT_112772c54);
    puVar5 = puVar1;
    func_0x00010bf51e00();
    func_0x00010be1bbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d720(puVar6,param_2,puVar4,0,uVar8,puVar3,0,uVar9,puVar5,0);
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107fc5480; end: 107fc5607; -[SCStoryQuickPostView businessProfilesSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5480(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + _DAT_112772c90);
  _objc_retain(lVar9);
  lVar6 = lVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar9);
      }
      lVar3 = *(long *)(param_1 + _DAT_112772c8c);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x00010c1164a0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
      lVar10 = lVar10 + 1;
    } while (lVar6 != lVar10);
    lVar6 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  func_0x00010be61cc0();
  if (puVar2[_DAT_112772c58] == '\x01') {
    lVar6 = *(long *)(puVar2 + _DAT_112772cc8);
    func_0x00010bf529e0();
    param_2 = lVar6 + param_2 + ((ulong)(byte)puVar2[_DAT_112772ce0] ^ 1);
  }
  lVar6 = *(long *)(puVar2 + _DAT_112772ce4);
  func_0x00010bf529e0();
  puVar5 = (undefined *)(lVar6 + param_2);
  if (puVar2[_DAT_112772c4c] == '\x01') {
    puVar7 = puVar2;
    func_0x00010bebf040();
    puVar5 = puVar7 + (long)puVar5;
  }
  *(undefined **)(puVar2 + _DAT_112772ce8) = puVar5;
  lVar6 = (long)_DAT_112772cec;
  puVar5 = puVar2 + lVar6;
  _objc_loadWeakRetained();
  puVar7 = puVar5;
  _objc_opt_respondsToSelector();
  _objc_release(puVar5);
  if (((ulong)puVar7 & 1) != 0) {
    puVar2 = puVar2 + lVar6;
    _objc_loadWeakRetained(puVar2);
    func_0x00010bf7e8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107fc5608; end: 107fc5703; -[SCStoryQuickPostView _updateTotalStoriesCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5608(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010be61cc0();
  if (*(char *)(param_1 + _DAT_112772c58) == '\x01') {
    lVar1 = *(long *)(param_1 + _DAT_112772cc8);
    func_0x00010bf529e0();
    param_2 = lVar1 + param_2 + ((ulong)*(byte *)(param_1 + _DAT_112772ce0) ^ 1);
  }
  lVar1 = *(long *)(param_1 + _DAT_112772ce4);
  func_0x00010bf529e0();
  lVar1 = lVar1 + param_2;
  if (*(char *)(param_1 + _DAT_112772c4c) == '\x01') {
    lVar2 = param_1;
    func_0x00010bebf040();
    lVar1 = lVar2 + lVar1;
  }
  *(long *)(param_1 + _DAT_112772ce8) = lVar1;
  lVar1 = (long)_DAT_112772cec;
  uVar3 = param_1 + lVar1;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    param_1 = param_1 + lVar1;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7e8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107fc5704; end: 107fc572f; -[SCStoryQuickPostView addToOurStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107fc5704(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + _DAT_112772cd8) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112772cdc);
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 107fc5730; end: 107fc574f; -[SCStoryQuickPostView contentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107fc5730(long param_1)

{
  return (double)*(long *)(param_1 + _DAT_112772ce8) * 50.0;
}



/* Entry: 107fc5750; end: 107fc57ab; -[SCStoryQuickPostView setHideSnapMap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5750(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112772ce0) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112772ce0) = (char)param_3;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + _DAT_112772cd8) = 0;
  }
  func_0x00010bee27c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772c5c),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 107fc57ac; end: 107fc583f; -[SCStoryQuickPostView setMediaSupportsSpotlightSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc57ac(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + _DAT_112772c48) != param_3) {
    *(char *)(param_1 + _DAT_112772c48) = (char)param_3;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112772c2c);
    func_0x0001009703d0(uVar1,*(undefined8 *)(param_1 + _DAT_112772c30));
    param_3 = param_3 & (uint)uVar1;
    if (*(byte *)(param_1 + _DAT_112772c4c) != param_3) {
      *(char *)(param_1 + _DAT_112772c4c) = (char)param_3;
      func_0x00010bee27c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + _DAT_112772c5c),PTR_s_reloadData_112627cf8);
      return;
    }
  }
  return;
}



/* Entry: 107fc5840; end: 107fc5b57; -[SCStoryQuickPostView _onSnapProProfilesUpdated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5840(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfaea20(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a16678);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c246d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  lVar10 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar9 = *(undefined8 *)(lVar12 * 8);
      func_0x00010c1164a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar4);
      _objc_release(uVar9);
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
    lVar10 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar10 = (long)_DAT_112772cc8;
  lVar12 = *(long *)(param_1 + lVar10);
  _objc_retain(lVar2);
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  *(long *)(param_1 + lVar10) = lVar2;
  _objc_release(uVar4);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + (long)_DAT_112772c8c);
  *(undefined **)(param_1 + (long)_DAT_112772c8c) = puVar5;
  _objc_release(uVar4);
  lVar8 = *(long *)(param_1 + lVar10);
  _objc_retain(lVar8);
  lVar10 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(undefined8 *)(lVar11 * 8);
      func_0x00010c1164a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010be441a0();
      _objc_release(uVar4);
      if ((uVar6 & 1) == 0) {
        *(undefined1 *)(param_1 + (long)_DAT_112772cbc) = 0;
      }
      lVar11 = lVar11 + 1;
    } while (lVar10 != lVar11);
    lVar10 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  if ((lVar12 != 0) && (uVar6 = param_1, func_0x00010c1588c0(), (uVar6 & 1) == 0)) {
    func_0x00010c128b60(*(undefined8 *)(param_1 + (long)_DAT_112772c5c));
    func_0x00010be9ef60(param_1);
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf2d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_canPostToStory_1125a8e00);
  return;
}



/* Entry: 107fc5b58; end: 107fc5b5f;  */

void FUN_107fc5b58(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_canPostToStory_1125a8e00);
  return;
}



/* Entry: 107fc5b60; end: 107fc5bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107fc5b60(long param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010c074e40();
  if (param_2 == 0) {
    uVar1 = param_3;
    func_0x00010c074e40(param_3);
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772cf0) = 1;
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107fc5bd4; end: 107fc5c37; -[SCStoryQuickPostView _canSelectMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107fc5bd4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + _DAT_112772c58) & 1) == 0) {
    lVar2 = *(long *)(param_1 + _DAT_112772ca0);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25aac0();
    bVar1 = lVar3 != 0;
    _objc_release(lVar2);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107fc5c38; end: 107fc5cb3; -[SCStoryQuickPostView _storiesRecipientCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107fc5c38(ulong param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = param_1;
  func_0x00010bf25220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  bVar1 = *(byte *)(param_1 + (long)_DAT_112772cd8);
  bVar2 = *(byte *)(param_1 + (long)_DAT_112772cdc);
  lVar5 = *(long *)(param_1 + (long)_DAT_112772c28);
  func_0x00010bf529e0(lVar5);
  func_0x00010befc200(param_1);
  _objc_release(uVar3);
  return uVar4 + bVar1 + (ulong)bVar2 + lVar5 + (param_1 & 0xffffffff);
}



/* Entry: 107fc5cb4; end: 107fc5d6b; -[SCStoryQuickPostView _sendDidUpdateRecipients] */

void FUN_107fc5cb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c25abc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010befc200(param_1);
  uVar3 = param_1;
  func_0x00010c0ee420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf620e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e760(uVar1,param_2,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fc5d6c; end: 107fc5d9f; -[SCStoryQuickPostView _standardProfileDisplayName:isHost:] */

void FUN_107fc5d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 0) {
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f591dc();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fc5da0; end: 107fc5da3; -[SCStoryQuickPostView _myStoryFriendsDisplayName] */

void FUN_107fc5da0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f110d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f110d8,
                      &PTR____CFConstantStringClassReference_110f0f278,0);
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



/* Entry: 107fc5da4; end: 107fc5dc3; -[SCStoryQuickPostView _isStandardMyPublicProfile:] */

bool FUN_107fc5da4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c26e7a0(param_3);
  return param_3 == 1;
}



/* Entry: 107fc5dc4; end: 107fc5de7; -[SCStoryQuickPostView standardTierEligibleDefaultSelectingProfileStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107fc5dc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c2c);
  func_0x000108f482e0(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 107fc5de8; end: 107fc5df7; -[SCStoryQuickPostView _rankBusinessStoryAfterMyStoryEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fc5de8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c2c);
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110de6218,0,0);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107fc5df8; end: 107fc5e1f; -[SCStoryQuickPostView _publicStorySubtext:isHost:] */

void FUN_107fc5df8(void)

{
  int in_w3;
  
  if (in_w3 != 0) {
    func_0x000108f591ac();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fc5e20; end: 107fc5ec7; -[SCStoryQuickPostView _myStorySubtext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5e20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112772ca0;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25aac0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    func_0x000108f581ec();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25aac0();
    _objc_release(lVar1);
    if (lVar2 == 2) {
      func_0x000108f591c4();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fc5ec8; end: 107fc5f1f; -[SCStoryQuickPostView didUpdateCustomStoriesWithPublicationIds:] */

void FUN_107fc5ec8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107fc5f20;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107fc5f20; end: 107fc5f67;  */

void FUN_107fc5f20(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bed68e0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25abc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e740();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcd2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__appendNewPostableCustomStories_112550e58);
  return;
}



/* Entry: 107fc5f68; end: 107fc5f6b; -[SCStoryQuickPostView didUpdatePostableStories] */

void FUN_107fc5f68(void)

{
  return;
}



/* Entry: 107fc5f6c; end: 107fc6063; -[SCStoryQuickPostView _appendNewPostableCustomStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc5f6c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1055a0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107fc6064; end: 107fc60ab;  */

void FUN_107fc6064(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc60ac; end: 107fc6377; -[SCStoryQuickPostView _handleAppendNewPostableCustomStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc60ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar11 = (long)_DAT_112772ce4;
  lVar8 = *(long *)(param_1 + lVar11);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60(lVar8,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        uVar3 = *(undefined8 *)(lStack_1a8 + lVar7 * 8);
        func_0x00010c11ac00(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar8;
      func_0x00010bf52a60(lVar8,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar8);
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0d3c80();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_170,0x10);
  if (lVar2 == 0) {
    _objc_release(param_3);
  }
  else {
    lVar8 = 0;
    lVar10 = *plStack_1e0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1e0 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(undefined8 *)(lStack_1e8 + lVar7 * 8);
        uVar4 = uVar9;
        func_0x00010c11ac00(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf4b900(puVar1,param_2,uVar4);
        _objc_release(uVar4);
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010befa120(uVar3,param_2,uVar9);
          lVar8 = lVar8 + 1;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar2 != 0);
    _objc_release(param_3);
    if (0 < lVar8) {
      uVar4 = uVar3;
      FUN_107fc6378();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c0d3c80();
      uVar6 = *(undefined8 *)(param_1 + lVar11);
      *(undefined8 *)(param_1 + lVar11) = uVar9;
      _objc_release(uVar6);
      _objc_release(uVar4);
      *(long *)(param_1 + _DAT_112772ce8) = *(long *)(param_1 + _DAT_112772ce8) + lVar8;
      lVar2 = param_1;
      func_0x00010c267f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128b60();
      _objc_release(lVar2);
      func_0x00010be9ef60(param_1);
    }
  }
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(&PTR___NSConcreteGlobalBlock_110aca118);
  lVar2 = param_3;
  func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110aca118);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(&PTR___NSConcreteGlobalBlock_110aca118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107fc6378; end: 107fc63db;  */

void FUN_107fc6378(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(&PTR___NSConcreteGlobalBlock_110aca118);
  uVar1 = param_1;
  func_0x00010c246ca0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110aca118);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(&PTR___NSConcreteGlobalBlock_110aca118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fc63dc; end: 107fc64d3; -[SCStoryQuickPostView _updateCustomStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc63dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1055a0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107fc64d4; end: 107fc651b;  */

void FUN_107fc64d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc651c; end: 107fc6583; -[SCStoryQuickPostView _handleUpdatePostableCustomStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc651c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_107fc6378();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772ce4);
  *(undefined8 *)(param_1 + _DAT_112772ce4) = param_3;
  _objc_release(uVar1);
  func_0x00010bee27c0(param_1);
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc6584; end: 107fc658b; -[SCStoryQuickPostView numberOfSectionsInTableView:] */

undefined8 FUN_107fc6584(void)

{
  return 1;
}



/* Entry: 107fc658c; end: 107fc659b; -[SCStoryQuickPostView tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fc658c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772ce8);
}



/* Entry: 107fc659c; end: 107fc69e3; -[SCStoryQuickPostView tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc659c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126d8b70;
    _objc_alloc(PTR_PTR_1126d8b70);
    func_0x00010c04ec80();
    func_0x00010befd8a0();
  }
  func_0x00010c17c5a0(param_3);
  puVar1 = param_3;
  func_0x00010bf6f720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf6f720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010c25aee0();
  if (lVar4 < 2) {
    if (lVar4 != 0) {
      if (lVar4 == 1) {
        func_0x00010be61c80(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_3;
        func_0x00010c26c280(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(puVar1);
        _objc_release(param_1);
        func_0x00010c17a460(param_3);
      }
      goto LAB_107fc6978;
    }
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar1);
    _objc_release(lVar4);
LAB_107fc692c:
    puVar1 = param_3;
    func_0x00010bf6f720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar1);
    puVar2 = param_3;
    func_0x00010bf6f720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
  }
  else if (lVar4 == 4) {
    lVar4 = (long)_DAT_112772ce4;
    func_0x00010bf529e0();
    puVar2 = *(undefined **)(param_1 + lVar4);
    func_0x00010c0dfd40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  else {
    if (lVar4 == 3) {
      puVar1 = param_3;
      func_0x00010c26c280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(puVar1);
      goto LAB_107fc692c;
    }
    if (lVar4 != 2) goto LAB_107fc6978;
    lVar4 = (long)_DAT_112772cc8;
    func_0x00010bf529e0();
    puVar2 = *(undefined **)(param_1 + lVar4);
    func_0x00010c0dfd40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112772cf4;
    if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
      func_0x000108f36780(*(undefined8 *)(param_1 + _DAT_112772cb4),1);
      *(undefined1 *)(param_1 + lVar4) = 1;
    }
    puVar1 = puVar2;
    func_0x00010c1164a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074e40(puVar2);
    lVar4 = param_1;
    func_0x00010bebf460(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar3);
    _objc_release(lVar4);
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c1164a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074e40(puVar2);
    func_0x00010be83ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf6f720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
LAB_107fc6978:
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c142240();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107fc69e4; end: 107fc6cdb; -[SCStoryQuickPostView tableView:willDisplayCell:forRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc69e4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d8b70;
  _objc_opt_class(PTR_PTR_1126d8b70);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) goto LAB_107fc6ca4;
  func_0x00010c1fb800(param_4);
  lVar8 = param_1;
  func_0x00010c25aee0();
  if (lVar8 < 2) {
    if (lVar8 == 0) {
LAB_107fc6c88:
      func_0x00010c17a440(param_4);
    }
    else if (lVar8 == 1) {
      func_0x00010befc200(param_1);
      func_0x00010c17a460(param_4);
      lVar8 = param_1;
      func_0x00010be61ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf6f720(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar3);
      _objc_release(lVar8);
      uVar3 = param_4;
      func_0x00010bf6f720(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(uVar3);
      func_0x00010bdd9f40(param_1);
      func_0x00010c1fb800(param_4);
    }
  }
  else {
    if (lVar8 == 2) {
      lVar8 = (long)_DAT_112772cc8;
      func_0x00010bf529e0();
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + _DAT_112772c90);
      uVar5 = uVar4;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar9);
      func_0x00010c17a440(param_4);
      _objc_release(uVar6);
      _objc_release(uVar5);
      lVar8 = (long)_DAT_112772c94;
      uVar9 = *(undefined8 *)(param_1 + lVar8);
      uVar5 = uVar4;
      func_0x00010c1164a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined8 *)(param_1 + lVar8) = uVar9;
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      if (lVar8 == 3) goto LAB_107fc6c88;
      if (lVar8 != 4) goto LAB_107fc6c94;
      lVar8 = (long)_DAT_112772ce4;
      func_0x00010bf529e0();
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(*(undefined8 *)(param_1 + _DAT_112772c28));
      func_0x00010c17a440(param_4);
    }
    _objc_release(uVar4);
  }
LAB_107fc6c94:
  func_0x00010c272b20(param_4);
LAB_107fc6ca4:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107fc6cdc; end: 107fc6dcb; -[SCStoryQuickPostView _myStoryRowsRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107fc6cdc(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = (long)_DAT_112772cc8;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c074e40();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + _DAT_112772c58);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1164a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010be441a0(param_1);
    lVar4 = param_1;
    func_0x00010be85c60(param_1);
    uVar5 = (ulong)((uint)bVar1 & ((uint)lVar6 & (uint)lVar4 ^ 1));
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  if (*(char *)(param_1 + _DAT_112772c4c) == '\x01') {
    func_0x00010bebf040(param_1);
    uVar5 = param_1 + uVar5;
  }
  auVar7._8_8_ = 1;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 107fc6dcc; end: 107fc6edb; -[SCStoryQuickPostView _visibleCustomStoryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc6dcc(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010be08f00();
  if ((uVar1 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_alloc(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010bff4000();
  }
  else {
    func_0x00010be61cc0(param_1);
    uVar1 = param_1;
    func_0x00010bebf040();
    lVar2 = *(long *)(param_1 + (long)_DAT_112772cc8);
    func_0x00010bf529e0();
    if (param_2 + uVar1 + lVar2 + 1 < 4) {
      uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112772ce4);
      func_0x00010bf529e0();
      func_0x00010c25e980(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x000100504554();
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      _objc_alloc(PTR__OBJC_CLASS___NSSet_1126ae870);
      func_0x00010bff4000();
      _objc_release(uVar3);
      _objc_release(uVar5);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107fc6edc; end: 107fc6ee3;  */

void FUN_107fc6edc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 107fc6ee4; end: 107fc7097; -[SCStoryQuickPostView _visibleCustomStoryIdsWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc6ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107fc7098;
  puStack_60 = &UNK_110945180;
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  uStack_58 = param_3;
  _objc_retainBlock();
  lVar3 = *(long *)(param_1 + _DAT_112772ce4);
  _objc_retain(lVar3);
  if (lVar3 == 0) {
    _objc_initWeak(auStack_80,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112772c60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c1055a0(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  else {
    func_0x00010beea100(param_1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar1[2])(ppuVar1,param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc7098; end: 107fc70ab;  */

void FUN_107fc7098(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107fc70a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107fc70ac; end: 107fc70ff;  */

void FUN_107fc70ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea140();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc7100; end: 107fc7193; -[SCStoryQuickPostView _visibleCustomStoryIdsWithCompletionHelper:postableCustomStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc7100(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_112772ce4) == 0) {
    func_0x00010be25c00(param_1);
  }
  if (param_3 != 0) {
    func_0x00010beea100(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fc7194; end: 107fc71a3; -[SCStoryQuickPostView _spotlightStoryCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fc7194(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772c4c);
}



/* Entry: 107fc71a4; end: 107fc731b; -[SCStoryQuickPostView storyRowTypeOfRowAtIndexPath:resolvedIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fc71a4(ulong param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  func_0x00010c142240();
  uVar6 = param_1;
  func_0x00010be61cc0();
  if (*(char *)(param_1 + (long)_DAT_112772c4c) == '\x01' && param_3 == 0) {
    return 0;
  }
  uVar4 = param_1;
  func_0x00010bebf040();
  if ((param_3 < uVar6) || (param_2 <= param_3 - uVar6)) {
    lVar7 = (long)_DAT_112772cc8;
    lVar3 = *(long *)(param_1 + lVar7);
    func_0x00010bf529e0();
    lVar5 = (long)_DAT_112772c58;
    cVar1 = *(char *)(param_1 + lVar5);
    if (param_3 < lVar3 + uVar4 + param_2) {
      if (cVar1 != '\0') {
        if (param_3 < uVar6) {
          param_2 = 0;
        }
        uVar2 = 2;
        uVar6 = (param_3 - uVar4) - param_2;
        goto LAB_107fc72f0;
      }
    }
    else if (cVar1 != '\0') {
      lVar3 = *(long *)(param_1 + lVar7);
      func_0x00010bf529e0();
      param_3 = (param_3 - (uVar4 + param_2)) - lVar3;
    }
    if (((param_3 == 0) && (*(char *)(param_1 + lVar5) == '\x01')) &&
       (*(char *)(param_1 + (long)_DAT_112772ce0) != '\x01')) {
      uVar6 = 0;
      uVar2 = 3;
    }
    else {
      param_3 = param_3 - ((ulong)*(byte *)(param_1 + (long)_DAT_112772ce0) ^ 1);
      lVar3 = (long)_DAT_112772ce4;
      uVar4 = *(ulong *)(param_1 + lVar3);
      func_0x00010bf529e0();
      if (param_3 < uVar4) {
        uVar2 = 4;
        uVar6 = param_3;
      }
      else {
        func_0x00010bf529e0(*(undefined8 *)(param_1 + lVar3));
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 1;
    uVar6 = param_3 - uVar6;
  }
LAB_107fc72f0:
  *param_4 = uVar6;
  return uVar2;
}



/* Entry: 107fc731c; end: 107fc73bf; -[SCStoryQuickPostView _customStoryAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc731c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772ce4);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772c60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c11ac00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf625c0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107fc73c0; end: 107fc73cb; -[SCStoryQuickPostView tableView:heightForRowAtIndexPath:] */

undefined8 FUN_107fc73c0(void)

{
  return 0x4049000000000000;
}



/* Entry: 107fc73cc; end: 107fc7453; -[SCStoryQuickPostView tableView:didSelectRowAtIndexPath:] */

void FUN_107fc73cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf33b80(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e880(param_3,param_2,param_4,0);
  _objc_release(param_3);
  func_0x00010bf7a7c0(param_1,param_2,param_4,uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fc7454; end: 107fc760f; -[SCStoryQuickPostView didSelectCellAtIndexPath:withCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc7454(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = param_1;
  func_0x00010c25aee0();
  if (lVar7 < 2) {
    if (lVar7 == 0) {
      func_0x00010be00360(param_1);
    }
    else if (lVar7 == 1) {
      func_0x00010bf7ad60(param_1);
    }
  }
  else if (lVar7 == 2) {
    lVar7 = (long)_DAT_112772cc8;
    func_0x00010bf529e0();
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be00200(param_1);
LAB_107fc7558:
    _objc_release(uVar1);
  }
  else if (lVar7 == 3) {
    func_0x00010be00340(param_1);
  }
  else if (lVar7 == 4) {
    lVar7 = (long)_DAT_112772ce4;
    func_0x00010bf529e0();
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be00320(param_1);
    goto LAB_107fc7558;
  }
  lVar7 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128f40(lVar7);
  _objc_release(puVar2);
  _objc_release(lVar7);
  func_0x00010be9ef60(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = param_3;
  func_0x00010bdd9f40();
  if ((int)lVar7 == 0) {
    return;
  }
  func_0x00010befc200(param_3);
  func_0x00010c165620(param_3);
  lVar7 = param_3;
  func_0x00010befc200();
  if ((int)lVar7 == 0) goto LAB_107fc7724;
  lVar7 = param_3;
  func_0x00010be9df80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    lVar8 = (long)_DAT_112772ca0;
    lVar3 = *(long *)(param_3 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c25aac0();
    if (lVar5 == 1) {
      _objc_release(lVar3);
    }
    else {
      lVar8 = *(long *)(param_3 + lVar8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c25aac0();
      _objc_release(lVar8);
      _objc_release(lVar3);
      if (lVar5 != 2) goto LAB_107fc771c;
    }
    lVar5 = (long)_DAT_112772c90;
    uVar4 = *(undefined8 *)(param_3 + lVar5);
    func_0x00010c0d3c80();
    func_0x00010c12d360();
    uVar1 = uVar4;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_3 + lVar5);
    *(undefined8 *)(param_3 + lVar5) = uVar1;
    _objc_release(uVar6);
    func_0x00010c128b60(*(undefined8 *)(param_3 + _DAT_112772c5c));
    _objc_release(uVar4);
  }
LAB_107fc771c:
  _objc_release(lVar7);
LAB_107fc7724:
  lVar7 = param_3;
  func_0x00010befc200();
  if ((int)lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c238cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_112772cc0),
             PTR_s_showOnboardingForMyStoriesWithCo_11266bd50,&PTR___NSConcreteGlobalBlock_110a166e8
            );
  return;
}



/* Entry: 107fc7610; end: 107fc776b; -[SCStoryQuickPostView didSelectPostMyStoryCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc7610(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010bdd9f40();
  if ((int)lVar1 == 0) {
    return;
  }
  func_0x00010befc200(param_1);
  func_0x00010c165620(param_1);
  lVar1 = param_1;
  func_0x00010befc200();
  if ((int)lVar1 == 0) goto LAB_107fc7724;
  lVar1 = param_1;
  func_0x00010be9df80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar6 = (long)_DAT_112772ca0;
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c25aac0();
    if (lVar7 == 1) {
      _objc_release(lVar2);
    }
    else {
      lVar6 = *(long *)(param_1 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c25aac0();
      _objc_release(lVar6);
      _objc_release(lVar2);
      if (lVar7 != 2) goto LAB_107fc771c;
    }
    lVar7 = (long)_DAT_112772c90;
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0d3c80();
    func_0x00010c12d360();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar4;
    _objc_release(uVar5);
    func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112772c5c));
    _objc_release(uVar3);
  }
LAB_107fc771c:
  _objc_release(lVar1);
LAB_107fc7724:
  lVar1 = param_1;
  func_0x00010befc200();
  if ((int)lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c238cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772cc0),
             PTR_s_showOnboardingForMyStoriesWithCo_11266bd50,&PTR___NSConcreteGlobalBlock_110a166e8
            );
  return;
}



/* Entry: 107fc776c; end: 107fc776f;  */

void FUN_107fc776c(void)

{
  return;
}



/* Entry: 107fc7770; end: 107fc7787; -[SCStoryQuickPostView _toggleOurStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc7770(long param_1)

{
  *(byte *)(param_1 + _DAT_112772cd8) = *(byte *)(param_1 + _DAT_112772cd8) ^ 1;
  return;
}



/* Entry: 107fc7788; end: 107fc7bef; -[SCStoryQuickPostView continueSendingAfterRemovingUnavailable] */

/* WARNING: Possible PIC construction at 0x000107fc7890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107fc7894) */
/* WARNING: Removing unreachable block (ram,0x000107fc78bc) */
/* WARNING: Removing unreachable block (ram,0x000107fc78d4) */
/* WARNING: Removing unreachable block (ram,0x000107fc78e0) */
/* WARNING: Removing unreachable block (ram,0x000107fc787c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_107fc7788(long param_1,undefined **param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112772c28;
  lVar1 = *(long *)(param_1 + lVar13);
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (lVar1 == 0) {
    ppuVar12 = (undefined **)0x1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112772ce4);
    param_2 = &PTR___NSConcreteGlobalBlock_110a16708;
    func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_110a16708);
    func_0x00010c225c20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(param_1 + lVar13);
    func_0x00010bf51e00();
    lVar1 = lVar13;
    func_0x00010bf52a60();
    ppuVar12 = ppuRam0000000000000000;
    if (lVar1 != 0) goto code_r0x00010c11ac00;
    _objc_release(lVar13);
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      ppuVar12 = (undefined **)0x1;
    }
    else {
      _objc_retain(puVar4);
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar7 = puVar4;
      func_0x00010bf529e0();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar7 == (undefined *)0x1) {
        func_0x000108ede9f0();
        _objc_retainAutoreleasedReturnValue();
LAB_107fc79a8:
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar7 = puVar4;
        func_0x00010bf529e0();
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puVar7 == (undefined *)0x2) {
          func_0x000108edea20();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107fc79a8;
        }
        func_0x000108ede9d8();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf529e0(puVar4);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
      }
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b1370;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000108edea08();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b1370;
      func_0x00010c25d500();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b1370;
      _objc_alloc(PTR_PTR_1126b1370);
      func_0x00010c030320();
      _objc_release(puVar10);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar4);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112772ca4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(uVar2);
      func_0x00010be9ef60(param_1);
      lVar1 = param_1;
      func_0x00010c267f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128b60();
      _objc_release(lVar1);
      func_0x00010bec4540(param_1);
      ppuVar12 = (undefined **)(ulong)(param_1 != 0);
      _objc_release(puVar7);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  ppuVar12 = param_2;
code_r0x00010c11ac00:
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar12,PTR_s_publicationId_112624520);
  return ppuVar12;
}



/* Entry: 107fc7bf0; end: 107fc7bf7;  */

void FUN_107fc7bf0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 107fc7bf8; end: 107fc7c37; -[SCStoryQuickPostView _preSelectCustomStories:myStoryRecentlyPosted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc7bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  func_0x00010be00300();
  *(undefined1 *)(param_1 + _DAT_112772cbc) = param_4;
  *(undefined1 *)(param_1 + _DAT_112772c20) = 1;
  return;
}



/* Entry: 107fc7c38; end: 107fc7d2f; -[SCStoryQuickPostView _didSelectPostCustomStories:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc7c38(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 unaff_x21;
  undefined **ppuVar5;
  long unaff_x22;
  long lVar6;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be00320(param_1);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107fc7d30;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  uStack_130 = param_1;
  lStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  lVar6 = (long)_DAT_112772c28;
  iVar1 = (int)*(undefined8 *)(lVar2 + lVar6);
  func_0x00010bf4b900();
  if (iVar1 == 0) {
    puVar3 = (undefined1 *)puVar4;
    func_0x00010c27dd80();
    if ((puVar3 == (undefined1 *)0x6) ||
       (puVar3 = (undefined1 *)puVar4, func_0x00010c27dd80(), puVar3 == (undefined1 *)0xa)) {
      func_0x00010bebb980(lVar2);
    }
    else {
      puVar3 = (undefined1 *)puVar4;
      func_0x00010c27dd80();
      func_0x00010befa120(*(undefined8 *)(lVar2 + lVar6));
      if (puVar3 == (undefined1 *)0x7) {
        _objc_initWeak(auStack_148,lVar2);
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_107fc7ef0;
        puStack_160 = &UNK_110841fb0;
        ppuVar5 = &puStack_178;
        _objc_copyWeak(auStack_150,auStack_148);
        _objc_retain(puVar4);
        puStack_158 = (undefined1 *)puVar4;
        func_0x0001000d76cc("APPSTORE",&puStack_178);
        puVar3 = puStack_158;
      }
      else {
        _objc_initWeak(auStack_148,lVar2);
        puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a0 = 0xc2000000;
        uStack_198 = 0x107fc7f24;
        puStack_190 = &UNK_110841fb0;
        ppuVar5 = &puStack_1a8;
        _objc_copyWeak(auStack_180,auStack_148);
        _objc_retain(puVar4);
        puStack_188 = (undefined1 *)puVar4;
        func_0x0001000d76cc("APPSTORE",&puStack_1a8);
        puVar3 = puStack_188;
      }
      _objc_release(puVar3);
      _objc_destroyWeak(ppuVar5 + 5);
      _objc_destroyWeak(auStack_148);
    }
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(lVar2 + lVar6));
  }
  func_0x00010be9ef60(lVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 107fc7d30; end: 107fc7eef; -[SCStoryQuickPostView _didSelectPostCustomStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc7d30(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112772c28;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4b900();
  if (iVar1 == 0) {
    lVar2 = param_3;
    func_0x00010c27dd80();
    if ((lVar2 == 6) || (lVar2 = param_3, func_0x00010c27dd80(), lVar2 == 10)) {
      func_0x00010bebb980(param_1);
    }
    else {
      lVar2 = param_3;
      func_0x00010c27dd80();
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar4));
      if (lVar2 == 7) {
        _objc_initWeak(auStack_38,param_1);
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_107fc7ef0;
        puStack_50 = &UNK_110841fb0;
        ppuVar3 = &puStack_68;
        _objc_copyWeak(auStack_40,auStack_38);
        _objc_retain(param_3);
        lStack_48 = param_3;
        func_0x0001000d76cc("APPSTORE",&puStack_68);
        lVar4 = lStack_48;
      }
      else {
        _objc_initWeak(auStack_38,param_1);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        uStack_88 = 0x107fc7f24;
        puStack_80 = &UNK_110841fb0;
        ppuVar3 = &puStack_98;
        _objc_copyWeak(auStack_70,auStack_38);
        _objc_retain(param_3);
        lStack_78 = param_3;
        func_0x0001000d76cc("APPSTORE",&puStack_98);
        lVar4 = lStack_78;
      }
      _objc_release(lVar4);
      _objc_destroyWeak(ppuVar3 + 5);
      _objc_destroyWeak(auStack_38);
    }
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_1 + lVar4));
  }
  func_0x00010be9ef60(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc7ef0; end: 107fc7f57;  */

void FUN_107fc7ef0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebb960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc7f58; end: 107fc8093; -[SCStoryQuickPostView _showTrustAndSafetyPromptForCommunityStoryWithMetadata:] */

void FUN_107fc7f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107fc8094;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  _objc_retain(param_3);
  ppuVar2 = &puStack_70;
  uStack_48 = param_3;
  _objc_retainBlock();
  _objc_initWeak(auStack_78,param_1);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107fc80e8;
  puStack_a0 = &UNK_110857fd0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(ppuVar2);
  uStack_90 = param_1;
  ppuStack_88 = ppuVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_release(ppuStack_88);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc8094; end: 107fc80e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc8094(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772c28),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010be9ef60(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c267f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fc80e8; end: 107fc8217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc80e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112772c7c);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107fc821c;
  puStack_80 = &UNK_11084a9e8;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  auVar6 = *(undefined1 (*) [16])(param_1 + 0x20);
  uStack_68 = uVar5;
  _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
  auVar6 = NEON_ext(auVar6,auVar6,8,1);
  uStack_70 = auVar6._8_8_;
  uStack_78 = auVar6._0_8_;
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107fc8248;
  puStack_a8 = &UNK_110849530;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uStack_a0 = uVar5;
  func_0x00010c237840(uVar3,param_2,uVar4,&PTR___NSConcreteGlobalBlock_110a16728,&puStack_98,
                      &puStack_c0,*(undefined8 *)(lVar2 + _DAT_112772c34),lVar2);
  _objc_release(uStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(lVar2);
  return;
}



/* Entry: 107fc8218; end: 107fc821b;  */

void FUN_107fc8218(void)

{
  return;
}



/* Entry: 107fc821c; end: 107fc8247;  */

void FUN_107fc821c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010beb9cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showMembersListForCustomStory__11258c0d8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107fc8248; end: 107fc8253;  */

void FUN_107fc8248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107fc8250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107fc8254; end: 107fc8323; -[SCStoryQuickPostView _showTrustAndSafetyPromptForSharedStoryWithMetadata:] */

void FUN_107fc8254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107fc8324;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc8324; end: 107fc846b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc8324(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112772c7c);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107fc846c;
  puStack_78 = &UNK_110841fb0;
  _objc_copyWeak(auStack_68,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_70 = uVar3;
  _objc_copyWeak(auStack_98,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c23aa00(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar1);
  return;
}



/* Entry: 107fc846c; end: 107fc849f;  */

void FUN_107fc846c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be267c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc84a0; end: 107fc84a3;  */

void FUN_107fc84a0(void)

{
  return;
}



/* Entry: 107fc84a4; end: 107fc84d7;  */

void FUN_107fc84a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be267c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc84d8; end: 107fc8623; -[SCStoryQuickPostView _handleBlockedUsersForSharedStoryWithMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc84d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x21;
  _dispatch_get_global_queue(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c22c120(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc8624; end: 107fc8693;  */

void FUN_107fc8624(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010bdfd020();
  }
  else {
    func_0x00010beb80c0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107fc8694; end: 107fc8793; -[SCStoryQuickPostView _showBlockedUsersPromptForSharedStoryWithBlockedSnapchatters:storyMetadata:] */

void FUN_107fc8694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107fc8794;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc8794; end: 107fc88af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc8794(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(lVar1 + _DAT_112772c7c);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11ac00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c2362c0(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  return;
}



/* Entry: 107fc88b0; end: 107fc88e3;  */

void FUN_107fc88b0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc6160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc88e4; end: 107fc88e7;  */

void FUN_107fc88e4(void)

{
  return;
}



/* Entry: 107fc88e8; end: 107fc8a6b; -[SCStoryQuickPostView _addBlockedUsersExceptionForShareStoryWithStoryMetadata:blockedSnapchatters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc88e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110a16788);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772c64);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010befb420(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc8a6c; end: 107fc8a73;  */

void FUN_107fc8a6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 107fc8a74; end: 107fc8aa7;  */

void FUN_107fc8a74(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc8aa8; end: 107fc8be7; -[SCStoryQuickPostView _didConfirmToSelectSharedStoryWithMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc8aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf625c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112772c28));
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107fc8be8;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc8be8; end: 107fc8c2f;  */

void FUN_107fc8be8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be8adc0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9ef60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc8c30; end: 107fc8d67; -[SCStoryQuickPostView _showFirstTimePostingCustomStoryAlertIfNecessaryWithCustomStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc8c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107fc8d68;
  puStack_68 = &UNK_110841f80;
  lStack_60 = param_1;
  _objc_retain(param_3);
  ppuVar2 = &puStack_80;
  uStack_58 = param_3;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112772c7c);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x107fc8dbc;
  puStack_a0 = &UNK_11084a9e8;
  _objc_retain();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_107fc8de8;
  puStack_c8 = &UNK_110849530;
  ppuStack_c0 = ppuVar2;
  lStack_98 = param_1;
  uStack_90 = param_3;
  ppuStack_88 = ppuVar2;
  _objc_retain(ppuVar2);
  _objc_retain(param_3);
  func_0x00010c237860(uVar3,param_2,param_3,&puStack_b8,&puStack_e0);
  _objc_release(ppuStack_c0);
  _objc_release(uStack_90);
  _objc_release(ppuStack_88);
  _objc_release(ppuVar2);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc8d68; end: 107fc8de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc8d68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772c28),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010be9ef60(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c267f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fc8de8; end: 107fc8df3;  */

void FUN_107fc8de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107fc8df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107fc8df4; end: 107fc8f27; -[SCStoryQuickPostView _showMembersListForCustomStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc8df4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c27dd80();
  if (((((lVar4 == 1) || (lVar4 = param_3, func_0x00010c27dd80(), lVar4 == 2)) ||
       (lVar4 = param_3, func_0x00010c27dd80(), lVar4 == 10)) ||
      (lVar4 = param_3, func_0x00010c27dd80(), lVar4 == 6)) &&
     (lVar4 = (long)_DAT_112772c74, *(long *)(param_1 + lVar4) != 0)) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = param_1 + _DAT_112772c78;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c038f40(puVar1,param_2,lVar2,1);
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    lVar4 = param_3;
    func_0x00010c11ac00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23f20(uVar3,param_2,puVar1,lVar4,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + _DAT_112772c70),param_2,uVar3,param_1);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fc8f28; end: 107fc8f37; -[SCStoryQuickPostView didDismissCustomStoryMembers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc8f28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772c70),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 107fc8f38; end: 107fc905b; -[SCStoryQuickPostView _didSelectPostSpotlightCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc8f38(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  byte bStack_60;
  undefined1 auStack_58 [8];
  
  bVar1 = *(byte *)(param_1 + _DAT_112772cdc);
  func_0x00010bea7d80(param_1,param_2,(bVar1 ^ 0xff) & 1);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107fc905c;
  puStack_70 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_68,auStack_58);
  ppuVar2 = &puStack_88;
  bStack_60 = bVar1;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112772cc0);
  _objc_retain();
  func_0x00010c238ce0(uVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107fc905c; end: 107fc908f;  */

void FUN_107fc905c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fc9090; end: 107fc90a3;  */

void FUN_107fc9090(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107fc90a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107fc90a4; end: 107fc90b3; -[SCStoryQuickPostView _setSpotlightSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc90a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112772cdc) = param_3;
  return;
}



/* Entry: 107fc90b4; end: 107fc90fb; -[SCStoryQuickPostView _didAcceptSendForSpotlight] */

void FUN_107fc90b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bea7d80(param_1,param_2,1);
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9ef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendDidUpdateRecipients_112585580);
  return;
}



/* Entry: 107fc90fc; end: 107fc913f; -[SCStoryQuickPostView _didCancelSpotlightAcceptance:] */

void FUN_107fc90fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bea7d80();
  uVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9ef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendDidUpdateRecipients_112585580);
  return;
}



/* Entry: 107fc9140; end: 107fc9193; -[SCStoryQuickPostView _didSelectPostOurStoryCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9140(long param_1)

{
  func_0x00010beccdc0();
  if (*(char *)(param_1 + _DAT_112772cd8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c238cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112772cc0),
               PTR_s_showOnboardingForOurStoriesWithC_11266bd58,
               &PTR___NSConcreteGlobalBlock_110a167a8);
    return;
  }
  return;
}



/* Entry: 107fc9194; end: 107fc9197;  */

void FUN_107fc9194(void)

{
  return;
}



/* Entry: 107fc9198; end: 107fc91df; -[SCStoryQuickPostView _shareAnonymouslySpotlightEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fc9198(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc480();
  _objc_release(uVar1);
  return uVar2;
}


