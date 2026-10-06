/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cb3668; end: 105cb3943; -[SCGalleryViewController _setupCollapsingHeaderContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3668(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be5bb60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112733924;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(long *)(param_1 + lVar12) = lVar1;
  _objc_release(uVar10);
  *(undefined1 *)(param_1 + _DAT_112733930) = 0;
  lVar2 = *(long *)(param_1 + _DAT_1127338c4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lStack_88 = lVar1;
  func_0x00010c066fe0();
  _objc_release(lVar2);
  func_0x00010beacf00(param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_112733934);
  *(undefined8 *)(param_1 + _DAT_112733934) = uVar10;
  _objc_release(uVar11);
  _objc_release(uVar3);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar1;
  func_0x00010bf493a0(uVar10,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  uStack_a0 = uVar10;
  uStack_80 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  iVar9 = 3;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010beef8c0(puStack_a8);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar11);
  _objc_release(uStack_a0);
  _objc_release(lStack_98);
  _objc_release(uStack_90);
  func_0x00010bed55e0(param_1);
  lVar1 = lStack_88;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_120;
  pcStack_b8 = FUN_105cb3944;
  uStack_f0 = uVar11;
  puStack_e8 = puVar6;
  uStack_e0 = uVar3;
  lStack_d8 = lVar5;
  uStack_d0 = uVar4;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  lVar2 = (long)_DAT_112733924;
  if (*(long *)(lVar1 + lVar2) != 0) {
    puVar6 = puVar8;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = *(undefined **)(lVar1 + lVar2);
    _objc_release();
    if (puVar6 == puVar13) {
      lVar2 = lVar1;
      func_0x00010c29bf00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(lVar2);
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_105cb3a68;
      puStack_108 = &UNK_110841f80;
      lStack_100 = lVar1;
      _objc_retain(puVar8);
      puStack_f8 = puVar8;
      _objc_retainBlock();
      if (iVar9 == 0) {
        (**(code **)((long)ppuVar7 + 0x10))(ppuVar7);
      }
      else {
        func_0x00010bf03400(0x3fceb851eb851eb8,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar7);
      }
      _objc_release(ppuVar7);
      _objc_release(puStack_f8);
    }
  }
  _objc_release(puVar8);
  return;
}



/* Entry: 105cb3944; end: 105cb3a67; -[SCGalleryViewController _removeViewFromCollapsingHeader:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3944(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112733924;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_3;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + lVar3);
    _objc_release();
    if (lVar1 == lVar3) {
      lVar3 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(lVar3);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105cb3a68;
      puStack_58 = &UNK_110841f80;
      lStack_50 = param_1;
      _objc_retain(param_3);
      lStack_48 = param_3;
      _objc_retainBlock();
      if (param_4 == 0) {
        (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
      }
      else {
        func_0x00010bf03400(0x3fceb851eb851eb8,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar2);
      }
      _objc_release(ppuVar2);
      _objc_release(lStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105cb3a68; end: 105cb3adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3a68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12b280(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112733924),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bed55e0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfbdeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127338c8),
             PTR_s_galleryViewHeightUpdated_1125cd150);
  return;
}



/* Entry: 105cb3ae0; end: 105cb3baf; -[SCGalleryViewController _setCollapsingHeaderContainerViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3ae0(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_2 + _DAT_112733924) != 0) {
    *(undefined1 *)(param_2 + _DAT_112733930) = param_4;
    func_0x00010bed55e0();
    lVar3 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar3);
    lVar3 = (long)_DAT_1127338c8;
    func_0x00010bfbdea0(*(undefined8 *)(param_2 + lVar3));
    uVar1 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010bfb37c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c151ea0();
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010bfb37c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed9380(param_1,param_2,param_3,uVar2,0);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105cb3bb0; end: 105cb3c23; -[SCGalleryViewController _setStickyHeaderContainerViewHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3bb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11273392c) != 0) {
    *(undefined1 *)(param_1 + _DAT_112733938) = param_3;
    func_0x00010bee0d00();
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfbdeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_galleryViewHeightUpdated_1125cd150);
    return;
  }
  return;
}



/* Entry: 105cb3c24; end: 105cb3d27; -[SCGalleryViewController _setCollapsingAndStickyHeaderContainerViewsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3c24(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(long *)(param_2 + _DAT_112733924) != 0) && (*(long *)(param_2 + _DAT_11273392c) != 0)) {
    *(undefined1 *)(param_2 + _DAT_112733930) = param_4;
    *(undefined1 *)(param_2 + _DAT_112733938) = param_4;
    func_0x00010bed55e0(param_2);
    func_0x00010bee0d00(param_2);
    lVar3 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar3);
    lVar3 = (long)_DAT_1127338c8;
    func_0x00010bfbdea0(*(undefined8 *)(param_2 + lVar3));
    uVar1 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010bfb37c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c151ea0();
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010bfb37c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed9380(param_1,param_2,param_3,uVar2,0);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105cb3d28; end: 105cb3ebb; -[SCGalleryViewController _setupHeaderBannerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3d28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112733924;
  lVar3 = param_1;
  if (*(long *)(param_1 + lVar8) != 0) {
    lVar3 = *(long *)(param_1 + _DAT_11273393c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar7 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a6740(lVar3,param_2,param_1);
      func_0x00010bef7700(param_1,param_2,lVar3);
      func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar8),param_2,lVar7);
      func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar8),param_2,lVar7);
      func_0x00010bf77e80(lVar3,param_2,param_1);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar4 = lVar7;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      func_0x00010bf493c0(0xc030000000000000,lVar4,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_60 = lVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(lVar8);
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(lVar7);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar3 + _DAT_112733930) & 1) == 0) {
    lVar7 = *(long *)(lVar3 + _DAT_112733924);
    func_0x00010bf09ee0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf529e0();
    bVar2 = lVar8 == 0;
    _objc_release(lVar7);
  }
  else {
    bVar2 = true;
  }
  func_0x00010c162480(*(undefined8 *)(lVar3 + _DAT_112733934),param_2,bVar2);
  func_0x00010c1677c0((double)(bVar2 ^ 1),*(undefined8 *)(lVar3 + _DAT_112733924));
  func_0x00010c29bf00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105cb3ebc; end: 105cb3f6f; -[SCGalleryViewController _updateCollapsingHeaderHeightConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3ebc(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + _DAT_112733930) & 1) == 0) {
    lVar2 = *(long *)(param_1 + _DAT_112733924);
    func_0x00010bf09ee0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    bVar1 = lVar3 == 0;
    _objc_release(lVar2);
  }
  else {
    bVar1 = true;
  }
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_112733934),param_2,bVar1);
  func_0x00010c1677c0((double)(bVar1 ^ 1),*(undefined8 *)(param_1 + _DAT_112733924));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb3f70; end: 105cb4213; -[SCGalleryViewController _setupStickyHeaderContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3f70(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_1;
  func_0x00010be5bb60();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11273392c;
  uVar10 = *(undefined8 *)(param_1 + lVar15);
  *(long *)(param_1 + lVar15) = lVar14;
  _objc_release(uVar10);
  *(undefined1 *)(param_1 + _DAT_112733938) = 0;
  lVar14 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar14);
  func_0x00010beb0520(param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112733924);
  func_0x00010bf1ff80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_112733928;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  *(undefined8 *)(param_1 + lVar14) = uVar10;
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112733940);
  *(undefined8 *)(param_1 + _DAT_112733940) = uVar10;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uStack_80 = *(undefined8 *)(param_1 + lVar14);
  puStack_88 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar14;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar10;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar15;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_88,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(uVar3);
  lVar6 = param_1;
  func_0x00010bee0d00();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_105cb4214;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_11273392c;
  uVar12 = *(undefined8 *)(lVar6 + lVar13);
  lVar16 = (long)_DAT_1127338c8;
  uVar7 = *(undefined8 *)(lVar6 + lVar16);
  uStack_f0 = uVar2;
  lStack_e8 = lVar4;
  lStack_e0 = lVar15;
  uStack_d8 = uVar11;
  puStack_d0 = puVar5;
  uStack_c8 = uVar10;
  lStack_c0 = lVar9;
  lStack_b8 = lVar14;
  uStack_b0 = uVar3;
  lStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c267660(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(uVar12,param_2,uVar7);
  _objc_release(uVar7);
  uVar10 = *(undefined8 *)(lVar6 + lVar16);
  func_0x00010c267660(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar10,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(lVar6 + lVar16);
  func_0x00010c267660(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar10);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = *(long *)(lVar6 + lVar16);
  func_0x00010c267660();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar15;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar6 + lVar13);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar14;
  func_0x00010bf493a0(lVar14,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(lVar6 + lVar16);
  lStack_108 = lVar9;
  func_0x00010c267660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bf49420(0x4043000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_108,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar5,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(uVar11);
  _objc_release(lVar9);
  _objc_release(uVar3);
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar15 + _DAT_112733938) & 1) == 0) {
    lVar9 = *(long *)(lVar15 + _DAT_11273392c);
    func_0x00010bf09ee0(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar9;
    func_0x00010bf529e0();
    bVar1 = lVar14 == 0;
    _objc_release(lVar9);
  }
  else {
    bVar1 = true;
  }
  func_0x00010c162480(*(undefined8 *)(lVar15 + _DAT_112733940),param_2,bVar1);
  func_0x00010c1677c0((double)(bVar1 ^ 1),*(undefined8 *)(lVar15 + _DAT_11273392c));
  func_0x00010c29bf00(lVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar15);
  return;
}



/* Entry: 105cb4214; end: 105cb4437; -[SCGalleryViewController _setupTabBarsContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4214(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11273392c;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  lVar11 = (long)_DAT_1127338c8;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c267660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(uVar9,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c267660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c267660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar11);
  func_0x00010c267660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010bf493a0(lVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  lStack_78 = lVar10;
  func_0x00010c267660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bf49420(0x4043000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar4 + _DAT_112733938) & 1) == 0) {
    lVar10 = *(long *)(lVar4 + _DAT_11273392c);
    func_0x00010bf09ee0(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar10;
    func_0x00010bf529e0();
    bVar1 = lVar5 == 0;
    _objc_release(lVar10);
  }
  else {
    bVar1 = true;
  }
  func_0x00010c162480(*(undefined8 *)(lVar4 + _DAT_112733940),param_2,bVar1);
  func_0x00010c1677c0((double)(bVar1 ^ 1),*(undefined8 *)(lVar4 + _DAT_11273392c));
  func_0x00010c29bf00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105cb4438; end: 105cb44eb; -[SCGalleryViewController _updateStickyHeaderHeightConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4438(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + _DAT_112733938) & 1) == 0) {
    lVar2 = *(long *)(param_1 + _DAT_11273392c);
    func_0x00010bf09ee0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    bVar1 = lVar3 == 0;
    _objc_release(lVar2);
  }
  else {
    bVar1 = true;
  }
  func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_112733940),param_2,bVar1);
  func_0x00010c1677c0((double)(bVar1 ^ 1),*(undefined8 *)(param_1 + _DAT_11273392c));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb44ec; end: 105cb4563; -[SCGalleryViewController _makeHeaderVerticalStackView] */

void FUN_105cb44ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c16e060();
  func_0x00010c207380(0,puVar1);
  func_0x00010c190b80(puVar1,param_2,0);
  func_0x00010c166c00(puVar1,param_2,3);
  func_0x00010c219b60(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cb4564; end: 105cb4687; -[SCGalleryViewController _createHeaderBannerViewControllerWithServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf159a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127338e8);
  *(undefined8 *)(param_1 + _DAT_1127338e8) = uVar3;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273393c);
  *(undefined **)(param_1 + _DAT_11273393c) = puVar1;
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105cb4688; end: 105cb471b;  */

void FUN_105cb4688(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf159a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010bf15aa0(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105cb471c; end: 105cb47a3; -[SCGalleryViewController _resumeListeningToSearchQueryUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb471c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127337c0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d8a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d8c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cb47a4; end: 105cb489b; -[SCGalleryViewController _applicationDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb47a4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127337cc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09fc60();
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127338c8);
  func_0x00010c07b2a0();
  if (iVar1 != 0) {
    func_0x00010be035a0(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127337a0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f080();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127338c4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3bfc0();
  _objc_release(uVar2);
  return;
}



/* Entry: 105cb489c; end: 105cb48fb;  */

void FUN_105cb489c(long param_1,int param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_105cb48fc;
    puStack_20 = &UNK_110842e18;
    uStack_18 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100162d98("APPSTORE",&puStack_38);
  }
  return;
}



/* Entry: 105cb48fc; end: 105cb493b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb48fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112733810);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cb493c; end: 105cb497f; -[SCGalleryViewController _applicationWillTerminateNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb493c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127337a0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cb4980; end: 105cb49c3; -[SCGalleryViewController _sceneDidDisconnectNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4980(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127337a0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cb49c4; end: 105cb4a9f; -[SCGalleryViewController _dismissSendViewControllerIfPresented] */

void FUN_105cb49c4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR_DAT_1126a50e0;
    _objc_retain(uVar3);
    uVar1 = uVar3;
    func_0x00010010fab4(uVar3,puVar2);
    _objc_release(uVar3);
    if (((int)uVar1 != 0) && (uVar3 != 0)) {
      func_0x00010bf84b00(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 105cb4aa0; end: 105cb4ab7; -[SCGalleryViewController _scrollToTopAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + _DAT_1127338c8),
             PTR_s_setScrollContentOffset_animated__11265b8b8,param_3,0);
  return;
}



/* Entry: 105cb4ab8; end: 105cb4bcb; -[SCGalleryViewController _resetViewPort] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4ab8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_1127338c8;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010bf86c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2827c0();
    _objc_release(lVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    _objc_copyWeak(auStack_58,auStack_48);
    lStack_50 = lVar3;
    func_0x00010c1f7a40(0,uVar4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105cb4bcc; end: 105cb4c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4bcc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c152800(*(undefined8 *)(lVar1 + _DAT_1127338c8),param_2,
                        *(undefined8 *)(param_1 + 0x28),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cb4c14; end: 105cb4cdb; -[SCGalleryViewController _presentInformationViewControllerWithURLString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126c3a18;
  lVar4 = (long)_DAT_112733920;
  if (*(long *)(param_1 + lVar4) != 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c057da0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c07f8c0();
  _objc_release(puVar1);
  if ((int)puVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105cb4cdc; end: 105cb4d4f; -[SCGalleryViewController _handleTripleTap:] */

void FUN_105cb4cdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x00010c252440();
  if (param_3 == 3) {
    puVar1 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105cb4d50; end: 105cb4d5f;  */

void FUN_105cb4d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105cb4d60; end: 105cb4f6b; -[SCGalleryViewController _showNewUserAutoSaveStoriesAlertViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4d60(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar6 = (long)_DAT_1127337d4;
  uVar1 = *(ulong *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c157900();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127337d8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfbda60();
    _objc_release(uVar3);
    if ((int)uVar5 != 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112733850);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf5ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c078a60();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar3 != 0) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_112733814);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        FUN_105df608c();
        _objc_release(uVar3);
        if ((int)uVar5 != 0) {
          uVar1 = *(ulong *)(param_1 + lVar6);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          uVar2 = uVar1;
          func_0x00010bfb1820();
          _objc_release(uVar1);
          _objc_release(uVar1);
          if ((uVar2 & 1) == 0) {
            uVar5 = *(undefined8 *)(param_1 + lVar6);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fa020();
            _objc_release(uVar5);
            _objc_initWeak(auStack_48,param_1);
            func_0x00010c0d66a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_68 = 0xc2000000;
            pcStack_60 = FUN_105cb4f6c;
            puStack_58 = &UNK_110849200;
            _objc_copyWeak(auStack_50,auStack_48);
            func_0x000108df8dec(param_1,&puStack_70);
            _objc_release(param_1);
            _objc_destroyWeak(auStack_50);
            _objc_destroyWeak(auStack_48);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 105cb4f6c; end: 105cb4fa7;  */

void FUN_105cb4f6c(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c2385e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb4fa8; end: 105cb5043; -[SCGalleryViewController showMemoriesSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb4fa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  lVar2 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b22b0;
  _objc_alloc(PTR_PTR_1126b22b0);
  func_0x00010c0567c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112733838),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cb5044; end: 105cb5093; -[SCGalleryViewController _getBackgroundPopTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5044(long param_1,undefined8 param_2)

{
  func_0x00010c0b5020(*(undefined8 *)(param_1 + _DAT_112733854),param_2,
                      &PTR____CFConstantStringClassReference_110e27638,0xffffffffffffffff,0);
  _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c027bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cb5094; end: 105cb5137; -[SCGalleryViewController _shouldCollapseHeroPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105cb5094(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = (long)_DAT_1127338c8;
  uVar1 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010bfb37c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151ea0();
  if (param_1 <= 1.79769313486232e+308) {
    bVar3 = false;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010bfb37c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4c660();
    dVar5 = param_1;
    func_0x000107e85a00(0);
    bVar3 = dVar5 < param_1;
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return bVar3;
}



/* Entry: 105cb5138; end: 105cb518f; -[SCGalleryViewController memoriesSettingsUIWillDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5138(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112733838;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105cb5190; end: 105cb51df; -[SCGalleryViewController defaultProjectNameV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5190(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127338c8);
  func_0x00010c080880(uVar1,param_2,0xe);
  if ((int)uVar1 == 0) {
    func_0x00010c0c7a40(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfc0a40();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cb51e0; end: 105cb5213; -[SCGalleryViewController defaultSubProjectName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_105cb51e0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127338c8);
  func_0x00010c080880(uVar2,param_2,0xe);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e277d8;
  if ((int)uVar2 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 105cb5214; end: 105cb5217; -[SCGalleryViewController _showEligibleOnboarding] */

void FUN_105cb5214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeOnboardingEmptyStateView_112580c78);
  return;
}



/* Entry: 105cb5218; end: 105cb55f7; -[SCGalleryViewController _addOnboardingEmptyStateView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5218(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = (long)_DAT_112733944;
  lVar1 = *(long *)(param_1 + lVar23);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c3a20;
    _objc_alloc();
    func_0x00010c0621a0();
    uVar21 = *(undefined8 *)(param_1 + lVar23);
    *(undefined **)(param_1 + lVar23) = puVar2;
    _objc_release(uVar21);
    func_0x00010bef76c0(param_1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127338c8);
    func_0x00010c267660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar23);
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar23;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(lVar18);
    _objc_release(lVar23);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(lVar1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar21);
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + _DAT_1127337a8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96aa0();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x00010c2881b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_updateOnboardingViewType_11267fa90);
    return;
  }
  ___stack_chk_fail();
  lVar22 = (long)_DAT_112733944;
  if (*(long *)(lVar1 + lVar22) != 0) {
    puVar2 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar2);
    func_0x00010c12b760(lVar1);
    uVar21 = *(undefined8 *)(lVar1 + lVar22);
    *(undefined8 *)(lVar1 + lVar22) = 0;
    _objc_release(uVar21);
    uVar21 = *(undefined8 *)(lVar1 + _DAT_1127337a8);
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar21);
    return;
  }
  return;
}



/* Entry: 105cb55f8; end: 105cb56a3; -[SCGalleryViewController _removeOnboardingEmptyStateView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb55f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112733944;
  if (*(long *)(param_1 + lVar3) != 0) {
    puVar1 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar1);
    func_0x00010c12b760(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127337a8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105cb56a4; end: 105cb57c3; -[SCGalleryViewController _alertAndExitMemoriesOnOutOfDiskSpaceIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb56a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar5 = (long)_DAT_1127338d4;
  if ((*(byte *)(param_1 + lVar5) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273379c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c24cb00();
    _objc_release(uVar1);
    if (((int)uVar4 != 0) && (lVar2 = param_1, func_0x00010c0834c0(), (int)lVar2 != 0)) {
      lVar2 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        *(undefined1 *)(param_1 + lVar5) = 1;
        uVar4 = *(undefined8 *)(param_1 + _DAT_1127337a8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a71c0();
        _objc_release(uVar4);
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc2000000;
        pcStack_48 = FUN_105cb57c4;
        puStack_40 = &UNK_110842e18;
        lStack_38 = param_1;
        func_0x000108df97e8(param_1,&puStack_58);
      }
    }
  }
  return;
}



/* Entry: 105cb57c4; end: 105cb57d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb57c4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127338d4) = 0;
  return;
}



/* Entry: 105cb57d8; end: 105cb57ef; -[SCGalleryViewController scrollToSnapTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb57d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_scrollToTab_animated__112632420,3,0);
  return;
}



/* Entry: 105cb57f0; end: 105cb58d7; -[SCGalleryViewController deeplinkWithDestinationInfo:] */

void FUN_105cb57f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  pcStack_60 = FUN_105cb58d8;
  puStack_58 = &UNK_1108e4148;
  uStack_50 = param_1;
  _objc_retain(param_3);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105cb58ec;
  puStack_88 = &UNK_110847310;
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105cb5900;
  puStack_b0 = &UNK_110842e18;
  uStack_a8 = param_1;
  uStack_80 = param_1;
  uStack_78 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0c0d40(param_3,param_2,&puStack_70,&puStack_a0,&puStack_c8);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cb58d8; end: 105cb5907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb58d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf68a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127338c8),
             PTR_s_deeplinkWithDestinationInfo__1125b7c30,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105cb5908; end: 105cb5a33; -[SCGalleryViewController _handleFaceTaggingDeeplink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5908(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733870);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073960();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c152810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_scrollToTab_animated__112632420,0x10,
               0);
    return;
  }
  lVar3 = *(long *)(param_1 + _DAT_112733898);
  func_0x00010bf9f280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c071460(lVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 105cb5a34; end: 105cb5ac7;  */

void FUN_105cb5a34(long param_1,undefined1 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105cb5ac8;
  puStack_38 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  uStack_28 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 105cb5ac8; end: 105cb5b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x00010be0cfc0();
      uVar2 = *(undefined8 *)(lVar1 + _DAT_1127338c4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfdf0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96c20();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    else {
      func_0x00010be0ce20(lVar1,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cb5b60; end: 105cb5b6f; -[SCGalleryViewController _selectSnapsTabVisually] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_selectFirstTabBarVisually_112633cb0);
  return;
}



/* Entry: 105cb5b70; end: 105cb5c6f; -[SCGalleryViewController _smartlyScrollToRelevantTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5b70(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_2 + _DAT_1127337f0);
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf486e0(lVar2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar4);
    if (60.0 < param_1) {
      func_0x00010be94480(param_2);
    }
  }
  else {
    lVar3 = lVar2;
    func_0x00010c082940(lVar2,param_3,lVar1);
    if ((int)lVar3 != 0) {
      func_0x00010c152800(*(undefined8 *)(param_2 + _DAT_1127338c8),param_3,3,0);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105cb5c70; end: 105cb5d07; -[SCGalleryViewController isSnapTabVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cb5c70(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c275140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == param_1) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127338c8);
                    /* WARNING: Could not recover jumptable at 0x00010c080890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_isTabVisible__1125fdc30,3);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 105cb5d08; end: 105cb5d0f; -[SCGalleryViewController displaySpectaclesSettings] */

void FUN_105cb5d08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__displaySpectaclesSettingsWithPr_11255ed20,0xffffffffffffffff);
  return;
}



/* Entry: 105cb5d10; end: 105cb5e0b; -[SCGalleryViewController _displaySpectaclesSettingsWithProductType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5d10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127337e0;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  lVar1 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar3,param_2,lVar1);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c3550;
  _objc_alloc(PTR_PTR_1126c3550);
  func_0x00010c058720();
  param_1 = param_1 + lVar5;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105cb5e0c; end: 105cb5e8f; -[SCGalleryViewController spectaclesSettingsScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5e0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127337e0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cb5e90; end: 105cb5f03; -[SCGalleryViewController shouldPopToRootViewController] */

undefined8 FUN_105cb5e90(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  iVar1 = (int)&uStack_30;
  puStack_28 = PTR_PTR_1126ecb88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_shouldPopToRootViewController_11266a188);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c231d80();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 105cb5f04; end: 105cb5f77; -[SCGalleryViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_105cb5f04(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  iVar1 = (int)&uStack_30;
  puStack_28 = PTR_PTR_1126ecb88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_shouldPopToRootViewControllerLat_11266a190);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c231da0();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 105cb5f78; end: 105cb5f87; -[SCGalleryViewController selectedGalleryItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_selectedGalleryItems_112633fe8);
  return;
}



/* Entry: 105cb5f88; end: 105cb5f97; -[SCGalleryViewController selectedSnapItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15a030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_selectedSnapItems_112634228);
  return;
}



/* Entry: 105cb5f98; end: 105cb5fa7; -[SCGalleryViewController selectedGallerySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_selectedGallerySnaps_112633ff8);
  return;
}



/* Entry: 105cb5fa8; end: 105cb5fb7; -[SCGalleryViewController orderedSelectedGallerySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ecc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_orderedSelectedGallerySnaps_112618d30);
  return;
}



/* Entry: 105cb5fb8; end: 105cb5fc7; -[SCGalleryViewController selectedItemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_selectedItemCount_112634068);
  return;
}



/* Entry: 105cb5fc8; end: 105cb60ef; -[SCGalleryViewController selectionControllerDidEnterSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb5fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_1127338c8;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c158e00();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar2);
    lVar3 = param_1 + _DAT_112733818;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c09fdc0();
    _objc_release(lVar3);
    func_0x00010c1facc0(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010c158e00(*(undefined8 *)(param_1 + lVar5));
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127338c4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb9e0();
    _objc_release(uVar4);
    func_0x00010bf201c0(param_3);
    func_0x00010c1f79e0(*(undefined8 *)(param_1 + lVar5));
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273379c);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121e00();
    _objc_release(uVar4);
    func_0x00010bea2b40(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cb60f0; end: 105cb6207; -[SCGalleryViewController selectionControllerDidExitSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb60f0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127338c8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c158e00();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar2);
    lVar3 = param_1 + _DAT_112733818;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c280d80();
    _objc_release(lVar3);
    func_0x00010c1facc0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c1f79e0(0,*(undefined8 *)(param_1 + lVar5));
    func_0x00010c158e00(*(undefined8 *)(param_1 + lVar5));
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127338c4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb9e0();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11273379c);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121e00();
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bea2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setCollapsingHeaderContainerVie_112586478,0);
    return;
  }
  return;
}



/* Entry: 105cb6208; end: 105cb6263; -[SCGalleryViewController selectionController:shouldScrollToGalleryEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb6208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c07b240();
  uVar1 = 6;
  if ((int)uVar2 == 0) {
    uVar1 = 2;
  }
  func_0x00010c152820(*(undefined8 *)(param_1 + _DAT_1127338c8),param_2,uVar1,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cb6264; end: 105cb62c3; -[SCGalleryViewController selectionController:didCreateStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb6264(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c15a560(param_1,param_2,param_3,param_4);
  func_0x00010c10e5e0(*(undefined8 *)(param_1 + _DAT_1127338c8),param_2,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cb62c4; end: 105cb62c7; -[SCGalleryViewController heroPlayerController:browseSelected:initialItemId:items:fromView:context:] */

void FUN_105cb62c4(void)

{
  return;
}



/* Entry: 105cb62c8; end: 105cb62d3; -[SCGalleryViewController getAllFeaturedStories] */

undefined * FUN_105cb62c8(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 105cb62d4; end: 105cb632b; -[SCGalleryViewController heroPlayerViewUpdateDisplayingStoriesStatus] */

void FUN_105cb62d4(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105cb632c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105cb632c; end: 105cb6337;  */

void FUN_105cb632c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  _objc_retain();
  func_0x00010c1070e0(puVar1);
  func_0x000108df583c();
  puVar3 = puVar1;
  func_0x00010c106ec0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14cde0();
  _objc_release(puVar1);
  if (puVar2 == puVar3) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cb6338; end: 105cb6413; -[SCGalleryViewController galleryHeaderBarDidPressQuestionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb6338(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_112733948);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140960();
  if (lVar2 == 1) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_1127338c4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c140960();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 != 1) {
      return;
    }
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110e278b8;
  func_0x000108e0483c(&PTR____CFConstantStringClassReference_110e278b8,
                      &PTR____CFConstantStringClassReference_110e278d8,
                      &PTR____CFConstantStringClassReference_110dba938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7bf40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 105cb6414; end: 105cb641b; -[SCGalleryViewController galleryHeaderBarDidPressSearchButton] */

void FUN_105cb6414(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCollapsingAndStickyHeaderCon_112586470,1)
  ;
  return;
}



/* Entry: 105cb641c; end: 105cb6487; -[SCGalleryViewController galleryHeaderBarRequestsNavigationToMemoriesHome] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb641c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127338c8);
  func_0x00010bfb37c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c267c60();
  _objc_release(lVar1);
  if (lVar2 == 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1527d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollToSnapTab_112632410);
  return;
}



/* Entry: 105cb6488; end: 105cb648f; -[SCGalleryViewController galleryHeaderBarEndedSearch] */

void FUN_105cb6488(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCollapsingAndStickyHeaderCon_112586470,0)
  ;
  return;
}



/* Entry: 105cb6490; end: 105cb6527; -[SCGalleryViewController galleryHeaderBarDidPressSelectButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb6490(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127338c8);
  func_0x00010bfb37c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if (((uVar2 & 1) == 0) || (uVar2 = uVar1, func_0x00010bfd2600(), (uVar2 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112733828);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c267c60(uVar1);
    func_0x00010bf96c40(uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cb6528; end: 105cb6537; -[SCGalleryViewController galleryHasPublicStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105cb6528(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127338fc);
}



/* Entry: 105cb6538; end: 105cb6577; -[SCGalleryViewController galleryHeaderBarDidPressDismissButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb6538(long param_1)

{
  param_1 = param_1 + _DAT_112733818;
  _objc_loadWeakRetained(param_1);
  func_0x00010c152300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb6578; end: 105cb657b; -[SCGalleryViewController galleryHeaderBarDidTapHeaderItemTitle] */

void FUN_105cb6578(void)

{
  return;
}



/* Entry: 105cb657c; end: 105cb658b; -[SCGalleryViewController updateMemoriesSearchPreTypeVisibility:] */

void FUN_105cb657c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0cfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__exposeMemoriesSearchPreTypeScop_112560d90,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeMemoriesSearchPreTypeScop_112580bd0);
  return;
}



/* Entry: 105cb658c; end: 105cb67a7; -[SCGalleryViewController _exposeMemoriesSearchPreTypeScopeWithAutoPushPeopleInMySnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb658c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (param_3 != 0) {
    func_0x00010be8c8c0(param_1);
  }
  lVar7 = (long)_DAT_1127338dc;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar6 == 0) {
    func_0x00010be493a0(param_1);
    lVar6 = (long)_DAT_1127338e0;
    lVar1 = *(long *)(param_1 + lVar6);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar3 = PTR_PTR_1126c3a28;
      _objc_alloc(PTR_PTR_1126c3a28);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010bfe6360(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c042a20(puVar3);
      _objc_release(uVar4);
      _objc_initWeak(auStack_58,param_1);
      _objc_copyWeak(auStack_60,auStack_58);
      func_0x00010c18f5a0(puVar3);
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127337a8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c0c7580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5900(puVar3);
      _objc_release(uVar4);
      _objc_release(uVar5);
      func_0x00010c16cee0(puVar3);
      lVar7 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar7);
      func_0x00010bf9d620();
      _objc_release(lVar7);
      func_0x00010bedf640(param_1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 105cb67a8; end: 105cb67fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb67a8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127338c4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83c40();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb67fc; end: 105cb68d7; -[SCGalleryViewController _removeMemoriesSearchPreTypeScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb67fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127338dc;
  lVar3 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar1 != 0) {
    lVar3 = (long)_DAT_1127338e0;
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfe6360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfe6360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar2);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bedf650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateSelectationStateWithMemor_112595738,0);
    return;
  }
  return;
}



/* Entry: 105cb68d8; end: 105cb692f; -[SCGalleryViewController _updateSelectationStateWithMemoriesSearchPreTypeVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb68d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127338c4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cb6930; end: 105cb6c27; -[SCGalleryViewController _layoutMemoriesSearchPreTypeScreen] */

/* WARNING: Possible PIC construction at 0x000105cb6c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105cb6cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105cb6d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cb6cd8) */
/* WARNING: Removing unreachable block (ram,0x000105cb6c94) */
/* WARNING: Removing unreachable block (ram,0x000105cb6d5c) */
/* WARNING: Removing unreachable block (ram,0x000105cb6d84) */
/* WARNING: Removing unreachable block (ram,0x00010c160f00) */
/* WARNING: Removing unreachable block (ram,0x000105cb6d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb6930(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + _DAT_1127338c4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar3 != 0) && (lVar2 = (long)_DAT_1127338f4, *(long *)(param_1 + lVar2) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127338e0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    lVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar5);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar19 = uVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010bf1ff80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010bf1ff80(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar18;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar19);
    _objc_release(uVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  if (((ulong)param_3 & 1) == 0) {
    func_0x00010c2558c0(*(undefined8 *)(lVar3 + _DAT_11273394c));
    lVar2 = (long)_DAT_112733950;
    if (*(long *)(lVar3 + lVar2) == 0) {
      uVar19 = 1;
      lVar2 = 0;
    }
    else {
      func_0x00010c074c20();
      lVar2 = *(long *)(lVar3 + lVar2);
      uVar19 = 1;
    }
  }
  else {
    lVar2 = lVar3;
    func_0x00010be9c720();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 == 0) || (lVar20 = lVar2, func_0x00010c074c20(), (int)lVar20 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
    func_0x00010c29bf00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300();
    _objc_release(lVar3);
    uVar19 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setHidden__1126479f8,uVar19);
  return;
}



/* Entry: 105cb6c28; end: 105cb6da3; -[SCGalleryViewController _setMemoriesSearchLoadingIndicatorVisible:] */

/* WARNING: Possible PIC construction at 0x000105cb6c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105cb6cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105cb6d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cb6cd8) */
/* WARNING: Removing unreachable block (ram,0x000105cb6c94) */
/* WARNING: Removing unreachable block (ram,0x000105cb6d5c) */
/* WARNING: Removing unreachable block (ram,0x000105cb6d84) */
/* WARNING: Removing unreachable block (ram,0x00010c160f00) */
/* WARNING: Removing unreachable block (ram,0x000105cb6d60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb6c28(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_3 & 1) == 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11273394c));
    lVar3 = (long)_DAT_112733950;
    if (*(long *)(param_1 + lVar3) == 0) {
      uVar2 = 1;
      lVar3 = 0;
    }
    else {
      func_0x00010c074c20();
      lVar3 = *(long *)(param_1 + lVar3);
      uVar2 = 1;
    }
  }
  else {
    lVar3 = param_1;
    func_0x00010be9c720();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 == 0) || (lVar1 = lVar3, func_0x00010c074c20(), (int)lVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21300();
    _objc_release(param_1);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_setHidden__1126479f8,uVar2);
  return;
}



/* Entry: 105cb6da4; end: 105cb7253; -[SCGalleryViewController _searchLoadingOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb6da4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  long lVar27;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = (long)_DAT_112733950;
  puVar26 = *(undefined **)(param_1 + lVar27);
  if (puVar26 == (undefined *)0x0) {
    lVar1 = *(long *)(param_1 + _DAT_1127338c4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = (long)_DAT_1127338f4;
    if (*(long *)(param_1 + lVar1) == 0 || lVar2 == 0) {
      puVar26 = (undefined *)0x0;
    }
    else {
      puVar26 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c219b60();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar26);
      _objc_release(puVar3);
      func_0x00010c1a7f60(puVar26);
      lVar4 = param_1;
      func_0x00010c29bf00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar4);
      puVar5 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfffb60();
      func_0x00010c219b60();
      func_0x00010c1af000(puVar5);
      ppuVar6 = &PTR____CFConstantStringClassReference_110e278f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e278f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(puVar5);
      _objc_release(ppuVar6);
      func_0x00010befbb60(puVar26);
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x00010bf495a0(0x3fd0000000000000,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar8 = puVar26;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar26;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar26;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar2;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar15;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar26;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_1 + lVar1);
      func_0x00010bf1ff80(uVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar5;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar26;
      func_0x00010bf34860(puVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar21;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(uVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(lVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(lVar9);
      _objc_release(lVar4);
      _objc_release(puVar8);
      uVar19 = *(undefined8 *)(param_1 + _DAT_11273394c);
      *(undefined **)(param_1 + _DAT_11273394c) = puVar5;
      _objc_retain(puVar5);
      _objc_release(uVar19);
      _objc_retain(puVar26);
      uVar19 = *(undefined8 *)(param_1 + lVar27);
      *(undefined **)(param_1 + lVar27) = puVar26;
      _objc_release(uVar19);
      _objc_release(puVar5);
      _objc_release(puVar7);
    }
    _objc_release(lVar2);
  }
  else {
    _objc_retain(puVar26);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be0ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105cb7254; end: 105cb725b; -[SCGalleryViewController _showFaceTaggingPermissionTrayIfNeeded] */

void FUN_105cb7254(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0ce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exposeFaceTaggingPermissionTray_112560d28,0)
  ;
  return;
}



/* Entry: 105cb725c; end: 105cb758b; -[SCGalleryViewController _exposeFaceTaggingPermissionTrayScopeWithBypassCooldown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb725c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = (long)_DAT_112733880;
  if ((int)param_3 != 0) {
    lVar2 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar7 != 0) {
      lVar2 = param_1 + lVar6;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c12e1c0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
  }
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar7 != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  lVar2 = *(long *)(param_1 + _DAT_1127338a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar8 = (long)_DAT_112733878;
    lVar3 = *(long *)(param_1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar7 = 0;
    if (lVar3 != 0) {
      lVar3 = lVar2;
      func_0x00010bf553a0(lVar2,param_2,*(undefined8 *)(param_1 + lVar8));
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010bf668c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
  }
  lVar3 = (long)_DAT_112733888;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126afe88;
    _objc_alloc(PTR_PTR_1126afe88);
    uVar11 = *(undefined8 *)(param_1 + lVar3);
    lVar3 = *(long *)(param_1 + _DAT_11273388c);
    if (lVar3 == 0) {
      func_0x00010c062da0(puVar9,param_2,uVar11,puVar4,puVar1,0);
    }
    else {
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      func_0x00010bf44a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c062da0(puVar9,param_2,uVar11,puVar4,puVar1,lVar8);
      _objc_release(lVar8);
      _objc_release(lVar3);
    }
    _objc_release(puVar4);
  }
  uVar10 = *(undefined8 *)(param_1 + _DAT_112733884);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127337a8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24280(uVar10,param_2,puVar1,param_1,uVar11,param_3,lVar7,puVar9,
                      *(undefined8 *)(param_1 + _DAT_1127337a0));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar5);
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(lVar2);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cb758c; end: 105cb7613; -[SCGalleryViewController faceTaggingPermissionTrayDidDismiss:] */

void FUN_105cb758c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105cb7614;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105cb7614; end: 105cb76b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb7614(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112733880;
  lVar1 = *(long *)(param_1 + 0x20) + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x28);
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != lVar4) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x20) + lVar3;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105cb76b4; end: 105cb773b; -[SCGalleryViewController faceTaggingPermissionTrayDidRequestSearchWithViewAllFaces:] */

void FUN_105cb76b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105cb773c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105cb773c; end: 105cb782b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb773c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_112733880;
  lVar1 = *(long *)(param_1 + 0x20) + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != lVar6) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x20) + lVar5;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x00010be0cfc0(*(undefined8 *)(param_1 + 0x20),param_2,1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127338c4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfdf0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96c20();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105cb782c; end: 105cb78b3; -[SCGalleryViewController onMemoriesSearchPreTypeDidDismissWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb782c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127338dc;
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  if (lVar1 != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeMemoriesSearchPreTypeScop_112580bd0);
  return;
}



/* Entry: 105cb78b4; end: 105cb795b; -[SCGalleryViewController searchPreTypeWillPresentFaceTaggingTrayWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb78b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127338dc;
  _objc_retain(param_3);
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar1 = lVar3;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar3);
  if (lVar1 != param_3) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127338c4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105cb795c; end: 105cb7a17; -[SCGalleryViewController searchPreTypeDidDismissFaceTaggingTrayWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb795c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar2 = (long)_DAT_1127338dc;
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  if (lVar1 == param_3) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105cb7a18;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 105cb7a18; end: 105cb7a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb7a18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127338c4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cb7a58; end: 105cb7baf; -[SCGalleryViewController launchOperaForSnapFeed:initialPlaybackItemId:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:itemLevelIdentifiersEligibleForSingleSnapFeed:appearingSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb7a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_11273391c;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar2,param_8);
  _objc_retain();
  func_0x00010c0d9840(param_8);
  _objc_release(param_8);
  puVar1 = PTR_PTR_1126c3a10;
  _objc_alloc(PTR_PTR_1126c3a10);
  func_0x00010c02a9c0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127338c8);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267740(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 105cb7bb0; end: 105cb81e7; -[SCGalleryViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb7bb0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127338d0,0);
  _objc_storeStrong(param_1 + _DAT_112733940,0);
  _objc_storeStrong(param_1 + _DAT_112733928,0);
  _objc_storeStrong(param_1 + _DAT_11273392c,0);
  _objc_storeStrong(param_1 + _DAT_112733934,0);
  _objc_storeStrong(param_1 + _DAT_112733924,0);
  _objc_storeStrong(param_1 + _DAT_1127338a8,0);
  _objc_storeStrong(param_1 + _DAT_1127338e4,0);
  _objc_destroyWeak(param_1 + _DAT_11273391c);
  _objc_storeStrong(param_1 + _DAT_1127338bc,0);
  _objc_storeStrong(param_1 + _DAT_1127338e0,0);
  _objc_storeStrong(param_1 + _DAT_11273390c,0);
  _objc_storeStrong(param_1 + _DAT_1127338b8,0);
  _objc_storeStrong(param_1 + _DAT_1127338b4,0);
  _objc_storeStrong(param_1 + _DAT_1127338b0,0);
  _objc_storeStrong(param_1 + _DAT_1127338ac,0);
  _objc_destroyWeak(param_1 + _DAT_1127338d8);
  _objc_storeStrong(param_1 + _DAT_1127338a4,0);
  _objc_storeStrong(param_1 + _DAT_1127338c4,0);
  _objc_storeStrong(param_1 + _DAT_112733890,0);
  _objc_storeStrong(param_1 + _DAT_112733878,0);
  _objc_storeStrong(param_1 + _DAT_112733874,0);
  _objc_storeStrong(param_1 + _DAT_1127338c0,0);
  _objc_storeStrong(param_1 + _DAT_1127338e8,0);
  _objc_storeStrong(param_1 + _DAT_11273393c,0);
  _objc_storeStrong(param_1 + _DAT_112733870,0);
  _objc_storeStrong(param_1 + _DAT_11273386c,0);
  _objc_storeStrong(param_1 + _DAT_1127338cc,0);
  _objc_storeStrong(param_1 + _DAT_112733868,0);
  _objc_storeStrong(param_1 + _DAT_112733864,0);
  _objc_storeStrong(param_1 + _DAT_112733860,0);
  _objc_storeStrong(param_1 + _DAT_11273385c,0);
  _objc_storeStrong(param_1 + _DAT_112733858,0);
  _objc_storeStrong(param_1 + _DAT_112733854,0);
  _objc_storeStrong(param_1 + _DAT_112733850,0);
  _objc_storeStrong(param_1 + _DAT_11273384c,0);
  _objc_storeStrong(param_1 + _DAT_112733848,0);
  _objc_storeStrong(param_1 + _DAT_112733828,0);
  _objc_storeStrong(param_1 + _DAT_112733824,0);
  _objc_storeStrong(param_1 + _DAT_112733844,0);
  _objc_storeStrong(param_1 + _DAT_112733840,0);
  _objc_storeStrong(param_1 + _DAT_11273383c,0);
  _objc_storeStrong(param_1 + _DAT_112733838,0);
  _objc_storeStrong(param_1 + _DAT_1127337dc,0);
  _objc_storeStrong(param_1 + _DAT_1127337d8,0);
  _objc_storeStrong(param_1 + _DAT_112733834,0);
  _objc_storeStrong(param_1 + _DAT_112733830,0);
  _objc_storeStrong(param_1 + _DAT_11273382c,0);
  _objc_storeStrong(param_1 + _DAT_112733820,0);
  _objc_storeStrong(param_1 + _DAT_11273381c,0);
  _objc_destroyWeak(param_1 + _DAT_112733818);
  _objc_storeStrong(param_1 + _DAT_11273387c,0);
  _objc_storeStrong(param_1 + _DAT_112733814,0);
  _objc_storeStrong(param_1 + _DAT_112733810,0);
  _objc_storeStrong(param_1 + _DAT_11273380c,0);
  _objc_storeStrong(param_1 + _DAT_1127338a0,0);
  _objc_storeStrong(param_1 + _DAT_11273389c,0);
  _objc_storeStrong(param_1 + _DAT_112733898,0);
  _objc_storeStrong(param_1 + _DAT_112733894,0);
  _objc_storeStrong(param_1 + _DAT_11273388c,0);
  _objc_storeStrong(param_1 + _DAT_112733888,0);
  _objc_storeStrong(param_1 + _DAT_112733884,0);
  _objc_destroyWeak(param_1 + _DAT_112733880);
  _objc_destroyWeak(param_1 + _DAT_1127338dc);
  _objc_destroyWeak(param_1 + _DAT_112733808);
  _objc_destroyWeak(param_1 + _DAT_112733804);
  _objc_destroyWeak(param_1 + _DAT_112733800);
  _objc_destroyWeak(param_1 + _DAT_1127337e0);
  _objc_storeStrong(param_1 + _DAT_1127337f8,0);
  _objc_destroyWeak(param_1 + _DAT_1127337f4);
  _objc_storeStrong(param_1 + _DAT_1127337fc,0);
  _objc_storeStrong(param_1 + _DAT_1127337e8,0);
  _objc_storeStrong(param_1 + _DAT_1127337e4,0);
  _objc_storeStrong(param_1 + _DAT_1127337f0,0);
  _objc_storeStrong(param_1 + _DAT_1127337ec,0);
  _objc_storeStrong(param_1 + _DAT_1127337d4,0);
  _objc_storeStrong(param_1 + _DAT_112733904,0);
  _objc_storeStrong(param_1 + _DAT_11273394c,0);
  _objc_storeStrong(param_1 + _DAT_112733950,0);
  _objc_storeStrong(param_1 + _DAT_112733954,0);
  _objc_storeStrong(param_1 + _DAT_1127338f4,0);
  _objc_storeStrong(param_1 + _DAT_112733914,0);
  _objc_storeStrong(param_1 + _DAT_112733920,0);
  _objc_storeStrong(param_1 + _DAT_112733944,0);
  _objc_storeStrong(param_1 + _DAT_1127337d0,0);
  _objc_storeStrong(param_1 + _DAT_1127337cc,0);
  _objc_storeStrong(param_1 + _DAT_1127337c8,0);
  _objc_storeStrong(param_1 + _DAT_1127337c4,0);
  _objc_storeStrong(param_1 + _DAT_1127337c0,0);
  _objc_storeStrong(param_1 + _DAT_1127337bc,0);
  _objc_storeStrong(param_1 + _DAT_1127337b8,0);
  _objc_storeStrong(param_1 + _DAT_1127337b4,0);
  _objc_storeStrong(param_1 + _DAT_1127337b0,0);
  _objc_storeStrong(param_1 + _DAT_1127337ac,0);
  _objc_storeStrong(param_1 + _DAT_1127337a4,0);
  _objc_storeStrong(param_1 + _DAT_1127337a8,0);
  _objc_storeStrong(param_1 + _DAT_1127337a0,0);
  _objc_storeStrong(param_1 + _DAT_11273379c,0);
  _objc_storeStrong(param_1 + _DAT_112733948,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127338c8,0);
  return;
}



/* Entry: 105cb81e8; end: 105cb8247; -[SCGalleryViewController statusCoordinator:needsToUpdateStateForDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb81e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bf06300(param_3,param_2,param_4);
  if (param_3 == 0x1a) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112733820);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16fc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105cb8248; end: 105cb824b; -[SCGalleryViewController statusCoordinatorBluetoothTurnedOff:] */

void FUN_105cb8248(void)

{
  return;
}



/* Entry: 105cb824c; end: 105cb824f; -[SCGalleryViewController statusCoordinatorBluetoothTurnedOn:] */

void FUN_105cb824c(void)

{
  return;
}



/* Entry: 105cb8250; end: 105cb8253; -[SCGalleryViewController statusCoordinatorNumberOfDevicesUpdated:] */

void FUN_105cb8250(void)

{
  return;
}



/* Entry: 105cb8254; end: 105cb8257; -[SCGalleryViewController statusCoordinatorPressedLearnMoreForBluetoothOverloadError:] */

void FUN_105cb8254(void)

{
  return;
}


