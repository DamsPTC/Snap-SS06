/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e2af6c; end: 106e2af73; -[SCGalleryBaseStoryCell _textFieldEditingChanged:] */

void FUN_106e2af6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 106e2af74; end: 106e2b0d3; -[SCGalleryBaseStoryCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2af74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f7130;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010be3da40(param_1);
  lVar2 = (long)_DAT_11275f450;
  func_0x00010c256060(*(undefined8 *)(param_1 + lVar2));
  *(undefined1 *)(param_1 + _DAT_11275f464) = 0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11275f428;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  lVar2 = param_1;
  func_0x00010c260f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar2);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
  lVar2 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f468);
  *(undefined8 *)(param_1 + _DAT_11275f468) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11275f46c) = 0;
  func_0x00010c1a7f60(param_1);
  lVar2 = (long)_DAT_11275f454;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 106e2b0d4; end: 106e2b0e3; -[SCGalleryBaseStoryCell isExpanded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2b0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f460),PTR_s_isExpanded_1125fa2e8);
  return;
}



/* Entry: 106e2b0e4; end: 106e2b147; -[SCGalleryBaseStoryCell invalidateCollectionViewLayoutIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2b0e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11275f460);
  func_0x00010c0f0be0();
  if (0 < lVar1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275f438);
    func_0x00010bf408e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106e2b148; end: 106e2b727; -[SCGalleryBaseStoryCell setViewModel:offset:selectMode:disableMode:snapThumbnailGenerator:editDataMutator:encryptedContentManager:cachingMediaManager:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2b148(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  lVar17 = (long)_DAT_11275f460;
  uVar16 = *(undefined8 *)(param_2 + lVar17);
  *(undefined8 *)(param_2 + lVar17) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_11);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11275f470);
  *(undefined8 *)(param_2 + _DAT_11275f470) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11275f474);
  *(undefined8 *)(param_2 + _DAT_11275f474) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11275f478);
  *(undefined8 *)(param_2 + _DAT_11275f478) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar16);
  lVar19 = (long)_DAT_11275f47c;
  uVar16 = *(undefined8 *)(param_2 + lVar19);
  *(undefined8 *)(param_2 + lVar19) = param_12;
  _objc_retain(param_12);
  _objc_release(uVar16);
  *(undefined1 *)(param_2 + _DAT_11275f480) = param_5;
  *(undefined8 *)(param_2 + _DAT_11275f484) = param_1;
  *(undefined1 *)(param_2 + _DAT_11275f46c) = 0;
  func_0x00010c18e9e0(param_2);
  uVar2 = *(undefined8 *)(param_2 + lVar17);
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar2;
  func_0x00010b5fc5e4();
  *(char *)(param_2 + _DAT_11275f488) = (char)uVar16;
  _objc_release(uVar2);
  func_0x00010beb96a0(param_2);
  uVar16 = *(undefined8 *)(param_2 + _DAT_11275f48c);
  *(undefined8 *)(param_2 + _DAT_11275f48c) = param_7;
  _objc_retain();
  _objc_release(uVar16);
  lVar20 = (long)_DAT_11275f450;
  func_0x00010c256060(*(undefined8 *)(param_2 + lVar20));
  uVar2 = *(undefined8 *)(param_2 + lVar17);
  func_0x00010bf97060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_106e3f2ac(9);
  uVar16 = param_11;
  func_0x00010bf23120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  uVar3 = *(undefined8 *)(param_2 + lVar20);
  *(undefined8 *)(param_2 + lVar20) = uVar16;
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar20));
  func_0x00010bec1be0(param_2);
  lVar20 = param_2;
  func_0x00010bec8aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c260ee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar4);
  _objc_release(lVar20);
  func_0x00010c287020(param_2);
  func_0x00010c0f0be0(*(undefined8 *)(param_2 + lVar17));
  func_0x00010c152b40(param_1,param_2);
  uVar2 = *(undefined8 *)(param_2 + lVar19);
  uVar16 = *(undefined8 *)(param_2 + lVar17);
  func_0x00010bf97060(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23100();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11275f454;
  uVar3 = *(undefined8 *)(param_2 + lVar18);
  *(undefined8 *)(param_2 + lVar18) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar16);
  lVar20 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c2666e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar20);
  _objc_release(uVar16);
  _objc_release(lVar20);
  uVar16 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c2666e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar16);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c2666e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_2;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar20;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c2666e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c2666e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + lVar18);
  func_0x00010c2666e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010bf49420(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar2);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar19);
  _objc_release(lVar17);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(lVar20);
  _objc_release(uVar16);
  _objc_release(uVar5);
  func_0x00010c24eda0(*(undefined8 *)(param_2 + lVar18));
  _objc_release(param_7);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  func_0x00010c21acc0(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c069df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106e2b728; end: 106e2b72b; -[SCGalleryBaseStoryCell scrollViewDidScroll:page:] */

void FUN_106e2b728(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateCollectionViewLayoutIf_1125f8188);
  return;
}



/* Entry: 106e2b72c; end: 106e2b9bb; -[SCGalleryBaseStoryCell _showIncompatibleIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106e2b72c(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11275f490;
  uVar1 = *(ulong *)(param_1 + lVar18);
  if (uVar1 == 0) {
    puVar2 = PTR_PTR_1126cfb28;
    _objc_alloc();
    func_0x00010c01afa0();
    uVar17 = *(undefined8 *)(param_1 + lVar18);
    *(undefined **)(param_1 + lVar18) = puVar2;
    _objc_release(uVar17);
    lVar3 = param_1;
    func_0x00010bfe9900(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18),param_2,0);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bfe9900();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar18);
    uStack_88 = uVar17;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bfe9900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493a0(uVar6,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar18);
    uStack_80 = uVar9;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf49420(0x4036000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar18);
    uStack_78 = uVar11;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf49420(0x4036000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar14);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar17);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(uVar4);
    uVar1 = *(ulong *)(param_1 + lVar18);
  }
  uVar16 = (ulong)(param_3 ^ 1);
  func_0x00010c1a7f60(uVar1,param_2,uVar16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar1;
  }
  ___stack_chk_fail();
  _objc_retain(uVar16);
  func_0x00010bebdaa0(uVar1);
  uVar15 = uVar16;
  func_0x00010bfd92a0(uVar16,param_2,uVar1 << 3);
  _objc_release(uVar16);
  return uVar15;
}



/* Entry: 106e2b9bc; end: 106e2ba07; +[SCGalleryBaseStoryCell _hasMore:] */

undefined8 FUN_106e2b9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bebdaa0(param_1);
  uVar1 = param_3;
  func_0x00010bfd92a0(param_3,param_2,param_1 << 3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106e2ba08; end: 106e2ba0f; -[SCGalleryBaseStoryCell _maskImage:] */

undefined8 FUN_106e2ba08(void)

{
  return 0;
}



/* Entry: 106e2ba10; end: 106e2ba17; -[SCGalleryBaseStoryCell _subtitleIcon] */

undefined8 FUN_106e2ba10(void)

{
  return 0;
}



/* Entry: 106e2ba18; end: 106e2ba1f; -[SCGalleryBaseStoryCell _shouldShowSubtitleIcon] */

undefined8 FUN_106e2ba18(void)

{
  return 0;
}



/* Entry: 106e2ba20; end: 106e2ba8f; -[SCGalleryBaseStoryCell _lastPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106e2ba20(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11275f460);
  func_0x00010bf343c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_opt_class(param_1);
  func_0x00010bebdaa0();
  _objc_release(uVar1);
  return (long)((double)uVar2 / (double)(param_1 << 3));
}



/* Entry: 106e2ba90; end: 106e2bb47; -[SCGalleryBaseStoryCell _viewMore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ba90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_11275f460;
  func_0x00010c0f0be0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010be47000(param_1);
  func_0x00010c1d7e80(*(undefined8 *)(param_1 + lVar3));
  lVar1 = param_1 + _DAT_11275f45c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2593e0();
  _objc_release(lVar1);
  func_0x00010c287020(param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275f484);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c0f0be0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c152b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar4,param_1,PTR_s_scrollViewDidScroll_page__1126324f0,uVar2);
  return;
}



/* Entry: 106e2bb48; end: 106e2bc47; -[SCGalleryBaseStoryCell cellForSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2bb48(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11275f460;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c072360();
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar4;
    func_0x00010bfecde0(lVar4,param_2,param_3);
    if (lVar2 == 0x7fffffffffffffff) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + _DAT_11275f438);
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33b60(uVar5,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106e2bc48; end: 106e2bd2b;  */

void FUN_106e2bc48(undefined8 param_1,undefined8 param_2)

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
  pcStack_38 = FUN_106e2bd2c;
  uStack_30 = 0x106e2bd3c;
  uStack_28 = 0;
  func_0x00010c0bff00(param_2);
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



/* Entry: 106e2bd2c; end: 106e2bd43;  */

void FUN_106e2bd2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106e2bd44; end: 106e2bd9b;  */

void FUN_106e2bd44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e2bd9c; end: 106e2bd9f;  */

void FUN_106e2bd9c(void)

{
  return;
}



/* Entry: 106e2bda0; end: 106e2becf; +[SCGalleryBaseStoryCell cellHeightForViewModel:] */

double FUN_106e2bda0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f0be0();
  if (lVar1 < 1) {
    dVar4 = 115.0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0f0be0();
    lVar3 = param_1;
    func_0x00010bebdaa0();
    if (lVar2 * lVar3 * 8 <= lVar1) {
      lVar1 = lVar2 * lVar3 * 8;
    }
    lVar2 = param_1;
    func_0x00010bebdaa0(param_1);
    dVar7 = (double)lVar2;
    dVar4 = (double)lVar1 / dVar7;
    func_0x00010bddc3a0(param_1);
    dVar5 = (double)(long)dVar4 + -1.0;
    lVar1 = param_1;
    func_0x00010bebdaa0(param_1);
    lVar2 = param_3;
    func_0x00010bfd92a0(param_3,param_2,lVar1 << 3);
    dVar6 = 30.0;
    if ((int)lVar2 == 0) {
      dVar6 = 0.0;
    }
    dVar8 = 12.0;
    dVar4 = dVar6 + dVar5 + dVar5 + dVar7 * (double)(long)dVar4 + 95.0 + 12.0;
    if ((int)lVar2 != 0) {
      func_0x00010bddc3a0(param_1);
      dVar4 = dVar4 - (dVar8 + -35.0);
    }
  }
  _objc_release(param_3);
  return dVar4;
}



/* Entry: 106e2bed0; end: 106e2beeb; +[SCGalleryBaseStoryCell actionMenuHeightForPage:] */

undefined8 FUN_106e2bed0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x4056000000000000;
  if (param_3 < 1) {
    uVar1 = 0x405cc00000000000;
  }
  return uVar1;
}



/* Entry: 106e2beec; end: 106e2bef3; +[SCGalleryBaseStoryCell _snapsPerRow] */

undefined8 FUN_106e2beec(void)

{
  return 0;
}



/* Entry: 106e2bef4; end: 106e2bf03; +[SCGalleryBaseStoryCell _cellSize] */

undefined1  [16] FUN_106e2bef4(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 106e2bf04; end: 106e2bf73; -[SCGalleryBaseStoryCell didToggleExpand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2bf04(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_11275f460;
  func_0x00010c1d7e80(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  func_0x00010c287020(param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275f484);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c0f0be0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c152b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,param_1,PTR_s_scrollViewDidScroll_page__1126324f0,uVar1);
  return;
}



/* Entry: 106e2bf74; end: 106e2bf9b; -[SCGalleryBaseStoryCell animateActionMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2bf74(long param_1)

{
  if (*(char *)(param_1 + _DAT_11275f494) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11275f430),PTR_s_setHidden__1126479f8);
    return;
  }
  return;
}



/* Entry: 106e2bf9c; end: 106e2c07f; -[SCGalleryBaseStoryCell _titleString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2bf9c(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  iVar1 = _DAT_11275f460;
  if ((param_3 == 0) || ((*(byte *)(param_1 + _DAT_11275f480) & 1) != 0)) {
    lVar7 = (long)_DAT_11275f460;
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bf97060(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010b5f6c38();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106e2c05c;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + iVar1);
  func_0x00010bf97060(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
LAB_106e2c05c:
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106e2c080; end: 106e2c147; -[SCGalleryBaseStoryCell _subtitleString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2c080(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = _DAT_11275f460;
  if ((param_3 == 0) || ((*(byte *)(param_1 + _DAT_11275f480) & 1) != 0)) {
    lVar2 = *(long *)(param_1 + _DAT_11275f460);
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      uVar6 = 0;
      goto LAB_106e2c130;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + iVar1);
  func_0x00010bf97060(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010b5f6c38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
LAB_106e2c130:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106e2c148; end: 106e2cb7f; -[SCGalleryBaseStoryCell updateLayout:reloadData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2c148(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  uint uStack_14c;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 uStack_7f;
  
  lVar18 = (long)_DAT_11275f460;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar18);
  func_0x00010c072360();
  lVar15 = param_1;
  func_0x00010beb66a0();
  func_0x00010beb66a0(param_1);
  lVar7 = param_1;
  func_0x00010c260ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c260f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c260f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  if ((int)lVar15 == 0) {
    func_0x00010bfe9900(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined8 *)&UNK_10dee81a0;
  }
  else {
    func_0x00010c260ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined8 *)&UNK_10dee8198;
  }
  lVar15 = lVar16;
  func_0x00010c2793a0(lVar16);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar6;
  func_0x00010bf493c0(*puVar14,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f720(param_1);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(lVar16);
  _objc_release(lVar6);
  _objc_release(lVar7);
  lVar15 = param_1;
  func_0x00010c260f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar15);
  func_0x00010c0f0be0(*(undefined8 *)(param_1 + lVar18));
  lVar15 = param_1;
  func_0x00010becc580(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar7);
  _objc_release(lVar15);
  func_0x00010c0f0be0(*(undefined8 *)(param_1 + lVar18));
  lVar15 = param_1;
  func_0x00010bec8b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c260f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar7);
  _objc_release(lVar15);
  lVar15 = (long)_DAT_11275f428;
  uVar4 = *(ulong *)(param_1 + lVar15);
  func_0x00010c073040();
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf97060(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar15));
    _objc_release(uVar10);
    _objc_release(uVar5);
  }
  lVar6 = *(long *)(param_1 + lVar15);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    uStack_14c = 1;
  }
  else {
    uStack_14c = (uint)*(undefined8 *)(param_1 + lVar15);
    func_0x00010c073040();
  }
  _objc_release(lVar6);
  if (iVar2 == 0) {
    uStack_14c = 0;
  }
  else {
    uStack_14c = (*(byte *)(param_1 + _DAT_11275f480) ^ 1) & uStack_14c;
    if (param_4 != 0) {
      func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11275f438));
    }
  }
  lVar7 = *(long *)(param_1 + lVar18);
  func_0x00010c0f0be0();
  dVar19 = 64.0;
  if (lVar7 < 1) {
    dVar19 = 94.0;
  }
  lVar7 = param_1;
  func_0x00010bfdf3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010bfdf3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar6;
  func_0x00010bf49420(dVar19);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7740(param_1);
  _objc_release(lVar16);
  _objc_release(lVar6);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010bfdf3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010bfe9180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010bfe9160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar7);
  iVar3 = (int)*(undefined8 *)(param_1 + lVar18);
  func_0x00010c072360();
  lVar7 = param_1;
  func_0x00010bfe9900(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  if (iVar3 == 0) {
    lVar17 = param_1;
    func_0x00010bfdf3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar17;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010bf493a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aaca0(param_1);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar17);
    _objc_release(lVar6);
    _objc_release(lVar7);
    func_0x00010bfe9900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar16;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bfdf3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar6;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf493a0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aac80(param_1);
    _objc_release(lVar8);
    _objc_release(lVar17);
  }
  else {
    lVar17 = lVar6;
    func_0x00010bf49420(0x4049000000000000,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aaca0(param_1);
    _objc_release(lVar17);
    _objc_release(lVar6);
    _objc_release(lVar7);
    func_0x00010bfe9900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar16;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aac80(param_1);
  }
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar16);
  lVar7 = param_1;
  func_0x00010bfe9180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010bfe9160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar7);
  lVar17 = (long)_DAT_11275f43c;
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar17));
  lVar16 = (long)_DAT_11275f438;
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493c0(dVar19 + 12.0 + 9.0 + 1.0);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  *(undefined8 *)(param_1 + lVar17) = uVar10;
  _objc_release(uVar13);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(uVar5);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar17));
  if (iVar2 != 0) {
    lVar7 = param_1;
    _objc_opt_class();
    iVar3 = (int)lVar7;
    func_0x00010be341c0();
    if (iVar3 != 0) {
      uVar10 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010bf343c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar10);
      _objc_opt_class();
      func_0x00010bebdaa0();
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar7 = (long)_DAT_11275f430;
      uVar10 = *(undefined8 *)(param_1 + lVar7);
      ppuVar11 = &PTR____CFConstantStringClassReference_110e87a78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87a78,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(uVar10);
      _objc_release(puVar12);
      _objc_release(ppuVar11);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
      puVar14 = (undefined8 *)(param_1 + _DAT_11275f434);
      func_0x00010c162480(*puVar14);
      uVar10 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0x403e000000000000;
      goto LAB_106e2c94c;
    }
  }
  lVar7 = (long)_DAT_11275f430;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
  puVar14 = (undefined8 *)(param_1 + _DAT_11275f434);
  func_0x00010c162480(*puVar14);
  uVar10 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
LAB_106e2c94c:
  uVar13 = uVar10;
  func_0x00010bf49420(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *puVar14;
  *puVar14 = uVar13;
  uStack_14c = uStack_14c & 1;
  _objc_release(uVar5);
  _objc_release(uVar10);
  func_0x00010c162480(*puVar14);
  if (param_3 == 0) {
    if ((param_4 != 0) && (iVar2 == 0)) {
      func_0x00010c128b60(*(undefined8 *)(param_1 + lVar16));
    }
    uVar10 = 0x3ff0000000000000;
    if (uStack_14c == 0) {
      uVar10 = 0;
    }
    uVar5 = 0;
    if (uStack_14c == 0) {
      uVar5 = 0x3ff0000000000000;
    }
    func_0x00010c1677c0(uVar10,*(undefined8 *)(param_1 + lVar15));
    lVar15 = param_1;
    func_0x00010c271420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar5);
    _objc_release(lVar15);
    if (iVar2 == 0) {
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11275f42c));
      _CGAffineTransformMakeScale(&uStack_140,0x3fdd70a3d70a3d71,0x3fdd70a3d70a3d71);
      uVar10 = *(undefined8 *)(param_1 + _DAT_11275f498);
      uStack_108 = uStack_138;
      uStack_110 = uStack_140;
      uStack_f8 = uStack_128;
      uStack_100 = uStack_130;
    }
    else {
      func_0x00010c1677c0((double)(*(byte *)(param_1 + _DAT_11275f494) ^ 1),
                          *(undefined8 *)(param_1 + _DAT_11275f42c));
      uVar10 = *(undefined8 *)(param_1 + _DAT_11275f498);
      uStack_108 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_110 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_100 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_118 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_120 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    uStack_f0 = uStack_120;
    uStack_e8 = uStack_118;
    func_0x00010c219960(uVar10);
  }
  else {
    _objc_initWeak(&uStack_110,param_1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106e2cb80;
    puStack_90 = &UNK_11086a898;
    _objc_copyWeak(auStack_88,&uStack_110);
    uStack_7f = (undefined1)uStack_14c;
    puStack_d8 = puVar12;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106e2ccbc;
    puStack_c0 = &UNK_1109442f8;
    uStack_80 = (char)iVar2;
    _objc_copyWeak(auStack_b8,&uStack_110);
    uStack_af = (undefined1)param_4;
    uStack_b0 = (char)iVar2;
    func_0x00010bf03420(0x3fc999999999999a,puVar1);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(&uStack_110);
  }
  return;
}



/* Entry: 106e2cb80; end: 106e2ccbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2cb80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
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
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c08cdc0(lVar1);
    dVar4 = 0.0;
    if (*(char *)(param_1 + 0x28) == '\x01') {
      dVar4 = (double)(*(byte *)(lVar1 + _DAT_11275f494) ^ 1);
    }
    func_0x00010c1677c0(dVar4,*(undefined8 *)(lVar1 + _DAT_11275f42c));
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_11275f498);
      uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    }
    else {
      _CGAffineTransformMakeScale(&uStack_90,0x3fdd70a3d70a3d71,0x3fdd70a3d70a3d71);
      uVar2 = *(undefined8 *)(lVar1 + _DAT_11275f498);
      uStack_58 = uStack_88;
      uStack_60 = uStack_90;
      uStack_48 = uStack_78;
      uStack_50 = uStack_80;
    }
    uStack_40 = uStack_70;
    uStack_38 = uStack_68;
    func_0x00010c219960(uVar2,param_2,&uStack_60);
    uVar2 = 0x3ff0000000000000;
    if (*(char *)(param_1 + 0x29) == '\0') {
      uVar2 = 0;
    }
    func_0x00010c1677c0(uVar2,*(undefined8 *)(lVar1 + _DAT_11275f428));
    uVar2 = 0;
    if (*(char *)(param_1 + 0x29) == '\0') {
      uVar2 = 0x3ff0000000000000;
    }
    lVar3 = lVar1;
    func_0x00010c271420(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106e2ccbc; end: 106e2cd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ccbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && ((*(byte *)(param_1 + 0x28) & 1) == 0)) &&
     (*(char *)(param_1 + 0x29) == '\x01')) {
    func_0x00010c128b60(*(undefined8 *)(lVar1 + _DAT_11275f438));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e2cd10; end: 106e2cd23; -[SCGalleryBaseStoryCell setSelectionHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2cd10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275f49c,param_3);
  return;
}



/* Entry: 106e2cd24; end: 106e2cd73; -[SCGalleryBaseStoryCell _setImage:] */

void FUN_106e2cd24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e2cd74; end: 106e2cd77; -[SCGalleryBaseStoryCell thumbnailGenerator:didUpdateSnapThumbnailWithImage:snap:duration:] */

void FUN_106e2cd74(void)

{
  return;
}



/* Entry: 106e2cd78; end: 106e2cf1b; -[SCGalleryBaseStoryCell thumbnailGenerator:didUpdateStoryThumbnailWithImage:snap:latestSnaps:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2cd78(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + _DAT_11275f450) == param_3) {
    func_0x00010be3da40(param_1);
    lVar5 = (long)_DAT_11275f468;
    if (*(long *)(param_1 + lVar5) == 0) {
      _objc_retain(param_4);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = param_4;
      _objc_release(uVar3);
      uVar3 = param_5;
      func_0x00010c0ed100();
      *(int *)(param_1 + _DAT_11275f4a0) = (int)uVar3;
    }
    lVar5 = param_1;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      _objc_release(lVar5);
    }
    else {
      cVar1 = *(char *)(param_1 + _DAT_11275f46c);
      _objc_release();
      _objc_release(lVar5);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      if (cVar1 == '\x01') {
        lVar5 = param_1;
        func_0x00010bfe90c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_106e2cf1c;
        puStack_58 = &UNK_110841f80;
        lStack_50 = param_1;
        _objc_retain(param_4);
        uStack_48 = param_4;
        func_0x00010c27ac60(0x3fd3333333333333,puVar2,param_2,lVar5,0x500000,&puStack_70,0);
        _objc_release(lVar5);
        _objc_release(uStack_48);
        goto LAB_106e2cef4;
      }
    }
    func_0x00010bea47a0(param_1,param_2,param_4);
    *(undefined1 *)(param_1 + _DAT_11275f46c) = 1;
  }
LAB_106e2cef4:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106e2cf1c; end: 106e2cf27;  */

void FUN_106e2cf1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea47b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setImage__112586b90,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106e2cf28; end: 106e2cf9b; -[SCGalleryBaseStoryCell thumbnailGenerator:didLoadMiniThumbnail:snap:duration:] */

void FUN_106e2cf28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010bea47a0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e2cf9c; end: 106e2d0bb; -[SCGalleryBaseStoryCell startGeneratingUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2cf9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c24eda0(*(undefined8 *)(param_1 + _DAT_11275f450));
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = *(long *)(param_1 + _DAT_11275f438);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c24eda0(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar2 = *(long *)(param_1 + _DAT_11275f454);
  func_0x00010c24eda0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c256060(*(undefined8 *)(lVar2 + _DAT_11275f450));
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  lVar3 = *(long *)(lVar2 + _DAT_11275f438);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_210;
    do {
      lVar5 = 0;
      do {
        if (*plStack_210 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c256060(*(undefined8 *)(lStack_218 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_220,auStack_1d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  lVar2 = *(long *)(lVar2 + _DAT_11275f454);
  func_0x00010c256060();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    if (*(long *)(lVar2 + _DAT_11275f468) != 0) {
      func_0x00010c141a40(PTR_PTR_1126cfb18,param_2,*(long *)(lVar2 + _DAT_11275f468),
                          (long)*(int *)(lVar2 + _DAT_11275f4a0));
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106e2d0bc; end: 106e2d1db; -[SCGalleryBaseStoryCell stopGeneratingUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2d0bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c256060(*(undefined8 *)(param_1 + _DAT_11275f450));
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar1 = *(long *)(param_1 + _DAT_11275f438);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c256060(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar2 = *(long *)(param_1 + _DAT_11275f454);
  func_0x00010c256060();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (*(long *)(lVar2 + _DAT_11275f468) != 0) {
      func_0x00010c141a40(PTR_PTR_1126cfb18,param_2,*(long *)(lVar2 + _DAT_11275f468),
                          (long)*(int *)(lVar2 + _DAT_11275f4a0));
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106e2d1dc; end: 106e2d227; -[SCGalleryBaseStoryCell transitioningPosterFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2d1dc(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + _DAT_11275f468) != 0) {
    func_0x00010c141a40(PTR_PTR_1126cfb18,param_2,*(long *)(param_1 + _DAT_11275f468),
                        (long)*(int *)(param_1 + _DAT_11275f4a0));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e2d228; end: 106e2d26b; -[SCGalleryBaseStoryCell transitioningImage] */

void FUN_106e2d228(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106e2d26c; end: 106e2d26f; -[SCGalleryBaseStoryCell transitioningExpandingView] */

void FUN_106e2d26c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe90d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_imageView_1125d7df8);
  return;
}



/* Entry: 106e2d270; end: 106e2d2a7; -[SCGalleryBaseStoryCell setTransitioningInitialImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2d270(long param_1)

{
  func_0x00010bea47a0();
  *(undefined8 *)(param_1 + _DAT_11275f424) = 0x3fd999999999999a;
  return;
}



/* Entry: 106e2d2a8; end: 106e2d307; -[SCGalleryBaseStoryCell collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e2d2a8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275f460;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c072360();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf343c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
  }
  return uVar3;
}



/* Entry: 106e2d308; end: 106e2d30f; -[SCGalleryBaseStoryCell collectionView:cellForItemAtIndexPath:] */

undefined8 FUN_106e2d308(void)

{
  return 0;
}



/* Entry: 106e2d310; end: 106e2d57b; -[SCGalleryBaseStoryCell collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2d310(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d2c18;
  _objc_opt_class(PTR_PTR_1126d2c18);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_4);
    uVar2 = param_5;
    func_0x00010c0840e0();
    lVar8 = (long)_DAT_11275f460;
    uVar3 = *(ulong *)(param_1 + lVar8);
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar2 < uVar4) {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_106e2bd2c;
      uStack_60 = 0x106e2bd3c;
      uStack_58 = 0;
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf343c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bff00();
      _objc_release(uVar7);
      _objc_release(uVar5);
      if (puStack_78[5] != 0) {
        lVar6 = param_1 + _DAT_11275f49c;
        _objc_loadWeakRetained(lVar6);
        uVar5 = puStack_78[5];
        uVar7 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010bf97060(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b6f8630(uVar5,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fb0a0(lVar6);
        _objc_release(uVar5);
        _objc_release(uVar7);
        _objc_release(lVar6);
      }
      uVar2 = param_1 + _DAT_11275f45c;
      _objc_loadWeakRetained();
      uVar4 = uVar2;
      func_0x00010c259460();
      _objc_release(uVar2);
      if ((uVar4 & 1) != 0) {
        func_0x00010c24eda0(param_4);
      }
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uStack_58);
    }
    _objc_release(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e2d57c; end: 106e2d5bb;  */

void FUN_106e2d57c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e2d5bc; end: 106e2d5bf;  */

void FUN_106e2d5bc(void)

{
  return;
}



/* Entry: 106e2d5c0; end: 106e2d60b; -[SCGalleryBaseStoryCell collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_106e2d5c0(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126d2c18;
  _objc_opt_class(PTR_PTR_1126d2c18);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010c256060(in_x3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 106e2d60c; end: 106e2d71b; -[SCGalleryBaseStoryCell textField:shouldChangeCharactersInRange:replacementString:] */

bool FUN_106e2d60c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar4 = param_6;
  func_0x00010c08fa60();
  uVar1 = (lVar3 - param_5) + lVar4;
  _objc_release(lVar2);
  if ((0x1e < uVar1) && (lVar2 = param_6, func_0x00010bf2c4e0(param_6,param_2,1), (int)lVar2 != 0))
  {
    lVar2 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c260c20(lVar3,param_2,0x1e);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar1 < 0x1f;
}



/* Entry: 106e2d71c; end: 106e2d777; -[SCGalleryBaseStoryCell textFieldDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2d71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275f45c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c259380();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e2d778; end: 106e2d8fb; -[SCGalleryBaseStoryCell textFieldDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2d778(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_3);
  lVar7 = (long)_DAT_11275f460;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf97060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c0720c0(ppuVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (((ulong)ppuVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11275f470);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf97060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2220;
    _objc_alloc(PTR_PTR_1126b2220);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar5,param_2,&PTR____CFConstantStringClassReference_110ec33b8,
                        &PTR____CFConstantStringClassReference_110e26b58,puVar6,0,0,0,0);
    func_0x00010c285960(uVar4,param_2,uVar2,ppuVar1,puVar5,0);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106e2d8fc; end: 106e2d917; -[SCGalleryBaseStoryCell textFieldShouldReturn:] */

undefined8 FUN_106e2d8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c13a0e0(param_3);
  return 0;
}



/* Entry: 106e2d918; end: 106e2e283; -[SCGalleryBaseStoryCell setSelected:selectOverlayImage:snapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2d918(long param_1,undefined8 param_2,undefined1 param_3,long param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar25 = (long)_DAT_11275f464;
  *(undefined1 *)(param_1 + lVar25) = param_3;
  lVar23 = param_5;
  func_0x00010bf529e0();
  lVar24 = (long)_DAT_11275f4a4;
  if ((*(byte *)(param_1 + lVar25) & 1) == 0 && lVar23 == 0) {
    uVar29 = 0x3fe999999999999a;
  }
  else {
    uVar29 = 0;
    if (*(long *)(param_1 + lVar24) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar21 = *(undefined8 *)(param_1 + lVar24);
      *(undefined **)(param_1 + lVar24) = puVar2;
      _objc_release(uVar21);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf414e0(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar24));
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar24));
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60();
      lVar27 = (long)_DAT_11275f498;
      uVar21 = *(undefined8 *)(param_1 + lVar27);
      *(undefined **)(param_1 + lVar27) = puVar2;
      _objc_release(uVar21);
      _objc_release(puVar3);
      func_0x00010c182220(*(undefined8 *)(param_1 + lVar27));
      lVar25 = *(long *)(param_1 + _DAT_11275f460);
      func_0x00010c0f0be0();
      if (lVar25 < 1) {
        _CGAffineTransformMakeScale(&uStack_1a0,0x3fdd70a3d70a3d71,0x3fdd70a3d70a3d71);
        puStack_168 = puStack_198;
        uStack_170 = uStack_1a0;
        pcStack_158 = pcStack_188;
        uStack_160 = uStack_190;
        uStack_148 = uStack_178;
        uStack_150 = uStack_180;
        func_0x00010c219960(*(undefined8 *)(param_1 + lVar27));
      }
      else {
        puStack_168 = *(undefined8 **)(PTR__CGAffineTransformIdentity_110347008 + 8);
        uStack_170 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
        pcStack_158 = *(code **)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
        uStack_160 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
        uStack_148 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
        uStack_150 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
        func_0x00010c219960(*(undefined8 *)(param_1 + lVar27));
      }
      func_0x00010befbb60(*(undefined8 *)(param_1 + lVar24));
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_1 + lVar27);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar24);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar27);
      uStack_a0 = uVar21;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar24);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar27);
      uStack_98 = uVar8;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar24);
      func_0x00010c08de00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar27);
      uStack_90 = uVar11;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = *(undefined8 *)(param_1 + lVar24);
      func_0x00010c2793a0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar3);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar21);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar25 = param_1;
      func_0x00010bfe90c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar25);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_1 + lVar24);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar25 = param_1;
      func_0x00010bfe9900();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = lVar25;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar24);
      uStack_c0 = uVar21;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1;
      func_0x00010bfe9900();
      _objc_retainAutoreleasedReturnValue();
      lVar22 = lVar17;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar24);
      uStack_b8 = uVar8;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = param_1;
      func_0x00010bfe9900(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar26;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar24);
      uStack_b0 = uVar11;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1;
      func_0x00010bfe9900(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_a8 = uVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar3);
      _objc_release(uVar14);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(uVar7);
      _objc_release(uVar11);
      _objc_release(lVar20);
      _objc_release(lVar26);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(lVar22);
      _objc_release(lVar17);
      _objc_release(uVar5);
      _objc_release(uVar21);
      _objc_release(lVar27);
      _objc_release(lVar25);
      _objc_release(uVar4);
    }
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar24));
  uVar21 = *(undefined8 *)(param_1 + _DAT_11275f454);
  func_0x00010c2666e0(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar29);
  _objc_release(uVar21);
  lVar24 = (long)_DAT_11275f460;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar24);
  func_0x00010c072360();
  if (iVar1 != 0) {
    lVar22 = (long)_DAT_11275f438;
    lVar17 = *(long *)(param_1 + lVar22);
    func_0x00010bfed1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = lVar17;
    func_0x00010bf52a60();
    lVar25 = lRam0000000000000000;
    if (lVar27 != 0) {
      do {
        lVar26 = 0;
        do {
          if (lRam0000000000000000 != lVar25) {
            _objc_enumerationMutation(lVar17);
          }
          uVar28 = *(ulong *)(lVar26 * 8);
          func_0x00010c0840e0();
          uVar18 = *(ulong *)(param_1 + lVar24);
          func_0x00010bf343c0();
          _objc_retainAutoreleasedReturnValue();
          uVar19 = uVar18;
          func_0x00010bf529e0();
          _objc_release(uVar18);
          if (uVar28 < uVar19) {
            uStack_170 = 0;
            uStack_160 = 0x3032000000;
            pcStack_158 = FUN_106e2bd2c;
            uStack_150 = 0x106e2bd3c;
            uStack_148 = 0;
            uVar21 = *(undefined8 *)(param_1 + lVar24);
            puStack_168 = &uStack_170;
            func_0x00010bf343c0(uVar21);
            _objc_retainAutoreleasedReturnValue();
            uVar29 = uVar21;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0bff00();
            _objc_release(uVar29);
            _objc_release(uVar21);
            lVar20 = *(long *)(param_1 + lVar22);
            func_0x00010bf33b60();
            _objc_retainAutoreleasedReturnValue();
            if ((lVar20 != 0) && (puStack_168[5] != 0)) {
              lVar15 = param_1 + _DAT_11275f49c;
              _objc_loadWeakRetained(lVar15);
              uVar21 = puStack_168[5];
              uVar29 = *(undefined8 *)(param_1 + lVar24);
              func_0x00010bf97060(uVar29);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010b6f8630(uVar21,uVar29);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1fb0a0(lVar15);
              _objc_release(uVar21);
              _objc_release(uVar29);
              _objc_release(lVar15);
            }
            _objc_release(lVar20);
            __Block_object_dispose(&uStack_170,8);
            _objc_release(uStack_148);
          }
          lVar26 = lVar26 + 1;
        } while (lVar27 != lVar26);
        lVar27 = lVar17;
        func_0x00010bf52a60();
      } while (lVar27 != 0);
    }
    _objc_release(lVar17);
  }
  uVar29 = 0x3fe0000000000000;
  if (lVar23 == 0) {
    uVar29 = 0x3ff0000000000000;
  }
  func_0x00010c1677c0(uVar29,*(undefined8 *)(param_1 + _DAT_11275f498));
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar29 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = *(long *)(*(long *)(param_4 + 0x20) + 8);
  uVar21 = *(undefined8 *)(lVar23 + 0x28);
  *(undefined8 *)(lVar23 + 0x28) = uVar29;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar21);
  return;
}



/* Entry: 106e2e284; end: 106e2e2c3;  */

void FUN_106e2e284(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e2e2c4; end: 106e2e2d7;  */

void FUN_106e2e2c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e2e2d8; end: 106e2e2f3; -[SCGalleryBaseStoryCell interactionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e2e2d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (*(char *)(param_1 + _DAT_11275f480) != '\0') {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106e2e2f4; end: 106e2e30f; -[SCGalleryBaseStoryCell setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2e2f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275f480) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1facd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f454),PTR_s_setSelectMode__11265c558);
  return;
}



/* Entry: 106e2e310; end: 106e2e3d3; -[SCGalleryBaseStoryCell canSelectAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106e2e310(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (int)*(undefined8 *)(param_3 + _DAT_11275f460);
  func_0x00010c072360();
  uVar4 = 0x405cc00000000000;
  uVar5 = 0x4055400000000000;
  if (iVar1 == 0) {
    uVar5 = uVar4;
  }
  lVar3 = param_3;
  func_0x00010bfb68e0();
  iVar1 = (int)lVar3;
  _CGRectGetWidth();
  _CGRectContainsPoint(0,0,uVar4,uVar5,param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bfe9900(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfb68e0();
    uVar2 = (uint)lVar3;
    _CGRectContainsPoint();
    uVar2 = uVar2 ^ 1;
    _objc_release(param_3);
  }
  return uVar2;
}



/* Entry: 106e2e3d4; end: 106e2e3f3; -[SCGalleryBaseStoryCell _touchItemCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2e3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf33b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f438),PTR_s_cellForItemAtIndexPath__1125aa880,
             *(undefined8 *)(param_1 + _DAT_11275f4a8));
  return;
}



/* Entry: 106e2e3f4; end: 106e2e457; -[SCGalleryBaseStoryCell _shouldTriggerViewMore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106e2e3f4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11275f430);
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bebdaa0();
    lVar4 = *(long *)(param_1 + _DAT_11275f4a8);
    func_0x00010c0840e0(lVar4);
    bVar1 = lVar3 * 7 <= lVar4;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106e2e458; end: 106e2e76f; -[SCGalleryBaseStoryCell _handleLongPressGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2e458(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c252440();
  if (lVar2 < 3) {
    if (lVar2 == 0) {
LAB_106e2e524:
      func_0x00010becdb60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
    }
    else {
      if (lVar2 != 1) {
        if (lVar2 == 2) {
          lVar2 = param_5;
          func_0x00010c29bf00(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09ef00(param_5);
          _objc_release(lVar2);
          param_1 = param_1 - *(double *)(param_3 + _DAT_11275f458);
          param_2 = param_2 - ((double *)(param_3 + _DAT_11275f458))[1];
          if (1.0 < SQRT(param_2 * param_2 + param_1 * param_1)) {
            func_0x00010c14c8a0(param_5);
          }
        }
        goto LAB_106e2e610;
      }
      pdVar1 = (double *)(param_3 + _DAT_11275f458);
      lVar2 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5);
      *pdVar1 = param_1;
      pdVar1[1] = param_2;
      _objc_release(lVar2);
      uVar3 = *(undefined8 *)(param_3 + _DAT_11275f438);
      func_0x00010bfed040(*pdVar1,pdVar1[1]);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + _DAT_11275f4a8);
      *(undefined8 *)(param_3 + _DAT_11275f4a8) = uVar3;
      _objc_release(uVar7);
      func_0x00010becdb60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
    }
    func_0x00010bf03160();
  }
  else {
    if (lVar2 - 4U < 2) goto LAB_106e2e524;
    if (lVar2 != 3) goto LAB_106e2e610;
    lVar2 = param_3;
    func_0x00010becdb60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010bf03160(lVar2);
      lVar8 = param_3;
      func_0x00010beb6dc0();
      if ((int)lVar8 == 0) {
        uVar4 = *(ulong *)(param_3 + _DAT_11275f4a8);
        func_0x00010c0840e0();
        lVar8 = (long)_DAT_11275f460;
        uVar5 = *(ulong *)(param_3 + lVar8);
        func_0x00010bf343c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf529e0();
        _objc_release(uVar5);
        if (uVar4 < uVar6) {
          puStack_88 = &uStack_90;
          uStack_90 = 0;
          uStack_80 = 0x3032000000;
          pcStack_78 = FUN_106e2bd2c;
          uStack_70 = 0x106e2bd3c;
          uStack_68 = 0;
          uVar7 = *(undefined8 *)(param_3 + lVar8);
          func_0x00010bf343c0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar7;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bff00();
          _objc_release(uVar3);
          _objc_release(uVar7);
          func_0x00010be31a60(param_3);
          __Block_object_dispose(&uStack_90,8);
          _objc_release(uStack_68);
        }
      }
      else {
        func_0x00010bee9bc0(param_3);
      }
    }
  }
  _objc_release(lVar2);
LAB_106e2e610:
  _objc_release(param_5);
  return;
}



/* Entry: 106e2e770; end: 106e2e7a7;  */

void FUN_106e2e770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e2e7a8; end: 106e2e7ab;  */

void FUN_106e2e7a8(void)

{
  return;
}



/* Entry: 106e2e7ac; end: 106e2e85b; -[SCGalleryBaseStoryCell _handleTap:cell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2e7ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_11275f45c;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275f460);
  uVar1 = param_4;
  func_0x00010c247ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2593c0(lVar2,param_2,param_1,param_3,uVar3,param_4,uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106e2e85c; end: 106e2ea77; -[SCGalleryBaseStoryCell _handleActionMenuLongPressGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2e85c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010c252440();
  if (lVar7 < 3) {
    if (lVar7 == 1) {
      func_0x00010c14c8a0(*(undefined8 *)(param_1 + _DAT_11275f440));
LAB_106e2e8cc:
      lVar7 = param_1;
      func_0x00010beb6dc0();
      if ((int)lVar7 != 0) {
        func_0x00010bee9bc0(param_1);
        goto LAB_106e2ea40;
      }
    }
    else if (lVar7 != 2) goto LAB_106e2ea40;
  }
  else {
    if (lVar7 == 3) goto LAB_106e2e8cc;
    if (lVar7 != 4) goto LAB_106e2ea40;
  }
  uVar1 = *(ulong *)(param_1 + _DAT_11275f4a8);
  func_0x00010c0840e0();
  lVar7 = (long)_DAT_11275f460;
  uVar2 = *(ulong *)(param_1 + lVar7);
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar1 < uVar3) {
    lVar4 = param_1;
    func_0x00010becdb60();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_106e2bd2c;
    uStack_50 = 0x106e2bd3c;
    uStack_48 = 0;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf343c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bff00();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if (lVar4 != 0) {
      param_1 = param_1 + _DAT_11275f45c;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2593a0();
      _objc_release(param_1);
    }
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
    _objc_release(lVar4);
  }
LAB_106e2ea40:
  _objc_release(param_3);
  return;
}



/* Entry: 106e2ea78; end: 106e2eaaf;  */

void FUN_106e2ea78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e2eab0; end: 106e2eab3;  */

void FUN_106e2eab0(void)

{
  return;
}



/* Entry: 106e2eab4; end: 106e2eafb; -[SCGalleryBaseStoryCell gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106e2eab4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11275f45c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c259440();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106e2eafc; end: 106e2eb2f; -[SCGalleryBaseStoryCell gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106e2eafc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_11275f444)) {
    return param_3 != *(long *)(param_1 + _DAT_11275f44c);
  }
  return false;
}



/* Entry: 106e2eb30; end: 106e2eb8f; -[SCGalleryBaseStoryCell _startThumbnailLatencyTimers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2eb30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be3da40();
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c1503c0(0x4024000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__thumbnailLatencyTimerDidFire__112532a10,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275f4ac);
  *(undefined **)(param_1 + _DAT_11275f4ac) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e2eb90; end: 106e2ebc3; -[SCGalleryBaseStoryCell _invalidateTimers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2eb90(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f4ac;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e2ebc4; end: 106e2ebdf; -[SCGalleryBaseStoryCell _thumbnailLatencyTimerDidFire:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ebc4(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11275f4ac) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be3da50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidateTimers_11256d030);
  return;
}



/* Entry: 106e2ebe0; end: 106e2ebef; -[SCGalleryBaseStoryCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e2ebe0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f460);
}



/* Entry: 106e2ebf0; end: 106e2ebff; -[SCGalleryBaseStoryCell encryptedContentManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e2ebf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f474);
}



/* Entry: 106e2ec00; end: 106e2ec0f; -[SCGalleryBaseStoryCell cachingMediaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e2ec00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f478);
}



/* Entry: 106e2ec10; end: 106e2ec1f; -[SCGalleryBaseStoryCell memoriesEntrySyncStatusGeneratorBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e2ec10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f47c);
}



/* Entry: 106e2ec20; end: 106e2ec3f; -[SCGalleryBaseStoryCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ec20(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275f45c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e2ec40; end: 106e2ec53; -[SCGalleryBaseStoryCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ec40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275f45c,param_3);
  return;
}



/* Entry: 106e2ec54; end: 106e2ec63; -[SCGalleryBaseStoryCell isActionMenu] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e2ec54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f494);
}



/* Entry: 106e2ec64; end: 106e2ec73; -[SCGalleryBaseStoryCell setIsActionMenu:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ec64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275f494) = param_3;
  return;
}



/* Entry: 106e2ec74; end: 106e2ec93; -[SCGalleryBaseStoryCell containerViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ec74(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275f4b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e2ec94; end: 106e2eca7; -[SCGalleryBaseStoryCell setContainerViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ec94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275f4b0,param_3);
  return;
}



/* Entry: 106e2eca8; end: 106e2ecb7; -[SCGalleryBaseStoryCell selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e2eca8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f480);
}



/* Entry: 106e2ecb8; end: 106e2ecc7; -[SCGalleryBaseStoryCell snapsCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e2ecb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f438);
}



/* Entry: 106e2ecc8; end: 106e2ecd7; -[SCGalleryBaseStoryCell titleField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e2ecc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f428);
}



/* Entry: 106e2ecd8; end: 106e2ee9b; -[SCGalleryBaseStoryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ecd8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f428,0);
  _objc_storeStrong(param_1 + _DAT_11275f438,0);
  _objc_destroyWeak(param_1 + _DAT_11275f4b0);
  _objc_destroyWeak(param_1 + _DAT_11275f45c);
  _objc_storeStrong(param_1 + _DAT_11275f478,0);
  _objc_storeStrong(param_1 + _DAT_11275f474,0);
  _objc_storeStrong(param_1 + _DAT_11275f460,0);
  _objc_storeStrong(param_1 + _DAT_11275f47c,0);
  _objc_storeStrong(param_1 + _DAT_11275f470,0);
  _objc_destroyWeak(param_1 + _DAT_11275f49c);
  _objc_storeStrong(param_1 + _DAT_11275f434,0);
  _objc_storeStrong(param_1 + _DAT_11275f43c,0);
  _objc_storeStrong(param_1 + _DAT_11275f468,0);
  _objc_storeStrong(param_1 + _DAT_11275f4ac,0);
  _objc_storeStrong(param_1 + _DAT_11275f4a8,0);
  _objc_storeStrong(param_1 + _DAT_11275f44c,0);
  _objc_storeStrong(param_1 + _DAT_11275f448,0);
  _objc_storeStrong(param_1 + _DAT_11275f444,0);
  _objc_storeStrong(param_1 + _DAT_11275f440,0);
  _objc_storeStrong(param_1 + _DAT_11275f498,0);
  _objc_storeStrong(param_1 + _DAT_11275f4a4,0);
  _objc_storeStrong(param_1 + _DAT_11275f42c,0);
  _objc_storeStrong(param_1 + _DAT_11275f430,0);
  _objc_storeStrong(param_1 + _DAT_11275f490,0);
  _objc_storeStrong(param_1 + _DAT_11275f48c,0);
  _objc_storeStrong(param_1 + _DAT_11275f454,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f450,0);
  return;
}



/* Entry: 106e2ee9c; end: 106e2f76b; -[SCGalleryBaseStorySnapCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106e2ee9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 **ppuVar15;
  undefined8 uVar16;
  undefined *unaff_x20;
  long lVar17;
  long lVar18;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = PTR_PTR_1126f7138;
  puVar1 = &uStack_e0;
  uStack_e0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar14 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar18 = (long)_DAT_11275f4bc;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar3;
    _objc_release(uVar16);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar18));
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar18));
    puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_f0 = uVar16;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar16;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar18);
    uStack_100 = uVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    puStack_110 = (undefined *)uVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar18);
    uStack_128 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_130 = uVar5;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar5;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_120);
    _objc_release(puVar3);
    _objc_release(uVar16);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(uStack_130);
    _objc_release(uStack_128);
    _objc_release(puStack_118);
    _objc_release(puStack_108);
    _objc_release(puStack_110);
    _objc_release(uStack_100);
    _objc_release(puStack_f8);
    _objc_release(puStack_e8);
    _objc_release(uStack_f0);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar17 = (long)_DAT_11275f4c0;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar3;
    _objc_release(uVar16);
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar17));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3feccccccccccccd,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    puStack_e8 = (undefined8 *)uVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    puStack_f8 = (undefined8 *)uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    uStack_100 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = (undefined8 *)uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar5;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c274200(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar16;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_110);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar16);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(puStack_108);
    _objc_release(uStack_100);
    _objc_release(puStack_f8);
    _objc_release(uStack_f0);
    _objc_release(puStack_e8);
    puVar3 = PTR_PTR_1126d22b8;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar17 = (long)_DAT_11275f4c8;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar3;
    _objc_release(uVar16);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar18));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    puStack_e8 = (undefined8 *)uVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    puStack_f8 = (undefined8 *)uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar18);
    uStack_100 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = (undefined8 *)uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar5;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar4;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar16;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_110);
    _objc_release(puVar3);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(puStack_108);
    _objc_release(uStack_100);
    _objc_release(puStack_f8);
    _objc_release(uStack_f0);
    _objc_release(puStack_e8);
    puVar13 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar17 = (long)_DAT_11275f4cc;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar13;
    _objc_release(uVar16);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    unaff_x20 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x00010be0e660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(unaff_x20);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar15 = &puStack_160;
  pcStack_138 = FUN_106e2f76c;
  puStack_150 = unaff_x20;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf2dba0(*(undefined8 *)((long)puVar14 + (long)_DAT_11275f4d0));
  func_0x00010bf2dba0(*(undefined8 *)((long)puVar14 + (long)_DAT_11275f4d4));
  func_0x00010c256060(puVar14);
  func_0x00010bddaac0(puVar14);
  lVar17 = (long)_DAT_11275f4d8;
  func_0x00010c137fe0(*(undefined8 *)((long)puVar14 + lVar17));
  uVar16 = *(undefined8 *)((long)puVar14 + lVar17);
  *(undefined8 *)((long)puVar14 + lVar17) = 0;
  _objc_release(uVar16);
  puStack_158 = PTR_PTR_1126f7138;
  puStack_160 = puVar14;
  _objc_msgSendSuper2(&puStack_160,PTR_s_dealloc_112525b20);
  return ppuVar15;
}



/* Entry: 106e2f76c; end: 106e2f7f3; -[SCGalleryBaseStorySnapCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2f76c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11275f4d0));
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11275f4d4));
  func_0x00010c256060(param_1);
  func_0x00010bddaac0(param_1);
  lVar2 = (long)_DAT_11275f4d8;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f7138;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e2f7f4; end: 106e2f8e3; -[SCGalleryBaseStorySnapCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2f7f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f7138;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11275f4d0));
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11275f4d4));
  func_0x00010c1097a0(*(undefined8 *)(param_1 + _DAT_11275f4c8));
  func_0x00010c256060(param_1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f4c0));
  func_0x00010c1a7f60(param_1);
  lVar2 = (long)_DAT_11275f4d8;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010bddaac0(param_1);
  lVar2 = (long)_DAT_11275f4dc;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f4cc));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f4c4));
  return;
}



/* Entry: 106e2f8e4; end: 106e2fccf; -[SCGalleryBaseStorySnapCell setViewModel:selectMode:encryptedContentManager:cachingMediaManager:memoriesEntrySyncStatusGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2f8e4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined1 auStack_a0 [32];
  double dStack_80;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar7 = (long)_DAT_11275f4e0;
  _objc_storeWeak(param_2 + lVar7,param_4);
  lVar8 = (long)_DAT_11275f4e4;
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_2 + lVar8);
  *(undefined8 *)(param_2 + lVar8) = param_6;
  _objc_release(uVar1);
  lVar8 = (long)_DAT_11275f4e8;
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_2 + lVar8);
  *(undefined8 *)(param_2 + lVar8) = param_7;
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11275f4ec;
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_2 + lVar5);
  *(undefined8 *)(param_2 + lVar5) = param_8;
  _objc_release(uVar1);
  lVar8 = param_2;
  func_0x00010c06b5a0();
  if ((int)lVar8 != 0) {
    _CGAffineTransformMakeScale(auStack_a0,0x3ff028f5c28f5c29,0x3ff028f5c28f5c29);
    lVar8 = param_2;
    func_0x00010bfe90c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar8);
    param_1 = dStack_80;
  }
  func_0x00010c28b6c0(param_2);
  uVar1 = *(undefined8 *)(param_2 + lVar5);
  lVar8 = param_2 + lVar7;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2 + lVar7;
  _objc_loadWeakRetained(lVar5);
  lVar3 = lVar5;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23980();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11275f4d8;
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  *(undefined8 *)(param_2 + lVar6) = uVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar8);
  lVar8 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010c2666e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar8);
  _objc_release(uVar1);
  _objc_release(lVar8);
  lVar8 = param_2 + lVar7;
  _objc_loadWeakRetained();
  lVar5 = lVar8;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  _objc_release(lVar5);
  _objc_release(lVar8);
  lVar8 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar9 = param_1 + -18.0;
  if (lVar2 != 2) {
    dVar9 = param_1 + -18.0 + -2.0;
  }
  uVar1 = 0;
  if (lVar2 != 2) {
    uVar1 = 0x4000000000000000;
  }
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010c2666e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar9,uVar1,0x4032000000000000,0x4032000000000000);
  _objc_release(uVar4);
  _objc_release(lVar8);
  uVar1 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010c2666e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d4a0();
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar6));
  func_0x00010c24eda0(*(undefined8 *)(param_2 + lVar6));
  lVar8 = param_2 + lVar7;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c074da0();
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11275f4cc));
  _objc_release(lVar8);
  lVar8 = param_2 + lVar7;
  _objc_loadWeakRetained();
  lVar5 = lVar8;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11275f4c4));
  }
  else {
    lVar7 = param_2 + lVar7;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bf91bc0();
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11275f4c4));
    _objc_release(lVar7);
  }
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar8);
  func_0x00010c1facc0(*(undefined8 *)(param_2 + _DAT_11275f4c8));
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 106e2fcd0; end: 106e2fcd3; -[SCGalleryBaseStorySnapCell updateUI] */

void FUN_106e2fcd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestThumbnail_112582020);
  return;
}



/* Entry: 106e2fcd4; end: 106e2fcdb; -[SCGalleryBaseStorySnapCell _favoriteIconLayoutConstraints] */

undefined8 FUN_106e2fcd4(void)

{
  return 0;
}



/* Entry: 106e2fcdc; end: 106e2fce3; -[SCGalleryBaseStorySnapCell sourceViewForOpera] */

undefined8 FUN_106e2fcdc(void)

{
  return 0;
}



/* Entry: 106e2fce4; end: 106e2fd4b; -[SCGalleryBaseStorySnapCell animateTap:] */

void FUN_106e2fce4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106e2fd4c;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40);
  return;
}



/* Entry: 106e2fd4c; end: 106e2fdc7;  */

void FUN_106e2fd4c(long param_1,undefined8 param_2)

{
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    _CGAffineTransformMakeScale(&uStack_50,0x3feccccccccccccd,0x3feccccccccccccd);
  }
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 106e2fdc8; end: 106e2fdd7; -[SCGalleryBaseStorySnapCell startGeneratingUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2fdc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f4d8),PTR_s_startGeneratingUpdates_112671590);
  return;
}



/* Entry: 106e2fdd8; end: 106e2fde7; -[SCGalleryBaseStorySnapCell stopGeneratingUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2fdd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f4d8),PTR_s_stopGeneratingUpdates_112673240);
  return;
}



/* Entry: 106e2fde8; end: 106e2fe53; -[SCGalleryBaseStorySnapCell _requestThumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2fde8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11275f4e0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06ece0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    func_0x00010bdc71a0(param_1);
  }
  else {
    func_0x00010be911e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f4dc),PTR_s_setHidden__1126479f8,lVar2);
  return;
}



/* Entry: 106e2fe54; end: 106e300cf; -[SCGalleryBaseStorySnapCell _requestImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2fe54(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar10 = (long)_DAT_11275f4d4;
  func_0x00010bf2dba0(*(undefined8 *)(param_5 + lVar10));
  func_0x00010bfb68e0(param_5);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar11 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  param_4 = param_4 * dVar11;
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar9 = (long)_DAT_11275f4e0;
  lVar3 = param_5 + lVar9;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010b5fa088();
  _objc_release(lVar4);
  _objc_release(lVar3);
  dVar11 = param_4;
  dVar12 = param_4;
  if (10 < lVar5 - 2U) {
    lVar3 = param_5 + lVar9;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c113000();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0ed100();
    _objc_release(lVar4);
    _objc_release(lVar3);
    dVar12 = param_3 * param_1;
    if (((long)(int)lVar5 - 2U & 0xfffffffffffffffa) != 0) {
      dVar11 = param_3 * param_1;
      dVar12 = param_4;
    }
  }
  _objc_initWeak(auStack_78,param_5);
  uVar6 = *(undefined8 *)(param_5 + _DAT_11275f4e8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar3 = lVar9;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_80,auStack_78);
  uVar7 = uVar6;
  func_0x00010c134d00(dVar11,dVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + lVar10);
  *(undefined8 *)(param_5 + lVar10) = uVar7;
  _objc_release(uVar8);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106e300d0; end: 106e30147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e300d0(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 != 0) {
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11275f4d0));
      func_0x00010bedadc0(param_1);
    }
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f4c0));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e30148; end: 106e30247; -[SCGalleryBaseStorySnapCell _updateLoadingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e30148(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bddaac0();
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106e30248;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_60);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275f4f0);
  *(undefined8 *)(param_1 + _DAT_11275f4f0) = uVar1;
  _objc_release(uVar2);
  if (param_3 == 0) {
    _dispatch_time(0,3000000000);
    func_0x00010058c530();
  }
  else {
    func_0x00010beb6160(param_1);
  }
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}


