/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c74fe0; end: 107c750ff; -[SCDiscoverFeedLabelPrefixIconView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c74fe0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa420;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    func_0x00010c182220();
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c39c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c39c) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c213040(puVar2);
    func_0x00010c1cfce0(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c3a0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c3a0) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c75100; end: 107c75217; -[SCDiscoverFeedLabelPrefixIconView iconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c75100(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107c75218;
  uStack_40 = 0x107c75228;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c3a4);
  func_0x00010c26c580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bda80();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107c75218; end: 107c7522f;  */

void FUN_107c75218(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107c75230; end: 107c752a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c75230(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276c3a0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c752a8; end: 107c753c7; -[SCDiscoverFeedLabelPrefixIconView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c752a8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fa420;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfb68e0(param_5);
  func_0x00010bfb68e0(param_5);
  func_0x00010c19f0e0(0,0,param_3 + -1.0,param_4 + -1.0,*(undefined8 *)(param_5 + _DAT_11276c39c));
  lVar3 = (long)_DAT_11276c3a4;
  lVar1 = *(long *)(param_5 + lVar3);
  func_0x00010c26c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_5 + lVar3);
    func_0x00010c26c580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bda80();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107c753c8; end: 107c7543f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c753c8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  FUN_107c78cd4(param_6);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(int)param_1,0,(param_3 + -2.0) - (double)(int)param_1,param_4 + -2.0,
             *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_11276c3a0),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107c75440; end: 107c7549b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c75440(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,param_3 + -2.0,param_4 + -2.0,
             *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_11276c39c),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107c7549c; end: 107c7562f; -[SCDiscoverFeedLabelPrefixIconView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7549c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276c3a4;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107c75614;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_3;
    func_0x00010c26c580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) {
      lVar4 = (long)_DAT_11276c39c;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276c3a0),param_2,1);
    }
    else {
      uVar3 = param_3;
      func_0x00010c26c580(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bda80();
      _objc_release(uVar3);
    }
    func_0x00010c1cbe20(param_1);
  }
LAB_107c75614:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c75630; end: 107c756ab;  */

/* WARNING: Possible PIC construction at 0x000107c75688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c7568c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c75630(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c78e58(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11276c3a0;
  func_0x00010c16b720(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 107c756ac; end: 107c75777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c756ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (param_3 != 0) {
    func_0x00010c14d100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  lVar3 = (long)_DAT_11276c39c;
  func_0x00010c1a9f00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276c3a0));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c75778; end: 107c75893; -[SCDiscoverFeedLabelPrefixIconView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107c75778(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3010000000;
  pcStack_48 = "";
  uStack_38 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_40 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276c3a4);
  func_0x00010c26c580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bda80();
  _objc_release(uVar2);
  auVar1 = *(undefined1 (*) [16])(puStack_58 + 4);
  __Block_object_dispose(&uStack_60,8);
  return auVar1;
}



/* Entry: 107c75894; end: 107c75903;  */

void FUN_107c75894(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c08fa60();
  if (param_2 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  return;
}



/* Entry: 107c75904; end: 107c75913; -[SCDiscoverFeedLabelPrefixIconView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c75904(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c3a4);
}



/* Entry: 107c75914; end: 107c75963; -[SCDiscoverFeedLabelPrefixIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c75914(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c3a4,0);
  _objc_storeStrong(param_1 + _DAT_11276c3a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c39c,0);
  return;
}



/* Entry: 107c75964; end: 107c7599b; -[SCDiscoverFeedLogoOverlayView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c75964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c3b0);
  *(undefined8 *)(param_1 + _DAT_11276c3b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c7599c; end: 107c759ab; -[SCDiscoverFeedLogoOverlayView setStoriesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7599c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276c3a8) = param_3;
  return;
}



/* Entry: 107c759ac; end: 107c75ae3; -[SCDiscoverFeedLogoOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c759ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa428;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1198;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c3b4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c3b8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cfc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c75ae4; end: 107c75d37; -[SCDiscoverFeedLogoOverlayView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c75ae4(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fa428;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  dVar4 = *(double *)PTR__CGRectZero_110347608;
  dVar5 = *(double *)(PTR__CGRectZero_110347608 + 8);
  dVar6 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar7 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  lVar3 = (long)_DAT_11276c3bc;
  lVar1 = *(long *)(param_5 + lVar3);
  func_0x00010c0b45c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) goto LAB_107c75ca4;
  lVar2 = *(long *)(param_5 + lVar3);
  func_0x00010c0b4600();
  _objc_release(lVar1);
  if (lVar2 == 0) goto LAB_107c75ca4;
  lVar1 = *(long *)(param_5 + lVar3);
  func_0x00010c0b4600();
  if (lVar1 == 1) {
    func_0x00010bf20c00(param_5);
    dVar6 = param_3;
    func_0x00010bf15900(param_5);
    dVar5 = param_1;
    func_0x00010bf20c00(param_5);
    dVar7 = param_4;
    func_0x00010bf15900(param_5);
    dVar5 = param_1 + (param_4 - dVar5) * 0.033;
LAB_107c75c44:
    func_0x00010bf20c00(param_5);
    func_0x00010bf20c00(param_5);
    dVar7 = dVar7 * 0.15;
    dVar6 = dVar6 * 0.8;
    dVar4 = param_3 * 0.1;
    func_0x00010b8162e0(dVar4,dVar5);
  }
  else {
    if (lVar1 == 3) {
      func_0x00010bf20c00(param_5);
      dVar6 = param_3;
      func_0x00010bf20c00(param_5);
      dVar7 = param_4;
      func_0x00010bf20c00(param_5);
      dVar5 = dVar7 * -0.15;
      dVar4 = 0.967;
LAB_107c75c00:
      dVar5 = dVar5 + dVar4 * param_4;
      goto LAB_107c75c44;
    }
    if (lVar1 == 2) {
      func_0x00010bf20c00(param_5);
      dVar6 = param_3;
      func_0x00010bf20c00(param_5);
      dVar7 = param_4;
      func_0x00010bf20c00(param_5);
      dVar5 = dVar7 * 0.15 * -0.5;
      dVar4 = 0.5;
      goto LAB_107c75c00;
    }
  }
  lVar1 = (long)_DAT_11276c3c0;
  *(double *)(param_5 + lVar1) = dVar6;
  ((double *)(param_5 + lVar1))[1] = dVar7;
LAB_107c75ca4:
  lVar1 = (long)_DAT_11276c3b8;
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar1));
  lVar3 = (long)_DAT_11276c3b4;
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010c19f0e0(dVar4,dVar5,dVar6,dVar7,*(undefined8 *)(param_5 + lVar1));
  func_0x00010bfb68e0(param_5);
  _CGRectGetWidth();
  func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010c17a6a0(dVar4 * 0.5,*(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 107c75d38; end: 107c75f1b; -[SCDiscoverFeedLogoOverlayView _downloadAndSetUpLogo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c75d38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar8 = (long)_DAT_11276c3bc;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010c0b45c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0b45c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107dd4c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar4);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b85a8;
    _objc_alloc(PTR_PTR_1126b85a8);
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c01cf00(puVar5);
    _objc_release(puVar6);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276c3b0);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bfa7900();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11276c3c4);
    *(undefined8 *)(param_1 + _DAT_11276c3c4) = uVar2;
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 107c75f1c; end: 107c76007;  */

void FUN_107c75f1c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107c76008;
  puStack_50 = &UNK_110924610;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 107c76008; end: 107c76077;  */

void FUN_107c76008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beadec0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c76078; end: 107c7608f;  */

void FUN_107c76078(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107c76090; end: 107c76183; -[SCDiscoverFeedLogoOverlayView _setupLogoImageViewWithImage:] */

void FUN_107c76090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107c76184; end: 107c761b7;  */

void FUN_107c76184(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beadea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c761b8; end: 107c761c7; -[SCDiscoverFeedLogoOverlayView _setupLogoImageViewWithFinalImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c761b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c3b8),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 107c761c8; end: 107c76397; -[SCDiscoverFeedLogoOverlayView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c761c8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11276c3bc;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  if (param_3 == uVar5) {
    _objc_release(uVar5);
    _objc_release(param_3);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107c76358;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11276c3c4));
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cfc0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11276c3b8));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276c3c8);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar2);
    func_0x00010bed3c40(param_1);
    func_0x00010c1cbe20(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
LAB_107c76358:
  _objc_release(param_3);
  return;
}



/* Entry: 107c76398; end: 107c763c3;  */

void FUN_107c76398(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c763c4; end: 107c7662f; -[SCDiscoverFeedLogoOverlayView _updateBackgroundViewForCurrentViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c763c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = (long)_DAT_11276c3bc;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c0b4600();
  if (lVar1 == 1) {
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c0b4560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar2 = 0;
      FUN_107c769ac(0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = (long)_DAT_11276c3b4;
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010bfcd9c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c0b4560(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0;
      FUN_107c76750(0,uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = (long)_DAT_11276c3b4;
      uVar6 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010bfcd9c0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60();
      _objc_release(uVar6);
    }
    uVar6 = 0;
    goto LAB_107c765d0;
  }
  if (lVar1 == 3) {
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c0b4560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar6 = 2;
      uVar2 = 2;
      goto LAB_107c7659c;
    }
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0b4560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 2;
    uVar3 = 2;
  }
  else {
    if (lVar1 != 2) {
      return;
    }
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c0b4560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar6 = 1;
      uVar2 = 1;
LAB_107c7659c:
      FUN_107c769ac(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = (long)_DAT_11276c3b4;
      uVar3 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010bfcd9c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60();
      goto LAB_107c765d0;
    }
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c0b4560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 1;
    uVar3 = 1;
  }
  FUN_107c76750(uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11276c3b4;
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010bfcd9c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar4);
LAB_107c765d0:
  _objc_release(uVar3);
  _objc_release(uVar2);
  FUN_107c76c30(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010bfcd9c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 107c76630; end: 107c7663f; -[SCDiscoverFeedLogoOverlayView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c76630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c3bc);
}



/* Entry: 107c76640; end: 107c7664f; -[SCDiscoverFeedLogoOverlayView imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c76640(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c3b0);
}



/* Entry: 107c76650; end: 107c7665f; -[SCDiscoverFeedLogoOverlayView storiesConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c76650(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c3a8);
}



/* Entry: 107c76660; end: 107c7666f; -[SCDiscoverFeedLogoOverlayView queuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c76660(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c3c8);
}



/* Entry: 107c76670; end: 107c766af; -[SCDiscoverFeedLogoOverlayView setQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c76670(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c3c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c766b0; end: 107c766bf; -[SCDiscoverFeedLogoOverlayView bannerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c766b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c3ac);
}



/* Entry: 107c766c0; end: 107c766cf; -[SCDiscoverFeedLogoOverlayView setBannerHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c766c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276c3ac) = param_1;
  return;
}



/* Entry: 107c766d0; end: 107c7674f; -[SCDiscoverFeedLogoOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c766d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c3c8,0);
  _objc_storeStrong(param_1 + _DAT_11276c3b0,0);
  _objc_storeStrong(param_1 + _DAT_11276c3bc,0);
  _objc_storeStrong(param_1 + _DAT_11276c3c4,0);
  _objc_storeStrong(param_1 + _DAT_11276c3b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c3b4,0);
  return;
}



/* Entry: 107c76750; end: 107c769ab;  */

undefined ** FUN_107c76750(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **unaff_x23;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuVar1 = param_2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGColorEqualToColor(ppuVar1,ppuVar3);
  _objc_release(ppuVar2);
  uVar9 = 0x3fe3333340000000;
  if ((int)ppuVar1 == 0) {
    uVar9 = 0x3ff0000000000000;
  }
  ppuVar1 = param_2;
  ppuVar3 = param_2;
  if (param_1 == 2) {
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010bf414e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
LAB_107c76944:
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
LAB_107c76958:
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  else {
    if (param_1 == 1) {
      func_0x00010bf414e0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010bf414e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      unaff_x23 = param_2;
      func_0x00010bf414e0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      goto LAB_107c76958;
    }
    if (param_1 == 0) {
      func_0x00010bf414e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010bf414e0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      goto LAB_107c76944;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (undefined **)0x2) {
    param_2 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_2;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
LAB_107c76bc0:
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
LAB_107c76bd4:
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(ppuVar1);
    _objc_release();
  }
  else {
    if (param_2 == (undefined **)0x1) {
      param_2 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = param_2;
      func_0x00010bf414e0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf414e0(0x3fd999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf414e0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_107c76bd4;
    }
    ppuVar2 = unaff_x23;
    if (param_2 == (undefined **)0x0) {
      param_2 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = param_2;
      func_0x00010bf414e0(0x3fd999999999999a);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf414e0(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      goto LAB_107c76bc0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111819b8;
    if (param_2 != (undefined **)0x1) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111819a0;
    }
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_1111819d0;
    if (param_2 != (undefined **)0x2) {
      ppuVar2 = ppuVar1;
    }
    return ppuVar2;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return ppuVar2;
}



/* Entry: 107c769ac; end: 107c76c2f;  */

undefined ** FUN_107c769ac(undefined *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **unaff_x23;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar8 = &puStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == (undefined *)0x2) {
    param_1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_90 = puVar5;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puStack_88 = puVar7;
LAB_107c76bc0:
    unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,ppuVar8,2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_1 != (undefined *)0x1) {
      if (param_1 != (undefined *)0x0) goto LAB_107c76bf4;
      param_1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf414e0(0x3fd999999999999a);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_68 = puVar5;
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bf414e0(0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      ppuVar8 = &puStack_68;
      puStack_60 = puVar7;
      goto LAB_107c76bc0;
    }
    param_1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_80 = puVar5;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf414e0(0x3fd999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_78 = puVar7;
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release();
LAB_107c76bf4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x23);
    return unaff_x23;
  }
  ___stack_chk_fail();
  ppuVar8 = &PTR__OBJC_CLASS___NSConstantArray_1111819b8;
  if (param_1 != (undefined *)0x1) {
    ppuVar8 = &PTR__OBJC_CLASS___NSConstantArray_1111819a0;
  }
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111819d0;
  if (param_1 != (undefined *)0x2) {
    ppuVar1 = ppuVar8;
  }
  return ppuVar1;
}



/* Entry: 107c76c30; end: 107c76c5b;  */

undefined ** FUN_107c76c30(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111819b8;
  if (param_1 != 1) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_1111819a0;
  }
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_1111819d0;
  if (param_1 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 107c76c5c; end: 107c76d03;  */

void FUN_107c76c5c(double param_1,double param_2)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = 0.15;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  dVar3 = param_2 * 0.15 * dVar2;
  dVar4 = dVar3 * 0.75;
  func_0x00010b816218(dVar3);
  dVar2 = (double)(long)(param_1 * 0.8 * dVar2 * 0.75 * dVar3) / dVar3;
  func_0x00010b816218();
                    /* WARNING: Could not recover jumptable at 0x00010c2971d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar2,(double)(long)(dVar4 * dVar3) / dVar3,PTR__OBJC_CLASS___NSValue_1126afdf8,
             PTR_s_valueWithCGSize__112683698);
  return;
}



/* Entry: 107c76d04; end: 107c76d53;  */

void FUN_107c76d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20eaa0();
  func_0x00010c161220(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c76d54; end: 107c76f7f; -[SCDiscoverFeedPublisherStoryLabelOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c76d54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fa430;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1198;
    _objc_opt_new();
    puVar3 = puVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c3cc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c3cc) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c1cfce0(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar3);
    func_0x00010c1bdb00(puVar2);
    func_0x00010c160fc0(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c3d0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c3d0) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c3d4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c3d4) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c3d8);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c3d8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c3dc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c3dc) = puVar2;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c76f80; end: 107c7700f;  */

void FUN_107c76f80(void)

{
  _objc_alloc(PTR_PTR_1126d5ac0);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c77010; end: 107c772ef; -[SCDiscoverFeedPublisherStoryLabelOverlayView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c77010(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fa430;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar9 = param_1;
  _CGRectGetMinX();
  dVar6 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  lVar4 = (long)_DAT_11276c3e0;
  dVar10 = *(double *)(param_5 + lVar4);
  dVar15 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar7 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar11 = *(double *)(param_5 + lVar4);
  dVar8 = param_1;
  uVar12 = param_2;
  uVar14 = param_3;
  uVar16 = param_4;
  func_0x00010b816528();
  func_0x00010b8166f8(param_5);
  dVar13 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar17 = dVar13 * 0.0444;
  lVar5 = (long)_DAT_11276c3e4;
  lVar4 = *(long *)(param_5 + lVar5);
  func_0x00010c117840(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  dVar18 = dVar17;
  if (0.0 < dVar13) {
    uVar1 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c117840(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    dVar18 = dVar13 + dVar17 * 2.0;
    _objc_release(uVar1);
  }
  _objc_release(lVar4);
  dVar9 = dVar9 + dVar17;
  dVar13 = dVar6 + dVar10 + dVar17;
  dVar15 = dVar15 - (dVar17 + dVar17);
  dVar18 = (dVar7 - dVar11) - (dVar17 + dVar18);
  func_0x00010b816528(dVar9,dVar13,dVar15,dVar18);
  dVar6 = dVar9;
  _CGRectGetMaxY();
  dVar7 = dVar9;
  func_0x00010be497e0(dVar9,dVar13,dVar15,dVar18,dVar6,param_5);
  lVar5 = (long)_DAT_11276c3dc;
  uVar2 = *(ulong *)(param_5 + lVar5);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(param_5 + _DAT_11276c3d0);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c08fa60();
    if (lVar3 == 0) goto LAB_107c7721c;
    func_0x00010be49940(dVar9,dVar13,dVar15,dVar18,dVar6,param_5);
  }
  else {
LAB_107c7721c:
    uVar1 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinY();
    func_0x00010be49940(dVar9,dVar13,dVar15,dVar18,dVar7,param_5);
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) goto LAB_107c77268;
  }
  _objc_release(lVar4);
LAB_107c77268:
  func_0x00010be48de0(dVar9,dVar13,dVar15,dVar18,param_5);
  func_0x00010be48d60(param_1,param_2,param_3,param_4,dVar8,uVar12,uVar14,uVar16,param_5);
  func_0x00010be49500(dVar8,uVar12,uVar14,uVar16,dVar17,param_5);
  return;
}



/* Entry: 107c772f0; end: 107c77407; -[SCDiscoverFeedPublisherStoryLabelOverlayView _layoutProgressBarWithCardBoundsFrame:inset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c772f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,long param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = param_1;
  _CGRectGetWidth();
  dVar3 = dVar2 + param_5 * -2.0;
  uVar1 = *(undefined8 *)(param_6 + _DAT_11276c3e4);
  func_0x00010c117840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  _objc_release(uVar1);
  dVar4 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar4 = param_5 + dVar4;
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  param_5 = (param_1 - dVar2) - param_5;
  func_0x00010b8162e0(dVar4,param_5,dVar3,dVar2);
  uVar1 = *(undefined8 *)(param_6 + _DAT_11276c3d8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar4,param_5,dVar3,dVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c77408; end: 107c7750f; -[SCDiscoverFeedPublisherStoryLabelOverlayView _layoutTitleLabelWithEffectiveTextBounds:startYPos:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c77408(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  double param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = (long)_DAT_11276c3d0;
  dVar4 = param_4;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_6 + lVar1));
  uVar3 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  param_5 = param_5 - dVar4;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010b8162e0(uVar3,param_5,param_1,dVar4);
  lVar2 = (long)_DAT_11276c3e8;
  func_0x00010c213040(*(undefined8 *)(param_6 + lVar1));
  func_0x00010b81681c(uVar3,param_5,param_1,dVar4,param_6,*(undefined8 *)(param_6 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_6 + lVar1),PTR_s_setFrame__112645658)
  ;
  return;
}



/* Entry: 107c77510; end: 107c77663; -[SCDiscoverFeedPublisherStoryLabelOverlayView _layoutSubtitleViewWithEffectiveTextBounds:startYPos:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c77510(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_11276c3dc;
  uVar1 = *(undefined8 *)(param_6 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_6 + _DAT_11276c3e4);
  func_0x00010c261160(uVar2);
  _objc_retainAutoreleasedReturnValue();
  dVar4 = param_2;
  func_0x00010c23d720(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  param_5 = param_5 - dVar4;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  func_0x00010b81681c(uVar1,param_5,param_1,dVar4,param_6,*(undefined8 *)(param_6 + _DAT_11276c3e8))
  ;
  uVar2 = *(undefined8 *)(param_6 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar1,param_5,param_1,dVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107c77664; end: 107c77867; -[SCDiscoverFeedPublisherStoryLabelOverlayView _layoutBackgroundGradientViewWithCardBounds:cardBoundsFrame:horizontalMargin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c77664(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  double param_5,double param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double in_stack_00000000;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bdd54c0();
  uVar1 = *(undefined8 *)(param_9 + _DAT_11276c3e4);
  param_4 = (param_1 - in_stack_00000000) / param_4;
  func_0x00010bf43300(uVar1);
  FUN_107c78b54();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11276c3cc;
  uVar2 = *(undefined8 *)(param_9 + lVar10);
  func_0x00010bfcd9c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_4 + (1.0 - param_4) * 0.5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_9 + lVar10);
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bff00();
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar6 = *(long *)(param_9 + _DAT_11276c3d0);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar7 == 0) {
    param_5 = *(double *)PTR__CGRectZero_110347608;
    param_6 = *(double *)(PTR__CGRectZero_110347608 + 8);
    param_7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    param_8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    lVar7 = *(long *)(param_9 + lVar10);
  }
  else {
    lVar7 = *(long *)(param_9 + lVar10);
  }
  func_0x00010c19f0e0(param_5,param_6,param_7,param_8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)_DAT_11276c3e4;
  dVar12 = param_5;
  dVar14 = param_6;
  func_0x00010c26e9e0(*(undefined8 *)(lVar7 + lVar10));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar9 = (long)_DAT_11276c3d4;
  uVar1 = *(undefined8 *)(lVar7 + lVar9);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar6 = *(long *)(lVar7 + lVar10);
  func_0x00010c26e9e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar7 + lVar10);
  func_0x00010c26ea00();
  _objc_release(lVar6);
  puVar3 = PTR_PTR_1126d5ac0;
  if (lVar8 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(lVar7 + lVar10);
  func_0x00010c26e9e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d6c0(puVar3);
  _objc_release(uVar1);
  lVar6 = *(long *)(lVar7 + lVar10);
  func_0x00010c26ea00();
  if (lVar6 == 0) {
    return;
  }
  if (lVar6 == 2) {
    dVar13 = param_5;
    _CGRectGetMinX(param_5,param_6,param_7,param_8);
    dVar15 = param_5;
    _CGRectGetWidth(param_5,param_6,param_7,param_8);
    dVar13 = dVar13 + (dVar15 - dVar12) * 0.5;
    _CGRectGetMaxY(param_5,param_6,param_7,param_8);
    dVar15 = param_5;
  }
  else {
    fVar11 = 0.0;
    fVar17 = 0.0;
    if (lVar6 != 1) goto LAB_107c77a24;
    _CGRectGetMinX(param_5,param_6,param_7,param_8);
    dVar15 = param_5;
    func_0x00010bfb68e0(*(undefined8 *)(lVar7 + _DAT_11276c3d0));
    _CGRectGetMinY();
    dVar13 = param_5;
  }
  fVar17 = (float)dVar13;
  fVar11 = (float)dVar15;
LAB_107c77a24:
  dVar15 = (double)fVar17;
  dVar13 = (double)fVar11;
  dVar16 = dVar13 - dVar14;
  uVar2 = *(undefined8 *)(lVar7 + lVar10);
  func_0x00010c26e9e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08cb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c271200();
  dVar16 = dVar16 - dVar13;
  func_0x00010b8162e0(dVar15,dVar16,dVar12,dVar14);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010b81681c(dVar15,dVar16,dVar12,dVar14,lVar7,*(undefined8 *)(lVar7 + _DAT_11276c3e8));
  uVar1 = *(undefined8 *)(lVar7 + lVar9);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar15,dVar16,dVar12,dVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c77868; end: 107c77b0f; -[SCDiscoverFeedPublisherStoryLabelOverlayView _layoutBadgeWithEffectiveTextBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c77868(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  
  lVar7 = (long)_DAT_11276c3e4;
  dVar9 = param_1;
  dVar11 = param_2;
  func_0x00010c26e9e0(*(undefined8 *)(param_5 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = (long)_DAT_11276c3d4;
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_5 + lVar7);
  func_0x00010c26e9e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(param_5 + lVar7);
  func_0x00010c26ea00();
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126d5ac0;
  if (lVar4 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c26e9e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d6c0(puVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_5 + lVar7);
  func_0x00010c26ea00();
  if (lVar3 == 0) {
    return;
  }
  if (lVar3 == 2) {
    dVar10 = param_1;
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar12 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar10 = dVar10 + (dVar12 - dVar9) * 0.5;
    _CGRectGetMaxY(param_1,param_2,param_3,param_4);
    dVar12 = param_1;
  }
  else {
    fVar8 = 0.0;
    fVar14 = 0.0;
    if (lVar3 != 1) goto LAB_107c77a24;
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar12 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11276c3d0));
    _CGRectGetMinY();
    dVar10 = param_1;
  }
  fVar14 = (float)dVar10;
  fVar8 = (float)dVar12;
LAB_107c77a24:
  dVar12 = (double)fVar14;
  dVar10 = (double)fVar8;
  dVar13 = dVar10 - dVar11;
  uVar5 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c26e9e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c08cb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c271200();
  dVar13 = dVar13 - dVar10;
  func_0x00010b8162e0(dVar12,dVar13,dVar9,dVar11);
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010b81681c(dVar12,dVar13,dVar9,dVar11,param_5,*(undefined8 *)(param_5 + _DAT_11276c3e8));
  uVar2 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar12,dVar13,dVar9,dVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107c77b10; end: 107c78017; -[SCDiscoverFeedPublisherStoryLabelOverlayView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c77b10(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  lVar6 = (long)_DAT_11276c3e4;
  uVar5 = *(ulong *)(param_2 + lVar6);
  _objc_retain(param_4);
  _objc_retain(uVar5);
  if (param_4 == uVar5) {
    _objc_release(uVar5);
    _objc_release(param_4);
    goto LAB_107c77ffc;
  }
  if (uVar5 == 0) {
    _objc_release();
  }
  else {
    uVar3 = param_4;
    func_0x00010c071ae0(param_4,param_3,uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
    if ((uVar3 & 1) != 0) goto LAB_107c77ffc;
  }
  uVar5 = param_4;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  *(ulong *)(param_2 + lVar6) = uVar5;
  _objc_release(uVar4);
  uVar5 = param_4;
  func_0x00010c230e00();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_4;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010b8047e8();
    *(ulong *)(param_2 + _DAT_11276c3e8) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c2711a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_2 + _DAT_11276c3d0),param_3,uVar5);
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c26e9e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 != 0) {
      lVar7 = (long)_DAT_11276c3d4;
      lVar6 = *(long *)(param_2 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      if (lVar6 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_2 + lVar7));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_2 + lVar7);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_2,param_3,uVar4);
        _objc_release(uVar4);
      }
    }
    uVar5 = param_4;
    func_0x00010c26e9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + _DAT_11276c3d4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = param_4;
    func_0x00010c261160();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276c3dc;
    if (uVar5 != 0) {
      lVar7 = *(long *)(param_2 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      if (lVar7 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_2 + lVar6));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_2 + lVar6);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_2,param_3,uVar4);
        _objc_release(uVar4);
      }
    }
    uVar4 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbe00();
    _objc_release(uVar4);
    uVar5 = param_4;
    func_0x00010c261160(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(uVar4);
LAB_107c77e64:
    _objc_release(uVar5);
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11276c3d0),param_3,1);
    lVar6 = (long)_DAT_11276c3d4;
    iVar1 = (int)*(undefined8 *)(param_2 + lVar6);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      uVar4 = *(undefined8 *)(param_2 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
    }
    lVar6 = (long)_DAT_11276c3dc;
    iVar1 = (int)*(undefined8 *)(param_2 + lVar6);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      uVar5 = *(ulong *)(param_2 + lVar6);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      goto LAB_107c77e64;
    }
  }
  uVar5 = param_4;
  func_0x00010c117840();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 != 0) {
    lVar7 = (long)_DAT_11276c3d8;
    lVar6 = *(long *)(param_2 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    if (lVar6 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_2 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_2,param_3,uVar4);
      _objc_release(uVar4);
    }
  }
  uVar5 = param_4;
  func_0x00010c117840(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11276c3d8;
  uVar3 = *(ulong *)(param_2 + lVar6);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar5 = param_4;
  func_0x00010c117840(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117800();
  if (0.0 < param_1) {
    uVar3 = param_4;
    func_0x00010c117840(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117800();
  }
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar4);
  if (0.0 < param_1) {
    _objc_release(uVar3);
  }
  _objc_release(uVar5);
  uVar5 = param_4;
  func_0x00010c117840();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
    uVar5 = param_4;
    func_0x00010c230e00();
    if ((int)uVar5 != 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11276c3cc),param_3,1);
    }
  }
  else {
    _objc_release();
  }
  func_0x00010c1cbe20(param_2);
LAB_107c77ffc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107c78018; end: 107c780d3; -[SCDiscoverFeedPublisherStoryLabelOverlayView _bottomElementsMinY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c78018(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276c3e4;
  lVar1 = *(long *)(param_2 + lVar3);
  func_0x00010c26e9e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_2 + lVar3);
    func_0x00010c26ea00();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_2 + _DAT_11276c3d4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      _CGRectGetMinY();
      _objc_release(uVar2);
      return param_1;
    }
  }
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + _DAT_11276c3d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetMinY_1103475a0)();
  return param_1;
}



/* Entry: 107c780d4; end: 107c780e3; -[SCDiscoverFeedPublisherStoryLabelOverlayView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c780d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c3e4);
}



/* Entry: 107c780e4; end: 107c780f3; -[SCDiscoverFeedPublisherStoryLabelOverlayView topObstructionHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c780e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c3e0);
}



/* Entry: 107c780f4; end: 107c78103; -[SCDiscoverFeedPublisherStoryLabelOverlayView setTopObstructionHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c780f4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276c3e0) = param_1;
  return;
}



/* Entry: 107c78104; end: 107c78183; -[SCDiscoverFeedPublisherStoryLabelOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c78104(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c3e4,0);
  _objc_storeStrong(param_1 + _DAT_11276c3d8,0);
  _objc_storeStrong(param_1 + _DAT_11276c3d4,0);
  _objc_storeStrong(param_1 + _DAT_11276c3dc,0);
  _objc_storeStrong(param_1 + _DAT_11276c3d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c3cc,0);
  return;
}



/* Entry: 107c78184; end: 107c7821b; -[SCDiscoverFeedPublisherStoryProgressBarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c78184(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa438;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c3ec);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c3ec) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c7821c; end: 107c783f3; -[SCDiscoverFeedPublisherStoryProgressBarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7821c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fa438;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126d5b38;
  uVar5 = *(ulong *)(param_5 + _DAT_11276c3f0);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  dVar6 = param_1;
  func_0x00010bf525a0(uVar1);
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,dVar6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  lVar4 = param_5;
  func_0x00010c22a660(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(lVar4);
  _objc_release(puVar2);
  func_0x00010c117800(uVar1);
  func_0x00010bf20c00(param_5);
  param_1 = param_1 * param_3;
  func_0x00010bf20c00(param_5);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (param_3 <= param_1) {
    param_1 = param_3;
  }
  dVar6 = 0.0;
  if (0.0 <= param_1) {
    dVar6 = param_1;
  }
  func_0x00010bf20c00(param_5);
  func_0x00010bf525a0(uVar1);
  func_0x00010bf19a00(0,0,dVar6,param_4,param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_5 + _DAT_11276c3ec));
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 107c783f4; end: 107c7856f; -[SCDiscoverFeedPublisherStoryProgressBarView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c783f4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5b38;
  _objc_opt_class(PTR_PTR_1126d5b38);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11276c3f0;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_107c78550;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010bf13d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar6 = param_1;
    func_0x00010c22a660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(lVar6);
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bfb5360(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c19bc00(*(undefined8 *)(param_1 + _DAT_11276c3ec));
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
LAB_107c78550:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c78570; end: 107c7857f; -[SCDiscoverFeedPublisherStoryProgressBarView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c78570(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c3f0);
}



/* Entry: 107c78580; end: 107c785bf; -[SCDiscoverFeedPublisherStoryProgressBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c78580(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c3f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c3ec,0);
  return;
}



/* Entry: 107c785c0; end: 107c78703; -[SCDiscoverFeedPublisherStorySubtitleView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c785c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa440;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_opt_new();
    lVar4 = (long)_DAT_11276c3f4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c16e060(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c207380(0x4008000000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c166c00(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c3f8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c3fc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bef6d60(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c78704; end: 107c7882b; -[SCDiscoverFeedPublisherStorySubtitleView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c78704(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fa440;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11276c3f4));
  func_0x00010c23d620(*(undefined8 *)(param_1 + _DAT_11276c3fc));
  puVar2 = PTR_PTR_1126d7350;
  uVar4 = *(ulong *)(param_1 + _DAT_11276c400);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if ((uVar1 != 0) &&
     ((uVar3 = uVar4, func_0x00010bfed580(), uVar3 == 1 || (func_0x00010bfed580(), uVar4 == 2)))) {
    lVar5 = (long)_DAT_11276c3f8;
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bc85160();
    func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar5));
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 107c7882c; end: 107c7893f; -[SCDiscoverFeedPublisherStorySubtitleView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7882c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d7350;
  _objc_opt_class(PTR_PTR_1126d7350);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11276c400;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_107c78920;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    func_0x00010c15b1c0(param_1);
    func_0x00010c1fbe00(*(undefined8 *)(param_1 + _DAT_11276c3f4));
    func_0x00010c1cbe20(param_1);
  }
LAB_107c78920:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c78940; end: 107c7894f; -[SCDiscoverFeedPublisherStorySubtitleView sizeWithViewModel:effectiveTextBounds:] */

undefined1  [16] FUN_107c78940(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 107c78950; end: 107c7895f; -[SCDiscoverFeedPublisherStorySubtitleView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c78950(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c400);
}



/* Entry: 107c78960; end: 107c789bf; -[SCDiscoverFeedPublisherStorySubtitleView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c78960(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c400,0);
  _objc_storeStrong(param_1 + _DAT_11276c3fc,0);
  _objc_storeStrong(param_1 + _DAT_11276c3f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c3f4,0);
  return;
}



/* Entry: 107c789c0; end: 107c78a93; -[SCDiscoverFeedRecommendOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c789c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa448;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar4 = (long)_DAT_11276c404;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c78a94; end: 107c78b2f; -[SCDiscoverFeedRecommendOverlayView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c78a94(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fa448;
  lStack_40 = param_5;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar1 = param_4 * 0.08;
  func_0x00010bf20c00(param_5);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(param_3 * 0.05,(param_4 - dVar1) - param_3 * 0.05,dVar1,dVar1,
                      *(undefined8 *)(param_5 + _DAT_11276c404));
  return;
}



/* Entry: 107c78b30; end: 107c78b53; -[SCDiscoverFeedRecommendOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c78b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c404,0);
  return;
}



/* Entry: 107c78b54; end: 107c78cd3;  */

double FUN_107c78b54(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf414e0((double)param_1 * 0.5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = (double)param_1 * 0.8;
  puVar6 = puVar5;
  func_0x00010bf414e0(dVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    fVar9 = SUB84(dVar10,0);
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      dVar10 = 0.0;
    }
    else {
      func_0x00010bfb2c80(puVar3);
      dVar10 = (double)fVar9;
    }
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return dVar10;
    }
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_retain();
    func_0x00010c0c7340(0x4024000000000000,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = 0.0;
    puVar7 = puVar3;
    FUN_107c92664(0,0x402b000000000000,puVar3,puVar1,puVar2,4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return dVar10;
}



/* Entry: 107c78cd4; end: 107c78dbb;  */

double FUN_107c78cd4(float param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    dVar6 = 0.0;
  }
  else {
    func_0x00010bfb2c80(puVar2);
    dVar6 = (double)param_1;
  }
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return dVar6;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain();
  func_0x00010c0c7340(0x4024000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 0.0;
  puVar4 = puVar2;
  FUN_107c92664(0,0x402b000000000000,puVar2,puVar1,puVar3,4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return dVar6;
}



/* Entry: 107c78dbc; end: 107c78f8f;  */

void FUN_107c78dbc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain();
  func_0x00010c0c7340(0x4024000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_107c92664(0,0x402b000000000000,param_1,puVar1,puVar2,4);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107c78f90; end: 107c791f7;  */

void FUN_107c78f90(double param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  double dVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar8 = param_2;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar5 = (undefined *)0x0;
    lVar7 = -1;
    puVar6 = (undefined *)0x0;
    do {
      puVar1 = param_2;
      func_0x00010bf529e0();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar1 + lVar7 == (undefined *)0x0) {
        func_0x000107c7ad80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = param_2;
        func_0x00010bf446e0(param_2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar1 = param_2;
        func_0x00010c25e980();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x000107c7ad80();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
      _objc_release(puVar1);
      dVar9 = 10.0;
      puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      _objc_retain(puVar8);
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x00010c23d660(puVar8);
      _objc_release(puVar8);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (param_1 < dVar9) {
        _objc_release(puVar8);
        puVar8 = puVar6;
        break;
      }
      _objc_release(puVar6);
      puVar5 = puVar5 + 1;
      puVar1 = param_2;
      func_0x00010bf529e0();
      lVar7 = lVar7 + -1;
      puVar6 = puVar8;
    } while (puVar5 < puVar1);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 107c791f8; end: 107c79227;  */

void FUN_107c791f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4033000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 107c79228; end: 107c792eb;  */

void FUN_107c79228(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain();
  func_0x00010bf1ecc0(0x4031000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_107c792ec(0x4036000000000000,0x4010000000000000,0,0x4000000000000000,puVar1,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = param_1;
  FUN_107c925f4(param_1,puVar3);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107c792ec; end: 107c794bf;  */

void FUN_107c792ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new();
  func_0x00010c1c82e0(param_1);
  func_0x00010c1c3ba0(param_1,puVar1);
  func_0x00010c1bdb00(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  func_0x00010c1fe720(param_2);
  func_0x00010c1fe7a0(param_3,param_4,puVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf51e00();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_retain();
    func_0x00010bf1ecc0(0x4028000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    FUN_107c792ec(0x402e000000000000,0x4010000000000000,0,0x4000000000000000,puVar2,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar5 = puVar1;
    FUN_107c925f4(puVar1,puVar4);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107c794c0; end: 107c79583;  */

void FUN_107c794c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain();
  func_0x00010bf1ecc0(0x4028000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_107c792ec(0x402e000000000000,0x4010000000000000,0,0x4000000000000000,puVar1,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = param_1;
  FUN_107c925f4(param_1,puVar3);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107c79584; end: 107c79657;  */

void FUN_107c79584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain();
  func_0x00010bf6d680(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  FUN_107c792ec(0x402b000000000000,0x4018000000000000,0,0x3ff0000000000000,puVar1,puVar2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_107c925f4(param_2,puVar3);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107c79658; end: 107c796c3;  */

void FUN_107c79658(undefined8 param_1,ulong param_2)

{
  undefined8 unaff_x21;
  
  _objc_retain();
  if ((param_2 < 0x10) && ((0xe82fU >> (ulong)((uint)param_2 & 0x1f) & 1) != 0)) {
    unaff_x21 = param_1;
    FUN_107c79584(*(undefined8 *)(&UNK_10dee2b40 + param_2 * 8),param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 107c796c4; end: 107c7979f;  */

void FUN_107c796c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_2 == 0) || (lVar3 = param_2, func_0x00010c08fa60(), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    if (param_5 == 0) {
      uVar1 = 4;
    }
    uVar2 = param_3;
    FUN_107c792ec(param_1,0,*(undefined8 *)PTR__CGSizeZero_110347620,
                  *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_3,param_4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    FUN_107c925f4(param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107c797a0; end: 107c798f3;  */

void FUN_107c797a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain();
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c2328;
  func_0x00010bf71520(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0b84c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107c79878;
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
LAB_107c79878:
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_107c796c4(0x4034000000000000,param_1,puVar1,puVar5,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 107c798f4; end: 107c79ae7;  */

void FUN_107c798f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain();
  func_0x00010c0c7340(0x4028000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_107c796c4(0x4030000000000000,param_1,puVar1,puVar2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107c79ae8; end: 107c79b73;  */

double FUN_107c79ae8(double param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar3 = dVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(puVar1);
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  return param_1 * dVar2;
}



/* Entry: 107c79b74; end: 107c79d6f;  */

undefined1  [16] FUN_107c79b74(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  double unaff_d8;
  double unaff_d9;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (3 < param_2) {
    if (param_2 < 6) {
      if (param_2 == 4) {
        unaff_d8 = 0.9574000239372253;
        FUN_107c79ae8(0x3feea30560000000);
        unaff_d9 = 142.0;
        goto LAB_107c79d44;
      }
      if (param_2 != 5) goto LAB_107c79d44;
      dVar3 = 0.9574;
      unaff_d8 = dVar3;
      FUN_107c79ae8(0x3feea305532617c2);
      FUN_107c79ae8(0x3feea305532617c2);
      dVar2 = 1.3333333333333333;
    }
    else {
      if (param_2 == 6) {
        dVar3 = 0.9574;
        unaff_d8 = dVar3;
        FUN_107c79ae8(0x3feea305532617c2);
        FUN_107c79ae8(0x3feea305532617c2);
        unaff_d9 = dVar3 * 0.5;
        goto LAB_107c79d44;
      }
      if (param_2 != 7) goto LAB_107c79d44;
      unaff_d8 = 0.9574000239372253;
      FUN_107c79ae8(0x3feea30560000000);
      dVar3 = unaff_d8 * 0.7760000228881836;
      dVar2 = 0.4659999907016754;
    }
    unaff_d9 = dVar3 / dVar2;
    goto LAB_107c79d44;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
      uVar1 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf432a0();
      _objc_release(uVar1);
      unaff_d9 = (double)(param_1 * 0.445);
      unaff_d8 = (double)(param_1 * 0.267);
      FUN_107c79ae8(unaff_d9);
      FUN_107c79ae8(unaff_d8);
      goto LAB_107c79d44;
    }
    if (param_2 != 1) goto LAB_107c79d44;
    unaff_d8 = 0.3203999996185303;
    FUN_107c79ae8(0x3fd4816f00000000);
    unaff_d9 = 0.5339999794960022;
  }
  else if (param_2 == 2) {
    unaff_d8 = 0.3089999854564667;
    FUN_107c79ae8(0x3fd3c6a7e0000000);
    unaff_d9 = 0.515999972820282;
  }
  else {
    if (param_2 != 3) goto LAB_107c79d44;
    unaff_d8 = 0.4659999907016754;
    FUN_107c79ae8(0x3fddd2f1a0000000);
    unaff_d9 = 0.7760000228881836;
  }
  FUN_107c79ae8(unaff_d9);
LAB_107c79d44:
  _objc_release(param_4);
  _objc_release(param_3);
  auVar4._8_8_ = unaff_d9;
  auVar4._0_8_ = unaff_d8;
  return auVar4;
}



/* Entry: 107c79d70; end: 107c79fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c79d70(undefined8 param_1,undefined8 param_2,undefined *param_3)

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
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf1ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  uVar13 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar14 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  _objc_retain(puVar1);
  _objc_opt_new();
  func_0x00010c1c82e0(param_2);
  func_0x00010c1c3ba0(param_2,puVar3);
  func_0x00010c1bdb00(puVar3);
  func_0x00010c166c00(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  func_0x00010c1fe720(0x4024000000000000);
  func_0x00010c1fe7a0(uVar13,uVar14,puVar4);
  uStack_c8 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
  uStack_c0 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar4;
  func_0x00010c0df720(0);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_b0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uStack_a8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar6 = puVar3;
  puStack_98 = puVar5;
  puStack_90 = puVar1;
  puStack_88 = puVar2;
  func_0x00010bf51e00();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_3;
  FUN_107c925f4(param_3,puVar7);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar8 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar9 = PTR__OBJC_CLASS___UIFont_1126aec38;
    pcStack_d8 = FUN_107c79fa8;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_138 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puStack_110 = puVar5;
    puStack_108 = puVar4;
    puStack_100 = puVar3;
    puStack_f8 = puVar2;
    puStack_f0 = puVar1;
    puStack_e8 = param_3;
    puStack_e0 = &stack0xfffffffffffffff0;
    _objc_retain();
    func_0x00010bf1ecc0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_128 = puVar9;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_120 = puVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    FUN_107c925f4(puVar8,puVar2);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar4 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      puVar10 = PTR__OBJC_CLASS___UIFont_1126aec38;
      uStack_148 = 0x107c7a0c4;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_1a8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      puStack_180 = puVar5;
      puStack_178 = puVar2;
      puStack_170 = puVar1;
      puStack_168 = puVar9;
      puStack_160 = puVar8;
      puStack_158 = puVar3;
      ppuStack_150 = &puStack_e0;
      _objc_retain();
      func_0x00010bf1ecc0(0x402c000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_1a0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_198 = puVar10;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_190 = puVar1;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      FUN_107c925f4(puVar4,puVar2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar8 = puVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        ppuVar11 = &puStack_210;
        pcStack_1b8 = FUN_107c7a1e0;
        puStack_208 = PTR_PTR_1126fa450;
        puStack_210 = puVar8;
        puStack_200 = puVar7;
        puStack_1f8 = puVar6;
        puStack_1f0 = puVar5;
        puStack_1e8 = puVar2;
        puStack_1e0 = puVar1;
        puStack_1d8 = puVar10;
        puStack_1d0 = puVar4;
        puStack_1c8 = puVar3;
        ppuStack_1c0 = &ppuStack_150;
        _objc_msgSendSuper2(&puStack_210,PTR_s_initWithFrame__1125e2948);
        if (ppuVar11 != (undefined **)0x0) {
          puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
          _objc_opt_new();
          lVar12 = (long)_DAT_11276c408;
          uVar13 = *(undefined8 *)((long)ppuVar11 + lVar12);
          *(undefined **)((long)ppuVar11 + lVar12) = puVar3;
          _objc_release(uVar13);
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(*(undefined8 *)((long)ppuVar11 + lVar12));
          _objc_release(puVar3);
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(*(undefined8 *)((long)ppuVar11 + lVar12));
          _objc_release(puVar3);
          uVar13 = *(undefined8 *)((long)ppuVar11 + lVar12);
          func_0x00010c213040(uVar13);
          FUN_107c791f8();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19e480(*(undefined8 *)((long)ppuVar11 + lVar12));
          _objc_release(uVar13);
          func_0x00010befbb60(ppuVar11);
          puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
          _objc_opt_new();
          lVar12 = (long)_DAT_11276c40c;
          uVar13 = *(undefined8 *)((long)ppuVar11 + lVar12);
          *(undefined **)((long)ppuVar11 + lVar12) = puVar3;
          _objc_release(uVar13);
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar3;
          func_0x00010bf414e0(0x3fe0000000000000);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(*(undefined8 *)((long)ppuVar11 + lVar12));
          _objc_release(puVar1);
          _objc_release(puVar3);
          func_0x00010befbb60(ppuVar11);
          puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc();
          puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01bf60();
          lVar12 = (long)_DAT_11276c410;
          uVar13 = *(undefined8 *)((long)ppuVar11 + lVar12);
          *(undefined **)((long)ppuVar11 + lVar12) = puVar3;
          _objc_release(uVar13);
          _objc_release(puVar1);
          func_0x00010c182220(*(undefined8 *)((long)ppuVar11 + lVar12));
          func_0x00010befbb60(ppuVar11);
          puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
          _objc_opt_new();
          lVar12 = (long)_DAT_11276c414;
          uVar13 = *(undefined8 *)((long)ppuVar11 + lVar12);
          *(undefined **)((long)ppuVar11 + lVar12) = puVar3;
          _objc_release(uVar13);
          func_0x000107c7ad98();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(*(undefined8 *)((long)ppuVar11 + lVar12));
          _objc_release(uVar13);
          uVar13 = *(undefined8 *)((long)ppuVar11 + lVar12);
          func_0x00010c213040(uVar13);
          func_0x000107c79208();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19e480(*(undefined8 *)((long)ppuVar11 + lVar12));
          _objc_release(uVar13);
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(*(undefined8 *)((long)ppuVar11 + lVar12));
          _objc_release(puVar3);
          func_0x00010c1cfce0(*(undefined8 *)((long)ppuVar11 + lVar12));
          func_0x00010befbb60(ppuVar11);
        }
        return (undefined1 *)ppuVar11;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 107c79fa8; end: 107c7a1df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c79fa8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_140;
  undefined *puStack_138;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf1ecc0(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  FUN_107c925f4(param_1,puVar3);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    func_0x00010bf1ecc0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    FUN_107c925f4(puVar1,puVar5);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      ppuVar6 = &puStack_140;
      puStack_138 = PTR_PTR_1126fa450;
      puStack_140 = puVar2;
      _objc_msgSendSuper2(&puStack_140,PTR_s_initWithFrame__1125e2948);
      if (ppuVar6 != (undefined **)0x0) {
        puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_opt_new();
        lVar7 = (long)_DAT_11276c408;
        uVar8 = *(undefined8 *)((long)ppuVar6 + lVar7);
        *(undefined **)((long)ppuVar6 + lVar7) = puVar1;
        _objc_release(uVar8);
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)((long)ppuVar6 + lVar7));
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)((long)ppuVar6 + lVar7));
        _objc_release(puVar1);
        uVar8 = *(undefined8 *)((long)ppuVar6 + lVar7);
        func_0x00010c213040(uVar8);
        FUN_107c791f8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)((long)ppuVar6 + lVar7));
        _objc_release(uVar8);
        func_0x00010befbb60(ppuVar6);
        puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_opt_new();
        lVar7 = (long)_DAT_11276c40c;
        uVar8 = *(undefined8 *)((long)ppuVar6 + lVar7);
        *(undefined **)((long)ppuVar6 + lVar7) = puVar1;
        _objc_release(uVar8);
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf414e0(0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)((long)ppuVar6 + lVar7));
        _objc_release(puVar2);
        _objc_release(puVar1);
        func_0x00010befbb60(ppuVar6);
        puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc();
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01bf60();
        lVar7 = (long)_DAT_11276c410;
        uVar8 = *(undefined8 *)((long)ppuVar6 + lVar7);
        *(undefined **)((long)ppuVar6 + lVar7) = puVar1;
        _objc_release(uVar8);
        _objc_release(puVar2);
        func_0x00010c182220(*(undefined8 *)((long)ppuVar6 + lVar7));
        func_0x00010befbb60(ppuVar6);
        puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
        _objc_opt_new();
        lVar7 = (long)_DAT_11276c414;
        uVar8 = *(undefined8 *)((long)ppuVar6 + lVar7);
        *(undefined **)((long)ppuVar6 + lVar7) = puVar1;
        _objc_release(uVar8);
        func_0x000107c7ad98();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)((long)ppuVar6 + lVar7));
        _objc_release(uVar8);
        uVar8 = *(undefined8 *)((long)ppuVar6 + lVar7);
        func_0x00010c213040(uVar8);
        func_0x000107c79208();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19e480(*(undefined8 *)((long)ppuVar6 + lVar7));
        _objc_release(uVar8);
        puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(*(undefined8 *)((long)ppuVar6 + lVar7));
        _objc_release(puVar1);
        func_0x00010c1cfce0(*(undefined8 *)((long)ppuVar6 + lVar7));
        func_0x00010befbb60(ppuVar6);
      }
      return (undefined1 *)ppuVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return puVar4;
}



/* Entry: 107c7a1e0; end: 107c7a497; -[SCDiscoverFeedTileOverlayView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c7a1e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fa450;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c408;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c213040(uVar4);
    FUN_107c791f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c40c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_11276c410;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar5 = (long)_DAT_11276c414;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x000107c7ad98();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c213040(uVar4);
    func_0x000107c79208();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c7a498; end: 107c7a86f; -[SCDiscoverFeedTileOverlayView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7a498(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_a0 [32];
  double dStack_80;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fa450;
  lStack_70 = param_2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar8 = (long)_DAT_11276c418;
  lVar2 = *(long *)(param_2 + lVar8);
  func_0x00010bf15a40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c08fa60();
  puVar6 = PTR__CGRectZero_110347608;
  if (lVar7 == 0) {
    _objc_release(lVar2);
LAB_107c7a550:
    dVar9 = *(double *)puVar6;
  }
  else {
    uVar3 = *(ulong *)(param_2 + lVar8);
    func_0x00010bf915a0();
    _objc_release(lVar2);
    if ((uVar3 & 1) != 0) goto LAB_107c7a550;
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar9 = 0.0;
    func_0x00010b816528(0,0,param_1,0x403e000000000000);
    func_0x00010b8166f8(param_2);
  }
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11276c408));
  lVar7 = param_2;
  func_0x00010beb6680();
  if (((int)lVar7 == 0) || (lVar7 = (long)_DAT_11276c41c, *(long *)(param_2 + lVar7) == 0))
  goto LAB_107c7a754;
  func_0x00010c23d620();
  lVar2 = *(long *)(param_2 + lVar8);
  func_0x00010c260560();
  dVar9 = 0.0;
  dVar13 = 8.0;
  if (lVar2 != 4) {
    dVar13 = 0.0;
  }
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar14 = dVar9;
  func_0x00010c2a5040(*(undefined8 *)(param_2 + lVar7));
  dVar9 = dVar9 - dVar14;
  dVar15 = dVar9 - dVar13;
  func_0x00010c2a5040(*(undefined8 *)(param_2 + lVar7));
  dVar14 = dVar9;
  func_0x00010bfe0640(*(undefined8 *)(param_2 + lVar7));
  func_0x00010b8166f8(dVar15,dVar13,dVar9,dVar14,param_2);
  func_0x00010b816528();
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar7));
  lVar2 = param_2;
  func_0x00010b8166c0();
  if ((int)lVar2 == 0) {
LAB_107c7a614:
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    dVar9 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_2 + lVar8);
    func_0x00010c260560();
    if (lVar2 == 4) goto LAB_107c7a614;
    _CGAffineTransformMakeScale(auStack_a0,0xbff0000000000000,0x3ff0000000000000);
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    dVar9 = dStack_80;
  }
  func_0x00010c219960(uVar4);
  lVar2 = *(long *)(param_2 + lVar8);
  func_0x00010c260560();
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  if (lVar2 == 4) {
    func_0x00010c2a5040();
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar9 * 0.5);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126b08d8;
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = 3.0;
    uVar10 = 0x3fe0000000000000;
    uVar11 = 0;
    uVar12 = 0x3ff0000000000000;
  }
  else {
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126b08d8;
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar12 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    dVar9 = 0.0;
    uVar10 = 0;
  }
  func_0x00010085b3c8(dVar9,uVar10,uVar11,uVar12,puVar6,uVar4,puVar5);
  _objc_release(puVar5);
LAB_107c7a754:
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar9 = dVar9 + -24.0;
  dVar14 = dVar9 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar15 = (dVar9 + -24.0) * 0.5;
  lVar7 = (long)_DAT_11276c410;
  func_0x00010c19f0e0(dVar14,dVar15,0x4038000000000000,0x4038000000000000,
                      *(undefined8 *)(param_2 + lVar7));
  lVar2 = (long)_DAT_11276c414;
  uVar4 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c23d0a0(param_2);
  func_0x00010c23d5a0(uVar4);
  func_0x00010bf20c00(param_2);
  _CGRectGetMinX();
  dVar9 = dVar14;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar7));
  _CGRectGetMaxY();
  dVar13 = dVar9;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  func_0x00010c19f0e0(dVar14,dVar9,dVar13,dVar15,*(undefined8 *)(param_2 + lVar2));
  iVar1 = (int)*(undefined8 *)(param_2 + lVar8);
  func_0x00010bf915a0();
  if (iVar1 != 0) {
    func_0x00010bfb68e0(param_2);
  }
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11276c40c));
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar7));
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar2));
  return;
}



/* Entry: 107c7a870; end: 107c7aa97; -[SCDiscoverFeedTileOverlayView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7a870(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11276c418;
  uVar7 = *(ulong *)(param_1 + lVar9);
  _objc_retain(param_3);
  _objc_retain(uVar7);
  if (param_3 == uVar7) {
    _objc_release(uVar7);
    _objc_release(param_3);
    goto LAB_107c7aa80;
  }
  if (uVar7 == 0) {
    _objc_release();
  }
  else {
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(param_3);
    if ((uVar2 & 1) != 0) goto LAB_107c7aa80;
  }
  uVar7 = param_3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(ulong *)(param_1 + lVar9) = uVar7;
  _objc_release(uVar6);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c076ae0();
  if (iVar1 == 0) {
    puVar5 = *(undefined **)(param_1 + lVar9);
    func_0x00010bf15a40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11276c408),param_2,puVar5);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
    _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110eb42b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar5,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010bf069e0();
    func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_11276c408),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
  lVar8 = (long)_DAT_11276c41c;
  lVar9 = *(long *)(param_1 + lVar8);
  if (lVar9 == 0) {
    uVar7 = param_3;
    func_0x00010c260560(param_3);
    lVar9 = param_1;
    func_0x00010bdf43c0(param_1,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar5;
      _objc_release(uVar6);
      func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
    }
    _objc_release(lVar9);
    lVar9 = *(long *)(param_1 + lVar8);
    if (lVar9 != 0) goto LAB_107c7aa64;
  }
  else {
LAB_107c7aa64:
    lVar8 = param_1;
    func_0x00010beb6680(param_1);
    func_0x00010c1a7f60(lVar9,param_2,(uint)lVar8 ^ 1);
  }
  func_0x00010c1cbe20(param_1);
LAB_107c7aa80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c7aa98; end: 107c7aaf3; -[SCDiscoverFeedTileOverlayView bannerHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c7aa98(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11276c418);
  func_0x00010bf15a40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = 0x403e000000000000;
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 107c7aaf4; end: 107c7ab2f; -[SCDiscoverFeedTileOverlayView _shouldShowSubscribedCornerIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7aaf4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c418;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c2604a0();
  if (iVar1 != 0) {
    func_0x00010c07fc20(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 107c7ab30; end: 107c7abcf; -[SCDiscoverFeedTileOverlayView _createSubscriptionIconViewBasedOnStyle:] */

void FUN_107c7ab30(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb42d8;
    }
    else {
      if (param_3 != 2) goto LAB_107c7abc8;
      ppuVar1 = &PTR____CFConstantStringClassReference_110eb42f8;
    }
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 4) {
        func_0x00010c23bba0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,0x7f,3,0xd5);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107c7abc8;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb4318;
  }
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_107c7abc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c7abd0; end: 107c7abdf; -[SCDiscoverFeedTileOverlayView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c7abd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c418);
}



/* Entry: 107c7abe0; end: 107c7ac5f; -[SCDiscoverFeedTileOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c7abe0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c418,0);
  _objc_storeStrong(param_1 + _DAT_11276c414,0);
  _objc_storeStrong(param_1 + _DAT_11276c410,0);
  _objc_storeStrong(param_1 + _DAT_11276c40c,0);
  _objc_storeStrong(param_1 + _DAT_11276c41c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c408,0);
  return;
}



/* Entry: 107c7ac60; end: 107c7ae27;  */

void FUN_107c7ac60(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb4358;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eb4358,
                      &PTR____CFConstantStringClassReference_110eb4338,0);
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



/* Entry: 107c7ae28; end: 107c7b33b; -[SCDiscoverFeedStoryViewModel initWithStoryDedupeFp:showTopRightSubscriptionIcon:isLive:hasUnseenStorySnap:bannerText:primarySingleTapActionModel:secondarySingleTapActionModel:longPressActionModel:scrollOutOfScreenActionModel:debugActionModel:ctaTapActionModel:imageThumbnail:thumbnailModel:debugViewModel:storyLoggingInfo:primaryColor:cornerColor:preferredCardSize:enableReplayOverlay:labelOverlayViewModel:labelFooterViewModel:calculatedLabelFooterSize:dynamicReplayOverlayViewModel:joinTheChatOverlayViewModel:logoOverlayViewModel:publisherStoryLabelOverlayViewModel:cameoTile:storyType:hasSnapDoc:onScrollAnimation:subscribedIconStyle:isRecommended:storyIconOption:enhancedPostViewOverlayViewModel:] */

undefined8 *
FUN_107c7ae28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined1 param_34,undefined4 param_35,undefined8 param_36,
             undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined8 param_40,
             undefined8 param_41)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined *puStack_90;
  
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
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_90 = PTR_PTR_1126fa458;
  puVar1 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_7;
    *(undefined1 *)(puVar1 + 1) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    puVar1[0x1c] = param_1;
    puVar1[0x1d] = param_2;
    *(undefined1 *)((long)puVar1 + 0xb) = param_24;
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    puVar1[0x1e] = param_3;
    puVar1[0x1f] = param_4;
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_30;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_31;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    puVar1[0x17] = param_33;
    *(undefined1 *)((long)puVar1 + 0xc) = param_34;
    uVar2 = param_36;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xd) = param_38;
    puVar1[0x19] = param_37;
    puVar1[0x1a] = param_40;
    uVar2 = param_41;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_41);
  _objc_release(param_36);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
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
  return puVar1;
}



/* Entry: 107c7b33c; end: 107c7b35f; -[SCDiscoverFeedStoryViewModel copyWithZone:] */

undefined8 FUN_107c7b33c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c7b360; end: 107c7b597; -[SCDiscoverFeedStoryViewModel hash] */

undefined8 * FUN_107c7b360(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = (ulong)*(byte *)(param_1 + 8);
  uStack_158 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_148 = (ulong)*(byte *)(param_1 + 9);
  uStack_140 = (ulong)*(byte *)(param_1 + 10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_138 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_130 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_128 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_120 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_110 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_100 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_f8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_e8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0xe0) + *(ulong *)(param_1 + 0xe0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_d0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_d0 = uStack_d0 ^ uStack_d0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0xe8) + *(ulong *)(param_1 + 0xe8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_c8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_c8 = uStack_c8 ^ uStack_c8 >> 0x16;
  uStack_c0 = (ulong)*(byte *)(param_1 + 0xb);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_d8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0xf0) + *(ulong *)(param_1 + 0xf0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_a8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0xf8) + *(ulong *)(param_1 + 0xf8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_a0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0xb8);
  uStack_60 = *(undefined8 *)(param_1 + 0xc0);
  lStack_70 = -lVar6;
  if (-1 < lVar6) {
    lStack_70 = lVar6;
  }
  uStack_68 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 200);
  lVar1 = *(long *)(param_1 + 0xd0);
  lStack_58 = -lVar6;
  if (-1 < lVar6) {
    lStack_58 = lVar6;
  }
  uStack_50 = (ulong)*(byte *)(param_1 + 0xd);
  lStack_48 = -lVar1;
  if (-1 < lVar1) {
    lStack_48 = lVar1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  func_0x00010bfde980();
  puVar4 = &uStack_158;
  uStack_40 = uVar3;
  func_0x000100505190(puVar4,0x24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107c7b8e0:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107c7b8ec;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((puVar4[2] == param_3[2] && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
          (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
         ((*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10) &&
          (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
       ((puVar4[0x17] == param_3[0x17] &&
        (((*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc) &&
          (puVar4[0x19] == param_3[0x19])) &&
         ((*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd) &&
          (puVar4[0x1a] == param_3[0x1a])))))))) {
      puVar8 = (undefined8 *)0x0;
      if (((((double)puVar4[0x1c] != (double)param_3[0x1c]) ||
           ((double)puVar4[0x1d] != (double)param_3[0x1d])) ||
          (puVar8 = (undefined8 *)0x0, (double)puVar4[0x1e] != (double)param_3[0x1e])) ||
         ((double)puVar4[0x1f] != (double)param_3[0x1f])) goto LAB_107c7b8ec;
      lVar6 = puVar4[3];
      if (((((((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
             ((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            && ((lVar6 = puVar4[5], lVar6 == param_3[5] || (func_0x00010c071ae0(), (int)lVar6 != 0))
               )) && ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                      (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          (((((((((lVar6 = puVar4[7], lVar6 == param_3[7] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                 ((lVar6 = puVar4[8], lVar6 == param_3[8] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                ((lVar6 = puVar4[9], lVar6 == param_3[9] || (func_0x00010c071ae0(), (int)lVar6 != 0)
                 ))) && ((lVar6 = puVar4[10], lVar6 == param_3[10] ||
                         (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
              (((lVar6 = puVar4[0xb], lVar6 == param_3[0xb] ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
               ((lVar6 = puVar4[0xc], lVar6 == param_3[0xc] ||
                (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
             ((lVar6 = puVar4[0xd], lVar6 == param_3[0xd] ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
            ((lVar6 = puVar4[0xe], lVar6 == param_3[0xe] || (func_0x00010c071c60(), (int)lVar6 != 0)
             ))) && (((((lVar6 = puVar4[0xf], lVar6 == param_3[0xf] ||
                        (func_0x00010c071c60(), (int)lVar6 != 0)) &&
                       ((lVar6 = puVar4[0x10], lVar6 == param_3[0x10] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                      (((lVar6 = puVar4[0x11], lVar6 == param_3[0x11] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                       ((lVar6 = puVar4[0x12], lVar6 == param_3[0x12] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
                     (((((lVar6 = puVar4[0x13], lVar6 == param_3[0x13] ||
                         (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                        ((lVar6 = puVar4[0x14], lVar6 == param_3[0x14] ||
                         (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                       ((lVar6 = puVar4[0x15], lVar6 == param_3[0x15] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                      ((lVar6 = puVar4[0x16], lVar6 == param_3[0x16] ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))) &&
         ((lVar6 = puVar4[0x18], lVar6 == param_3[0x18] || (func_0x00010c071ae0(), (int)lVar6 != 0))
         )) {
        puVar8 = (undefined8 *)puVar4[0x1b];
        if (puVar8 != (undefined8 *)param_3[0x1b]) {
          func_0x00010c071ae0();
          goto LAB_107c7b8ec;
        }
        goto LAB_107c7b8e0;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107c7b8ec:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107c7b598; end: 107c7b907; -[SCDiscoverFeedStoryViewModel isEqual:] */

long FUN_107c7b598(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107c7b8e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107c7b8ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
          (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
       ((*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8) &&
        (((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
          (*(long *)(param_1 + 200) == *(long *)(param_3 + 200))) &&
         ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
          (*(long *)(param_1 + 0xd0) == *(long *)(param_3 + 0xd0))))))))) {
      lVar3 = 0;
      if ((((*(double *)(param_1 + 0xe0) != *(double *)(param_3 + 0xe0)) ||
           (*(double *)(param_1 + 0xe8) != *(double *)(param_3 + 0xe8))) ||
          (lVar3 = 0, *(double *)(param_1 + 0xf0) != *(double *)(param_3 + 0xf0))) ||
         (*(double *)(param_1 + 0xf8) != *(double *)(param_3 + 0xf8))) goto LAB_107c7b8ec;
      lVar3 = *(long *)(param_1 + 0x18);
      if (((((((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          (((((((((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              (((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
             ((lVar3 = *(long *)(param_1 + 0x68), lVar3 == *(long *)(param_3 + 0x68) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
             (func_0x00010c071c60(), (int)lVar3 != 0)))) &&
           (((((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
               (func_0x00010c071c60(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             (((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
            (((((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0xa8), lVar3 == *(long *)(param_3 + 0xa8) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))) &&
         ((lVar3 = *(long *)(param_1 + 0xc0), lVar3 == *(long *)(param_3 + 0xc0) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0xd8);
        if (lVar3 != *(long *)(param_3 + 0xd8)) {
          func_0x00010c071ae0();
          goto LAB_107c7b8ec;
        }
        goto LAB_107c7b8e0;
      }
    }
    lVar3 = 0;
  }
LAB_107c7b8ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107c7b908; end: 107c7b90f; -[SCDiscoverFeedStoryViewModel storyDedupeFp] */

undefined8 FUN_107c7b908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


