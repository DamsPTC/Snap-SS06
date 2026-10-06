/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8591f4; end: 10b859243; -[SIGHeaderItemSearchRow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8591f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794c84,0);
  _objc_storeStrong(param_1 + _DAT_112794c80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794c78,0);
  return;
}



/* Entry: 10b859244; end: 10b859253; -[SIGHeaderItemView titleTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2716f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794ca8),PTR_s_titleTextField_112679fe0);
  return;
}



/* Entry: 10b859254; end: 10b859263; -[SIGHeaderItemView searchField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c153990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794cac),PTR_s_searchField_112632880);
  return;
}



/* Entry: 10b859264; end: 10b8592af; -[SIGHeaderItemView _titleOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b859264(long param_1)

{
  double dVar1;
  
  dVar1 = 0.0;
  if ((*(byte *)(param_1 + _DAT_112794cb4) & 1) == 0) {
    dVar1 = 1.0;
    if (*(char *)(param_1 + _DAT_112794cb8) == '\x01') {
      func_0x00010be18f80(0x3ff0000000000000);
      dVar1 = (double)((float)dVar1 * (float)dVar1);
    }
  }
  return dVar1;
}



/* Entry: 10b8592b0; end: 10b8592e7; -[SIGHeaderItemView _bottomAccessoryRowOpacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10b8592b0(long param_1)

{
  double dVar1;
  
  dVar1 = 1.0;
  if (*(char *)(param_1 + _DAT_112794cc4) == '\x01') {
    func_0x00010be18f60(0x3ff0000000000000);
    dVar1 = (double)((float)dVar1 * (float)dVar1);
  }
  return dVar1;
}



/* Entry: 10b8592e8; end: 10b859313; -[SIGHeaderItemView maximumHeightWithFullBottomAccessoryRow] */

void FUN_10b8592e8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be18f80();
                    /* WARNING: Could not recover jumptable at 0x00010bfe0690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0x3ff0000000000000,param_2,PTR_s_heightAtFractionalSearchShown_fr_1125d5b60,0);
  return;
}



/* Entry: 10b859314; end: 10b8593ff;  */

void FUN_10b859314(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _CGRectGetMidX(uVar1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40));
  uVar2 = uVar1;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x20));
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar1,uVar2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1739f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s_setBounds__11263a898);
  return;
}



/* Entry: 10b859400; end: 10b859417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859400(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794cdc);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794cdc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b859418; end: 10b85943b; -[SIGHeaderItemView _layoutSubviewsInternal] */

void FUN_10b859418(undefined8 param_1)

{
  func_0x00010be07200();
                    /* WARNING: Could not recover jumptable at 0x00010be49850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__layoutSubviewsInternalWithSearc_11256ffb0);
  return;
}



/* Entry: 10b85943c; end: 10b85943f; -[SIGHeaderItemView headerItem:didChangeAdjustsContentSizeWhenHidden:] */

void FUN_10b85943c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10b859440; end: 10b85944f; -[SIGHeaderItemView scrollViewScrollingToTopOnTappingStatusBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b859440(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112794cc8);
}



/* Entry: 10b859450; end: 10b8594a7; -[SIGHeaderItemView setScrollViewVerticalOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859450(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112794cbc) != param_3) {
    *(long *)(param_1 + _DAT_112794cbc) = param_3;
    if (((*(char *)(param_1 + _DAT_112794cb4) != '\x01') ||
        ((*(byte *)(param_1 + _DAT_112794cc4) & 1) != 0)) ||
       (*(char *)(param_1 + _DAT_112794ccc) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8)
      ;
      return;
    }
  }
  return;
}



/* Entry: 10b8594a8; end: 10b8594fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8594a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126e17d8;
  _objc_alloc();
  func_0x00010c01a020();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794cc0);
  *(undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_112794cc0) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addSubview__11259c880,puVar1);
  return;
}



/* Entry: 10b8594fc; end: 10b8595fb; -[SIGHeaderItemView startAnimationForTransitionToHeaderItem:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8594fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126df778;
  _objc_alloc(PTR_PTR_1126df778);
  func_0x00010c004160();
  _objc_storeWeak(param_1 + _DAT_112794ce0,puVar1);
  lVar3 = (long)_DAT_112794ce4;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794ca8);
  func_0x00010c0f9100(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34b60(puVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + _DAT_112794cc0);
  if (lVar3 != 0) {
    func_0x00010c0f9100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34b60(puVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b8595fc; end: 10b859697; -[SIGHeaderItemView completeAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8595fc(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = _DAT_112794ce4;
  if ((param_3 & 1) != 0) {
    lVar5 = (long)_DAT_112794cd0;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112794ce4);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_retain(uVar2);
    _objc_release(uVar4);
    func_0x00010c12d560(uVar2,param_2,param_1);
    func_0x00010befa200(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b859698; end: 10b859757;  */

void FUN_10b859698(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  ppuVar1 = &puStack_70;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_10b859758;
    puStack_28 = &UNK_110848c48;
    uStack_20 = *(undefined8 *)(param_1 + 0x20);
    uStack_18 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = 0x3ff0000000000000;
    ppuVar1 = &puStack_40;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x10b85984c;
    puStack_58 = &UNK_110848c48;
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = 0;
  }
  func_0x00010bef95a0(uVar2,uVar3,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar1);
  return;
}



/* Entry: 10b859758; end: 10b85993f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859758(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = (long)_DAT_112794ca8;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c2717c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c2717c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_90,lVar3);
  }
  uVar2 = 0x4024000000000000;
  if (lVar1 != 2) {
    uVar2 = 0xc024000000000000;
  }
  _CGAffineTransformTranslate(&uStack_60,uVar2,0,&uStack_90);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar4);
  func_0x00010c2717c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960();
  _objc_release(uVar2);
  _objc_release(lVar3);
  return;
}



/* Entry: 10b859940; end: 10b8599eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859940(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = NEON_ucvtf((ulong)*(byte *)(param_1 + 0x28));
  lVar2 = (long)_DAT_112794ca8;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c2717c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c2717c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 10b8599ec; end: 10b859a2b; -[SIGHeaderItemView setTitleAffordance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b8599ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794ce8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b859a2c; end: 10b859a4b; -[SIGHeaderItemView observer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859a2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794cd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b859a4c; end: 10b859a6b; -[SIGHeaderItemView tooltipPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859a4c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794ca4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b859a6c; end: 10b859a83; -[SIGHeaderItemView contentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b859a6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794c94);
}



/* Entry: 10b859a84; end: 10b859a9b; -[SIGHeaderItemView setContentInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112794c94);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b859a9c; end: 10b859aab; -[SIGHeaderItemView scrollViewVerticalOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b859a9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794cbc);
}



/* Entry: 10b859aac; end: 10b859b6f; -[SIGHeaderTabBarRow completeAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859aac(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 == 0) {
    lVar3 = (long)_DAT_112794d00;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    lVar4 = (long)_DAT_112794d04;
  }
  else {
    lVar4 = (long)_DAT_112794cf0;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    lVar3 = (long)_DAT_112794d00;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112794d04;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar5 = (long)_DAT_112794cf4;
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar2;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112794d08,0);
  return;
}



/* Entry: 10b859b70; end: 10b859bcb; -[SIGHeaderTabBarRow headerItemViewCanTransitionInPlaceTo:] */

uint FUN_10b859b70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e17c0;
  _objc_opt_class(PTR_PTR_1126e17c0);
  lVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  _objc_release(param_3);
  return (uint)(param_3 != 0) & (uint)lVar2;
}



/* Entry: 10b859bcc; end: 10b859fcb; -[SIGHeaderTabBarRow startAnimationForTransitionTo:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b859bcc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e17c0;
  _objc_opt_class(PTR_PTR_1126e17c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c2674c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112794d00);
    *(ulong *)(param_1 + _DAT_112794d00) = uVar3;
    _objc_release(uVar4);
    _objc_retain(uVar3);
    uVar5 = param_3;
    func_0x00010c267600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112794d04);
    *(ulong *)(param_1 + _DAT_112794d04) = uVar5;
    _objc_release(uVar4);
    lVar20 = (long)_DAT_112794d08;
    lVar6 = param_1 + lVar20;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf436e0();
    _objc_release(lVar6);
    puVar7 = PTR_PTR_1126df778;
    _objc_alloc();
    func_0x00010c004160();
    _objc_storeWeak(param_1 + lVar20,puVar7);
    func_0x00010befbb60(param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112794cf0);
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = uVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(lVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_release(uVar5);
    uVar21 = 0;
    func_0x00010c1677c0(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bfee1e0(PTR__OBJC_CLASS___UIView_1126aec20);
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    func_0x00010bf02ee0(uVar21,0,puVar2);
    param_1 = param_1 + lVar20;
    _objc_loadWeakRetained();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar7);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar21 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar21);
  func_0x00010bef95a0(0,0x3fe0000000000000,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar4);
  func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,puVar2);
  _objc_release(uVar4);
  _objc_release(uVar21);
  return;
}



/* Entry: 10b859fcc; end: 10b85a0ab;  */

void FUN_10b859fcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b85a0ac;
  puStack_60 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uStack_58 = uVar3;
  func_0x00010bef95a0(0,0x3fe0000000000000,puVar2,param_2,&puStack_78);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b85a0b8;
  puStack_88 = &UNK_110842e18;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_80 = uVar3;
  func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,puVar2,param_2,&puStack_a0);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  return;
}



/* Entry: 10b85a0ac; end: 10b85a0c3;  */

void FUN_10b85a0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10b85a0c4; end: 10b85a0d3; -[SIGHeaderTabBarRow headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85a0c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794cfc);
}



/* Entry: 10b85a0d4; end: 10b85a0e3; -[SIGHeaderTabBarRow tabBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85a0d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794cf0);
}



/* Entry: 10b85a0e4; end: 10b85a0f3; -[SIGHeaderTabBarRow tabBarItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85a0e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794cf4);
}



/* Entry: 10b85a0f4; end: 10b85a183;  */

void FUN_10b85a0f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_alloc(puVar2);
    func_0x00010c01bf60();
    _objc_release(param_1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c219b60(puVar2,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b85a184; end: 10b85a1b3; -[SIGHeaderTitle resignTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85a184(long param_1)

{
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_112794d44));
                    /* WARNING: Could not recover jumptable at 0x00010be0c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitTitleEditMode_112560a28);
  return;
}



/* Entry: 10b85a1b4; end: 10b85a227; -[SIGHeaderTitle hitTest:withEvent:] */

void FUN_10b85a1b4(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_11270b570;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b85a228; end: 10b85a2f3; -[SIGHeaderTitle _titleTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85a228(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112794d40;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7cbc0();
    _objc_release(uVar3);
  }
  lVar4 = *(long *)(param_1 + lVar5);
  func_0x00010c271820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + lVar5);
    func_0x00010c271820();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 10b85a2f4; end: 10b85a38f; -[SIGHeaderTitle _titleTextFieldTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85a2f4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112794d44));
  lVar4 = (long)_DAT_112794d40;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c271720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10b85a390; end: 10b85a48f; -[SIGHeaderTitle _exitTitleEditMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85a390(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112794d40;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar5 = (long)_DAT_112794d44;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112794d44;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c26b700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdfbe0(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112794d14;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar3);
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010c1cb630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNaturalTitleWidth__1126507b0);
  return;
}



/* Entry: 10b85a490; end: 10b85a493; -[SIGHeaderTitle SIGHeaderEditingTextFieldDidResign:] */

void FUN_10b85a490(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitTitleEditMode_112560a28);
  return;
}



/* Entry: 10b85a494; end: 10b85a56b; -[SIGHeaderTitle startAnimationForTransitionToHeaderItem:style:availableWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85a494(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112794d50;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  *(undefined8 *)(param_2 + lVar3) = param_4;
  _objc_release(uVar1);
  puVar2 = param_2;
  func_0x00010be34dc0(param_2,param_3,param_4);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126e17e8;
    _objc_alloc(PTR_PTR_1126e17e8);
    func_0x00010c01a020();
    func_0x00010bebf6c0(param_1,param_2,param_3,puVar2,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    param_2 = PTR_PTR_1126df778;
    _objc_alloc(PTR_PTR_1126df778);
    func_0x00010c004160();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b85a56c; end: 10b85a6f7; -[SIGHeaderTitle _headerItemViewCanTransitionInPlaceToHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10b85a56c(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112794d14);
  func_0x00010c26b700(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar5 == 0) goto LAB_10b85a6a0;
  uVar2 = param_3;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c08fa60();
  if (uVar4 == 0) {
    uVar5 = *(ulong *)(param_1 + _DAT_112794d18);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08fa60();
    if (uVar6 != 0) goto LAB_10b85a62c;
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  else {
LAB_10b85a62c:
    uVar6 = param_3;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112794d18);
    func_0x00010c26b700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0(uVar6,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar6);
    if (uVar4 == 0) {
      _objc_release(uVar5);
      _objc_release(uVar2);
      if ((uVar7 & 1) == 0) goto LAB_10b85a6a0;
    }
    else {
      _objc_release(uVar2);
      if ((int)uVar7 == 0) {
LAB_10b85a6a0:
        bVar1 = false;
        goto LAB_10b85a6d4;
      }
    }
  }
  uVar2 = param_3;
  func_0x00010c25dfa0(param_3);
  bVar1 = uVar2 == *(ulong *)(param_1 + _DAT_112794d28);
LAB_10b85a6d4:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b85a6f8; end: 10b85aadb; -[SIGHeaderTitle _startAnimationForTransitionTo:style:availableWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85a6f8(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
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
  
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126e17e8;
  _objc_opt_class(PTR_PTR_1126e17e8);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar1 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    param_2 = 0;
  }
  else {
    iVar2 = (int)*(undefined8 *)(param_2 + _DAT_112794d40);
    func_0x00010c081280();
    if (iVar2 != 0) {
      func_0x00010be8bf00(param_2);
    }
    uVar4 = param_4;
    func_0x00010bfdf5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + _DAT_112794d50);
    *(ulong *)(param_2 + _DAT_112794d50) = uVar4;
    _objc_release(uVar7);
    lVar10 = (long)_DAT_112794d54;
    lVar5 = param_2 + lVar10;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf436e0();
    _objc_release(lVar5);
    puVar6 = PTR_PTR_1126df778;
    _objc_alloc();
    func_0x00010c004160();
    _objc_storeWeak(param_2 + lVar10);
    uVar7 = *(undefined8 *)(param_2 + _DAT_112794d14);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_2 + _DAT_112794d18);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_2 + _DAT_112794d20);
    _objc_retain(uVar9);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_b0 = &uStack_b8;
    uStack_b8 = 0;
    dVar11 = 1.02270250269256e-312;
    uStack_a8 = 0x3032000000;
    pcStack_a0 = FUN_10b85aadc;
    uStack_98 = 0x10b85aaec;
    uStack_90 = 0;
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x3032000000;
    pcStack_d0 = FUN_10b85aadc;
    uStack_c8 = 0x10b85aaec;
    uStack_c0 = 0;
    puStack_110 = &uStack_118;
    uStack_118 = 0;
    uStack_108 = 0x3032000000;
    pcStack_100 = FUN_10b85aadc;
    uStack_f8 = 0x10b85aaec;
    uStack_f0 = 0;
    _objc_retain(param_4);
    _objc_retain(uVar7);
    func_0x00010c0f9680(puVar3);
    func_0x00010c1cbe20(param_2);
    func_0x00010c08cdc0(param_2);
    func_0x00010c0699c0(puStack_b0[5]);
    dVar11 = dVar11 * 0.78;
    *(bool *)(param_2 + _DAT_112794d68) = dVar11 <= param_1;
    func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_112794d58));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010bfee1e0(PTR__OBJC_CLASS___UIView_1126aec20);
    _objc_retain(uVar7);
    _objc_retain(uVar8);
    _objc_retain(uVar9);
    func_0x00010bf02ee0(dVar11,0,puVar3);
    param_2 = param_2 + lVar10;
    _objc_loadWeakRetained(param_2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar7);
    _objc_release(uVar1);
    __Block_object_dispose(&uStack_118,8);
    _objc_release(uStack_f0);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
    __Block_object_dispose(&uStack_b8,8);
    _objc_release(uStack_90);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10b85aadc; end: 10b85aaf3;  */

void FUN_10b85aadc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b85aaf4; end: 10b85ae73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85aaf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdf5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2717a0();
  uVar3 = uVar6;
  func_0x000107c30a50(uVar6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794d58);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794d58) = uVar3;
  _objc_release(uVar4);
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c19f0e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  lVar5 = *(long *)(param_1 + 0x20);
  func_0x00010c25dfa0(*(undefined8 *)(lVar5 + _DAT_112794d50));
  func_0x00010bdcec00(lVar5);
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  uVar6 = 0xc024000000000000;
  if (*(long *)(param_1 + 0x50) != 2) {
    uVar6 = 0x4024000000000000;
  }
  _CGAffineTransformMakeTranslation(&uStack_90,uVar6,0);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  func_0x00010c219960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x000107c30a54();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794d5c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794d5c) = uVar3;
  _objc_release(uVar2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  _CGAffineTransformMakeTranslation(&uStack_f0,uVar6,0);
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  func_0x00010c219960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c2711c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  FUN_10b85a0f4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794d60);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794d60) = uVar3;
  _objc_release(uVar2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
  _CGAffineTransformMakeTranslation(&uStack_120,uVar6,0);
  uStack_b8 = uStack_118;
  uStack_c0 = uStack_120;
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  func_0x00010c219960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf492e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794d64);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794d64) = uVar6;
  _objc_release(uVar4);
  return;
}



/* Entry: 10b85ae74; end: 10b85af9f;  */

void FUN_10b85ae74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010c1cb620(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b85afa0;
  puStack_78 = &UNK_11084d788;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_58 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar4;
  _objc_retain(uVar3);
  uStack_60 = uVar3;
  func_0x00010bef95a0(0,0x3fe0000000000000,puVar2,param_2,&puStack_90);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10b85b088;
    puStack_b0 = &UNK_11084f768;
    uStack_a0 = *(undefined8 *)(param_1 + 0x48);
    uStack_a8 = *(undefined8 *)(param_1 + 0x40);
    uStack_98 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bef95a0(0x3fe0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
                        param_2,&puStack_c8);
  }
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  return;
}



/* Entry: 10b85afa0; end: 10b85b087;  */

void FUN_10b85afa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  uVar1 = 0x4024000000000000;
  if (*(long *)(param_1 + 0x38) != 2) {
    uVar1 = 0xc024000000000000;
  }
  _CGAffineTransformMakeTranslation(&uStack_60,uVar1,0);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_90);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x28));
  _CGAffineTransformMakeTranslation(&uStack_c0,uVar1,0);
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_90);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x30));
  _CGAffineTransformMakeTranslation(&uStack_f0,uVar1,0);
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  uStack_68 = uStack_c8;
  uStack_70 = uStack_d0;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_90);
  return;
}



/* Entry: 10b85b088; end: 10b85b163;  */

void FUN_10b85b088(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar1 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar2;
  uStack_28 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),param_2,
                      &uStack_50);
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar2;
  uStack_28 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2,
                      &uStack_50);
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar2;
  uStack_28 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),param_2,
                      &uStack_50);
  return;
}



/* Entry: 10b85b164; end: 10b85b373; -[SIGHeaderTitle completeAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85b164(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112794d58;
  if (*(long *)(param_1 + lVar3) != 0) {
    if (param_3 == 0) {
      func_0x00010c12c960();
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112794d5c));
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112794d60));
      lVar4 = (long)_DAT_112794d14;
      if (*(char *)(param_1 + _DAT_112794d6c) == '\x01') {
        func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
        func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112794d18));
      }
      func_0x00010c219960(*(undefined8 *)(param_1 + lVar4));
      func_0x00010c219960(*(undefined8 *)(param_1 + _DAT_112794d18));
      goto LAB_10b85b300;
    }
    lVar4 = (long)_DAT_112794d14;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112794d18;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794d5c);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar1);
    lVar4 = (long)_DAT_112794d20;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794d60);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + _DAT_112794d6c) = *(undefined1 *)(param_1 + _DAT_112794d68);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794d64);
    lVar4 = (long)_DAT_112794d2c;
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar1);
  }
  func_0x00010c1a78c0(param_1);
LAB_10b85b300:
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794d64);
  *(undefined8 *)(param_1 + _DAT_112794d64) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794d50);
  *(undefined8 *)(param_1 + _DAT_112794d50) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794d5c);
  *(undefined8 *)(param_1 + _DAT_112794d5c) = 0;
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + _DAT_112794d54,0);
  func_0x00010c069fa0(param_1);
  return;
}



/* Entry: 10b85b374; end: 10b85b3c7; -[SIGHeaderTitle _heightForSubtitleLabel:] */

undefined8 FUN_10b85b374(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = 0x4028000000000000;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b85b3c8; end: 10b85b3d7; -[SIGHeaderTitle titleTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85b3c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794d44);
}



/* Entry: 10b85b3d8; end: 10b85b3e7; -[SIGHeaderTitle naturalTitleWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85b3d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794d0c);
}



/* Entry: 10b85b3e8; end: 10b85b3f7; -[SIGHeaderTitle headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85b3e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794d40);
}



/* Entry: 10b85b3f8; end: 10b85b447; -[SIGHeaderTitleRowAccessoryViewContainer transition] */

void FUN_10b85b3f8(long param_1)

{
  func_0x00010c0699c0(*(undefined8 *)(param_1 + 0x50));
  func_0x00010c181140(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c0699c0(*(undefined8 *)(param_1 + 0x50));
  func_0x00010c181140(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b85b448; end: 10b85b44f; -[SIGHeaderTitleRowAccessoryViewContainer guide] */

undefined8 FUN_10b85b448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b85b450; end: 10b85b467; -[SIGHeaderTitleRowAccessoryViewContainer tooltipPresenter] */

void FUN_10b85b450(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b85b468; end: 10b85b477; -[SIGHeaderTitleRow titleTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85b468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2716f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794db8),PTR_s_titleTextField_112679fe0);
  return;
}



/* Entry: 10b85b478; end: 10b85b4eb; -[SIGHeaderTitleRow setTitleOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85b478(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112794db8;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar2),PTR_s_setHidden__1126479f8,
             param_1 < 2.220446049250313e-16);
  return;
}



/* Entry: 10b85b4ec; end: 10b85b55f; -[SIGHeaderTitleRow hitTest:withEvent:] */

void FUN_10b85b4ec(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_11270b580;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b85b560; end: 10b85b6d7; -[SIGHeaderTitleRow pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b85b560(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lStack_70;
  undefined *puStack_68;
  
  plVar6 = &lStack_70;
  _objc_retain(param_5);
  lVar7 = (long)_DAT_112794dac;
  uVar1 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010beed360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2,param_3);
  uVar4 = uVar1;
  func_0x00010c102b20();
  if ((int)uVar4 == 0) {
    lVar7 = (long)_DAT_112794db0;
    uVar3 = *(ulong *)(param_3 + lVar7);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010beed360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(param_1,param_2,param_3);
    uVar5 = uVar3;
    func_0x00010c102b20();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      puStack_68 = PTR_PTR_11270b580;
      lStack_70 = param_3;
      _objc_msgSendSuper2(param_1,param_2,&lStack_70,PTR_s_pointInside_withEvent__11261e4e8,param_5)
      ;
      goto LAB_10b85b6ac;
    }
  }
  else {
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  plVar6 = (long *)0x1;
LAB_10b85b6ac:
  _objc_release(param_5);
  return (undefined1 *)plVar6;
}



/* Entry: 10b85b6d8; end: 10b85b6ef; -[SIGHeaderTitleRow intrinsicContentSize] */

undefined1  [16] FUN_10b85b6d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4043000000000000;
  return auVar1;
}



/* Entry: 10b85b6f0; end: 10b85b837; -[SIGHeaderTitleRow _addCenteredConstraintsToTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85b6f0(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x19;
  long lVar13;
  long unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  long lVar14;
  long unaff_x25;
  long unaff_x26;
  double dVar15;
  undefined8 auStack_1d8 [2];
  undefined8 auStack_1c8 [2];
  long lStack_1b8;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112794db8;
  lVar5 = param_4;
  if (*(long *)(param_4 + lVar13) != 0) {
    func_0x00010bdf82a0(param_4,param_5,*(undefined8 *)(param_4 + _DAT_112794dd4));
    unaff_x21 = (long)_DAT_112794dd8;
    lVar2 = *(long *)(param_4 + unaff_x21);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar13 = *(long *)(param_4 + lVar13);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar13;
      func_0x00010bf49420(param_1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = &DAT_112794dd0;
      unaff_x23 = (undefined *)(long)_DAT_112794ddc;
      uVar12 = *(undefined8 *)(unaff_x23 + param_4);
      *(long *)(unaff_x23 + param_4) = lVar2;
      _objc_release(uVar12);
      _objc_release(lVar13);
      uStack_68 = *(undefined8 *)(param_4 + _DAT_112794dd0);
      uStack_60 = *(undefined8 *)(unaff_x23 + param_4);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_68,2);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_4 + unaff_x21);
      *(undefined **)(param_4 + unaff_x21) = puVar3;
      _objc_release(uVar12);
    }
    else {
      func_0x00010c181140(param_1,*(undefined8 *)(param_4 + _DAT_112794ddc));
    }
    func_0x00010bdc4b20(param_4,param_5,*(undefined8 *)(param_4 + unaff_x21));
    unaff_x19 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b85b838;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112794db8;
  lVar2 = lVar5;
  lStack_f8 = unaff_x19;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar5 + lVar14) != 0) {
    func_0x00010bdf82a0();
    unaff_x26 = (long)_DAT_112794dd4;
    func_0x00010bdf82a0(lVar5,param_5,*(undefined8 *)(lVar5 + unaff_x26));
    lVar13 = (long)_DAT_112794dac;
    lVar2 = *(long *)(lVar5 + lVar13);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar13 = lVar5;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = *(long *)(lVar5 + lVar13);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar4;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
    lVar4 = (long)_DAT_112794db0;
    lVar2 = *(long *)(lVar5 + lVar4);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      unaff_x21 = lVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = *(long *)(lVar5 + lVar4);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = lVar4;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    _objc_release(lVar2);
    unaff_x22 = *(undefined **)(lVar5 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(lVar5 + lVar14);
    puStack_d8 = unaff_x23;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = lVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_d0 = unaff_x25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&puStack_d8,2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar5 + unaff_x26);
    *(undefined **)(lVar5 + unaff_x26) = puVar3;
    _objc_release(uVar12);
    _objc_release(unaff_x25);
    _objc_release(lVar14);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,
                        *(undefined8 *)(lVar5 + unaff_x26));
    _objc_release(unaff_x21);
    lVar2 = lVar13;
    _objc_release();
    lStack_f8 = lVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10b85ba6c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_112794dac;
  cVar1 = *(char *)(lVar2 + _DAT_112794da8);
  lVar4 = *(long *)(lVar2 + lVar5);
  lStack_130 = unaff_x26;
  lStack_128 = unaff_x25;
  lStack_120 = lVar14;
  puStack_118 = unaff_x23;
  puStack_110 = unaff_x22;
  lStack_108 = unaff_x21;
  lStack_100 = lVar13;
  ppuStack_f0 = &puStack_80;
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  lVar14 = lVar2;
  if (cVar1 == '\x01') {
    if (lVar4 == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar5 = *(long *)(lVar2 + lVar5);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar5;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    lVar4 = (long)_DAT_112794db0;
    lVar5 = *(long *)(lVar2 + lVar4);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = *(long *)(lVar2 + lVar4);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar4;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    _objc_release(lVar5);
    lVar5 = (long)_DAT_112794db8;
    uVar6 = *(undefined8 *)(lVar2 + lVar5);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + lVar5);
    uStack_148 = uVar12;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = &uStack_148;
    uStack_140 = uVar8;
  }
  else {
    if (lVar4 == 0) {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar5 = *(long *)(lVar2 + lVar5);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    lVar4 = (long)_DAT_112794db0;
    lVar5 = *(long *)(lVar2 + lVar4);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = *(long *)(lVar2 + lVar4);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar4;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    _objc_release(lVar5);
    lVar5 = (long)_DAT_112794db8;
    uVar6 = *(undefined8 *)(lVar2 + lVar5);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar2 + lVar5);
    uStack_158 = uVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = &uStack_158;
    uStack_150 = uVar8;
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,puVar11,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = (long)_DAT_112794dac;
    lVar5 = *(long *)(lVar13 + lVar2);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    dVar15 = 8.0;
    uVar12 = 0;
    if (lVar5 != 0) {
      uVar12 = 0x4020000000000000;
    }
    _objc_release();
    func_0x00010bf20c00(lVar13);
    uVar8 = *(undefined8 *)(lVar13 + lVar2);
    func_0x00010beed360(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    param_3 = param_3 - dVar15;
    uVar6 = *(undefined8 *)(lVar13 + _DAT_112794db0);
    func_0x00010beed360(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    param_3 = param_3 - dVar15;
    dVar15 = param_3 + -32.0;
    _objc_release(uVar6);
    _objc_release(uVar8);
    lVar5 = (long)_DAT_112794db8;
    func_0x00010c0d5d60(*(undefined8 *)(lVar13 + lVar5));
    if (param_3 <= dVar15) {
      func_0x00010c0d5d60(*(undefined8 *)(lVar13 + lVar5));
      dVar15 = param_3;
    }
    uVar6 = *(undefined8 *)(lVar13 + lVar5);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf49420(dVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    cVar1 = *(char *)(lVar13 + _DAT_112794da8);
    lVar4 = *(long *)(lVar13 + lVar2);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    if (cVar1 == '\x01') {
      if (lVar4 == 0) {
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar2 = *(long *)(lVar13 + lVar2);
        func_0x00010bfcfbc0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar2;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      _objc_release(lVar4);
      uVar7 = *(undefined8 *)(lVar13 + lVar5);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf493c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar11 = auStack_1c8;
      auStack_1c8[0] = uVar6;
    }
    else {
      if (lVar4 == 0) {
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar2 = *(long *)(lVar13 + lVar2);
        func_0x00010bfcfbc0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar2;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      _objc_release(lVar4);
      uVar7 = *(undefined8 *)(lVar13 + lVar5);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010bf493c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar11 = auStack_1d8;
      auStack_1d8[0] = uVar6;
    }
    puVar11[1] = uVar8;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(lVar14);
    _objc_release(uVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_retain(puVar11);
      puVar9 = puVar11;
      func_0x00010bf529e0();
      if (puVar9 != (undefined8 *)0x0) {
        puVar9 = puVar11;
        func_0x00010c0dfd40(puVar11,param_5,0);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c06b700();
        _objc_release(puVar9);
        if (((ulong)puVar10 & 1) == 0) {
          func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,puVar11);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar11);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b85b838; end: 10b85ba6b; -[SIGHeaderTitleRow _addFullWidthConstraintsToTitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85b838(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar14;
  long unaff_x25;
  long unaff_x26;
  double dVar15;
  undefined8 auStack_168 [2];
  undefined8 auStack_158 [2];
  long lStack_148;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112794db8;
  lVar2 = param_4;
  lStack_88 = unaff_x19;
  if (*(long *)(param_4 + lVar14) != 0) {
    func_0x00010bdf82a0(param_4,param_5,*(undefined8 *)(param_4 + _DAT_112794dd8));
    unaff_x26 = (long)_DAT_112794dd4;
    func_0x00010bdf82a0(param_4,param_5,*(undefined8 *)(param_4 + unaff_x26));
    lVar13 = (long)_DAT_112794dac;
    lVar2 = *(long *)(param_4 + lVar13);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      unaff_x20 = param_4;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar13 = *(long *)(param_4 + lVar13);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      unaff_x20 = lVar13;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
    }
    _objc_release(lVar2);
    lVar13 = (long)_DAT_112794db0;
    lVar2 = *(long *)(param_4 + lVar13);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      unaff_x21 = param_4;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar13 = *(long *)(param_4 + lVar13);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = lVar13;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
    }
    _objc_release(lVar2);
    unaff_x22 = *(undefined8 *)(param_4 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(param_4 + lVar14);
    uStack_68 = unaff_x23;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = lVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = unaff_x25;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_4 + unaff_x26);
    *(undefined **)(param_4 + unaff_x26) = puVar3;
    _objc_release(uVar12);
    _objc_release(unaff_x25);
    _objc_release(lVar14);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,
                        *(undefined8 *)(param_4 + unaff_x26));
    _objc_release(unaff_x21);
    lVar2 = unaff_x20;
    _objc_release();
    lStack_88 = param_4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b85ba6c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112794dac;
  cVar1 = *(char *)(lVar2 + _DAT_112794da8);
  lVar4 = *(long *)(lVar2 + lVar13);
  lStack_c0 = unaff_x26;
  lStack_b8 = unaff_x25;
  lStack_b0 = lVar14;
  uStack_a8 = unaff_x23;
  uStack_a0 = unaff_x22;
  lStack_98 = unaff_x21;
  lStack_90 = unaff_x20;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  lVar7 = lVar2;
  if (cVar1 == '\x01') {
    if (lVar4 == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar13 = *(long *)(lVar2 + lVar13);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
    }
    _objc_release(lVar4);
    lVar4 = (long)_DAT_112794db0;
    lVar13 = *(long *)(lVar2 + lVar4);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = *(long *)(lVar2 + lVar4);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    _objc_release(lVar13);
    lVar13 = (long)_DAT_112794db8;
    uVar5 = *(undefined8 *)(lVar2 + lVar13);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + lVar13);
    uStack_d8 = uVar12;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = &uStack_d8;
    uStack_d0 = uVar8;
  }
  else {
    if (lVar4 == 0) {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar13 = *(long *)(lVar2 + lVar13);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
    }
    _objc_release(lVar4);
    lVar4 = (long)_DAT_112794db0;
    lVar13 = *(long *)(lVar2 + lVar4);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 0) {
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = *(long *)(lVar2 + lVar4);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    _objc_release(lVar13);
    lVar13 = (long)_DAT_112794db8;
    uVar5 = *(undefined8 *)(lVar2 + lVar13);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + lVar13);
    uStack_e8 = uVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = &uStack_e8;
    uStack_e0 = uVar8;
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,puVar11,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = (long)_DAT_112794dac;
    lVar2 = *(long *)(lVar14 + lVar13);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    dVar15 = 8.0;
    uVar12 = 0;
    if (lVar2 != 0) {
      uVar12 = 0x4020000000000000;
    }
    _objc_release();
    func_0x00010bf20c00(lVar14);
    uVar8 = *(undefined8 *)(lVar14 + lVar13);
    func_0x00010beed360(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    param_3 = param_3 - dVar15;
    uVar5 = *(undefined8 *)(lVar14 + _DAT_112794db0);
    func_0x00010beed360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    param_3 = param_3 - dVar15;
    dVar15 = param_3 + -32.0;
    _objc_release(uVar5);
    _objc_release(uVar8);
    lVar2 = (long)_DAT_112794db8;
    func_0x00010c0d5d60(*(undefined8 *)(lVar14 + lVar2));
    if (param_3 <= dVar15) {
      func_0x00010c0d5d60(*(undefined8 *)(lVar14 + lVar2));
      dVar15 = param_3;
    }
    uVar5 = *(undefined8 *)(lVar14 + lVar2);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf49420(dVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    cVar1 = *(char *)(lVar14 + _DAT_112794da8);
    lVar4 = *(long *)(lVar14 + lVar13);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar14;
    if (cVar1 == '\x01') {
      if (lVar4 == 0) {
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar13 = *(long *)(lVar14 + lVar13);
        func_0x00010bfcfbc0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar13;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
      }
      _objc_release(lVar4);
      uVar6 = *(undefined8 *)(lVar14 + lVar2);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bf493c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar11 = auStack_158;
      auStack_158[0] = uVar5;
    }
    else {
      if (lVar4 == 0) {
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar13 = *(long *)(lVar14 + lVar13);
        func_0x00010bfcfbc0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar13;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
      }
      _objc_release(lVar4);
      uVar6 = *(undefined8 *)(lVar14 + lVar2);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bf493c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar11 = auStack_168;
      auStack_168[0] = uVar5;
    }
    puVar11[1] = uVar8;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar7);
    _objc_release(uVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
      ___stack_chk_fail();
      _objc_retain(puVar11);
      puVar9 = puVar11;
      func_0x00010bf529e0();
      if (puVar9 != (undefined8 *)0x0) {
        puVar9 = puVar11;
        func_0x00010c0dfd40(puVar11,param_5,0);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c06b700();
        _objc_release(puVar9);
        if (((ulong)puVar10 & 1) == 0) {
          func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,puVar11);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar11);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b85ba6c; end: 10b85bd9b; -[SIGHeaderTitleRow _horizontalLayoutConstraintsForFillWidthCustomTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85ba6c(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 auStack_f8 [2];
  undefined8 auStack_e8 [2];
  long lStack_d8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = (long)_DAT_112794dac;
  cVar1 = *(char *)(param_4 + _DAT_112794da8);
  lVar2 = *(long *)(param_4 + lVar3);
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  lVar13 = param_4;
  if (cVar1 == '\x01') {
    if (lVar2 == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = *(long *)(param_4 + lVar3);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    lVar2 = (long)_DAT_112794db0;
    lVar3 = *(long *)(param_4 + lVar2);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = *(long *)(param_4 + lVar2);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar2;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
    lVar3 = (long)_DAT_112794db8;
    uVar5 = *(undefined8 *)(param_4 + lVar3);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_4 + lVar3);
    uStack_68 = uVar15;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = &uStack_68;
    uStack_60 = uVar8;
  }
  else {
    if (lVar2 == 0) {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = *(long *)(param_4 + lVar3);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    lVar2 = (long)_DAT_112794db0;
    lVar3 = *(long *)(param_4 + lVar2);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = *(long *)(param_4 + lVar2);
      func_0x00010beed360();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    _objc_release(lVar3);
    lVar3 = (long)_DAT_112794db8;
    uVar5 = *(undefined8 *)(param_4 + lVar3);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_4 + lVar3);
    uStack_78 = uVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = &uStack_78;
    uStack_70 = uVar8;
  }
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,puVar12,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar15);
  _objc_release(uVar5);
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = (long)_DAT_112794dac;
    lVar3 = *(long *)(lVar4 + lVar13);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    dVar14 = 8.0;
    uVar15 = 0;
    if (lVar3 != 0) {
      uVar15 = 0x4020000000000000;
    }
    _objc_release();
    func_0x00010bf20c00(lVar4);
    uVar8 = *(undefined8 *)(lVar4 + lVar13);
    func_0x00010beed360(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    param_3 = param_3 - dVar14;
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112794db0);
    func_0x00010beed360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    param_3 = param_3 - dVar14;
    dVar14 = param_3 + -32.0;
    _objc_release(uVar5);
    _objc_release(uVar8);
    lVar3 = (long)_DAT_112794db8;
    func_0x00010c0d5d60(*(undefined8 *)(lVar4 + lVar3));
    if (param_3 <= dVar14) {
      func_0x00010c0d5d60(*(undefined8 *)(lVar4 + lVar3));
      dVar14 = param_3;
    }
    uVar5 = *(undefined8 *)(lVar4 + lVar3);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf49420(dVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    cVar1 = *(char *)(lVar4 + _DAT_112794da8);
    lVar9 = *(long *)(lVar4 + lVar13);
    func_0x00010beed360();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    if (cVar1 == '\x01') {
      if (lVar9 == 0) {
        func_0x00010c08e400();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar13 = *(long *)(lVar4 + lVar13);
        func_0x00010bfcfbc0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar13;
        func_0x00010c1408a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
      }
      _objc_release(lVar9);
      uVar6 = *(undefined8 *)(lVar4 + lVar3);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bf493c0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar12 = auStack_e8;
      auStack_e8[0] = uVar5;
    }
    else {
      if (lVar9 == 0) {
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar13 = *(long *)(lVar4 + lVar13);
        func_0x00010bfcfbc0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar13;
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
      }
      _objc_release(lVar9);
      uVar6 = *(undefined8 *)(lVar4 + lVar3);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bf493c0(uVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar12 = auStack_f8;
      auStack_f8[0] = uVar5;
    }
    puVar12[1] = uVar8;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(uVar8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_retain(puVar12);
      puVar10 = puVar12;
      func_0x00010bf529e0();
      if (puVar10 != (undefined8 *)0x0) {
        puVar10 = puVar12;
        func_0x00010c0dfd40(puVar12,param_5,0);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c06b700();
        _objc_release(puVar10);
        if (((ulong)puVar11 & 1) == 0) {
          func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,puVar12);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar12);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b85bd9c; end: 10b85c067; -[SIGHeaderTitleRow _horizontalLayoutConstraintsForLeadingTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85bd9c(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 auStack_78 [2];
  undefined8 auStack_68 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112794dac;
  lVar2 = *(long *)(param_4 + lVar12);
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 8.0;
  uVar14 = 0;
  if (lVar2 != 0) {
    uVar14 = 0x4020000000000000;
  }
  _objc_release();
  func_0x00010bf20c00(param_4);
  uVar3 = *(undefined8 *)(param_4 + lVar12);
  func_0x00010beed360(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  param_3 = param_3 - dVar13;
  uVar4 = *(undefined8 *)(param_4 + _DAT_112794db0);
  func_0x00010beed360(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  param_3 = param_3 - dVar13;
  dVar13 = param_3 + -32.0;
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar2 = (long)_DAT_112794db8;
  func_0x00010c0d5d60(*(undefined8 *)(param_4 + lVar2));
  if (param_3 <= dVar13) {
    func_0x00010c0d5d60(*(undefined8 *)(param_4 + lVar2));
    dVar13 = param_3;
  }
  uVar4 = *(undefined8 *)(param_4 + lVar2);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf49420(dVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  cVar1 = *(char *)(param_4 + _DAT_112794da8);
  lVar5 = *(long *)(param_4 + lVar12);
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_4;
  if (cVar1 == '\x01') {
    if (lVar5 == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar12 = *(long *)(param_4 + lVar12);
      func_0x00010bfcfbc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar12;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
    }
    _objc_release(lVar5);
    uVar6 = *(undefined8 *)(param_4 + lVar2);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf493c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar11 = auStack_68;
    auStack_68[0] = uVar4;
  }
  else {
    if (lVar5 == 0) {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar12 = *(long *)(param_4 + lVar12);
      func_0x00010bfcfbc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar12;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
    }
    _objc_release(lVar5);
    uVar6 = *(undefined8 *)(param_4 + lVar2);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf493c0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar11 = auStack_78;
    auStack_78[0] = uVar4;
  }
  puVar11[1] = uVar3;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar7);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar9 = puVar11;
  func_0x00010bf529e0();
  if (puVar9 != (undefined8 *)0x0) {
    puVar9 = puVar11;
    func_0x00010c0dfd40(puVar11,param_5,0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c06b700();
    _objc_release(puVar9);
    if (((ulong)puVar10 & 1) == 0) {
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_5,puVar11);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 10b85c068; end: 10b85c0df; -[SIGHeaderTitleRow _activateConstraintsIfNecessary:] */

void FUN_10b85c068(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06b700();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b85c0e0; end: 10b85c1d3; -[SIGHeaderTitleRow _dismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85c0e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar5 = *(long *)(param_1 + _DAT_112794dc0);
  lVar1 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf833a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 2) {
    func_0x00010bdc2620();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdc2640(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = puVar3;
  func_0x00010c160fc0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e27a78);
  FUN_10b885008();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010befbd60(puVar3,param_2,param_1,PTR_s__pressedDismiss_1125486f0,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b85c1d4; end: 10b85c2a3; -[SIGHeaderTitleRow _backButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85c1d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
  lVar4 = *(long *)(param_1 + _DAT_112794dc0);
  lVar1 = param_1;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 2) {
    func_0x00010bdc2620();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdc2640(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c160fc0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f8aa58);
  func_0x00010befbd60(puVar3,param_2,param_1,PTR_s__pressedDismiss_1125486f0,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b85c2a4; end: 10b85c32f; -[SIGHeaderTitleRow _pressedDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85c2a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112794db4;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7a940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10b85c330; end: 10b85c333; -[SIGHeaderTitleRow headerTitleDidChangeNaturalTitleWidth:] */

void FUN_10b85c330(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateConstraints_1126509f8);
  return;
}



/* Entry: 10b85c334; end: 10b85c403; -[SIGHeaderTitleRow completeAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85c334(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794de4);
    *(undefined8 *)(param_1 + _DAT_112794de4) = 0;
  }
  else {
    lVar4 = (long)_DAT_112794db4;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794de4);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c12d560(uVar1);
    func_0x00010befa200(*(undefined8 *)(param_1 + lVar4));
    func_0x00010be763e0(param_1);
    func_0x00010be763e0(param_1);
  }
  _objc_release(uVar1);
  func_0x00010bee23e0(param_1);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10b85c404; end: 10b85c6cb; -[SIGHeaderTitleRow performTransitionToHeaderItem:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85c404(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126df778;
  _objc_alloc(PTR_PTR_1126df778);
  func_0x00010c004160();
  lVar7 = (long)_DAT_112794de4;
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_4 + lVar7);
  *(undefined8 *)(param_4 + lVar7) = param_6;
  _objc_release(uVar2);
  lVar7 = (long)_DAT_112794db0;
  uVar3 = *(ulong *)(param_4 + lVar7);
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c2792c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071ae0(uVar3,param_5,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_4 + lVar7);
    uVar2 = param_6;
    func_0x00010c2792c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1612c0(uVar6,param_5,uVar2,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34b60(puVar1,param_5,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  lVar5 = param_4;
  func_0x00010be49d20(param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112794dac;
  uVar3 = *(ulong *)(param_4 + lVar8);
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_4 + lVar8);
    func_0x00010c1612c0(uVar2,param_5,lVar5,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34b60(puVar1,param_5,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_4 + lVar8);
  func_0x00010beed360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  dVar9 = param_1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_4 + lVar7);
  func_0x00010beed360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(uVar2);
  if (dVar9 <= param_1) {
    dVar9 = param_1;
  }
  func_0x00010bf20c00(param_4);
  uVar2 = *(undefined8 *)(param_4 + _DAT_112794db8);
  func_0x00010c24dd20(param_3 - (dVar9 + dVar9),uVar2,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf34b60(puVar1,param_5,uVar2);
  _objc_release(uVar2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b85c6cc;
  puStack_80 = &UNK_110842e18;
  lStack_78 = param_4;
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_5,&puStack_98);
  func_0x00010c27a660(*(undefined8 *)(param_4 + lVar8));
  func_0x00010c27a660(*(undefined8 *)(param_4 + lVar7));
  func_0x00010bee23e0(param_4);
  func_0x00010c1cbe20(param_4);
  func_0x00010c08cdc0(param_4);
  _objc_release(lVar5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b85c6cc; end: 10b85c6f3;  */

void FUN_10b85c6cc(long param_1)

{
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10b85c6f4; end: 10b85c703; -[SIGHeaderTitleRow headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85c6f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794db4);
}



/* Entry: 10b85c704; end: 10b85c723; -[SIGHeaderTitleRow tooltipPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85c704(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112794de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b85c724; end: 10b85c733; -[SIGHeaderTitleRow titleAreaLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b85c724(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112794de8);
}



/* Entry: 10b85c734; end: 10b85c873; +[SIGTextField textFieldWithLeadingIcon:] */

void FUN_10b85c734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b3f70;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(uVar5,uVar6,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1ba3c0();
  uVar2 = param_3;
  func_0x00010bfe9720(param_3,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c23d0a0(param_3);
  uVar7 = NEON_fminnm(uVar5,0x4043000000000000);
  func_0x00010c23d0a0(param_3);
  _objc_release(param_3);
  uVar5 = NEON_fminnm(uVar6,0x4043000000000000);
  func_0x00010c013de0(0,0,uVar7,uVar5,puVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c182220(puVar3,param_2,1);
  func_0x00010c1a9f00(puVar3,param_2,uVar2);
  func_0x00010c1ba3a0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b85c874; end: 10b85c9e3; +[SIGTextField textFieldWithLeadingLabel:] */

void FUN_10b85c874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b3f70;
  _objc_retain(param_3);
  _objc_alloc();
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  func_0x00010c1ba3c0();
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e46278);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c212f20(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf6e980();
  uVar4 = 0x17;
  if (puVar3 != (undefined *)0x1) {
    uVar4 = 0x1f;
  }
  uVar5 = 0xbf;
  if (puVar3 != (undefined *)0x1) {
    uVar5 = 0x49;
  }
  func_0x00010c21ad00(puVar2,param_2,uVar4);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c167520(puVar2,param_2,0);
  func_0x00010c23d620(puVar2);
  func_0x00010c1ba3a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b85c9e4; end: 10b85c9ef; +[SIGTextField layerClass] */

void FUN_10b85c9e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e17f8);
  return;
}



/* Entry: 10b85c9f0; end: 10b85cc0b; -[SIGTextField initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b85c9f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_11270b588;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112794df0) = 0;
    func_0x00010c1970a0(puVar1);
    func_0x00010c165e00(puVar1);
    func_0x00010c165e20(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar1);
    _objc_release(puVar2);
    func_0x00010c1b9b80(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
    puVar2 = PTR_PTR_1126e1800;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4043000000000000,0x4043000000000000);
    puVar3 = puVar2;
    func_0x00010bf3ab00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf3ab00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar3);
    func_0x00010c18b5e0(puVar2);
    puStack_58 = PTR_PTR_11270b588;
    puStack_60 = puVar1;
    _objc_msgSendSuper2(&puStack_60,PTR_s_setRightView__1126592d0,puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112794df4);
    *(undefined **)((long)puVar1 + (long)_DAT_112794df4) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126e1808;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_112794df8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c1d0920(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    func_0x00010befbd60(puVar1);
    _objc_release(puVar2);
    func_0x00010bdce020(puVar1);
    func_0x00010c23d620(puVar1);
  }
  return puVar1;
}



/* Entry: 10b85cc0c; end: 10b85cc23; -[SIGTextField intrinsicContentSize] */

undefined1  [16] FUN_10b85cc0c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x4043000000000000;
  return auVar1;
}



/* Entry: 10b85cc24; end: 10b85cc33; -[SIGTextField pills] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85cc24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fbeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794df8),PTR_s_pills_11261c9c8);
  return;
}



/* Entry: 10b85cc34; end: 10b85cc43; -[SIGTextField addPill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85cc34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794df8),PTR_s_addPill__11259c3d8);
  return;
}



/* Entry: 10b85cc44; end: 10b85cc53; -[SIGTextField addPills:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85cc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794df8),PTR_s_addPills__11259c3e0);
  return;
}



/* Entry: 10b85cc54; end: 10b85cc63; -[SIGTextField removePill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85cc54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794df8),PTR_s_removePill__1126290b8);
  return;
}



/* Entry: 10b85cc64; end: 10b85cc7f; -[SIGTextField _usesV2DesignSpec] */

bool FUN_10b85cc64(long param_1)

{
  func_0x00010bf6e980();
  return param_1 == 1;
}



/* Entry: 10b85cc80; end: 10b85d1ff; -[SIGTextField _applyDesignVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85cc80(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_68;
  
  lVar6 = param_1;
  func_0x00010bee7400();
  iVar1 = (int)lVar6;
  if (iVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112794e24;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112794e28;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar5;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    lVar7 = (long)_DAT_112794dfc;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    lVar4 = (long)_DAT_112794e00;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = (long)_DAT_112794e04;
    uVar2 = *(undefined8 *)(param_1 + uStack_68);
    *(undefined **)(param_1 + uStack_68) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794e08);
    *(undefined **)(param_1 + _DAT_112794e08) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794e0c);
    *(undefined **)(param_1 + _DAT_112794e0c) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794e10);
    *(undefined **)(param_1 + _DAT_112794e10) = puVar5;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    lVar6 = (long)_DAT_112794e14;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar3;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112794dfc;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794e00);
    *(undefined **)(param_1 + _DAT_112794e00) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = (long)_DAT_112794e04;
    uVar2 = *(undefined8 *)(param_1 + uStack_68);
    *(undefined **)(param_1 + uStack_68) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794e08);
    *(undefined **)(param_1 + _DAT_112794e08) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794e0c);
    *(undefined **)(param_1 + _DAT_112794e0c) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794e10);
    *(undefined **)(param_1 + _DAT_112794e10) = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794e14);
    *(undefined **)(param_1 + _DAT_112794e14) = puVar5;
  }
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112794e18;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar5;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112794e1c;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar5;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112794e20);
  *(undefined **)(param_1 + _DAT_112794e20) = puVar5;
  _objc_release(uVar3);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c279540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfb3ea0(0x403b000000000000,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(param_1);
  _objc_release(uVar2);
  _objc_release(lVar6);
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_1);
  _objc_release(puVar5);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  lVar6 = (long)_DAT_112794e2c;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  lVar6 = (long)_DAT_112794e30;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + uStack_68);
  lVar6 = (long)_DAT_112794e34;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar5;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  lVar6 = (long)_DAT_112794e38;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  lVar6 = (long)_DAT_112794e3c;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar3;
  _objc_release(uVar2);
  lVar4 = (long)_DAT_112794df4;
  lVar6 = *(long *)(param_1 + lVar4);
  if (lVar6 != 0) {
    if (iVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + lVar4);
    }
    func_0x00010bf3ab00(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(lVar6);
    if (iVar1 != 0) {
      _objc_release(puVar5);
    }
  }
  lVar6 = (long)_DAT_112794df8;
  if (*(long *)(param_1 + lVar6) != 0) {
    func_0x00010bf6e980(param_1);
    func_0x00010c18c1a0(*(undefined8 *)(param_1 + lVar6));
  }
  lVar6 = param_1;
  func_0x00010c0fd720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar4 != 0) {
    lVar6 = param_1;
    func_0x00010c0fd720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc9c0(param_1);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be86b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__rebuildTextBackgroundLayer_11257f480);
  return;
}



/* Entry: 10b85d200; end: 10b85d2df; -[SIGTextField _updateLeadingLabelStyle] */

void FUN_10b85d200(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c08eb00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_class(PTR_PTR_1126aea58);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    return;
  }
  func_0x00010c08eb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee7400();
  func_0x00010c21ad00(param_1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b85d2e0; end: 10b85d333; -[SIGTextField _leftView_direction_safe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85d2e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf8d060();
  if (lVar1 == 0) {
    func_0x00010c08eb00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = *(long *)(param_1 + _DAT_112794df4);
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b85d334; end: 10b85d387; -[SIGTextField _rightView_direction_safe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85d334(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf8d060();
  if (lVar1 == 0) {
    param_1 = *(long *)(param_1 + _DAT_112794df4);
    _objc_retain(param_1);
  }
  else {
    func_0x00010c08eb00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b85d388; end: 10b85d42b; -[SIGTextField _clearButtonPressed] */

void FUN_10b85d388(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c26be40();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return;
    }
  }
  func_0x00010c212f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1970b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setErrorEnabled__112643648,0);
  return;
}



/* Entry: 10b85d42c; end: 10b85d4cf; -[SIGTextField _textDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85d42c(double param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010be73d20();
  lVar2 = (long)_DAT_112794df8;
  func_0x00010c19f0e0(*(undefined8 *)(param_4 + lVar2));
  func_0x00010bf4d5e0(*(undefined8 *)(param_4 + lVar2));
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar2));
  func_0x00010c1822e0((param_1 - param_3) + 4.0,0,*(undefined8 *)(param_4 + lVar2));
  uVar1 = *(undefined8 *)(param_4 + _DAT_112794df4);
  lVar2 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a3c0(uVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10b85d4d0; end: 10b85d5b3; -[SIGTextField _textWidth:] */

double FUN_10b85d4d0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  _objc_retain(param_8);
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_7,&uStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(param_8,param_7,puVar1);
  dVar2 = param_1;
  _objc_release(param_8);
  _objc_release(puVar1);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  dVar3 = dVar2;
  uVar6 = param_2;
  uVar7 = param_3;
  uVar8 = param_4;
  func_0x00010bf20c00();
  _CGRectGetMinY(dVar2,param_2,param_3,param_4);
  _CGRectGetMinY(dVar3,uVar6,uVar7,uVar8);
  dVar4 = dVar2;
  _CGRectGetMinX(dVar2,param_2,param_3,param_4);
  dVar5 = dVar3;
  _CGRectGetMinX(dVar3,uVar6,uVar7,uVar8);
  _CGRectGetMaxX(dVar3,uVar6,uVar7,uVar8);
  _CGRectGetMaxX(dVar2,param_2,param_3,param_4);
  _CGRectGetMaxY(dVar3,uVar6,uVar7,uVar8);
  _CGRectGetMaxY(dVar2,param_2,param_3,param_4);
  return param_5 + (dVar4 - dVar5);
}



/* Entry: 10b85d5b4; end: 10b85d717; -[SIGTextField _normalizeRect:forBounds:] */

double FUN_10b85d5b4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  dVar1 = param_1;
  uVar4 = param_2;
  uVar5 = param_3;
  uVar6 = param_4;
  func_0x00010bf20c00();
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _CGRectGetMinY(dVar1,uVar4,uVar5,uVar6);
  dVar2 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar3 = dVar1;
  _CGRectGetMinX(dVar1,uVar4,uVar5,uVar6);
  _CGRectGetMaxX(dVar1,uVar4,uVar5,uVar6);
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  _CGRectGetMaxY(dVar1,uVar4,uVar5,uVar6);
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  return param_5 + (dVar2 - dVar3);
}



/* Entry: 10b85d718; end: 10b85d82f; -[SIGTextField _rebuildTextBackgroundLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85d718(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112794e40;
  if (*(long *)(param_5 + lVar4) == 0) {
    lVar1 = param_5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    *(long *)(param_5 + lVar4) = lVar1;
    _objc_release(uVar3);
  }
  func_0x00010bdd5280(param_5);
  func_0x00010bdc0fe0(*(undefined8 *)(param_5 + _DAT_112794e24));
  func_0x00010c19bc00(*(undefined8 *)(param_5 + lVar4));
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,param_4 * 0.5,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar4));
  _objc_release(puVar2);
  lVar4 = param_5;
  func_0x00010bee7400();
  if ((int)lVar4 != 0) {
    func_0x00010bed5fc0(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,param_5,PTR_s_setNeedsDisplayInRect__112650988);
  return;
}



/* Entry: 10b85d830; end: 10b85dadf; -[SIGTextField _updateContentForV2DesignSpec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b85d830(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112794dfc;
  func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar5));
  lVar4 = (long)_DAT_112794e40;
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4));
  uVar1 = param_1;
  func_0x00010c071800();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c08eb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c140de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(uVar1);
    func_0x00010bdc0fe0(*(undefined8 *)(param_1 + (long)_DAT_112794e14));
    func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4));
    func_0x00010bdc0fe0(*(undefined8 *)(param_1 + (long)_DAT_112794e0c));
    func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar4));
  }
  else {
    uVar1 = param_1;
    func_0x00010bf98a80();
    if ((int)uVar1 != 0) {
      func_0x00010bdc0fe0(*(undefined8 *)(param_1 + (long)_DAT_112794e30));
      func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4));
      func_0x00010bdc0fe0(*(undefined8 *)(param_1 + (long)_DAT_112794e10));
      func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar4));
      goto LAB_10b85dac4;
    }
    uVar1 = param_1;
    func_0x00010c073040();
    if ((int)uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 != 0) {
        uVar2 = param_1;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar3 & 1) == 0) {
          func_0x00010bdc0fe0(*(undefined8 *)(param_1 + (long)_DAT_112794e2c));
          func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4));
          func_0x00010bdc0fe0(*(undefined8 *)(param_1 + (long)_DAT_112794e34));
          func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar4));
          goto LAB_10b85da68;
        }
      }
      func_0x00010bdc0fe0(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4));
      func_0x00010bdc0fe0(*(undefined8 *)(param_1 + (long)_DAT_112794e04));
      func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar4));
    }
    else {
      func_0x00010bdc0fe0(*(undefined8 *)(param_1 + (long)_DAT_112794e00));
      func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar4));
      func_0x00010bdc0fe0(*(undefined8 *)(param_1 + (long)_DAT_112794e08));
      func_0x00010c20e8e0(*(undefined8 *)(param_1 + lVar4));
    }
LAB_10b85da68:
    uVar1 = param_1;
    func_0x00010c08eb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c140de0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(uVar1);
  }
  func_0x00010c213180(param_1);
LAB_10b85dac4:
                    /* WARNING: Could not recover jumptable at 0x00010c1bdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4),PTR_s_setLineWidth__11264d168);
  return;
}



/* Entry: 10b85dae0; end: 10b85db5b; -[SIGTextField _borderBounds] */

double FUN_10b85dae0(double param_1,double param_2,undefined8 param_3)

{
  func_0x00010bf20c00();
  func_0x00010c08cec0(param_3);
  return param_1 + param_2;
}



/* Entry: 10b85db5c; end: 10b85dbc7; -[SIGTextField _contentBounds] */

void FUN_10b85db5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  
  func_0x00010bdd5280();
  func_0x00010bee7400();
  uVar1 = 0x4028000000000000;
  if (param_5 == 0) {
    uVar1 = 0x4020000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectInset_1103475b0)(param_1,param_2,param_3,param_4,uVar1,0);
  return;
}



/* Entry: 10b85dbc8; end: 10b85dd0f; -[SIGTextField _placeholderTextBounds] */

double FUN_10b85dbc8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  func_0x00010bde7ac0();
  func_0x00010bdd5280(param_5);
  func_0x00010bee7400(param_5);
  dVar3 = param_4 * 0.5 + -8.0;
  lVar1 = param_5;
  func_0x00010be49f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_5;
    func_0x00010be49f60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar3 = param_3 + 8.0;
    _objc_release(lVar1);
  }
  lVar1 = param_5;
  func_0x00010be97520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010be97520(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(param_5);
  }
  return param_1 + dVar3;
}



/* Entry: 10b85dd10; end: 10b85dddb; -[SIGTextField _textRegion] */

undefined8 FUN_10b85dd10(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be743a0();
  func_0x00010bfb3a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _CTFontGetAscent(param_2);
  _CTFontGetDescent(param_2);
  _CTFontGetSize(param_2);
  _CTFontGetAscent(param_2);
  _CTFontGetDescent(param_2);
  return param_1;
}



/* Entry: 10b85dddc; end: 10b85de6f; -[SIGTextField _inputTextWidth] */

double FUN_10b85dddc(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_3,&PTR____CFConstantStringClassReference_110e207f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becb820(param_2,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return param_1 + 10.0;
}


