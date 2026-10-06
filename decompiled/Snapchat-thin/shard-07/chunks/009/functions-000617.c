/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b87d04; end: 105b87d4f; -[SCFriendsFeedViewController scrollToTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b87d04(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_1127313a0) & 1) != 0) {
    return;
  }
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b87d50; end: 105b87eb7; -[SCFriendsFeedViewController updateFooterLoadingViewVisibility] */

void FUN_105b87d50(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  func_0x00010bdf6a20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c09d4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c09d4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf513e0(uVar3,param_2,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c29d020();
  if (((int)uVar3 != 0) && (uVar3 = uVar2, func_0x00010c074c20(), (uVar3 & 1) == 0)) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf20c00();
    iVar1 = (int)uVar3;
    _CGRectIntersectsRect();
    if (iVar1 != 0) {
      uVar3 = uVar2;
      func_0x00010c09d4e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c074c20();
      _objc_release(uVar3);
    }
    _objc_release(param_1);
  }
  uVar3 = uVar2;
  func_0x00010c09d4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2fe0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b87eb8; end: 105b87edf; -[SCFriendsFeedViewController _emptyFeedListPlaceHolderVerticalOffset] */

double FUN_105b87eb8(double param_1)

{
  func_0x00010c14cf60(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return param_1 + 69.0;
}



/* Entry: 105b87ee0; end: 105b87f57; -[SCFriendsFeedViewController updateEmptyFeedListPlaceHolderLabelFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b87ee0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273135c;
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x00010be08820();
    func_0x00010c08ac40(param_1);
    func_0x00010c089d00(param_1);
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar1));
    func_0x00010bc8525c();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 105b87f58; end: 105b880eb; -[SCFriendsFeedViewController _updateEmptyFeedListPlaceHolderLabelVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b87f58(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = param_1;
  func_0x00010c29d020();
  if ((int)uVar1 != 0) {
    lVar6 = *(long *)(param_1 + (long)_DAT_112731360);
    uVar1 = param_1;
    func_0x00010bdf6a20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bdf70e0();
    lVar3 = *(long *)(param_1 + (long)_DAT_112731204);
    func_0x00010c29dba0(lVar3,param_2,lVar6 == 0xc);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (((lVar6 == 0xc || lVar4 != 0) || ((uVar2 & 1) != 0)) ||
       (uVar2 = uVar1, func_0x00010c2347e0(), (int)uVar2 != 0)) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_11273135c),param_2,1);
      uVar5 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010bf8ec00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar2);
      uVar5 = 1;
    }
    func_0x00010c1a7f60(uVar1,param_2,uVar5);
    func_0x00010c285dc0(param_1);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105b880ec; end: 105b8843b; -[SCFriendsFeedViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b880ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ec180;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bde6680(param_1);
  func_0x00010beafde0(param_1);
  func_0x00010be3a560(param_1);
  lVar6 = (long)_DAT_112731220;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273102c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112731074);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c097260();
  _objc_release(uVar4);
  if ((int)uVar1 != 0) {
    lVar5 = (long)_DAT_11273123c;
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980(uVar4);
      _objc_release(uVar1);
    }
    lVar5 = (long)_DAT_11273107c;
    lVar2 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980(uVar4);
      _objc_release(uVar1);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f8c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273124c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731250);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731254);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar4);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731290);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar4);
  _objc_release(uVar1);
  func_0x00010be39940(param_1);
  func_0x00010be39c20(param_1);
  func_0x00010be4d480(param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127311f8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980(uVar4);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + _DAT_1127311fc);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010bef9980(*(undefined8 *)(param_1 + lVar6));
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfb9d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf185c0(lVar2);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126afdd8;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127310a0);
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cae0(uVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105b8843c; end: 105b884bb; -[SCFriendsFeedViewController supportedInterfaceOrientations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8843c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127312d8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_38 = PTR_PTR_1126ec180;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_supportedInterfaceOrientations_112676698);
  }
  return;
}



/* Entry: 105b884bc; end: 105b885a3; -[SCFriendsFeedViewController _updateMoreUnreadButtonWithVisibilityObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b884bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_1127313b8;
  if (*(long *)(param_1 + lVar3) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105b885a4; end: 105b886fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b885a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar6 = (long)_DAT_1127313bc;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c069d00();
    }
    func_0x00010bedbc60(param_1);
    lVar5 = (long)_DAT_11273118c;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c074c20();
      _objc_release(uVar2);
      _objc_release(lVar1);
      if ((int)uVar4 == 0) goto LAB_105b886d4;
    }
    uVar4 = param_2;
    func_0x00010c2331a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x00010c150360(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar3;
      _objc_release(uVar4);
    }
  }
LAB_105b886d4:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 105b886fc; end: 105b88737;  */

void FUN_105b886fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bde7100();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb9ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__showMoreUnreadButtonWithCount__11258c158,lVar1
              );
    return;
  }
  return;
}



/* Entry: 105b88738; end: 105b8874f; -[SCFriendsFeedViewController hasContentBlockingPullDownExpansion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105b88738(long param_1)

{
  return 0 < *(long *)(param_1 + _DAT_112731314);
}



/* Entry: 105b88750; end: 105b88927; -[SCFriendsFeedViewController _consumableContentCountBelowTheFold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105b88750(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_112731204);
  func_0x00010c29dba0(lVar1,param_2,*(long *)(param_1 + _DAT_112731360) == 0xc);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  lVar6 = lVar1;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x00010bf33f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(uVar3);
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar1;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar1);
  lVar6 = param_1;
  func_0x00010beea180();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010be9ce20(param_1);
  puVar4 = puVar2;
  FUN_105b62c9c(puVar2,lVar6,lVar7,*(undefined8 *)(param_1 + _DAT_112731318));
  _objc_release(lVar6);
  _objc_release(puVar2);
  lVar7 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_170;
  pcStack_138 = FUN_105b88928;
  lVar8 = (long)_DAT_1127312e4;
  lStack_160 = lVar6;
  puStack_158 = puVar2;
  puStack_150 = puVar4;
  lStack_148 = lVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c12e920(*(undefined8 *)(lVar7 + lVar8));
  func_0x00010c18b5e0(*(undefined8 *)(lVar7 + lVar8));
  lVar6 = lVar7;
  func_0x00010c267f00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar6);
  lVar6 = (long)_DAT_1127312ec;
  func_0x00010c12e920(*(undefined8 *)(lVar7 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(lVar7 + lVar6));
  lVar6 = lVar7;
  func_0x00010c267f00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar6);
  lVar6 = (long)_DAT_1127312e8;
  func_0x00010c12e920(*(undefined8 *)(lVar7 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(lVar7 + lVar6));
  lVar6 = lVar7;
  func_0x00010c267f00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar6);
  lVar6 = (long)_DAT_1127312f0;
  func_0x00010c12e920(*(undefined8 *)(lVar7 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(lVar7 + lVar6));
  lVar6 = lVar7;
  func_0x00010c267f00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar6);
  lVar6 = (long)_DAT_1127312f4;
  func_0x00010c12e920(*(undefined8 *)(lVar7 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(lVar7 + lVar6));
  lVar6 = lVar7;
  func_0x00010c267f00(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar6);
  uVar3 = *(undefined8 *)(lVar7 + _DAT_1127313c0);
  *(undefined8 *)(lVar7 + _DAT_1127313c0) = 0;
  _objc_release(uVar3);
  func_0x00010be8bfa0(lVar7);
  func_0x00010bddf160(lVar7);
  puStack_168 = PTR_PTR_1126ec180;
  lStack_170 = lVar7;
  _objc_msgSendSuper2(&lStack_170,PTR_s_dealloc_112525b20);
  return (undefined *)plVar5;
}



/* Entry: 105b88928; end: 105b88aff; -[SCFriendsFeedViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b88928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_1127312e4;
  func_0x00010c12e920(*(undefined8 *)(param_1 + lVar2),param_2,param_1,
                      PTR_s_handleLongPress__1125d1f80);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_1127312ec;
  func_0x00010c12e920(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_1127312e8;
  func_0x00010c12e920(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_1127312f0;
  func_0x00010c12e920(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_1127312f4;
  func_0x00010c12e920(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
  lVar2 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127313c0);
  *(undefined8 *)(param_1 + _DAT_1127313c0) = 0;
  _objc_release(uVar1);
  func_0x00010be8bfa0(param_1);
  func_0x00010bddf160(param_1);
  puStack_38 = PTR_PTR_1126ec180;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105b88b00; end: 105b88d9b; -[SCFriendsFeedViewController _didBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b88b00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x00010c138c40(*(undefined8 *)(param_1 + _DAT_112731354));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731224);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar6 != 0) {
    if (*(char *)(param_1 + _DAT_1127313c4) != '\x01') {
      return;
    }
    if (*(long *)(param_1 + _DAT_1127313c8) == 0) {
      lVar5 = param_1;
      func_0x00010be22940();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_112730f64);
      puStack_68 = puVar4;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105b88d9c;
      puStack_50 = &UNK_110894580;
      lStack_48 = lVar5;
      _objc_retain();
      func_0x00010c297260(uVar6,param_2,&puStack_68,0);
      _objc_release(lStack_48);
      _objc_release(lVar5);
    }
    lVar5 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010c0b8620(lVar2,param_2,&PTR___NSConcreteGlobalBlock_1108d9b40,0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec0540(param_1,param_2,lVar5,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  lVar5 = (long)_DAT_1127313cc;
  if (*(long *)(param_1 + lVar5) != 0) {
    _dispatch_block_cancel();
    uVar6 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar6);
  }
  func_0x00010c13d9a0(param_1);
  lVar5 = param_1 + _DAT_112730fc0;
  _objc_loadWeakRetained();
  lVar2 = lVar5;
  func_0x00010c0741e0();
  _objc_release(lVar5);
  if ((int)lVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112730efc);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbce0();
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126c0960;
    func_0x00010bf96ca0(PTR_PTR_1126c0960,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112730f04);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123800();
    _objc_release(uVar6);
    func_0x00010bebb0e0(param_1);
    _objc_release(puVar4);
  }
  return;
}



/* Entry: 105b88d9c; end: 105b88dd7;  */

void FUN_105b88d9c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfc56e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf969e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b88dd8; end: 105b88e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b88dd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731204);
  func_0x00010bf33f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecb00(uVar2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b88e54; end: 105b89157; -[SCFriendsFeedViewController _didEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b88e54(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x00010c28bfe0(*(undefined8 *)(param_1 + _DAT_112731204));
  func_0x00010be87160(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273137c);
  func_0x00010c07ab40();
  if (iVar1 != 0) {
    func_0x00010be5d700(param_1);
  }
  puVar2 = PTR_PTR_1126c2c20;
  func_0x00010bf14880(PTR_PTR_1126c2c20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07c20(param_1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731224);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((int)uVar7 != 0) {
    if (*(char *)(param_1 + _DAT_1127313c4) != '\x01') {
      return;
    }
    func_0x00010bed8a00(param_1);
    lVar4 = param_1;
    func_0x00010c267f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010c0b8620(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105b89158;
    puStack_50 = &UNK_1108d8d40;
    lVar6 = lVar4;
    lStack_48 = param_1;
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112730f60);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010be22940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b780(uVar7);
    _objc_release(lVar8);
    _objc_release(uVar7);
    func_0x00010be099a0(param_1);
    func_0x00010be54ba0(param_1);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
  uVar9 = *(ulong *)(param_1 + _DAT_112731228);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c067ec0();
  _objc_release(uVar9);
  if (-1 < (int)uVar10) {
    _objc_initWeak(auStack_70,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105b891d4;
    puStack_80 = &UNK_1108434b0;
    _objc_copyWeak(auStack_78,auStack_70);
    uVar7 = 0;
    func_0x0001008553e8(0,&puStack_98);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127313cc);
    *(undefined8 *)(param_1 + _DAT_1127313cc) = uVar7;
    _objc_release(uVar3);
    _dispatch_time(0,(uVar10 & 0xffffffff) * 1000000000);
    func_0x00010058c530();
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  func_0x00010becae80(param_1);
  *(undefined1 *)(param_1 + _DAT_1127313d0) = 0;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112730f50);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139680();
  _objc_release(uVar7);
  return;
}



/* Entry: 105b89158; end: 105b891d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b89158(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731204);
  func_0x00010bf33f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecb00(uVar2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b891d4; end: 105b8920b;  */

void FUN_105b891d4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c152860(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b8920c; end: 105b89213; -[SCFriendsFeedViewController handleFriendRequestNotification] */

undefined8 FUN_105b8920c(void)

{
  return 0;
}



/* Entry: 105b89214; end: 105b8926b; -[SCFriendsFeedViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b89214(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec180;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c138c40(*(undefined8 *)(param_1 + _DAT_112731354));
  func_0x00010c29cb60(param_1);
  return;
}



/* Entry: 105b8926c; end: 105b89313; -[SCFriendsFeedViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8926c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec180;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  puVar1 = PTR_PTR_1126afdd8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127310a0);
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1480(uVar2);
  _objc_release(puVar1);
  func_0x00010c29c980(param_1);
  func_0x00010c29cbe0(param_1);
  func_0x00010bde05a0(param_1);
  return;
}



/* Entry: 105b89314; end: 105b89417; -[SCFriendsFeedViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b89314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010c29ca00();
  puStack_38 = PTR_PTR_1126ec180;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48,param_3);
  func_0x00010be87160(param_1);
  puVar1 = PTR_PTR_1126afdd8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127310a0);
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0fa0(uVar2);
  _objc_release(puVar1);
  func_0x00010c2225a0(param_1);
  *(undefined1 *)(param_1 + _DAT_1127313c4) = 0;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127312ac));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112730efc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbd00();
  _objc_release(uVar2);
  func_0x00010becae80(param_1);
  return;
}



/* Entry: 105b89418; end: 105b89527; -[SCFriendsFeedViewController presentViewController:animated:completion:] */

void FUN_105b89418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105b89528;
  puStack_60 = &UNK_110848708;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  puStack_80 = PTR_PTR_1126ec180;
  uStack_88 = param_1;
  uStack_58 = param_5;
  _objc_msgSendSuper2(&uStack_88,PTR_s_presentViewController_animated_c_112621588,param_3,param_4,
                      &puStack_78);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105b89528; end: 105b89597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b89528(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11273100c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbd20();
    _objc_release(uVar2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b89598; end: 105b896d3; -[SCFriendsFeedViewController viewDidSwipeIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b89598(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730ec0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c08b820(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731000);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2c28;
  func_0x00010c29cbe0(PTR_PTR_1126c2c28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b896d4; end: 105b8973f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105b896d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112730fc0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0741e0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 105b89740; end: 105b897cb; -[SCFriendsFeedViewController viewDidPartiallyAppear] */

void FUN_105b89740(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc20(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc60(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfd3150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleViewHasAppearedIfNecessary_1125d25f8);
  return;
}



/* Entry: 105b897cc; end: 105b89c4b; -[SCFriendsFeedViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b897cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_112731360) == 0xd) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731190);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2c58;
    func_0x00010c0e4020(PTR_PTR_1126c2c58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar2);
  func_0x00010c08d6e0(param_1);
  *(undefined1 *)(param_1 + _DAT_1127313c4) = 1;
  func_0x00010bfd3140(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730efc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbce0();
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_1127313a0) = 0;
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1835e0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730ed8);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  puVar2 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bfc8720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20(puVar2);
  _objc_release(lVar5);
  _objc_release(puVar2);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_1127313d4));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731280);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0a6f60(uVar1);
  _objc_release(uVar1);
  lVar10 = (long)_DAT_1127313d8;
  lVar5 = *(long *)(param_1 + lVar10);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(param_1 + lVar10);
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_1127313dc;
    uVar7 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(lVar5);
    if ((uVar7 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar11);
      *(undefined8 *)(param_1 + lVar11) = uVar1;
      _objc_release(uVar9);
    }
  }
  lVar5 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar10;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar5;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731000);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2c28;
  func_0x00010c29c9e0(PTR_PTR_1126c2c28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010bec0540(param_1);
  if ((*(byte *)(param_1 + _DAT_11273138c) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112730f94);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bc40();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112730f88);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bc40();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112730eec);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f140();
    _objc_release(uVar1);
    func_0x00010bed7680(param_1);
    func_0x00010bebb0e0(param_1);
  }
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)_DAT_112731204);
  func_0x00010bf33f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecb00(uVar1);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b89c4c; end: 105b89cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b89c4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731204);
  func_0x00010bf33f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecb00(uVar2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b89cc8; end: 105b89ddf; -[SCFriendsFeedViewController _loadFriendsFeedSublabelVariableFontIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b89cc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112731134;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127312d0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      lVar1 = *(long *)(param_1 + _DAT_1127312c8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        lVar3 = 0x11;
        func_0x0001000819a8(0x11,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar3 = lVar1;
        func_0x00010c11de00(lVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09b520();
      _objc_release(uVar4);
      _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 105b89de0; end: 105b89de7;  */

void FUN_105b89de0(void)

{
  return;
}



/* Entry: 105b89de8; end: 105b89e8f; -[SCFriendsFeedViewController _tearDownSponsoredSnapModalIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b89de8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112730f34;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_1127311dc));
    lVar1 = (long)_DAT_1127313e0;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112730f40),PTR_s_next__112614028,
               PTR____kCFBooleanFalse_11034ab60);
    return;
  }
  return;
}



/* Entry: 105b89e90; end: 105b8a2eb; -[SCFriendsFeedViewController _showSponsoredSnapsModalIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b89e90(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *unaff_x20;
  undefined *unaff_x21;
  long unaff_x22;
  long lVar8;
  long lVar9;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112730f34;
  puVar1 = *(undefined **)(param_1 + lVar9);
  func_0x00010c071800();
  if ((((int)puVar1 != 0) && (*(long *)(param_1 + _DAT_1127313d8) == 0)) &&
     ((param_1[_DAT_1127313e4] & 1) == 0)) {
    unaff_x20 = *(undefined **)(param_1 + lVar9);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = unaff_x20;
    _objc_release();
    if (unaff_x20 == (undefined *)0x0) {
      unaff_x22 = (long)_DAT_1127313d0;
      if ((param_1[unaff_x22] & 1) == 0) {
        unaff_x20 = *(undefined **)(param_1 + _DAT_112730f50);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x21 = unaff_x20;
        func_0x00010c233d40();
        puVar1 = unaff_x20;
        _objc_release();
        if ((int)unaff_x21 == 0) goto LAB_105b8a2b0;
        param_1[unaff_x22] = 1;
      }
      puVar1 = PTR_PTR_1126b0870;
      _objc_alloc();
      func_0x00010c033f60();
      unaff_x22 = (long)_DAT_1127313e0;
      uVar7 = *(undefined8 *)(param_1 + unaff_x22);
      *(undefined **)(param_1 + unaff_x22) = puVar1;
      _objc_release(uVar7);
      func_0x00010c219b60(*(undefined8 *)(param_1 + unaff_x22));
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + unaff_x22));
      _objc_release(puVar1);
      func_0x00010c1d96a0(*(undefined8 *)(param_1 + unaff_x22));
      puVar1 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar1);
      puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar7 = *(undefined8 *)(param_1 + unaff_x22);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      uStack_98 = uVar7;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = puVar1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = puVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + unaff_x22);
      uStack_a8 = uVar7;
      uStack_88 = uVar7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      uStack_b8 = uVar2;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = puVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = puVar1;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + unaff_x22);
      uStack_d0 = uVar2;
      uStack_80 = uVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      uStack_e0 = uVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = puVar1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + unaff_x22);
      uStack_78 = uVar3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puStack_c8);
      _objc_release(puVar6);
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(puVar1);
      _objc_release(puStack_d8);
      _objc_release(uStack_e0);
      _objc_release(uStack_d0);
      _objc_release(puStack_c0);
      _objc_release(puStack_b0);
      _objc_release(uStack_b8);
      _objc_release(uStack_a8);
      _objc_release(puStack_a0);
      _objc_release(puStack_90);
      _objc_release(uStack_98);
      lVar8 = (long)_DAT_1127311dc;
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bfe01e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = param_1;
      func_0x00010bebdbc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar8));
      unaff_x20 = PTR_PTR_1126c2c60;
      _objc_alloc();
      func_0x00010c0583a0();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar9));
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112730f40));
      _objc_release(unaff_x20);
      puVar1 = unaff_x21;
      _objc_release();
    }
  }
LAB_105b8a2b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_105b8a2ec;
  if (*(long *)(puVar1 + _DAT_1127313e8) == 0) {
    lStack_110 = unaff_x22;
    puStack_108 = unaff_x21;
    puStack_100 = unaff_x20;
    puStack_f8 = param_1;
    puStack_f0 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_118,puVar1);
    uVar2 = *(undefined8 *)(puVar1 + _DAT_112730f64);
    _objc_copyWeak(auStack_120,auStack_118);
    uVar7 = *(undefined8 *)(puVar1 + _DAT_1127312c8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_118);
  }
  return;
}



/* Entry: 105b8a2ec; end: 105b8a3db; -[SCFriendsFeedViewController _subscribeToAllCommunityStoryMetadataObservableIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8a2ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + _DAT_1127313e8) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112730f64);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127312c8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105b8a3dc; end: 105b8a42b;  */

void FUN_105b8a3dc(long param_1,undefined8 param_2)

{
  func_0x00010bfc3e40(param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec7480();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b8a42c; end: 105b8a5df; -[SCFriendsFeedViewController _subscribeToCommunitiesObservableWithFeedManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8a42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730f14);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8faa0();
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127311ac);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf00d00();
  _objc_retainAutoreleasedReturnValue();
  bStack_70 = (byte)uVar2 ^ 1;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_78,auStack_68);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127313e8);
  *(undefined8 *)(param_1 + _DAT_1127313e8) = uVar2;
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return;
}



/* Entry: 105b8a5e0; end: 105b8a68f;  */

void FUN_105b8a5e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010bf529e0(param_2);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010c0c3b00(*(undefined8 *)(param_1 + 0x20));
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c085be0(uVar2);
  func_0x00010bed58a0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105b8a690; end: 105b8a71b; -[SCFriendsFeedViewController _updateCommunityJoinTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8a690(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_1 != 0.0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(param_1 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + _DAT_112731088);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289e80();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105b8a71c; end: 105b8a857; -[SCFriendsFeedViewController _startLoggingSessionsWithVisibleViewModels:indexes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8a71c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be22860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3aa0(*(undefined8 *)(param_1 + _DAT_1127312bc),param_2,lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112731220);
  lVar2 = param_1;
  func_0x00010be1f500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa3ac0(uVar3,param_2,param_3,lVar2,param_4);
  _objc_release(param_4);
  _objc_release(lVar2);
  func_0x00010bec4a80(param_1,param_2,param_3,1);
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010be22940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84720(param_1);
  if ((*(byte *)(param_1 + _DAT_11273138c) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112730ef8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c1ffd60(uVar3,param_2,lVar2,0);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b8a858; end: 105b8a91b; -[SCFriendsFeedViewController _endFeedLoggingSessionWithVisibleViewModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8a858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731204);
  _objc_retain(param_3);
  func_0x00010bfba380(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127313c8;
  func_0x00010bf75fe0(*(undefined8 *)(param_1 + _DAT_1127312bc),param_2,
                      *(undefined8 *)(param_1 + lVar3),param_3,uVar2);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127313ec);
  *(undefined8 *)(param_1 + _DAT_1127313ec) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112730ef8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1396a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b8a91c; end: 105b8a97f; -[SCFriendsFeedViewController _logImpressionsOnFeedDisappearWithVisibleViewModels:indexes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8a91c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112731220);
  _objc_retain(param_3);
  func_0x00010bfa3b20(uVar1,param_2,param_3,param_4);
  func_0x00010bec4a80(param_1,param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b8a980; end: 105b8afa7; -[SCFriendsFeedViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8a980(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  ppuVar11 = &puStack_c0;
  *(undefined1 *)(param_1 + _DAT_1127310d4) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127313d8);
  *(undefined8 *)(param_1 + _DAT_1127313d8) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + _DAT_1127313e4) = 0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127313f0);
  *(undefined8 *)(param_1 + _DAT_1127313f0) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + _DAT_1127313f4) = 0;
  *(undefined1 *)(param_1 + _DAT_11273138c) = 0;
  func_0x00010c1b3860(*(undefined8 *)(param_1 + _DAT_1127312dc));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112730f7c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a3ac0();
  _objc_release(uVar2);
  func_0x00010be09700(param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127310f8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c27e360();
  _objc_release(uVar3);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112730fbc);
    func_0x00010c0841c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a8260();
    _objc_release(uVar2);
  }
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
  _objc_release(lVar4);
  *(undefined1 *)(param_1 + _DAT_1127313c4) = 0;
  func_0x00010bed8a00(param_1);
  lVar4 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010c0b8620(lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105b8afa8;
  puStack_80 = &UNK_1108d8d40;
  lVar6 = lVar4;
  lStack_78 = param_1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar15 == 0) {
    func_0x00010c152860(param_1);
    func_0x00010c1389a0(*(undefined8 *)(param_1 + _DAT_112731204));
    uVar2 = *(undefined8 *)(param_1 + _DAT_112730f60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010be22940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b780(uVar2);
    _objc_release(lVar15);
    _objc_release(uVar2);
    func_0x00010be099a0(param_1);
    lVar15 = (long)_DAT_112730fb4;
    uVar7 = *(ulong *)(param_1 + lVar15);
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    _objc_opt_respondsToSelector();
    _objc_release(uVar12);
    _objc_release(uVar7);
    puVar14 = PTR_PTR_1126afdd8;
    if ((uVar8 & 1) == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + lVar15);
      func_0x00010c0d6760();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2a0180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar9);
      uVar9 = uVar3;
      func_0x00010010fab4(uVar3,PTR_DAT_1126a4e58);
      uVar2 = uVar3;
      if ((int)uVar9 == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      func_0x00010c0f2220(uVar2);
      _objc_release(uVar2);
      func_0x00010bfc8740(puVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR_PTR_1126c2c20;
    func_0x00010bf84d60(PTR_PTR_1126c2c20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07c20(param_1);
    _objc_release(puVar10);
    _objc_release(puVar14);
  }
  else {
    puVar14 = PTR_PTR_1126c2c20;
    func_0x00010c0e94a0(PTR_PTR_1126c2c20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07c20(param_1);
    _objc_release(puVar14);
    func_0x00010c0f60c0(*(undefined8 *)(param_1 + _DAT_1127312bc));
  }
  func_0x00010c2225a0(param_1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_1127312ac));
  func_0x00010bed2ca0(param_1);
  puStack_c0 = puVar13;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105b8b024;
  puStack_a8 = &UNK_110842e18;
  lStack_a0 = param_1;
  _objc_retainBlock();
  func_0x00010c285f00(*(undefined8 *)(param_1 + _DAT_112731204));
  lVar15 = (long)_DAT_11273137c;
  uVar12 = *(ulong *)(param_1 + lVar15);
  func_0x00010c07ab40();
  if ((uVar12 & 1) == 0) {
    (**(code **)((long)ppuVar11 + 0x10))(ppuVar11);
  }
  uVar12 = param_1 + _DAT_112730fc0;
  _objc_loadWeakRetained();
  uVar8 = uVar12;
  func_0x00010c0799e0();
  _objc_release(uVar12);
  if ((uVar8 & 1) == 0) {
    uVar12 = *(ulong *)(param_1 + lVar15);
    func_0x00010c07ac20();
    if ((uVar12 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar15);
      func_0x00010c07ab40();
      if (iVar1 != 0) {
        (**(code **)((long)ppuVar11 + 0x10))(ppuVar11);
        func_0x00010c2561a0(*(undefined8 *)(param_1 + _DAT_1127313f8));
        func_0x00010bf84cc0(*(undefined8 *)(param_1 + lVar15));
      }
      *(undefined8 *)(param_1 + _DAT_1127311cc) = 7;
      func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273120c));
      uVar2 = *(undefined8 *)(param_1 + _DAT_112730efc);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bbd00();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112730f78);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b29c0();
      _objc_release(uVar2);
      func_0x00010be54ba0(param_1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112731000);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126c2c28;
      func_0x00010c29ca60(PTR_PTR_1126c2c28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_release(puVar13);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127313fc);
      *(undefined8 *)(param_1 + _DAT_1127313fc) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112731400);
      *(undefined8 *)(param_1 + _DAT_112731400) = 0;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112730eec);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c256140();
      _objc_release(uVar2);
    }
  }
  _objc_release(ppuVar11);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar5);
  return;
}



/* Entry: 105b8afa8; end: 105b8b113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8afa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112731204);
  func_0x00010bf33f20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecb00(uVar2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b8b114; end: 105b8b14b; -[SCFriendsFeedViewController setSourceNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8b114(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127313d8);
  *(undefined8 *)(param_1 + _DAT_1127313d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b8b14c; end: 105b8b15b; -[SCFriendsFeedViewController setPreselectedShortcut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8b14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127313f4) = param_3;
  return;
}



/* Entry: 105b8b15c; end: 105b8b17f; -[SCFriendsFeedViewController setIsPresentingUnderChat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8b15c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273138c) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c1b3870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127312dc),PTR_s_setIsPresentingUnderChat__11264a840,1);
  return;
}



/* Entry: 105b8b180; end: 105b8b193; -[SCFriendsFeedViewController didLaunchViaQuickAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8b180(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127313e4) = 1;
  return;
}



/* Entry: 105b8b194; end: 105b8b21f; -[SCFriendsFeedViewController _conversationIdForNotification:] */

void FUN_105b8b194(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010bf0a2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010bf0a2c0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b8b220; end: 105b8b427; -[SCFriendsFeedViewController _scrollToFirstConsumableContentCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8b220(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  lVar1 = param_1;
  func_0x00010c29d020();
  if ((int)lVar1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + _DAT_112731204);
  func_0x00010c29dba0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf529e0();
  if (uVar10 != 0) {
    uVar10 = 0;
    do {
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c29a8;
      _objc_retain();
      _objc_opt_class(puVar4);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar6 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar3);
      uVar5 = uVar3;
      func_0x00010bfddd60();
      if (((int)uVar5 != 0) && (uVar5 = uVar6, func_0x000105bb4ccc(), (uVar5 & 1) == 0)) {
        lVar1 = param_1;
        func_0x00010c267f00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be9ce20(param_1);
        lVar7 = lVar1;
        func_0x00010c0df2a0();
        _objc_release(lVar1);
        puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010be9ce20(param_1);
        func_0x00010bfed060();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c142240();
        if ((long)puVar8 < lVar7) {
          uVar9 = *(undefined8 *)(param_1 + _DAT_112730f14);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf807c0();
          _objc_release(uVar9);
          func_0x00010c267f00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c152720();
          _objc_release(param_1);
        }
        _objc_release(puVar4);
        _objc_release(uVar6);
        _objc_release(uVar3);
        break;
      }
      _objc_release(uVar6);
      _objc_release(uVar3);
      uVar10 = uVar10 + 1;
      uVar6 = uVar2;
      func_0x00010bf529e0();
    } while (uVar10 < uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b8b428; end: 105b8b467; -[SCFriendsFeedViewController _didScrollPassTableViewHeader] */

bool FUN_105b8b428(undefined8 param_1,double param_2,undefined8 param_3)

{
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release(param_3);
  return 0.0 < param_2;
}



/* Entry: 105b8b468; end: 105b8b4b7; -[SCFriendsFeedViewController _isTopOverscrolledWithContentOffset:] */

bool FUN_105b8b468(double param_1,double param_2,undefined8 param_3)

{
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(param_3);
  return param_2 + param_1 < 0.0;
}



/* Entry: 105b8b4b8; end: 105b8b5e7; -[SCFriendsFeedViewController handleUserTriggeredNavigationAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8b4b8(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c29d020();
  if ((int)uVar1 == 0) {
    return;
  }
  if (param_3 == 2) {
    uVar1 = param_1;
    func_0x00010be001a0();
    if ((int)uVar1 != 0) {
      func_0x00010c152860(param_1);
    }
  }
  else {
    if (param_3 != 0) {
      return;
    }
    uVar1 = param_1;
    func_0x00010be001a0();
    if ((int)uVar1 == 0) {
      uVar2 = *(ulong *)(param_1 + (long)_DAT_1127311b8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      if ((uVar1 & 1) == 0) {
        func_0x00010be9c080(param_1);
      }
      else if ((*(long *)(param_1 + (long)_DAT_112731360) == 0) &&
              (uVar1 = param_1, func_0x00010bfd5b20(), (uVar1 & 1) != 0)) {
        func_0x00010be08380(param_1);
        goto LAB_105b8b59c;
      }
    }
    else {
      func_0x00010c152860(param_1);
    }
    if (*(long *)(param_1 + (long)_DAT_112731360) != 0) {
      func_0x00010bed1fc0(param_1);
    }
  }
LAB_105b8b59c:
  if ((*(char *)(param_1 + (long)_DAT_112731170) == '\x01') &&
     (uVar1 = param_1, func_0x00010bec4380(), (int)uVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf845f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + (long)_DAT_1127312dc),
               PTR_s_dismissStoriesEverywhereOpera_1125beb20);
    return;
  }
  return;
}



/* Entry: 105b8b5e8; end: 105b8b5eb; -[SCFriendsFeedViewController didTapNewTabToDismiss] */

void FUN_105b8b5e8(void)

{
  return;
}



/* Entry: 105b8b5ec; end: 105b8ba13; -[SCFriendsFeedViewController handleViewHasAppearedIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8b5ec(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  uVar1 = param_2;
  func_0x00010c29d020();
  if ((uVar1 & 1) == 0) {
    func_0x00010c2225a0(param_2,param_3,1);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + (long)_DAT_1127312ac),param_3,
                        PTR____kCFBooleanTrue_11034ab68);
    uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112730efc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbce0();
    _objc_release(uVar2);
    if ((*(byte *)(param_2 + (long)_DAT_112731404) & 1) == 0) {
      *(undefined1 *)(param_2 + (long)_DAT_112731404) = 1;
      uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112730ef4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123b80();
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112730eec);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dd7a0();
      _objc_release(uVar2);
    }
    _CACurrentMediaTime();
    uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112731408);
    lVar7 = *(long *)(param_2 + (long)_DAT_1127313d8);
    lVar8 = *(long *)(param_2 + (long)_DAT_1127313f0);
    _objc_retain(uVar2);
    _objc_retain(lVar7);
    _objc_retain(lVar8);
    if (lVar7 == 0) {
      if (lVar8 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar8;
        func_0x00010c247940();
        if ((int)lVar9 == 6) {
          lVar6 = lVar8;
          func_0x00010c0dbb80(lVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar6;
          func_0x00010c11c420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          lVar6 = lVar8;
          func_0x00010c0dbb80(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0752e0();
          _objc_release(lVar6);
        }
        else {
          func_0x00010c247940(lVar8);
          lVar9 = 0;
        }
      }
    }
    else {
      lVar9 = lVar7;
      func_0x00010c11c460(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0752e0(lVar7);
    }
    puVar3 = PTR_PTR_1126c2dc8;
    _objc_alloc(PTR_PTR_1126c2dc8);
    func_0x00010c010540(param_1);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112730ef8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11273138c;
    func_0x00010bf75ee0();
    _objc_release(uVar2);
    if ((*(byte *)(param_2 + lVar7) & 1) == 0) {
      func_0x00010bed2ca0(param_2,param_3,1);
    }
    func_0x00010c13d9a0(param_2);
    func_0x00010c09bbc0(param_2);
    if (*(long *)(param_2 + (long)_DAT_1127313c8) == 0) {
      uVar1 = param_2;
      func_0x00010be22940();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112730f64);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_105b8ba14;
      puStack_70 = &UNK_110894580;
      uStack_68 = uVar1;
      _objc_retain();
      func_0x00010c297260(uVar2,param_3,&puStack_88,0);
      _objc_release(uStack_68);
      _objc_release(uVar1);
    }
    uVar4 = *(undefined8 *)(param_2 + (long)_DAT_1127310f8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c27e360();
    _objc_release(uVar4);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112730fbc);
      func_0x00010c0841c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a8260();
      _objc_release(uVar2);
    }
    if ((*(byte *)(param_2 + lVar7) & 1) == 0) {
      uVar1 = param_2;
      func_0x00010be22940(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c2c20;
      func_0x00010c0f17a0(PTR_PTR_1126c2c20,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be07c20(param_2,param_3,puVar5);
      _objc_release(puVar5);
      func_0x00010bfd3140(*(undefined8 *)(param_2 + (long)_DAT_1127312dc));
      uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112731290);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c250840();
      _objc_release(uVar2);
      func_0x00010c285dc0(param_2);
      func_0x00010c1386c0(*(undefined8 *)(param_2 + (long)_DAT_112731324));
      _objc_release(uVar1);
    }
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 105b8ba14; end: 105b8ba4f;  */

void FUN_105b8ba14(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfc56e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf969e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b8ba50; end: 105b8ba53; -[SCFriendsFeedViewController preferredStatusBarStyle] */

undefined8 FUN_105b8ba50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 105b8ba54; end: 105b8ba5b; -[SCFriendsFeedViewController prefersStatusBarHidden] */

undefined8 FUN_105b8ba54(void)

{
  return 0;
}



/* Entry: 105b8ba5c; end: 105b8ba77; -[SCFriendsFeedViewController preferredScreenEdgesDeferringSystemGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b8ba5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xf;
  if (*(char *)(param_1 + _DAT_112730eac) == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 105b8ba78; end: 105b8ba87; -[SCFriendsFeedViewController _setPreferredScreenEdgesDeferringSystemGesturesToAll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8ba78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112730eac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateOfScreenEdgesDefer_112650a08);
  return;
}



/* Entry: 105b8ba88; end: 105b8bb6b; -[SCFriendsFeedViewController dataSourceDidUpdateViewModels:updateSource:fetchContexts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8ba88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1 + _DAT_112730fc0;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010c0741e0();
  _objc_release(lVar4);
  if ((int)lVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273120c),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3160);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112731204);
  func_0x00010c29dba0(uVar2,param_2,*(long *)(param_1 + _DAT_112731360) == 0xc);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112730f78);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d100();
  _objc_release(uVar3);
  lVar4 = (long)_DAT_1127313fc;
  if (*(long *)(param_1 + lVar4) != 0) {
    (**(code **)(*(long *)(param_1 + lVar4) + 0x10))();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b8bb6c; end: 105b8bcd7; -[SCFriendsFeedViewController _callStateLoggerDidEnter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8bb6c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010be22860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010bfcbb20(*(undefined8 *)(param_1 + _DAT_112730ed8));
  func_0x00010bfc8740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010c0b8620(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112731204);
  func_0x00010bfba380(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x000100504554(lVar4,&PTR___NSConcreteGlobalBlock_1108d8e40);
  lVar8 = (long)_DAT_1127312bc;
  func_0x00010bf75e00(*(undefined8 *)(param_1 + lVar8));
  if (*(char *)(param_1 + _DAT_112731364) == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf529e0(lVar4);
    func_0x00010bf79c80(uVar7);
  }
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b8bcd8; end: 105b8bd33;  */

void FUN_105b8bcd8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126c2c68;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b8bd34; end: 105b8bd93; -[SCFriendsFeedViewController _enqueueUnthrottleRequest] */

void FUN_105b8bd34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6b18;
  func_0x00010c22b6a0(PTR_PTR_1126b6b18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2c70;
  _objc_alloc(PTR_PTR_1126c2c70);
  func_0x00010c050c20();
  func_0x00010bf96440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b8bd94; end: 105b8bdeb; -[SCFriendsFeedViewController dataSourceDidReceiveNewUnreadContent:] */

void FUN_105b8bd94(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105b8bdec;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105b8bdec; end: 105b8be8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8bdec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar1 = (undefined *)(*(long *)(param_1 + 0x20) + (long)_DAT_112730fc0);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c0741e0();
  if ((int)puVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010c07a4c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273137c);
      func_0x00010c07ab40();
      _objc_release(puVar1);
      if ((uVar3 & 1) != 0) {
        return;
      }
      puVar1 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b8be8c; end: 105b8bfbb; -[SCFriendsFeedViewController _isFirstFeedCellVisible] */

ulong FUN_105b8be8c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar1 = param_1;
  func_0x00010beea180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar6 = *plStack_110;
    do {
      uVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(uVar1);
        }
        uVar5 = *(ulong *)(lStack_118 + uVar7 * 8);
        uVar2 = uVar5;
        func_0x00010c1554e0();
        uVar3 = param_1;
        func_0x00010be9ce20();
        if ((uVar2 == uVar3) && (func_0x00010c142240(), uVar5 == 0)) {
          uVar4 = 1;
          goto LAB_105b8bf78;
        }
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
      uVar4 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar4 != 0);
  }
  uVar4 = 0;
LAB_105b8bf78:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  uVar4 = uVar1;
  func_0x00010be407c0();
  if ((int)uVar4 != 0) {
    func_0x00010c07a520(uVar1);
    uVar4 = (ulong)((uint)uVar1 ^ 1);
  }
  return uVar4;
}



/* Entry: 105b8bfbc; end: 105b8bfeb; -[SCFriendsFeedViewController shouldSuppressNotification:] */

void FUN_105b8bfbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be407c0();
  if ((int)uVar1 != 0) {
    func_0x00010c07a520(param_1);
  }
  return;
}



/* Entry: 105b8bfec; end: 105b8c2a7; -[SCFriendsFeedViewController handleNotificationPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8bfec(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010bf36f80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bde8c00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127310f8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c27e360();
  _objc_release(uVar4);
  lVar5 = param_3;
  func_0x00010c11c420();
  if ((int)uVar6 == 0) {
    bVar1 = lVar5 == 0x73 || lVar5 == 0x16;
LAB_105b8c0e8:
    if ((param_3 == 0) || (!bVar1)) goto LAB_105b8c144;
    uVar6 = *(undefined8 *)(param_1 + _DAT_112731204);
    func_0x00010c29dba0(uVar6,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112730f78);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2960();
  }
  else {
    bVar1 = true;
    if (((lVar5 - 0x71U < 0x2a) && ((1L << (lVar5 - 0x71U & 0x3f) & 0x28000000005U) != 0)) ||
       (lVar5 == 0x16)) goto LAB_105b8c0e8;
LAB_105b8c144:
    if ((lVar3 == 0) || (lVar2 == 0)) goto LAB_105b8c1dc;
    uVar6 = *(undefined8 *)(param_1 + _DAT_112731204);
    func_0x00010c29dba0(uVar6,param_2,*(long *)(param_1 + _DAT_112731360) == 0xc);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112730f78);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bfce860(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2960(uVar4,param_2,lVar3,lVar2,lVar5 != 0,uVar6);
    _objc_release(lVar5);
  }
  _objc_release(uVar4);
  _objc_release(uVar6);
LAB_105b8c1dc:
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273137c);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112731288);
  func_0x00010c150520(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ffe60(param_1,param_2,uVar4,uVar6);
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126c2c20;
  func_0x00010c0dc220(PTR_PTR_1126c2c20,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be07c20(param_1,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273120c),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3178);
  if (*(long *)(param_1 + _DAT_112731360) != 0) {
    func_0x00010bed1fc0(param_1,param_2,0,0x10);
  }
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b8c2a8; end: 105b8c2d7; -[SCFriendsFeedViewController handleShortcutPreselected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8c2a8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010be08380();
    *(undefined8 *)(param_1 + _DAT_1127313f4) = 0;
  }
  return;
}



/* Entry: 105b8c2d8; end: 105b8c30f; -[SCFriendsFeedViewController setPageLaunchCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8c2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127313f0);
  *(undefined8 *)(param_1 + _DAT_1127313f0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b8c310; end: 105b8c327; -[SCFriendsFeedViewController handlePageLaunchCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8c310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273120c),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3178);
  return;
}



/* Entry: 105b8c328; end: 105b8c32b; -[SCFriendsFeedViewController dataSourceSectionForFeedItems:] */

void FUN_105b8c328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sectionIdForFeedItems_112584d30);
  return;
}



/* Entry: 105b8c32c; end: 105b8c41b; -[SCFriendsFeedViewController dataSource:reloadItemsForResult:viewModels:quickAddChanged:addedMeChanged:contactSnapchatterChanged:contactNonSnapchatterChanged:trackingIdentifier:source:updateIsForCommunityFeed:isInitialMainFeedLoad:] */

void FUN_105b8c32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be579c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e203f8);
  func_0x00010be8aa60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b8c41c; end: 105b8cbd7; -[SCFriendsFeedViewController _reloadItemsForDataSource:result:viewModels:quickAddChanged:addedMeChanged:contactSnapchatterChanged:contactNonSnapchatterChanged:trackingIdentifier:source:updateIsForCommunityFeed:isInitialMainFeedLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8c41c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,long param_6,undefined **param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,uint param_15)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined **ppuVar19;
  long lVar20;
  long lVar21;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined1 uStack_280;
  undefined1 uStack_27f;
  undefined1 uStack_27e;
  undefined1 uStack_27d;
  byte bStack_27c;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  ulong uStack_250;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [8];
  undefined1 uStack_230;
  undefined1 uStack_22f;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined1 uStack_22c;
  undefined1 auStack_228 [8];
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_13);
  _objc_retain(param_14);
  uVar4 = param_3;
  func_0x00010be1fc80();
  if (((int)uVar4 == 0) || (*(char *)(param_3 + (long)_DAT_11273140c) != '\x01')) {
    bVar3 = false;
  }
  else {
    *(undefined1 *)(param_3 + (long)_DAT_11273140c) = 0;
    bVar3 = true;
  }
  uVar16 = *(ulong *)(param_3 + (long)_DAT_112731360);
  uVar4 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfed1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lVar6 = param_6;
  func_0x00010c0674e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  lVar21 = 0;
  if (lVar7 != 0) {
    lVar18 = *plStack_1d0;
    do {
      lVar20 = 0;
      do {
        if (*plStack_1d0 != lVar18) {
          _objc_enumerationMutation(lVar6);
        }
        lVar8 = *(long *)(lStack_1d8 + lVar20 * 8);
        func_0x00010c142240();
        uVar9 = uVar4;
        func_0x00010c142240();
        if (lVar8 <= (long)uVar9) {
          lVar21 = lVar21 + 1;
        }
        lVar20 = lVar20 + 1;
      } while (lVar7 != lVar20);
      lVar7 = lVar6;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  lVar6 = param_6;
  func_0x00010bf6d000();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar18 = *plStack_210;
    do {
      lVar20 = 0;
      do {
        if (*plStack_210 != lVar18) {
          _objc_enumerationMutation(lVar6);
        }
        lVar8 = *(long *)(lStack_218 + lVar20 * 8);
        func_0x00010c142240();
        uVar9 = uVar4;
        func_0x00010c142240();
        lVar21 = lVar21 - (ulong)(lVar8 <= (long)uVar9);
        lVar20 = lVar20 + 1;
      } while (lVar7 != lVar20);
      lVar7 = lVar6;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar6);
  lVar6 = param_6;
  func_0x00010c0d19c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  lVar18 = param_6;
  func_0x00010c0674e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar18;
  func_0x00010bf529e0();
  lVar8 = param_6;
  func_0x00010bf6d000();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010bf529e0();
  lVar11 = param_6;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf529e0();
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar18);
  _objc_release(lVar6);
  lVar18 = *(long *)(param_3 + (long)_DAT_112731298);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar18;
  func_0x00010c067fc0();
  _objc_release(lVar18);
  if (lVar6 < 1) {
    lVar6 = 0x14;
  }
  bVar1 = lVar6 < lVar20 + lVar7 + lVar10 + lVar12;
  ppuVar19 = (undefined **)(ulong)bVar1;
  ppuVar13 = param_7;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c2a28;
  _objc_opt_class(PTR_PTR_1126c2a28);
  ppuVar17 = ppuVar13;
  _objc_opt_isKindOfClass(ppuVar13,puVar14);
  _objc_release(ppuVar13);
  bVar2 = (byte)ppuVar17;
  if (((param_15 & 0x100) != 0) ||
     (((bVar3 || (0x38000U >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0) || 0x12 < uVar16) || bVar1)) {
    ppuVar17 = (undefined **)(long)_DAT_112731234;
    uVar15 = *(undefined8 *)(param_3 + (long)ppuVar17);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001064e923c();
    _objc_release(uVar15);
    uVar15 = *(undefined8 *)(param_3 + (long)ppuVar17);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001064e9424();
    _objc_release(uVar15);
    *(undefined1 *)(param_3 + (long)_DAT_11273140c) = 0;
    func_0x00010c2229a0(*(undefined8 *)(param_3 + (long)_DAT_112731204));
    func_0x00010be8a880(param_3);
    uVar16 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b60();
    _objc_release(uVar16);
    uVar16 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar16);
    func_0x00010be17320(param_1,param_2,param_3);
  }
  else {
    uVar16 = param_3;
    func_0x00010bee4160();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar16;
    func_0x00010bfd5320();
    if ((uVar9 & 1) == 0) {
      func_0x00010c2229a0(*(undefined8 *)(param_3 + (long)_DAT_112731204));
      func_0x00010be8a880(param_3);
      func_0x00010be17320(param_1,param_2,param_3);
    }
    else {
      uVar9 = param_3;
      func_0x00010c267f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(uVar9);
      _objc_initWeak(auStack_228,param_3);
      func_0x00010c267f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_270 = 0xc2000000;
      pcStack_268 = FUN_105b8cbd8;
      puStack_260 = &UNK_1108d8e60;
      ppuVar17 = &puStack_278;
      _objc_copyWeak(auStack_238,auStack_228);
      _objc_retain(param_5);
      lStack_258 = param_5;
      _objc_retain(uVar16);
      uStack_250 = uVar16;
      _objc_retain(param_7);
      uStack_22d = param_11;
      ppuStack_248 = param_7;
      uStack_230 = param_8;
      uStack_22f = param_9;
      uStack_22e = param_10;
      _objc_retain(param_13);
      uStack_240 = param_13;
      uStack_22c = (undefined1)param_15;
      puStack_2c8 = puVar14;
      uStack_2c0 = 0xc2000000;
      uStack_2b8 = 0x105b8cc38;
      puStack_2b0 = &UNK_1108d8e90;
      ppuVar19 = &puStack_2c8;
      _objc_copyWeak(auStack_2a0,auStack_228);
      _objc_retain(param_5);
      uStack_27d = param_11;
      lStack_2a8 = param_5;
      uStack_298 = param_1;
      uStack_290 = param_2;
      lStack_288 = lVar21;
      uStack_280 = param_8;
      uStack_27f = param_9;
      uStack_27e = param_10;
      bStack_27c = bVar2 & ppuVar13 != (undefined **)0x0;
      func_0x00010c0f8420(param_3);
      _objc_release(param_3);
      _objc_release(lStack_2a8);
      _objc_destroyWeak(auStack_2a0);
      _objc_release(uStack_240);
      _objc_release(ppuStack_248);
      _objc_release(uStack_250);
      _objc_release(lStack_258);
      _objc_destroyWeak(auStack_238);
      _objc_destroyWeak(auStack_228);
    }
    _objc_release(uVar16);
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar19 + 5);
  _objc_destroyWeak(ppuVar17 + 8);
  _objc_destroyWeak(auStack_228);
  __Unwind_Resume();
  param_5 = param_5 + 0x40;
  _objc_loadWeakRetained(param_5);
  func_0x00010bee1b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105b8cbd8; end: 105b8ccaf;  */

void FUN_105b8cbd8(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b8ccb0; end: 105b8d09b; -[SCFriendsFeedViewController _updateVisibleTableViewCellsAndReturnBatchUpdatesResult:viewModels:trackingIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8ccb0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  lVar2 = param_3;
  func_0x00010c28d760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  puVar17 = auStack_f0;
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar19 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar19) {
        _objc_enumerationMutation(lVar3);
      }
      puVar6 = PTR_PTR_1126c2c78;
      uVar22 = *(ulong *)(lVar21 * 8);
      _objc_retain(uVar22);
      _objc_opt_class(puVar6);
      uVar7 = uVar22;
      _objc_opt_isKindOfClass(uVar22,puVar6);
      uVar1 = uVar22;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar22);
      if (uVar1 != 0) {
        uVar7 = uVar22;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf33f20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 != 0) {
          lVar9 = param_1;
          func_0x00010c267f00();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bfecfa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          if (((lVar10 != 0) && (puVar6 = puVar4, func_0x00010bf4b900(), (int)puVar6 != 0)) &&
             (lVar9 = param_3, func_0x00010c0d8b20(), lVar9 != 0)) {
            func_0x00010c142240();
            uVar11 = param_4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = *(undefined8 *)(param_1 + _DAT_112731220);
            puVar6 = PTR_PTR_1126c29a8;
            _objc_opt_class(PTR_PTR_1126c29a8);
            uVar12 = uVar11;
            _objc_opt_isKindOfClass(uVar11,puVar6);
            uVar7 = uVar11;
            if ((uVar12 & 1) == 0) {
              uVar7 = 0;
            }
            _objc_retain(uVar7);
            uVar13 = uVar22;
            func_0x00010c29d560();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126c29a8;
            _objc_opt_class(PTR_PTR_1126c29a8);
            uVar14 = uVar13;
            _objc_opt_isKindOfClass(uVar13,puVar6);
            uVar12 = uVar13;
            if ((uVar14 & 1) == 0) {
              uVar12 = 0;
            }
            _objc_retain(uVar12);
            _objc_release(uVar13);
            func_0x00010c142240(lVar9);
            func_0x00010bf33a60(uVar18);
            _objc_release(uVar12);
            _objc_release(uVar7);
            func_0x00010c2226c0(uVar22);
            func_0x00010befa120(puVar5);
            _objc_release(uVar11);
            _objc_release(lVar9);
          }
          _objc_release(lVar10);
        }
        _objc_release(uVar8);
      }
      _objc_release(uVar1);
      lVar21 = lVar21 + 1;
    } while (lVar2 != lVar21);
    puVar17 = auStack_f0;
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  lVar2 = param_3;
  func_0x00010c13cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar2;
  func_0x00010c13cae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar19);
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar17);
  func_0x00010c2229a0(*(undefined8 *)(param_3 + _DAT_112731204));
  lVar2 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar17;
  func_0x00010c0674e0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066d80(lVar2);
  _objc_release(puVar15);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar17;
  func_0x00010bf6d000(puVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c6c0(lVar2);
  _objc_release(puVar15);
  _objc_release(lVar2);
  puVar16 = puVar17;
  func_0x00010c0d19c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar16;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar15 != (undefined1 *)0x0) {
    puVar23 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar16);
      }
      uVar20 = *(undefined8 *)((long)puVar23 * 8);
      lVar3 = param_3;
      func_0x00010c267f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar20;
      func_0x00010bfba9a0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2719c0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d16c0(lVar3);
      _objc_release(uVar20);
      _objc_release(uVar18);
      _objc_release(lVar3);
      puVar23 = puVar23 + 1;
    } while (puVar15 != puVar23);
    puVar15 = puVar16;
    func_0x00010bf52a60();
  }
  _objc_release(puVar16);
  _objc_release(puVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be49860();
                    /* WARNING: Could not recover jumptable at 0x00010bed7690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar17,PTR_s__updateEmptyFeedListPlaceHolderL_112593748);
  return;
}



/* Entry: 105b8d09c; end: 105b8d2c7; -[SCFriendsFeedViewController _updateTableViewForDataSource:batchUpdatesResult:viewModels:quickAddChanged:addedMeChanged:contactSnapchatterChanged:contactNonSnapchatterChanged:trackingIdentifier:updateIsForCommunityFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8d09c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c2229a0(*(undefined8 *)(param_1 + _DAT_112731204));
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0674e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066d80(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf6d000(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c6c0(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar3 = param_4;
  func_0x00010c0d19c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      lVar4 = param_1;
      func_0x00010c267f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010bfba9a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2719c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d16c0(lVar4);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(lVar4);
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be49860();
                    /* WARNING: Could not recover jumptable at 0x00010bed7690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s__updateEmptyFeedListPlaceHolderL_112593748);
  return;
}



/* Entry: 105b8d2c8; end: 105b8d2eb; -[SCFriendsFeedViewController _finishTableViewUpdateWithWithOffset:indexOffset:] */

void FUN_105b8d2c8(undefined8 param_1)

{
  func_0x00010be49860();
                    /* WARNING: Could not recover jumptable at 0x00010bed7690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateEmptyFeedListPlaceHolderL_112593748);
  return;
}



/* Entry: 105b8d2ec; end: 105b8d573; -[SCFriendsFeedViewController _layoutTableViewAfterUpdateWithOffset:indexOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8d2ec(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar3 = param_3;
  dVar11 = param_2;
  func_0x00010bdf6a20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2347e0();
  if ((int)uVar4 != 0) {
    uVar4 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar4);
  }
  func_0x00010c285dc0(param_3);
  if ((param_5 == 0) || (uVar4 = param_3, func_0x00010be001a0(), (int)uVar4 == 0)) {
    iVar2 = (int)*(undefined8 *)(param_3 + (long)_DAT_112731354);
    func_0x00010bf77fc0();
    if ((iVar2 != 0) &&
       (uVar4 = param_3, dVar11 = param_2, func_0x00010be44b20(param_1), (uVar4 & 1) != 0))
    goto LAB_105b8d550;
    uVar4 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    dVar12 = ABS(dVar11 - param_2);
    dVar13 = ABS(param_2 + dVar11) * 2.220446049250313e-16;
    _objc_release(uVar4);
    dVar11 = 2.2250738585072014e-308;
    bVar1 = true;
    if ((2.2250738585072014e-308 <= dVar12) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar13))) {
      bVar1 = dVar12 < dVar13;
    }
    if (bVar1) goto LAB_105b8d550;
    uVar4 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befda00();
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822e0(param_1,param_2 - dVar11);
    uVar5 = param_3;
  }
  else {
    uVar5 = param_3;
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfed1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c142240();
    uVar6 = uVar6 + param_5;
    uVar7 = param_3;
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c1554e0(uVar5);
    uVar9 = uVar7;
    func_0x00010c0df2a0(uVar7,param_4,uVar8);
    _objc_release(uVar7);
    if ((long)uVar9 < (long)uVar6) {
      uVar7 = param_3;
      func_0x00010c267f00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c1554e0(uVar5);
      uVar6 = uVar7;
      func_0x00010c0df2a0(uVar7,param_4,uVar8);
      _objc_release(uVar7);
    }
    puVar10 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    if (0 < (long)uVar6) {
      uVar7 = uVar5;
      func_0x00010c1554e0(uVar5);
      func_0x00010bfed060(puVar10,param_4,uVar6 - 1,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c267f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c152720();
      _objc_release(param_3);
      _objc_release(puVar10);
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_105b8d550:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105b8d574; end: 105b8d577; -[SCFriendsFeedViewController resumeTableViewUpdates] */

void FUN_105b8d574(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13db30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resumeViewModelUpdates_11262d0e8);
  return;
}



/* Entry: 105b8d578; end: 105b8d7d7; -[SCFriendsFeedViewController dataSource:reloadInitialItemsWithViewModels:source:updateIsForCommunityFeed:shouldOnlyReloadTable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8d578(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  dVar7 = param_2;
  _objc_release(uVar2);
  lVar6 = (long)_DAT_112731234;
  uVar3 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001064e923c();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010bf529e0(param_6);
  func_0x0001064e9424(uVar4,param_7,param_9,uVar3);
  _objc_release(param_7);
  _objc_release(uVar4);
  func_0x00010c2229a0(*(undefined8 *)(param_3 + (long)_DAT_112731204));
  _objc_release(param_6);
  func_0x00010be579c0(param_3);
  uVar2 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(uVar2);
  if ((param_9 & 1) != 0) {
    return;
  }
  uVar2 = param_3;
  func_0x00010c267f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bdf6a20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c2347e0();
  if ((int)uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar5);
  }
  func_0x00010c285dc0(param_3);
  iVar1 = (int)*(undefined8 *)(param_3 + (long)_DAT_112731354);
  func_0x00010bf77fc0();
  if ((iVar1 == 0) ||
     (uVar5 = param_3, dVar7 = param_2, func_0x00010be44b20(param_1), (uVar5 & 1) == 0)) {
    uVar5 = param_3;
    func_0x00010c267f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    _objc_release(uVar5);
    if (dVar7 != param_2) {
      uVar5 = param_3;
      func_0x00010c267f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822e0(param_1,param_2);
      _objc_release(uVar5);
    }
  }
  func_0x00010bed7680(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b8d7d8; end: 105b8d82b; -[SCFriendsFeedViewController resumeViewModelUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8d7d8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112731204;
  uVar1 = param_1;
  func_0x00010bf64600(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_resumeViewModelUpdates__11262d0f0,
             *(long *)(param_1 + (long)_DAT_112731360) == 0xc);
  return;
}



/* Entry: 105b8d82c; end: 105b8d82f; -[SCFriendsFeedViewController dataSourceViewHasAppeared:] */

void FUN_105b8d82c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29d030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewHasAppeared_112684e30);
  return;
}



/* Entry: 105b8d830; end: 105b8d847; -[SCFriendsFeedViewController dataSourceShouldStopViewModelUpdates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_105b8d830(long param_1)

{
  return (*(byte *)(param_1 + _DAT_112731404) ^ 0xff) & 1;
}



/* Entry: 105b8d848; end: 105b8d84b; -[SCFriendsFeedViewController _logReloadTableViewWithPrefix:] */

void FUN_105b8d848(void)

{
  return;
}



/* Entry: 105b8d84c; end: 105b8d857; -[SCFriendsFeedViewController dataSource:didUpdateViewModelsForShortcutRecipientsWithFeedItems:canRenderFeedEmptyState:] */

void FUN_105b8d84c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea7770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setShortcutRecipients_canRender_112587780,param_4,param_5);
  return;
}



/* Entry: 105b8d858; end: 105b8d92b; -[SCFriendsFeedViewController _setShortcutRecipients:canRenderFeedEmptyState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8d858(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112731370;
  uVar1 = *(ulong *)(param_1 + lVar3);
  if ((param_3 != 0 || uVar1 != 0) && (func_0x00010c071b60(uVar1,param_2,param_3), (uVar1 & 1) == 0)
     ) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar4 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010be589a0(param_1,param_2,lVar4);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf529e0(uVar2);
    func_0x00010bed3fe0(param_1,param_2,uVar2);
    lVar4 = (long)_DAT_112731374;
    if (*(char *)(param_1 + lVar4) == '\x01') {
      lVar3 = *(long *)(param_1 + lVar3);
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        func_0x00010be47560(param_1);
      }
      *(undefined1 *)(param_1 + lVar4) = 0;
    }
  }
  func_0x00010bed68a0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b8d92c; end: 105b8db47; -[SCFriendsFeedViewController dataSource:didReceiveUpdatedShortcutRecipients:shortcutType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8d92c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_2);
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112731198);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c0ae120(param_1 * 1000.0,uVar2);
    _objc_release(uVar2);
    lVar1 = param_2;
    func_0x00010be1dba0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + _DAT_112730ed4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_6;
    _objc_retain(param_5);
    func_0x00010bf504e0(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + _DAT_112731190);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2c58;
  func_0x00010bf529e0(param_5);
  func_0x00010bf79540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b8db48; end: 105b8dbd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8db48(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + _DAT_112731360) == *(long *)(param_1 + 0x30))) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be589e0(lVar1);
    lVar2 = param_2;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010be0f820(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b8dbd8; end: 105b8dc2f; -[SCFriendsFeedViewController _logShortcutInventoryCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8dbd8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_112731360) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112731198);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105b8dc30; end: 105b8dd13; -[SCFriendsFeedViewController _logShortcutCellsRenderedCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8dc30(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_4 != 0) && (*(long *)(param_2 + _DAT_112731360) != 0)) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_11273119c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af820();
    _objc_release(uVar1);
    lVar2 = (long)_DAT_112731198;
    uVar1 = *(undefined8 *)(param_2 + lVar2);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c0ae0e0(param_1 * 1000.0,uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + lVar2);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0af800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105b8dd14; end: 105b8dea3; -[SCFriendsFeedViewController _updateBatchCameraReplyIfNecessaryWithRecipientCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8dd14(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112731360);
  bVar1 = true;
  if (uVar4 < 0x14) {
    if ((1L << (uVar4 & 0x3f) & 0x4dfaU) == 0) {
      if ((1L << (uVar4 & 0x3f) & 0xf2204U) == 0) {
        if (uVar4 == 0) {
          bVar5 = false;
          bVar1 = param_3 != 0;
          goto LAB_105b8dd98;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = param_3 != 0;
    }
  }
  bVar5 = 0xe < uVar4 && uVar4 != 0x12;
LAB_105b8dd98:
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112731324),param_2,bVar1 | bVar5);
  lVar6 = (long)_DAT_11273118c;
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010be22920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar2);
  uVar2 = 0x4059000000000000;
  if (((uint)(1 < param_3) & ((uint)(0x13 < uVar4) | 0x4df3U >> (ulong)((uint)uVar4 & 0x1f))) == 0)
  {
    uVar2 = 0x404e000000000000;
  }
  func_0x00010c181140(uVar2,*(undefined8 *)(param_1 + _DAT_112731344));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105b8dea4; end: 105b8df13; -[SCFriendsFeedViewController _getShortcutButtonViewModelWithRecipientCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8dea4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112731360);
  if (lVar1 == 0xc || lVar1 == 3) {
    func_0x00010c0d8a20(0x4040000000000000,PTR_PTR_1126c2c80);
  }
  else if (lVar1 == 0xf) {
    func_0x00010c0d8620(0x4040000000000000);
  }
  else {
    func_0x00010bf166e0(0x403e000000000000,PTR_PTR_1126c2c80);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b8df14; end: 105b8df9b; -[SCFriendsFeedViewController _updateCustomFeedSectionIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8df14(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + _DAT_112731360) == 0xc) && (param_3 != 0)) {
    lVar1 = *(long *)(param_1 + _DAT_112731204);
    func_0x00010c29dba0(lVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be043f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__displayCustomFeedSectionIfNeces_11255ea98);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be35690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideCustomFeedSectionIfNecessar_11256af40);
  return;
}



/* Entry: 105b8df9c; end: 105b8e033; -[SCFriendsFeedViewController _displayCustomFeedSectionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8df9c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127311b4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    lVar4 = (long)_DAT_1127311a8;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c071800();
    if (iVar1 != 0) {
      lVar4 = *(long *)(param_1 + lVar4);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__exposeCommunitiesSectionIfNeede_112560ca8);
        return;
      }
    }
  }
  return;
}



/* Entry: 105b8e034; end: 105b8e0c7; -[SCFriendsFeedViewController _hideCustomFeedSectionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b8e034(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127311b4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    lVar5 = (long)_DAT_1127311a8;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c071800();
    if (iVar1 != 0) {
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
  }
  return;
}



/* Entry: 105b8e0c8; end: 105b8e0e7; -[SCFriendsFeedViewController _getChatIdentifiersForShortcutRecipients:] */

void FUN_105b8e0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108d8ee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b8e0e8; end: 105b8e1df;  */

void FUN_105b8e0e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105b8e1e0;
  uStack_30 = 0x105b8e1f0;
  uStack_28 = 0;
  func_0x00010c0c0000(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b8e1e0; end: 105b8e1f7;  */

void FUN_105b8e1e0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


