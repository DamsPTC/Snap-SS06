/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106273524; end: 10627353b;  */

void FUN_106273524(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10627353c; end: 10627357b;  */

void FUN_10627353c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c24b2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10627357c; end: 10627367b; -[SCContextSpotlightBloopsHeaderViewController container] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627357c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127444ec;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3a);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10627367c; end: 10627372b; -[SCContextSpotlightBloopsHeaderViewController onlyForYouLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627367c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127444f0;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    func_0x00010c21ad00();
    func_0x00010c1cfce0(puVar1,param_2,0);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c21ad00(puVar1,param_2,0x17);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10627372c; end: 10627376b; -[SCContextSpotlightBloopsHeaderViewController setOnlyForYouLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627372c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127444f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10627376c; end: 1062737ab; -[SCContextSpotlightBloopsHeaderViewController setContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627376c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127444ec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062737ac; end: 1062737fb; -[SCContextSpotlightBloopsHeaderViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062737ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127444ec,0);
  _objc_storeStrong(param_1 + _DAT_1127444f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127444e8,0);
  return;
}



/* Entry: 1062737fc; end: 10627383f; -[SCContextSpotlightCarouselViewController loadView] */

void FUN_1062737fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc_init(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c1738c0();
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106273840; end: 106273c87; -[SCContextSpotlightCarouselViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106273840(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
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
  undefined *puVar16;
  int iVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = PTR_PTR_1126f0a38;
  lStack_b8 = param_1;
  _objc_msgSendSuper2(&lStack_b8,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126c9318;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar21 = (long)_DAT_1127444f4;
  uVar19 = *(undefined8 *)(param_1 + lVar21);
  *(undefined **)(param_1 + lVar21) = puVar2;
  _objc_release(uVar19);
  _objc_release(lVar1);
  func_0x00010c16d4a0(*(undefined8 *)(param_1 + lVar21));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar21));
  func_0x00010c167a00(*(undefined8 *)(param_1 + lVar21));
  func_0x00010c199d20(0x402e000000000000,*(undefined8 *)(param_1 + lVar21));
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126c92b0;
  _objc_alloc();
  func_0x00010c01a8a0(0xc01c000000000000,0xc01c000000000000,0xc01c000000000000,0xc01c000000000000);
  lVar20 = (long)_DAT_1127444f8;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar2;
  _objc_release(uVar19);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar21));
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf8d060();
  _objc_release(lVar1);
  if (lVar3 == 1) {
    _CGAffineTransformMakeRotation(&uStack_e8,0x400921fb54442d18);
    uStack_118 = uStack_e0;
    uStack_120 = uStack_e8;
    uStack_108 = uStack_d0;
    uStack_110 = uStack_d8;
    uStack_f8 = uStack_c0;
    uStack_100 = uStack_c8;
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar21));
    _CGAffineTransformMakeRotation(&uStack_150,0x400921fb54442d18);
    uStack_118 = uStack_148;
    uStack_120 = uStack_150;
    uStack_108 = uStack_138;
    uStack_110 = uStack_140;
    uStack_f8 = uStack_128;
    uStack_100 = uStack_130;
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar20));
  }
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar20);
  lStack_a8 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar20);
  uStack_a0 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bf1ff80(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar20);
  uStack_98 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar20);
  uStack_90 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar21);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010beef8c0(puVar2);
  iVar17 = (int)puVar18;
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar19);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  *(char *)(lVar3 + _DAT_1127444fc) = (char)iVar17;
  if (iVar17 != 0) {
    lVar20 = *(long *)(lVar3 + _DAT_1127444f8);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar20;
    func_0x00010bf529e0();
    _objc_release(lVar20);
    if (lVar1 == 0) {
      func_0x00010c29bf00(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 106273c88; end: 106273d1b; -[SCContextSpotlightCarouselViewController setAutomaticallyHideIfEmpty:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106273c88(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  *(char *)(param_1 + _DAT_1127444fc) = (char)param_3;
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_1127444f8);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106273d1c; end: 106273d83; -[SCContextSpotlightCarouselViewController addView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106273d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c09c7a0(param_1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_1127444f8));
  _objc_release(param_3);
  func_0x00010c28c1e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127444f4),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106273d84; end: 106273e1b; -[SCContextSpotlightCarouselViewController removeAllViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106273d84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127444f8;
  lVar1 = *(long *)(param_1 + lVar5);
  while( true ) {
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 == 0) break;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf09ee0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c28c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateVisibility_112680aa0);
  return;
}



/* Entry: 106273e1c; end: 106273e57; -[SCContextSpotlightCarouselViewController setInteritemSpacing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106273e1c(undefined8 param_1,long param_2)

{
  func_0x00010c09c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010c207390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + _DAT_1127444f8),PTR_s_setSpacing__11265f708);
  return;
}



/* Entry: 106273e58; end: 106273e83; -[SCContextSpotlightCarouselViewController interitemSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106273e58(long param_1)

{
  func_0x00010c09c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010c247f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127444f8),PTR_s_spacing_11266fa08);
  return;
}



/* Entry: 106273e84; end: 106273f0f; -[SCContextSpotlightCarouselViewController updateVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106273e84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf120c0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127444f8);
    func_0x00010bf09ee0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106273f10; end: 106273f8b; -[SCContextSpotlightCarouselViewController hasScrollableContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106273f10(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_1127444f8));
  dVar1 = param_3;
  dVar2 = param_4;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_5);
  return dVar2 < param_4 || dVar1 < param_3;
}



/* Entry: 106273f8c; end: 106273f9b; -[SCContextSpotlightCarouselViewController automaticallyHideIfEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106273f8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127444fc);
}



/* Entry: 106273f9c; end: 106273fdb; -[SCContextSpotlightCarouselViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106273f9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127444f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127444f4,0);
  return;
}



/* Entry: 106273fdc; end: 106274017; -[SCSpotlightTapAreaExpandedLabel pointInside:withEvent:] */

void FUN_106273fdc(void)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 106274018; end: 106274097; -[SCSpotlightDescriptionContainerStackView pointInside:withEvent:] */

void FUN_106274018(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = 0;
  puStack_38 = PTR_PTR_1126f0a40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_pointInside_withEvent__11261e4e8);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf20c00(param_1);
    _CGRectContainsPoint();
  }
  return;
}



/* Entry: 106274098; end: 1062741b3; -[SCSpotlightDescriptionContainerStackView hitTest:withEvent:] */

void FUN_106274098(double param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  puStack_48 = PTR_PTR_1126f0a40;
  puStack_50 = param_2;
  _objc_msgSendSuper2(&puStack_50,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined1 **)0x0 || ppuVar2 == (undefined1 **)param_2) {
    puVar3 = param_2;
    func_0x00010c074c20();
    if (((((ulong)puVar3 & 1) != 0) || (puVar3 = param_2, func_0x00010c082800(), (int)puVar3 == 0))
       || (func_0x00010bf01b40(param_2), param_1 < 0.01)) {
      param_2 = (undefined1 *)0x0;
      goto LAB_106274190;
    }
    puVar3 = param_2;
    func_0x00010bf20c00();
    iVar1 = (int)puVar3;
    _CGRectContainsPoint();
    if (iVar1 != 0) {
      puVar3 = param_2;
      func_0x00010bf9c000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined1 *)0x0) {
        func_0x00010bf9c000(param_2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106274190;
      }
    }
  }
  _objc_retain(ppuVar2);
  param_2 = (undefined1 *)ppuVar2;
LAB_106274190:
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1062741b4; end: 1062741d3; -[SCSpotlightDescriptionContainerStackView expandedHitTestTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062741b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062741d4; end: 1062741e7; -[SCSpotlightDescriptionContainerStackView setExpandedHitTestTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062741d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744500,param_3);
  return;
}



/* Entry: 1062741e8; end: 1062741f7; -[SCSpotlightDescriptionContainerStackView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062741e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112744500);
  return;
}



/* Entry: 1062741f8; end: 1062744eb; -[SCContextSpotlightDescriptionViewController initWithSpotlightDescription:mentions:circumstanceEngine:spotlightLogger:storiesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1062741f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126f0a48;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744504);
    *(undefined **)((long)puVar1 + (long)_DAT_112744504) = puVar2;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112744508;
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_11274450c;
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_4;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112744510;
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_5;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112744514;
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_6;
    _objc_release(uVar6);
    lVar8 = (long)_DAT_112744518;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_7;
    _objc_release();
    func_0x0001062ccec4();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf414e0(0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x0001062cfcbc(uVar3,puVar4,puVar5,1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274451c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274451c) = uVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release();
    func_0x0001062cceac();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf414e0(0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x0001062cfcbc(uVar3,puVar4,puVar5,1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112744520);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112744520) = uVar6;
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(uVar3);
    func_0x00010be66e20(puVar1);
    func_0x00010be66e40(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1062744ec; end: 10627461b; -[SCContextSpotlightDescriptionViewController _observeSpotlightDescriptionMentions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062744ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274450c);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10627461c; end: 10627468b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627461c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112744524;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    func_0x00010be87380(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10627468c; end: 1062746af; -[SCContextSpotlightDescriptionViewController _reconfigureDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627468c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112744528) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__configureWithSpotlightDescripti_1125571a0,
               *(long *)(param_1 + _DAT_112744528),*(undefined8 *)(param_1 + _DAT_112744524));
    return;
  }
  return;
}



/* Entry: 1062746b0; end: 10627489f; -[SCContextSpotlightDescriptionViewController _setupLayoutManagerIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062746b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11274452c;
  if (*(long *)(param_5 + lVar7) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSLayoutManager_1126b51e8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_5 + lVar7);
    *(undefined **)(param_5 + lVar7) = puVar1;
    _objc_release(uVar3);
  }
  lVar6 = (long)_DAT_112744530;
  if (*(long *)(param_5 + lVar6) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSTextStorage_1126b51e0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_5 + lVar6);
    *(undefined **)(param_5 + lVar6) = puVar1;
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_5 + lVar7);
  func_0x00010c26baa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar5 != 0) {
    func_0x00010c12ea20(*(undefined8 *)(param_5 + lVar7),param_6,0);
  }
  lVar2 = *(long *)(param_5 + lVar6);
  func_0x00010c08cea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar5 != 0) {
    func_0x00010c12cde0(*(undefined8 *)(param_5 + lVar6),param_6,*(undefined8 *)(param_5 + lVar7));
  }
  puVar1 = PTR__OBJC_CLASS___NSTextContainer_1126b51f0;
  _objc_alloc();
  func_0x00010c0469e0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  lVar5 = (long)_DAT_112744534;
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1bdbc0(0,*(undefined8 *)(param_5 + lVar5));
  lVar2 = (long)_DAT_112744538;
  uVar3 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010c099180(uVar3);
  func_0x00010c1bdb00(*(undefined8 *)(param_5 + lVar5),param_6,uVar3);
  uVar3 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010c0def20(uVar3);
  func_0x00010c1c3c00(*(undefined8 *)(param_5 + lVar5),param_6,uVar3);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  func_0x00010c202c80(param_3,param_4,*(undefined8 *)(param_5 + lVar5));
  func_0x00010befbe20(*(undefined8 *)(param_5 + lVar7),param_6,*(undefined8 *)(param_5 + lVar5));
  func_0x00010bef96a0(*(undefined8 *)(param_5 + lVar6),param_6,*(undefined8 *)(param_5 + lVar7));
  lVar5 = *(long *)(param_5 + lVar2);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar7 != 0) {
    uVar4 = *(undefined8 *)(param_5 + lVar6);
    uVar3 = *(undefined8 *)(param_5 + lVar2);
    func_0x00010bf0e540(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b700(uVar4,param_6,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1062748a0; end: 1062749cf; -[SCContextSpotlightDescriptionViewController _observeSpotlightDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062748a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744508);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1062749d0; end: 106274a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062749d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112744528;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    func_0x00010be87380(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106274a40; end: 106274adf; -[SCContextSpotlightDescriptionViewController setContanierView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106274a40(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11274453c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar3 = (long)_DAT_112744540;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar2;
    _objc_release(uVar1);
    func_0x00010bef9040(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106274ae0; end: 106274b47; -[SCContextSpotlightDescriptionViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106274ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0a48;
  lStack_30 = param_5;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_112744538));
  func_0x00010c202c80(param_3,param_4,*(undefined8 *)(param_5 + _DAT_112744534));
  return;
}



/* Entry: 106274b48; end: 106274c07; -[SCContextSpotlightDescriptionViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106274b48(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0a48;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  lVar5 = (long)_DAT_11274453c;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar4 = (long)_DAT_112744540;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010bef9040(*(undefined8 *)(param_1 + lVar5));
      func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
    }
  }
  return;
}



/* Entry: 106274c08; end: 106274c5b; -[SCContextSpotlightDescriptionViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106274c08(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + _DAT_112744544) == '\x01') {
    func_0x00010beccb40(param_1,param_2,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274453c),PTR_s_removeGestureRecognizer__112628c90,
             *(undefined8 *)(param_1 + _DAT_112744540));
  return;
}



/* Entry: 106274c5c; end: 106274c5f; -[SCContextSpotlightDescriptionViewController loadView] */

void FUN_106274c5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4eeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadViewForTruncateDescriptionE_112571548);
  return;
}



/* Entry: 106274c60; end: 106274cc7; -[SCContextSpotlightDescriptionViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106274c60(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0a48;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112744548));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11274454c));
  return;
}



/* Entry: 106274cc8; end: 106275487; -[SCContextSpotlightDescriptionViewController _loadViewForTruncateDescriptionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106274cc8(long param_1)

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
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9320;
  _objc_alloc_init();
  lVar24 = (long)_DAT_112744538;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar21);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24));
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc_init();
  lVar25 = (long)_DAT_112744550;
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar1;
  _objc_release(uVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar25));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar25));
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar25));
  uVar2 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf49420(0x4036000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112744554;
  uVar22 = *(undefined8 *)(param_1 + lVar23);
  *(undefined8 *)(param_1 + lVar23) = uVar21;
  _objc_release(uVar22);
  _objc_release(uVar2);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar23));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar25));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf1ff80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2a5060(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar15);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar22);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar21);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c9320;
  _objc_alloc_init();
  lVar24 = (long)_DAT_11274454c;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar21);
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar24));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24));
  puVar13 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  lVar23 = (long)_DAT_112744558;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar13;
  _objc_release(uVar21);
  _objc_release(puVar1);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c207380(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar23));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c181f00(0x447a0000,*(undefined8 *)(param_1 + lVar24));
  func_0x00010c181cc0(0x447a0000,*(undefined8 *)(param_1 + lVar24));
  puVar1 = PTR_PTR_1126c9320;
  _objc_alloc_init();
  lVar23 = (long)_DAT_112744548;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar21);
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar23));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar24 = (long)_DAT_11274455c;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar1;
  _objc_release(uVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar24));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar14 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar21);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar22);
  _objc_release(uVar15);
  _objc_release(uVar14);
  uVar2 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112744560);
  *(undefined8 *)(param_1 + _DAT_112744560) = uVar21;
  _objc_release(uVar22);
  _objc_release(uVar2);
  puVar13 = PTR_PTR_1126c9328;
  _objc_alloc();
  lVar24 = 2;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar1);
  func_0x00010c198760(puVar13);
  lVar23 = (long)_DAT_112744564;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar13;
  _objc_retain(puVar13);
  _objc_release(uVar21);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c207380(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar23));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  lVar23 = *(long *)(param_1 + lVar23);
  func_0x00010c222380(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar23);
  _objc_retain(lVar24);
  func_0x00010c08fa60(lVar23);
  puVar1 = puVar13;
  func_0x00010c29bf00(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar1);
  lVar20 = lVar23;
  func_0x00010c08fa60();
  if (lVar20 != 0) {
    func_0x00010c09c7a0(puVar13);
    lVar20 = lVar23;
    func_0x000108f4df78();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010bf414e0(0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar20;
    func_0x0001062cfcbc(lVar20,puVar16,puVar17,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar1);
    lVar18 = lVar24;
    func_0x00010bf529e0();
    lVar19 = lVar25;
    if (lVar18 != 0) {
      FUN_1062d0208(lVar25,lVar24);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar25);
    }
    uVar21 = *(undefined8 *)(puVar13 + _DAT_112744568);
    *(long *)(puVar13 + _DAT_112744568) = lVar19;
    _objc_release(uVar21);
    puVar13[_DAT_112744544] = 0;
    func_0x00010bed6c80(puVar13);
    _objc_release(lVar20);
  }
  _objc_release(lVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar23);
  return;
}



/* Entry: 106275488; end: 10627561f; -[SCContextSpotlightDescriptionViewController _configureWithSpotlightDescription:mentions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106275488(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c08fa60(param_3);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c09c7a0(param_1);
    lVar1 = param_3;
    func_0x000108f4df78();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fe999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x0001062cfcbc(lVar1,puVar3,puVar4,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    lVar6 = param_4;
    func_0x00010bf529e0();
    lVar7 = lVar5;
    if (lVar6 != 0) {
      FUN_1062d0208(lVar5,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
    }
    uVar8 = *(undefined8 *)(param_1 + _DAT_112744568);
    *(long *)(param_1 + _DAT_112744568) = lVar7;
    _objc_release(uVar8);
    *(undefined1 *)(param_1 + _DAT_112744544) = 0;
    func_0x00010bed6c80(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106275620; end: 10627588b; -[SCContextSpotlightDescriptionViewController _updateDescriptionAndToggleButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106275620(double param_1,undefined1 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112744538;
  func_0x00010c16b720(*(undefined8 *)(param_2 + lVar8),param_3,
                      *(undefined8 *)(param_2 + _DAT_112744568));
  FUN_10627588c(*(undefined8 *)(param_2 + lVar8));
  *(double *)(param_2 + _DAT_11274456c) = param_1;
  lVar9 = (long)_DAT_112744544;
  func_0x00010c1cfce0(*(undefined8 *)(param_2 + lVar8));
  func_0x00010c1f7b20(*(undefined8 *)(param_2 + _DAT_112744550));
  lVar8 = (long)_DAT_112744548;
  if (param_2[lVar9] == '\x01') {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar8));
    func_0x00010c21e900(*(undefined8 *)(param_2 + lVar8));
    func_0x00010c162480(*(undefined8 *)(param_2 + _DAT_112744560));
  }
  else {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar8));
    func_0x00010c21e900(*(undefined8 *)(param_2 + lVar8));
    func_0x00010c162480(*(undefined8 *)(param_2 + _DAT_112744560));
    param_1 = 0.0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = *(long *)(param_2 + lVar8);
    func_0x00010bfc1c00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar10 = *plStack_110;
      do {
        lVar11 = 0;
        do {
          if (*plStack_110 != lVar10) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010c12c9c0(*(undefined8 *)(param_2 + lVar8));
          lVar11 = lVar11 + 1;
        } while (lVar9 != lVar11);
        lVar9 = lVar1;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(lVar1);
  }
  func_0x00010bead740(param_2);
  uVar2 = *(undefined8 *)(param_2 + _DAT_112744518);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27cb40();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    _objc_initWeak(auStack_128,param_2);
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_106275a00;
    puStack_138 = &UNK_1108434b0;
    _objc_copyWeak(auStack_130,auStack_128);
    func_0x000100162d98("APPSTORE",&puStack_150);
    _objc_destroyWeak(auStack_130);
    param_2 = auStack_128;
    _objc_destroyWeak();
  }
  else {
    func_0x00010bedefc0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain();
  puVar4 = param_2;
  func_0x00010bfb3a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  dVar12 = param_1;
  _objc_release(puVar4);
  puVar4 = param_2;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  if (puVar5 != (undefined1 *)0x0) {
    puVar5 = puVar4;
    func_0x00010bf0dde0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined1 *)0x0) {
      puVar6 = param_2;
      func_0x00010bfb3a80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099280();
      dVar14 = dVar12;
      func_0x00010c0992c0(puVar5);
      dVar13 = 1.0;
      if (0.0 < dVar14) {
        func_0x00010c0992c0(puVar5);
      }
      dVar14 = dVar12 * dVar13;
      _objc_release(puVar6);
      func_0x00010c0ce480(puVar5);
      dVar12 = dVar13;
      param_1 = dVar14;
      if ((0.0 < dVar13) &&
         (func_0x00010c0ce480(puVar5), dVar12 = dVar13, param_1 = dVar13, dVar13 <= dVar14)) {
        param_1 = dVar14;
      }
      func_0x00010c0c3520(puVar5);
      if ((0.0 < dVar12) && (func_0x00010c0c3520(puVar5), dVar12 <= param_1)) {
        param_1 = dVar12;
      }
    }
    _objc_release(puVar5);
  }
  puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(param_2);
  return (double)(long)(param_1 * dVar12) / dVar12;
}



/* Entry: 10627588c; end: 1062759ff;  */

double FUN_10627588c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010bfb3a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  dVar5 = param_1;
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    lVar2 = lVar1;
    func_0x00010bf0dde0(lVar1,param_3,*(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820,0,
                        0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_2;
      func_0x00010bfb3a80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099280();
      dVar7 = dVar5;
      func_0x00010c0992c0(lVar2);
      dVar6 = 1.0;
      if (0.0 < dVar7) {
        func_0x00010c0992c0(lVar2);
      }
      dVar7 = dVar5 * dVar6;
      _objc_release(lVar3);
      func_0x00010c0ce480(lVar2);
      dVar5 = dVar6;
      param_1 = dVar7;
      if ((0.0 < dVar6) &&
         (func_0x00010c0ce480(lVar2), dVar5 = dVar6, param_1 = dVar6, dVar6 <= dVar7)) {
        param_1 = dVar7;
      }
      func_0x00010c0c3520(lVar2);
      if ((0.0 < dVar5) && (func_0x00010c0c3520(lVar2), dVar5 <= param_1)) {
        param_1 = dVar5;
      }
    }
    _objc_release(lVar2);
  }
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(param_2);
  return (double)(long)(param_1 * dVar5) / dVar5;
}



/* Entry: 106275a00; end: 106275a33;  */

void FUN_106275a00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bedefe0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106275a34; end: 106275b73; -[SCContextSpotlightDescriptionViewController _updateScrollViewConstraintsOnMainThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106275a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar2);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_112744558));
  dVar6 = 1.79769313486232e+308;
  func_0x00010c23d5a0(param_3,*(undefined8 *)(param_5 + _DAT_112744538));
  iVar1 = _DAT_112744554;
  if (*(char *)(param_5 + _DAT_112744544) == '\x01') {
    param_4 = param_4 / 3.0;
    dVar5 = param_4;
    if (dVar6 <= param_4) {
      dVar5 = dVar6;
    }
    func_0x00010c181140(dVar5,*(undefined8 *)(param_5 + _DAT_112744554));
    func_0x00010c1f7b20(*(undefined8 *)(param_5 + _DAT_112744550),param_6,param_4 < dVar6);
    uVar4 = 1;
  }
  else {
    func_0x00010c181140(*(undefined8 *)(param_5 + _DAT_11274456c),
                        *(undefined8 *)(param_5 + _DAT_112744554));
    func_0x00010c1f7b20(*(undefined8 *)(param_5 + _DAT_112744550),param_6,0);
    lVar3 = param_5;
    func_0x00010be44940(param_5);
    uVar4 = (uint)lVar3 ^ 1;
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11274454c),param_6,uVar4);
  func_0x00010c162480(*(undefined8 *)(param_5 + iVar1),param_6,1);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106275b74; end: 106275d3f; -[SCContextSpotlightDescriptionViewController _updateScrollViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106275b74(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  double dStack_88;
  double dStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar2);
  puVar2 = *(undefined **)(param_5 + _DAT_112744538);
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e820();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_112744558));
  if (param_3 <= 0.0) {
    _objc_initWeak(auStack_48,param_5);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106275d40;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    uVar1 = *(undefined1 *)(param_5 + _DAT_112744544);
    uVar4 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106275d74;
    puStack_a0 = &UNK_110914f68;
    dStack_88 = param_3;
    _objc_retain(puVar3);
    puStack_98 = puVar3;
    lStack_90 = param_5;
    dStack_80 = param_4 / 3.0;
    uStack_78 = uVar1;
    func_0x00010007380c(uVar4,&puStack_b8);
    _objc_release(uVar4);
    _objc_release(puStack_98);
  }
  _objc_release(puVar3);
  return;
}



/* Entry: 106275d40; end: 106275d73;  */

void FUN_106275d40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bedefe0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106275d74; end: 106275e8b;  */

void FUN_106275d74(long param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  double dStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 auStack_48 [8];
  
  dVar1 = *(double *)(param_1 + 0x30);
  func_0x00010bf20bc0(dVar1,0x7fefffffffffffff,*(undefined8 *)(param_1 + 0x20),param_2,3,0);
  _CGRectGetHeight();
  dVar2 = 1.79769313486232e+308;
  func_0x00010bf20bc0(0x7fefffffffffffff,0x4036000000000000,*(undefined8 *)(param_1 + 0x20));
  _CGRectGetWidth();
  dVar3 = *(double *)(param_1 + 0x30);
  dVar4 = *(double *)(param_1 + 0x38);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x28));
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106275e8c;
  puStack_78 = &UNK_1109192e0;
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_50 = *(undefined1 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  dStack_58 = (double)(long)dVar1;
  uStack_4f = dVar4 < (double)(long)dVar1;
  uStack_4e = dVar3 < (double)(long)dVar2;
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106275e8c; end: 106275f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106275e8c(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  iVar2 = _DAT_112744554;
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      cVar1 = *(char *)(param_1 + 0x41);
      lVar4 = 0x30;
      if (cVar1 == '\0') {
        lVar4 = 0x38;
      }
      func_0x00010c181140(*(undefined8 *)(param_1 + lVar4),*(undefined8 *)(lVar3 + _DAT_112744554));
      func_0x00010c1f7b20(*(undefined8 *)(lVar3 + _DAT_112744550),param_2,cVar1);
      bVar5 = 1;
    }
    else {
      func_0x00010c181140(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274456c),
                          *(undefined8 *)(lVar3 + _DAT_112744554));
      func_0x00010c1f7b20(*(undefined8 *)(lVar3 + _DAT_112744550),param_2,0);
      bVar5 = *(byte *)(param_1 + 0x42) ^ 1;
    }
    func_0x00010c1a7f60(*(undefined8 *)(lVar3 + _DAT_11274454c),param_2,bVar5 & 1);
    func_0x00010c162480(*(undefined8 *)(lVar3 + iVar2),param_2,1);
    lVar4 = lVar3;
    func_0x00010c29bf00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106275f94; end: 106275fef; -[SCContextSpotlightDescriptionViewController _isTextTruncated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106275f94(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_112744538;
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar1));
  dVar2 = param_3;
  func_0x00010c23d5a0(param_3,0x7fefffffffffffff,*(undefined8 *)(param_4 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_4 + lVar1));
  return dVar2 < param_3;
}



/* Entry: 106275ff0; end: 1062761e7; -[SCContextSpotlightDescriptionViewController _handleSuperviewTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106275ff0(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,uVar2);
  lVar3 = param_5;
  uVar5 = param_1;
  dVar6 = param_2;
  func_0x00010c29bf00();
  iVar1 = (int)lVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(uVar5,dVar6,param_3,param_4,uVar2,param_6,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  _CGRectContainsPoint(uVar5,dVar6 + -15.0,param_3,param_4 + 25.0,param_1,param_2);
  if (iVar1 != 0) {
    lVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe3a40(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if ((lVar4 == *(long *)(param_5 + _DAT_11274454c)) ||
       (lVar4 == *(long *)(param_5 + _DAT_112744548))) {
      func_0x00010beccb40(param_5,param_6,0,1);
    }
    else {
      func_0x00010bf7aa00(param_5,param_6,param_7);
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1062761e8; end: 10627633f; -[SCContextSpotlightDescriptionViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1062761e8(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (param_7 != *(long *)(param_5 + _DAT_112744540)) {
    return 1;
  }
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,lVar1);
  uVar4 = param_1;
  dVar5 = param_2;
  _objc_release(param_7);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(uVar4,dVar5,param_3,param_4,lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(lVar2);
  _CGRectContainsPoint(uVar4,dVar5 + -15.0,param_3,param_4 + 25.0,param_1,param_2);
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 106276340; end: 106276457; -[SCContextSpotlightDescriptionViewController _logActionEventForActionTriggeredFromPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106276340(long param_1,undefined8 param_2,int param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5338;
  if (param_3 == 0) {
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5350;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f41cd8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110ed79b8;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5368;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = *(byte *)(param_1 + _DAT_112744544);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744514);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar6 = 0x84;
  if (bVar1 == 0) {
    uVar6 = 0x85;
  }
  puVar5 = puVar4;
  func_0x00010c0b04c0(uVar3,param_2,uVar6);
  iVar7 = (int)puVar5;
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106276458;
  puVar5[_DAT_112744544] = puVar5[_DAT_112744544] ^ 1;
  uStack_90 = (ulong)bVar1;
  puStack_88 = puVar4;
  puStack_80 = puVar2;
  uStack_78 = uVar3;
  puStack_70 = &stack0xfffffffffffffff0;
  if (iVar7 != 0) {
    func_0x00010be4fc40(puVar5);
  }
  puVar2 = puVar5;
  func_0x00010bf6b020(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24b140();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(puVar5 + _DAT_112744518);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c27cb40();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  if ((int)uVar6 == 0) {
    puVar4 = puVar5;
    func_0x00010c29bf00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1062765f8;
    puStack_c8 = &UNK_110842e18;
    puStack_c0 = puVar5;
    func_0x00010c27ac60(0x3fd0000000000000,puVar2,param_2,puVar4,0x500000,&puStack_e0,0);
    _objc_release(puVar4);
  }
  else {
    func_0x00010bed6cc0(puVar5);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1062765b8;
    puStack_a0 = &UNK_110842e18;
    puStack_98 = puVar5;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_b8);
  }
  return;
}



/* Entry: 106276458; end: 1062765b7; -[SCContextSpotlightDescriptionViewController _toggleDescriptionFromPlayer:shouldLogAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106276458(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  *(byte *)(param_1 + _DAT_112744544) = *(byte *)(param_1 + _DAT_112744544) ^ 1;
  if (param_4 != 0) {
    func_0x00010be4fc40(param_1);
  }
  lVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24b140();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112744518);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c27cb40();
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if ((int)uVar4 == 0) {
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1062765f8;
    puStack_68 = &UNK_110842e18;
    lStack_60 = param_1;
    func_0x00010c27ac60(0x3fd0000000000000,puVar1,param_2,lVar2,0x500000,&puStack_80,0);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bed6cc0(param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1062765b8;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010bf03400(0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58);
  }
  return;
}



/* Entry: 1062765b8; end: 1062765f7;  */

void FUN_1062765b8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bed6ca0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062765f8; end: 1062765ff;  */

void FUN_1062765f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDescriptionAndToggleButto_1125934c8);
  return;
}



/* Entry: 106276600; end: 10627669b; -[SCContextSpotlightDescriptionViewController _updateDescriptionAndToggleButtonImmediate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106276600(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112744538;
  func_0x00010c1cfce0(*(undefined8 *)(param_2 + lVar1),param_3,
                      *(byte *)(param_2 + _DAT_112744544) ^ 1);
  func_0x00010c16b720(*(undefined8 *)(param_2 + lVar1));
  FUN_10627588c(*(undefined8 *)(param_2 + lVar1));
  *(undefined8 *)(param_2 + _DAT_11274456c) = param_1;
  lVar1 = (long)_DAT_112744548;
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c21e900(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c1f7b20(*(undefined8 *)(param_2 + _DAT_112744550));
                    /* WARNING: Could not recover jumptable at 0x00010bead750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setupLayoutManagerIfNeeded_112588f78);
  return;
}



/* Entry: 10627669c; end: 1062766df; -[SCContextSpotlightDescriptionViewController _updateDescriptionAndToggleButtonAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10627669c(long param_1,undefined8 param_2)

{
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_112744560),param_2,
                      (*(byte *)(param_1 + _DAT_112744544) ^ 0xff) & 1);
                    /* WARNING: Could not recover jumptable at 0x00010bedefd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateScrollViewConstraints_112595598);
  return;
}



/* Entry: 1062766e0; end: 106276703; -[SCContextSpotlightDescriptionViewController collapseDescriptionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062766e0(long param_1)

{
  if (*(char *)(param_1 + _DAT_112744544) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010beccb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__toggleDescriptionFromPlayer_sho_112590c78,1,1);
    return;
  }
  return;
}



/* Entry: 106276704; end: 106276b03; -[SCContextSpotlightDescriptionViewController didSelectHashtagView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106276704(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  func_0x00010bead740(param_5);
  lVar9 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7);
  dVar15 = param_1;
  dVar16 = param_2;
  _objc_release(lVar9);
  lVar9 = (long)_DAT_11274452c;
  func_0x00010c290f80(*(undefined8 *)(param_5 + lVar9));
  lVar11 = (long)_DAT_112744538;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar11));
  _CGRectGetWidth();
  _CGRectGetWidth(dVar15,dVar16,param_3,param_4);
  dVar13 = dVar15;
  _CGRectGetMinX(dVar15,dVar16,param_3,param_4);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar11));
  _CGRectGetHeight();
  dVar14 = dVar15;
  _CGRectGetHeight(dVar15,dVar16,param_3,param_4);
  _CGRectGetMinY(dVar15,dVar16,param_3,param_4);
  uVar1 = *(ulong *)(param_5 + lVar9);
  func_0x00010bf359a0(param_1,param_2 - ((dVar13 - dVar14) * 0.5 - dVar15));
  uVar2 = *(ulong *)(param_5 + _DAT_112744530);
  func_0x00010c08fa60();
  if (uVar1 < uVar2) {
    lVar7 = (long)_DAT_112744524;
    lVar9 = *(long *)(param_5 + lVar7);
    func_0x00010bf529e0();
    if (lVar9 != 0) {
      dVar15 = 0.0;
      uVar8 = *(ulong *)(param_5 + lVar7);
      _objc_retain(uVar8);
      uVar2 = uVar8;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      while (uVar2 != 0) {
        uVar12 = 0;
        do {
          dVar13 = dVar15;
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(uVar8);
            dVar13 = dVar15;
          }
          uVar10 = *(undefined8 *)(uVar12 * 8);
          uVar3 = uVar10;
          func_0x00010c11f2a0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c24d960();
          uVar6 = (ulong)dVar13;
          _objc_release(uVar3);
          uVar3 = uVar10;
          func_0x00010c11f2a0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf94880();
          dVar15 = dVar13;
          _objc_release(uVar3);
          if (uVar6 <= uVar1 && uVar1 < (ulong)(long)dVar13) {
            puVar4 = PTR_PTR_1126affa8;
            func_0x00010c22bc20(PTR_PTR_1126affa8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f8760();
            _objc_release(puVar4);
            func_0x00010bf6b020(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2923e0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c24b120(param_5);
            _objc_release(uVar10);
            _objc_release(param_5);
            goto LAB_106276aa8;
          }
          uVar12 = uVar12 + 1;
        } while (uVar2 != uVar12);
        uVar2 = uVar8;
        func_0x00010bf52a60();
      }
      _objc_release(uVar8);
    }
    uVar3 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c26b700(uVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_1062d00bc(uVar1,1,uVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar1 == 0) {
      if (((*(byte *)(param_5 + _DAT_112744544) & 1) != 0) ||
         (lVar9 = param_5, func_0x00010be44940(), (int)lVar9 != 0)) {
        func_0x00010beccb40(param_5);
      }
      uVar8 = 0;
    }
    else {
      puVar4 = PTR_PTR_1126affa8;
      func_0x00010c22bc20(PTR_PTR_1126affa8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8760();
      _objc_release(puVar4);
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24b100();
      _objc_release(param_5);
      uVar8 = uVar1;
    }
LAB_106276aa8:
    _objc_release(uVar8);
  }
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_7 + _DAT_112744570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106276b04; end: 106276b23; -[SCContextSpotlightDescriptionViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106276b04(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112744570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106276b24; end: 106276b37; -[SCContextSpotlightDescriptionViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106276b24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112744570,param_3);
  return;
}



/* Entry: 106276b38; end: 106276cf3; -[SCContextSpotlightDescriptionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106276b38(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112744570);
  _objc_storeStrong(param_1 + _DAT_11274453c,0);
  _objc_storeStrong(param_1 + _DAT_112744540,0);
  _objc_storeStrong(param_1 + _DAT_112744554,0);
  _objc_storeStrong(param_1 + _DAT_112744558,0);
  _objc_storeStrong(param_1 + _DAT_112744550,0);
  _objc_storeStrong(param_1 + _DAT_11274455c,0);
  _objc_storeStrong(param_1 + _DAT_112744560,0);
  _objc_storeStrong(param_1 + _DAT_112744520,0);
  _objc_storeStrong(param_1 + _DAT_11274451c,0);
  _objc_storeStrong(param_1 + _DAT_112744568,0);
  _objc_storeStrong(param_1 + _DAT_11274454c,0);
  _objc_storeStrong(param_1 + _DAT_112744548,0);
  _objc_storeStrong(param_1 + _DAT_112744564,0);
  _objc_storeStrong(param_1 + _DAT_112744524,0);
  _objc_storeStrong(param_1 + _DAT_112744528,0);
  _objc_storeStrong(param_1 + _DAT_11274450c,0);
  _objc_storeStrong(param_1 + _DAT_112744508,0);
  _objc_storeStrong(param_1 + _DAT_112744518,0);
  _objc_storeStrong(param_1 + _DAT_112744514,0);
  _objc_storeStrong(param_1 + _DAT_112744510,0);
  _objc_storeStrong(param_1 + _DAT_112744538,0);
  _objc_storeStrong(param_1 + _DAT_112744530,0);
  _objc_storeStrong(param_1 + _DAT_11274452c,0);
  _objc_storeStrong(param_1 + _DAT_112744534,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112744504,0);
  return;
}



/* Entry: 106276cf4; end: 106276f6b; -[SCContextSpotlightDoubleTapToLikeGestureController _initSharedWithCircumstanceEngine:topView:actions:contextSpotlightParams:userPreferences:storiesConfigProvider:delegate:contextExperimentService:isPauseEnabled:eventAnnouncer:gestureDetectionExternal:] */

undefined8 *
FUN_106276cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,byte param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f0a50;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c0e0e60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_4);
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_9);
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_11;
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 10) = 0;
    *(byte *)((long)puVar1 + 0xb) = param_14;
    if ((param_14 & 1) == 0) {
      func_0x00010beacce0(puVar1);
    }
    func_0x00010be659a0(puVar1);
    func_0x00010be66ce0(puVar1);
    func_0x00010bec7f80(puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 106276f6c; end: 106276faf; -[SCContextSpotlightDoubleTapToLikeGestureController initByAttachingToView:circumstanceEngine:spotlightActionsParams:contextSpotlightParams:userPreferences:storiesConfigProvider:delegate:contextExperimentService:isPauseEnabled:eventAnnouncer:] */

void FUN_106276f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010be3a4a0(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 106276fb0; end: 106276feb; -[SCContextSpotlightDoubleTapToLikeGestureController initForExternalGestureDetectionWithCircumstanceEngine:topView:spotlightActionsParams:contextSpotlightParams:userPreferences:storiesConfigProvider:delegate:contextExperimentService:isPauseEnabled:eventAnnouncer:] */

void FUN_106276fb0(void)

{
  func_0x00010be3a4a0();
  return;
}



/* Entry: 106276fec; end: 10627701f; -[SCContextSpotlightDoubleTapToLikeGestureController shouldShowUserEducationForCurrentStory] */

void FUN_106276fec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be400c0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be400b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isEnabledForCurrentBoostState_11256d9c8);
    return;
  }
  return;
}



/* Entry: 106277020; end: 1062770af; -[SCContextSpotlightDoubleTapToLikeGestureController _setupGestureView] */

void FUN_106277020(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c9330;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar2 = param_1;
  func_0x00010c275120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010becdb40(param_1);
  func_0x00010c229800(puVar1);
  func_0x00010c191060(puVar1,param_2,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1062770b0; end: 1062771bb; -[SCContextSpotlightDoubleTapToLikeGestureController _observeActionParamsChanges] */

void FUN_1062770b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_1;
  func_0x00010beef480(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1062771bc; end: 106277213;  */

void FUN_1062771bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf1f900(param_2);
    func_0x00010c173160(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106277214; end: 10627731f; -[SCContextSpotlightDoubleTapToLikeGestureController _observeSessionParamsChanges] */

void FUN_106277214(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_1;
  func_0x00010bf4f220(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar2);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106277320; end: 10627756f;  */

void FUN_106277320(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c0ea8e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187720(lVar1);
    _objc_release(uVar2);
    uVar3 = param_2;
    func_0x00010c160280(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c25a6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720();
    func_0x00010c187be0(lVar1);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b3af0;
    _objc_opt_class(PTR_PTR_1126b3af0);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar2 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar5);
    func_0x00010c276c00(uVar2);
    func_0x00010c187bc0(lVar1);
    uVar4 = param_2;
    func_0x00010c0ea8e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2d20;
    func_0x00010bef2840(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c186f40(lVar1);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_106277570;
    puStack_70 = &UNK_1108434b0;
    _objc_copyWeak(auStack_68,param_1 + 0x20);
    func_0x000100162d98("APPSTORE",&puStack_88);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106277570; end: 10627761f;  */

void FUN_106277570(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be40c60();
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bfc1d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010bfc1d20(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010becdb40(param_1);
        func_0x00010c229800(lVar1);
        _objc_release(lVar1);
      }
    }
    lVar1 = param_1;
    func_0x00010bfc1d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106277620; end: 10627774b; -[SCContextSpotlightDoubleTapToLikeGestureController _subscribeToOperaEvents] */

void FUN_106277620(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  if (*(long *)(param_2 + 0x78) != 0) {
    puVar1 = PTR_PTR_1126b2638;
    func_0x00010c24eb60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2638;
    puStack_58 = puVar1;
    func_0x00010bf948a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_58,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (param_2[0xb] == '\x01') {
      puVar1 = PTR_PTR_1126c9338;
      func_0x00010bf88440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_3,puVar1);
      _objc_release(puVar1);
    }
    param_5 = puVar4;
    func_0x00010bef99a0(*(undefined8 *)(param_2 + 0x78));
    _objc_release();
    param_4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c24eb60(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010c0720c0(param_4,param_3,puVar1);
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    puVar1 = PTR_PTR_1126b2638;
    func_0x00010bf948a0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010c0720c0(param_4,param_3,puVar1);
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      puVar1 = PTR_PTR_1126c9338;
      func_0x00010bf88440(PTR_PTR_1126c9338);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_4;
      func_0x00010c0720c0(param_4,param_3,puVar1);
      _objc_release(puVar1);
      if ((int)puVar2 != 0) {
        if (param_5 != (undefined *)0x0) {
          puVar1 = puVar4 + 0x80;
          _objc_loadWeakRetained();
          if (puVar1 != (undefined *)0x0) {
            puVar3 = param_5;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar4 + 0x80;
            _objc_loadWeakRetained(puVar2);
            puVar5 = puVar2;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c0720c0(puVar3,param_3,puVar5);
            _objc_release(puVar5);
            _objc_release(puVar2);
            _objc_release(puVar3);
            _objc_release(puVar1);
            if ((int)puVar6 == 0) goto LAB_106277984;
          }
        }
        puVar1 = PTR_PTR_1126c9338;
        func_0x00010c2691a0(PTR_PTR_1126c9338);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_6;
        func_0x00010c0e00e0(param_6,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar8 = param_1;
        _objc_release(uVar7);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126c9338;
        func_0x00010c2691c0(PTR_PTR_1126c9338);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = param_6;
        func_0x00010c0e00e0(param_6,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar7);
        _objc_release(puVar1);
        puVar1 = puVar4;
        func_0x00010c275120(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51200(param_1,uVar8);
        _objc_release(puVar1);
        func_0x00010be28a20(param_1,uVar8,puVar4);
      }
    }
    else {
      puVar4[10] = 0;
    }
  }
  else {
    puVar4[10] = 1;
  }
LAB_106277984:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10627774c; end: 1062779b7; -[SCContextSpotlightDoubleTapToLikeGestureController operaViewDidSendEvent:page:params:] */

void FUN_10627774c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c24eb60(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_3,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2638;
    func_0x00010bf948a0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0720c0(param_4,param_3,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126c9338;
      func_0x00010bf88440(PTR_PTR_1126c9338);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c0720c0(param_4,param_3,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 != 0) {
        if (param_5 != 0) {
          lVar3 = param_2 + 0x80;
          _objc_loadWeakRetained();
          if (lVar3 != 0) {
            lVar4 = param_5;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_2 + 0x80;
            _objc_loadWeakRetained(lVar5);
            lVar6 = lVar5;
            func_0x00010be36bc0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar4;
            func_0x00010c0720c0(lVar4,param_3,lVar6);
            _objc_release(lVar6);
            _objc_release(lVar5);
            _objc_release(lVar4);
            _objc_release(lVar3);
            if ((int)lVar7 == 0) goto LAB_106277984;
          }
        }
        puVar1 = PTR_PTR_1126c9338;
        func_0x00010c2691a0(PTR_PTR_1126c9338);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_6;
        func_0x00010c0e00e0(param_6,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        uVar8 = param_1;
        _objc_release(uVar2);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126c9338;
        func_0x00010c2691c0(PTR_PTR_1126c9338);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_6;
        func_0x00010c0e00e0(param_6,param_3,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar2);
        _objc_release(puVar1);
        lVar3 = param_2;
        func_0x00010c275120(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf51200(param_1,uVar8);
        _objc_release(lVar3);
        func_0x00010be28a20(param_1,uVar8,param_2);
      }
    }
    else {
      *(undefined1 *)(param_2 + 10) = 0;
    }
  }
  else {
    *(undefined1 *)(param_2 + 10) = 1;
  }
LAB_106277984:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062779b8; end: 1062779ff; -[SCContextSpotlightDoubleTapToLikeGestureController _touchInsetsForCurrentStory] */

void FUN_1062779b8(long param_1)

{
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    func_0x00010be3f640();
  }
  return;
}



/* Entry: 106277a00; end: 106277a1b; -[SCContextSpotlightDoubleTapToLikeGestureController _isCurrentStoryMultiSnapStory] */

bool FUN_106277a00(long param_1)

{
  func_0x00010bf60320();
  return 1 < param_1;
}



/* Entry: 106277a1c; end: 106277a87; -[SCContextSpotlightDoubleTapToLikeGestureController _isEnabledForCurrentStory] */

void FUN_106277a1c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  _objc_opt_class();
  iVar1 = (int)lVar2;
  func_0x00010bf60340(param_1);
  func_0x00010be400e0();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf60340();
    if (lVar2 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010bf5dfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentAdFavoriteEnabled_1125b5190);
      return;
    }
    func_0x00010be3f640(param_1);
  }
  return;
}



/* Entry: 106277a88; end: 106277ad7; +[SCContextSpotlightDoubleTapToLikeGestureController _isEnabledForStoryType:contextExperimentService:] */

undefined8 FUN_106277a88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0xb) {
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010bf88520();
    _objc_release(param_4);
    return uVar1;
  }
  return 1;
}



/* Entry: 106277ad8; end: 106277b17; -[SCContextSpotlightDoubleTapToLikeGestureController _isEnabledForCurrentBoostState] */

bool FUN_106277ad8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010bf1f900();
  if (lVar2 == -1) {
    bVar1 = false;
  }
  else {
    func_0x00010bf1f900(param_1);
    bVar1 = param_1 != 2;
  }
  return bVar1;
}



/* Entry: 106277b18; end: 106277b4b; -[SCContextSpotlightDoubleTapToLikeGestureController _isGestureEnabled] */

void FUN_106277b18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be400a0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be400d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isEnabledForCurrentStory_11256d9d0);
    return;
  }
  return;
}



/* Entry: 106277b4c; end: 106277c87; +[SCContextSpotlightDoubleTapToLikeGestureController _isMapProviderPhotoSnap:] */

undefined1 FUN_106277b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x00010c25a6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25b160();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106277c88; end: 106277caf;  */

void FUN_106277c88(void)

{
  return;
}



/* Entry: 106277cb0; end: 106277deb; -[SCContextSpotlightDoubleTapToLikeGestureController _handleDoubleTapAtLocation:] */

void FUN_106277cb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_3;
  func_0x00010be40c60();
  if (((int)lVar1 != 0) && ((*(byte *)(param_3 + 10) & 1) == 0)) {
    lVar1 = param_3;
    func_0x00010bf1f900();
    if (lVar1 != 1) {
      lVar1 = param_3;
      func_0x00010c293260(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126b5b00;
      func_0x00010bfa0f00(PTR_PTR_1126b5b00,param_4,1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf88540();
      _objc_release(lVar1);
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126c9340;
    if ((*(byte *)(param_3 + 0xb) & 1) == 0) {
      func_0x00010c275120(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10b1e0(param_1,param_2,puVar3,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
  }
  return;
}



/* Entry: 106277dec; end: 106277def; -[SCContextSpotlightDoubleTapToLikeGestureController doubleTapGestureView:didDetectDoubleTapAt:] */

void FUN_106277dec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be28a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleDoubleTapAtLocation__112567c28);
  return;
}



/* Entry: 106277df0; end: 106277f5b; +[SCContextSpotlightDoubleTapToLikeGestureController canEnableDoubleTapToLikeForContextParams:contextExperimentService:] */

bool FUN_106277df0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  bool bVar7;
  
  iVar1 = (int)param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c160280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25a6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b720();
  _objc_release(uVar3);
  func_0x00010be41c20();
  if ((((param_1 & 1) == 0) && (uVar3 = uVar2, func_0x00010c08bda0(), uVar3 != 0x23)) &&
     (func_0x00010be400e0(), iVar1 != 0)) {
    uVar3 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126b3af0;
    _objc_opt_class(PTR_PTR_1126b3af0);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar3 = uVar5;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    uVar4 = uVar3;
    func_0x00010c276c00(uVar3);
    _objc_release(uVar3);
    bVar7 = (long)uVar4 < 2;
  }
  else {
    bVar7 = false;
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar7;
}



/* Entry: 106277f5c; end: 106277f63; -[SCContextSpotlightDoubleTapToLikeGestureController gestureView] */

undefined8 FUN_106277f5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106277f64; end: 106277f6b; -[SCContextSpotlightDoubleTapToLikeGestureController circumstanceEngine] */

undefined8 FUN_106277f64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106277f6c; end: 106277f9b; -[SCContextSpotlightDoubleTapToLikeGestureController setCircumstanceEngine:] */

void FUN_106277f6c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106277f9c; end: 106277fb3; -[SCContextSpotlightDoubleTapToLikeGestureController topView] */

void FUN_106277f9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106277fb4; end: 106277fbf; -[SCContextSpotlightDoubleTapToLikeGestureController setTopView:] */

void FUN_106277fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106277fc0; end: 106277fd7; -[SCContextSpotlightDoubleTapToLikeGestureController delegate] */

void FUN_106277fc0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106277fd8; end: 106277fe3; -[SCContextSpotlightDoubleTapToLikeGestureController setDelegate:] */

void FUN_106277fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106277fe4; end: 106277feb; -[SCContextSpotlightDoubleTapToLikeGestureController observerLifecycle] */

undefined8 FUN_106277fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106277fec; end: 10627801b; -[SCContextSpotlightDoubleTapToLikeGestureController setObserverLifecycle:] */

void FUN_106277fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10627801c; end: 106278023; -[SCContextSpotlightDoubleTapToLikeGestureController actions] */

undefined8 FUN_10627801c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106278024; end: 106278053; -[SCContextSpotlightDoubleTapToLikeGestureController setActions:] */

void FUN_106278024(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106278054; end: 10627805b; -[SCContextSpotlightDoubleTapToLikeGestureController boostState] */

undefined8 FUN_106278054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10627805c; end: 106278063; -[SCContextSpotlightDoubleTapToLikeGestureController setBoostState:] */

void FUN_10627805c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106278064; end: 10627806b; -[SCContextSpotlightDoubleTapToLikeGestureController userPreferences] */

undefined8 FUN_106278064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10627806c; end: 10627809b; -[SCContextSpotlightDoubleTapToLikeGestureController setUserPreferences:] */

void FUN_10627806c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10627809c; end: 1062780a3; -[SCContextSpotlightDoubleTapToLikeGestureController contextSpotlightParams] */

undefined8 FUN_10627809c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


