/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10663cbb8; end: 10663cc5b; -[SCCollectionViewSingleComposerCellSection reuseCellClassesByIdentifiers] */

undefined * FUN_10663cbb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cc4b0;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc4b0;
  puStack_38 = puVar1;
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&puStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(*(long *)(puVar1 + 0x48) != 0);
}



/* Entry: 10663cc5c; end: 10663cc6b; -[SCCollectionViewSingleComposerCellSection numberOfCellsInSection] */

bool FUN_10663cc5c(long param_1)

{
  return *(long *)(param_1 + 0x48) != 0;
}



/* Entry: 10663cc6c; end: 10663cd03; -[SCCollectionViewSingleComposerCellSection cellForItemAtIndexInSection:] */

void FUN_10663cc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126cc4b0;
  func_0x00010c13fda0(PTR_PTR_1126cc4b0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf40940(lVar1,param_2,param_1,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  func_0x00010be76200(param_1,param_2,lVar3,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10663cd04; end: 10663cdaf; -[SCCollectionViewSingleComposerCellSection sizeForItemAtIndexInSection:withWidth:] */

void FUN_10663cd04(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c156160();
  _objc_release(lVar1);
  func_0x00010c0c3ec0(*(undefined8 *)(param_1 + 0x48),param_2,0);
  return;
}



/* Entry: 10663cdb0; end: 10663cdd7; -[SCCollectionViewSingleComposerCellSection supplementaryViewProvider] */

void FUN_10663cdb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10663cdd8; end: 10663cdff; -[SCCollectionViewSingleComposerCellSection sectionInfo] */

void FUN_10663cdd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10663ce00; end: 10663ce0b; -[SCCollectionViewSingleComposerCellSection collectionView:willDisplayCell:atIndexInSection:] */

void FUN_10663ce00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be76210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__populateUIForCell_atIndexInSect_11257b220,param_4,param_5);
  return;
}



/* Entry: 10663ce0c; end: 10663cecf; -[SCCollectionViewSingleComposerCellSection valdiContextProviderDidUpdateComposerContext:] */

void FUN_10663ce0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10663ced0; end: 10663cefb;  */

void FUN_10663ced0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10663cefc; end: 10663cfcf; -[SCCollectionViewSingleComposerCellSection _updateComposerContext] */

void FUN_10663cefc(long param_1)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,param_1);
  if (lVar1 != *(long *)(param_1 + 0x48)) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10663cfd0;
    puStack_40 = &UNK_110841fb0;
    _objc_copyWeak(auStack_30,auStack_28);
    lStack_38 = lVar1;
    func_0x00010bcbe2c4("APPSTORE",&puStack_58);
    _objc_destroyWeak(auStack_30);
  }
  _objc_destroyWeak(auStack_28);
  _objc_release(lVar1);
  return;
}



/* Entry: 10663cfd0; end: 10663d003;  */

void FUN_10663cfd0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10663d004; end: 10663d11f; -[SCCollectionViewSingleComposerCellSection _setComposerContext:] */

void FUN_10663d004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e4c00(uVar1);
  puVar2 = PTR_PTR_1126b48b0;
  func_0x00010c128f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar1);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf40a00();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10663d120; end: 10663d14b;  */

void FUN_10663d120(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10663d14c; end: 10663d183; -[SCCollectionViewSingleComposerCellSection _onLayoutDirty] */

void FUN_10663d14c(long param_1)

{
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf40960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10663d184; end: 10663d19b; -[SCCollectionViewSingleComposerCellSection sectionInsets] */

void FUN_10663d184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             PTR__OBJC_CLASS___NSValue_1126afdf8,PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 10663d19c; end: 10663d1f3; -[SCCollectionViewSingleComposerCellSection setActionHandler:] */

void FUN_10663d19c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c161980(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10663d1f4; end: 10663d1fb; -[SCCollectionViewSingleComposerCellSection sectionUpdateModel] */

undefined8 FUN_10663d1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10663d1fc; end: 10663d203; -[SCCollectionViewSingleComposerCellSection setSectionUpdateModel:] */

void FUN_10663d1fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10663d204; end: 10663d21b; -[SCCollectionViewSingleComposerCellSection delegate] */

void FUN_10663d204(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10663d21c; end: 10663d227; -[SCCollectionViewSingleComposerCellSection setDelegate:] */

void FUN_10663d21c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 10663d228; end: 10663d22f; -[SCCollectionViewSingleComposerCellSection dataLoadingStatus] */

undefined8 FUN_10663d228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10663d230; end: 10663d237; -[SCCollectionViewSingleComposerCellSection setDataLoadingStatus:] */

void FUN_10663d230(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10663d238; end: 10663d23f; -[SCCollectionViewSingleComposerCellSection actionHandler] */

undefined8 FUN_10663d238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10663d240; end: 10663d247; -[SCCollectionViewSingleComposerCellSection updateLayoutingForComposerCells] */

undefined1 FUN_10663d240(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



/* Entry: 10663d248; end: 10663d24f; -[SCCollectionViewSingleComposerCellSection setUpdateLayoutingForComposerCells:] */

void FUN_10663d248(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x59) = param_3;
  return;
}



/* Entry: 10663d250; end: 10663d2c3; -[SCCollectionViewSingleComposerCellSection .cxx_destruct] */

void FUN_10663d250(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10663d2c4; end: 10663d2db;  */

void FUN_10663d2c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10663d2dc; end: 10663d88b;  */

void FUN_10663d2dc(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long unaff_x22;
  undefined **ppuVar18;
  uint uVar19;
  undefined *puStack_90;
  long lStack_78;
  undefined4 uStack_6c;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
LAB_10663d350:
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x000107cf97e4();
    uStack_6c = (undefined4)uVar9;
    _objc_release(uVar6);
    if (lVar3 != 0) goto LAB_10663d37c;
  }
  else {
    unaff_x22 = *(long *)(param_1 + 0x20);
    func_0x00010bef0c80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = unaff_x22;
    func_0x00010c0cb940();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) goto LAB_10663d350;
    uStack_6c = 0;
LAB_10663d37c:
    _objc_release();
    _objc_release(unaff_x22);
  }
  _objc_release(lVar3);
  lVar3 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    lVar3 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_78 = lVar3;
    func_0x000108fed074();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    lStack_78 = 0;
  }
  lVar3 = param_2;
  func_0x00010901d430();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010901ccf8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
  func_0x000100bf39e4();
  if (param_2 == 0) {
    uVar19 = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107cfad30();
    uVar19 = (uint)lVar3;
  }
  ppuVar18 = &PTR____CFConstantStringClassReference_110dc7978;
  _objc_retain(&PTR____CFConstantStringClassReference_110dc7978);
  if (*(char *)(param_1 + 0x7d) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    FUN_10663d88c();
    _objc_release(uVar6);
    if ((int)uVar9 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = PTR_PTR_1126cc4c0;
      func_0x00010c141240(PTR_PTR_1126cc4c0);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR_PTR_1126bd8e0;
    _objc_alloc();
    func_0x00010bff9340((double)*(float *)(param_1 + 0x70),(double)*(float *)(param_1 + 0x74));
    _objc_release(puVar7);
    _objc_release(puVar17);
  }
  else {
    puStack_90 = (undefined *)0x0;
  }
  if (((uVar1 | uVar19) & 1) == 0) goto LAB_10663d6e0;
  if (uVar1 == 0) {
    if (uVar19 != 0) {
      lVar3 = param_2;
      func_0x00010bf5b820(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      func_0x00010c116cc0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10663d628;
    }
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107cfb510(uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(lVar8);
    lVar10 = lVar3;
    func_0x00010bf635a0();
    _objc_retainAutoreleasedReturnValue();
    if ((lRam00000001138466f0 == 2) ||
       ((lVar8 = lVar10, lRam00000001138466f0 == 0 && (func_0x00010099c714(), lVar8 == 3)))) {
LAB_10663d5c4:
      lVar8 = lVar10;
      func_0x00010c08fa60();
      if (lVar8 == 0) goto LAB_10663d60c;
      _objc_retain(lVar10);
      lVar8 = lVar10;
    }
    else {
      iVar2 = (int)lVar8;
      func_0x00010b8899a8();
      if (iVar2 != 0) goto LAB_10663d5c4;
LAB_10663d60c:
      lVar8 = lVar3;
      func_0x00010c116d40(lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar10);
LAB_10663d628:
    _objc_release(lVar3);
  }
  puVar7 = PTR_PTR_1126b4860;
  puVar17 = PTR_PTR_1126b45f8;
  puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 8);
  uVar9 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar17;
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar11);
  ppuVar18 = &PTR____CFConstantStringClassReference_110e38fb8;
  _objc_retain(&PTR____CFConstantStringClassReference_110e38fb8);
  _objc_release(&PTR____CFConstantStringClassReference_110dc7978);
  _objc_release(lVar8);
LAB_10663d6e0:
  func_0x00010c0a1500(*(undefined8 *)(param_1 + 0x40));
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    lVar8 = param_2;
    func_0x00010bf1bae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  else {
    _objc_retain(lVar3);
  }
  lVar8 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar8;
  FUN_10663fc1c(lVar8,lVar10,lVar12,lVar14,lVar3,lVar5,uStack_6c,*(undefined1 *)(param_1 + 0x7c),
                *(undefined2 *)(param_1 + 0x7e));
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(*(long *)(param_1 + 0x60) + 8);
  uVar9 = *(undefined8 *)(lVar16 + 0x28);
  *(long *)(lVar16 + 0x28) = lVar15;
  _objc_release(uVar9);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(puStack_90);
  _objc_release(ppuVar18);
  _objc_release(lVar5);
  _objc_release(lStack_78);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10663d88c; end: 10663d8d7;  */

ulong FUN_10663d88c(ulong param_1)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000107cfbfcc();
  if (((uint)uVar1 >> 2 & 1) == 0) {
    uVar1 = param_1;
    func_0x000107cfbfcc(param_1);
    uVar1 = uVar1 >> 8 & 1;
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10663d8d8; end: 10663e137;  */

void FUN_10663d8d8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_218;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = PTR_PTR_1126bd8e0;
    _objc_alloc();
    func_0x00010bff9340((double)*(float *)(param_1 + 0x60),(double)*(float *)(param_1 + 100));
    _objc_release(puVar1);
  }
  else {
    puStack_218 = (undefined *)0x0;
  }
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x3032000000;
  pcStack_170 = FUN_10663d2c4;
  uStack_168 = 0x10663d2d4;
  uStack_160 = 0;
  lVar2 = param_2;
  func_0x00010c261460(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x00010c0bcca0();
  _objc_release(lVar2);
  lVar2 = puStack_180[5];
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126b4860;
  puVar5 = PTR_PTR_1126b45f8;
  if (lVar2 == 0) {
    lVar13 = *(long *)(param_1 + 0x30);
    lVar2 = param_2;
    func_0x00010c0f4aa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c2925c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10663f330(lVar13,lVar2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar15);
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_10663d2c4;
    uStack_110 = 0x10663d2d4;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar12 = uVar15;
    puStack_108 = puVar5;
    func_0x00010bef0e60(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_10663ee78;
    puStack_140 = &UNK_1108da100;
    puStack_138 = &uStack_130;
    func_0x00010c0bcd20();
    _objc_release(uVar11);
    _objc_release(uVar12);
    uVar6 = puStack_128[5];
    func_0x00010bf51e00();
    __Block_object_dispose(&uStack_130,8);
    _objc_release(puStack_108);
    _objc_release(uVar15);
    uVar16 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar16);
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_10663d2c4;
    uStack_110 = 0x10663d2d4;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar12 = uVar16;
    puStack_108 = puVar5;
    func_0x00010bef0e60(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    pcStack_148 = (code *)0x10663efb8;
    puStack_140 = &UNK_1108d9f60;
    puStack_138 = &uStack_130;
    func_0x00010c0bcd20();
    _objc_release(uVar11);
    _objc_release(uVar12);
    uVar15 = puStack_128[5];
    func_0x00010bf51e00();
    __Block_object_dispose(&uStack_130,8);
    _objc_release(puStack_108);
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar16);
    puStack_128 = &uStack_130;
    uStack_130 = 0;
    uStack_120 = 0x3032000000;
    pcStack_118 = FUN_10663d2c4;
    uStack_110 = 0x10663d2d4;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar12 = uVar16;
    puStack_108 = puVar5;
    func_0x00010bef0e60(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    pcStack_148 = (code *)0x10663f0e4;
    puStack_140 = &UNK_1108da130;
    puStack_138 = &uStack_130;
    func_0x00010c0bcd20();
    _objc_release(uVar11);
    _objc_release(uVar12);
    uVar7 = puStack_128[5];
    func_0x00010bf51e00();
    __Block_object_dispose(&uStack_130,8);
    _objc_release(puStack_108);
    _objc_release(uVar16);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retain(lVar13);
    lVar2 = lVar13;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar13);
        }
        uVar11 = *(undefined8 *)(lVar14 * 8);
        func_0x00010c244340(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        uVar8 = uVar6;
        func_0x00010bf4b900();
        if (((uVar8 & 1) == 0) && (uVar8 = uVar7, func_0x00010bf4b900(), (uVar8 & 1) == 0)) {
          func_0x00010bf4b900();
        }
        func_0x00010c1d0640(puVar1);
        _objc_release(uVar12);
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    lVar2 = lVar13;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c244340();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar4;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar14;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (*(char *)(param_1 + 0x6d) == '\x01') {
      lVar4 = lVar13;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar4;
      func_0x00010c244340();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar14;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar10;
      func_0x000108fed074();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(lVar14);
      _objc_release(lVar4);
    }
    else {
      lVar2 = 0;
    }
    func_0x00010c0a1500(*(undefined8 *)(param_1 + 0x40));
    lVar4 = lVar13;
    FUN_10663f8d4(lVar13,puVar1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28),
                  puStack_218,lVar2,*(undefined4 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x58),
                  *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar12 = *(undefined8 *)(lVar14 + 0x28);
    *(long *)(lVar14 + 0x28) = lVar4;
    _objc_release(uVar12);
    _objc_release(lVar2);
    _objc_release(lVar9);
    _objc_release(puVar1);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(uVar6);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar12 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = puVar5;
    _objc_release(uVar12);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b4608;
    _objc_alloc();
    func_0x00010bff7b40();
    lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    lVar13 = *(long *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = puVar1;
  }
  _objc_release(lVar13);
  __Block_object_dispose(&uStack_188,8);
  _objc_release(uStack_160);
  _objc_release(puStack_218);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = 8;
  __Block_object_dispose(&uStack_188);
  __Unwind_Resume();
  _objc_retain(uVar11);
  lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar12 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 10663e138; end: 10663e16f;  */

void FUN_10663e138(long param_1,undefined8 param_2)

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



/* Entry: 10663e170; end: 10663e217;  */

void FUN_10663e170(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0a1500(uVar4);
  uVar4 = param_2;
  func_0x00010c0df3a0(param_2);
  uVar1 = param_2;
  func_0x00010bf4b7c0(param_2);
  _objc_release(param_2);
  uVar2 = 3;
  func_0x000108feb208(3,uVar4,uVar1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28)
                      ,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10663e218; end: 10663edf7;  */

undefined **
FUN_10663e218(double param_1,undefined **param_2,undefined4 param_3,int param_4,int param_5,
             undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             long param_10,char param_11)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  double dVar19;
  ulong in_stack_fffffffffffffd80;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined **ppuStack_188;
  float fStack_180;
  float fStack_17c;
  undefined4 uStack_178;
  byte bStack_174;
  undefined1 uStack_173;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined **ppuStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  byte bStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar5 = &UNK_10f388ac5;
  func_0x0001000ba800();
  ppuVar18 = param_2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107cfa560();
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar18);
  if (param_4 == 0) {
    ppuVar18 = param_2;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = 0;
    if (ppuVar18 != (undefined **)0x0) {
      bVar1 = (byte)param_3 ^ 1;
    }
    _objc_release();
    _objc_retain(param_2);
    _objc_retain(ppuVar6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_9);
    lVar7 = param_10;
    _objc_retain();
    puVar17 = PTR_PTR_1126b4860;
    puVar12 = PTR_PTR_1126b45f8;
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puStack_138 = &uStack_140;
    uStack_140 = 0;
    uStack_130 = 0x3032000000;
    pcStack_128 = FUN_10663d2c4;
    uStack_120 = 0x10663d2d4;
    uStack_118 = 0;
    if (param_5 == 0) {
      if (ppuVar6 != (undefined **)0x0) {
        param_1 = 0.0;
        puVar8 = PTR_PTR_1126b45f8;
        func_0x00010c246860();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = (undefined **)puStack_138[5];
        puStack_138[5] = puVar8;
        goto LAB_10663e6e8;
      }
    }
    else {
      if ((lRam00000001138466f0 == 2) ||
         ((lRam00000001138466f0 == 0 && (func_0x00010099c714(), lVar7 == 3)))) {
        ppuVar18 = &PTR__OBJC_CLASS___NSConstantArray_111180a10;
      }
      else {
        ppuVar18 = &PTR__OBJC_CLASS___NSConstantArray_111180a28;
      }
      func_0x00010bf529e0(ppuVar18);
      _arc4random_uniform();
      func_0x00010c0dfd40(ppuVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fde60(puVar17);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0.75;
      func_0x00010bfe9220();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = puStack_138[5];
      puStack_138[5] = puVar12;
      _objc_release(uVar16);
      _objc_release(puVar17);
      _objc_release(puVar8);
LAB_10663e6e8:
      _objc_release(ppuVar18);
    }
    _objc_retain(param_2);
    ppuStack_1d8 = &puStack_1e0;
    puStack_1e0 = (undefined *)0x0;
    pcStack_1d0 = (code *)0x2020000000;
    puStack_1c8 = (undefined *)((ulong)puStack_1c8 & 0xffffffffffffff00);
    ppuVar18 = param_2;
    func_0x00010bef0e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar18;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_108 = (undefined **)0xc2000000;
    pcStack_100 = FUN_10663edf8;
    pcStack_f8 = (code *)&UNK_1108da100;
    ppuStack_f0 = &puStack_1e0;
    func_0x00010c0bcd20();
    _objc_release(ppuVar15);
    _objc_release(ppuVar18);
    uVar3 = *(undefined1 *)(ppuStack_1d8 + 3);
    __Block_object_dispose(&puStack_1e0,8);
    _objc_release(param_2);
    _objc_retain(param_2);
    puStack_1e0 = (undefined *)0x0;
    pcStack_1d0 = (code *)0x2020000000;
    puStack_1c8 = (undefined *)((ulong)puStack_1c8 & 0xffffffffffffff00);
    ppuVar18 = param_2;
    ppuStack_1d8 = &puStack_1e0;
    func_0x00010bef0e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar18;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar8;
    ppuStack_108 = (undefined **)0xc2000000;
    pcStack_100 = FUN_10663ee64;
    pcStack_f8 = (code *)&UNK_1108d9f60;
    ppuStack_f0 = &puStack_1e0;
    func_0x00010c0bcd20();
    _objc_release(ppuVar15);
    _objc_release(ppuVar18);
    uVar4 = *(undefined1 *)(ppuStack_1d8 + 3);
    __Block_object_dispose(&puStack_1e0,8);
    _objc_release(param_2);
    ppuVar18 = param_2;
    func_0x000107cfb7dc();
    puVar12 = PTR_PTR_1126c2ec0;
    _objc_alloc();
    func_0x00010c004820();
    ppuVar15 = param_2;
    func_0x00010bef0e60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar15;
    func_0x00010c10ac80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar13;
    func_0x000107cff8d0();
    _objc_release(ppuVar13);
    _objc_release(ppuVar15);
    func_0x00010bf1fc80(PTR_PTR_1126cc4b8);
    dVar19 = param_1;
    func_0x00010bf1fb60(PTR_PTR_1126cc4b8);
    uStack_170 = 0;
    uStack_160 = 0x3032000000;
    pcStack_158 = FUN_10663d2c4;
    uStack_150 = 0x10663d2d4;
    uStack_148 = 0;
    ppuVar15 = param_2;
    puStack_168 = &uStack_170;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar8;
    ppuStack_108 = (undefined **)0xc2000000;
    pcStack_100 = FUN_10663d2dc;
    pcStack_f8 = (code *)&UNK_110930fb8;
    _objc_retain(param_2);
    ppuStack_f0 = param_2;
    uStack_94 = uVar3;
    _objc_retain(puVar12);
    puStack_e8 = puVar12;
    fStack_a0 = (float)param_1;
    fStack_9c = (float)dVar19;
    bStack_93 = bVar1;
    _objc_retain(param_8);
    puStack_b8 = &uStack_140;
    uStack_e0 = param_8;
    _objc_retain(ppuVar6);
    ppuStack_d8 = ppuVar6;
    _objc_retain(param_7);
    uStack_d0 = param_7;
    _objc_retain(param_9);
    uStack_91 = SUB81(ppuVar18,0);
    uStack_c8 = param_9;
    puStack_b0 = &uStack_170;
    ppuStack_a8 = ppuVar11;
    uStack_98 = param_6;
    uStack_92 = uVar4;
    _objc_retain(param_10);
    lStack_c0 = param_10;
    puStack_1e0 = puVar8;
    ppuStack_1d8 = (undefined **)0xc2000000;
    pcStack_1d0 = FUN_10663d8d8;
    puStack_1c8 = &UNK_110930fe8;
    puStack_198 = &uStack_140;
    fStack_180 = (float)param_1;
    fStack_17c = (float)dVar19;
    bStack_174 = bVar1;
    _objc_retain(ppuVar6);
    puStack_190 = &uStack_170;
    ppuStack_1c0 = ppuVar6;
    _objc_retain(param_10);
    lStack_1b8 = param_10;
    _objc_retain(param_2);
    ppuStack_1b0 = param_2;
    uStack_173 = uVar3;
    _objc_retain(puVar12);
    puStack_1a8 = puVar12;
    _objc_retain(param_7);
    uStack_1a0 = param_7;
    ppuStack_188 = ppuVar11;
    uStack_178 = param_6;
    _objc_retain(param_7);
    func_0x00010c0c0020(ppuVar15);
    _objc_release(ppuVar15);
    ppuVar18 = (undefined **)puStack_168[5];
    _objc_retain(ppuVar18);
    _objc_release(param_7);
    _objc_release(uStack_1a0);
    _objc_release(puStack_1a8);
    _objc_release(ppuStack_1b0);
    _objc_release(lStack_1b8);
    _objc_release(ppuStack_1c0);
    _objc_release(lStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(ppuStack_d8);
    _objc_release(uStack_e0);
    _objc_release(puStack_e8);
    _objc_release(ppuStack_f0);
    __Block_object_dispose(&uStack_170,8);
    _objc_release(uStack_148);
    _objc_release(puVar12);
    __Block_object_dispose(&uStack_140,8);
    _objc_release(uStack_118);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(ppuVar6);
    _objc_release(param_2);
    goto LAB_10663ecd8;
  }
  ppuVar18 = param_2;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  if (ppuVar18 != (undefined **)0x0) {
    uVar2 = param_3;
  }
  _objc_release();
  _objc_retain(param_2);
  puStack_1e0 = (undefined *)0x0;
  pcStack_1d0 = (code *)0x2020000000;
  puStack_1c8 = (undefined *)((ulong)puStack_1c8 & 0xffffffffffffff00);
  ppuVar18 = param_2;
  ppuStack_1d8 = &puStack_1e0;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_108 = (undefined **)0xc2000000;
  pcStack_100 = FUN_10663f210;
  pcStack_f8 = (code *)&UNK_110854c00;
  ppuStack_f0 = &puStack_1e0;
  func_0x00010c0c0020();
  _objc_release(ppuVar18);
  uVar3 = *(undefined1 *)(ppuStack_1d8 + 3);
  __Block_object_dispose(&puStack_1e0,8);
  _objc_release(param_2);
  func_0x00010c0a1500(param_7);
  ppuVar15 = param_2;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar15;
  func_0x000107cfbbc4();
  _objc_retain(param_2);
  _objc_retain(ppuVar6);
  ppuVar13 = param_2;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  if ((int)ppuVar18 != 0) {
    FUN_10663d88c();
  }
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar13;
  FUN_10663d88c();
  if ((int)ppuVar18 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126cc4c0;
    func_0x00010c141240();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_11 == '\0') {
LAB_10663ebe4:
    puVar8 = PTR_PTR_1126b19f8;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_110 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    ppuVar18 = ppuVar13;
    func_0x000107cfc0b8(ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar18;
    func_0x000107d227d0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar18);
    ppuVar18 = ppuVar14;
    func_0x000107d0d3c4(ppuVar14,puVar12,uVar3,uVar2,ppuVar11,puVar17,1,puVar9,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
  }
  else {
    _objc_retain(ppuVar13);
    ppuStack_1c0 = &puStack_110;
    puStack_110 = (undefined *)0x0;
    pcStack_100 = (code *)0x3032000000;
    pcStack_f8 = FUN_10663d2c4;
    ppuStack_f0 = (undefined **)0x10663d2d4;
    puStack_e8 = (undefined *)0x0;
    puStack_1e0 = puVar8;
    ppuStack_1d8 = (undefined **)0xc2000000;
    pcStack_1d0 = FUN_10663f2b4;
    puStack_1c8 = &UNK_1108d8070;
    ppuStack_108 = ppuStack_1c0;
    func_0x00010c0c0560(ppuVar13);
    ppuVar11 = (undefined **)ppuStack_108[5];
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar11 = (undefined **)0x0;
    }
    else {
      func_0x000107c200e8(ppuVar11,0);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&puStack_110,8);
    _objc_release(puStack_e8);
    _objc_release(ppuVar13);
    if (ppuVar11 == (undefined **)0x0) goto LAB_10663ebe4;
    ppuVar18 = ppuVar11;
    func_0x000108fec800(ppuVar11,puVar12,uVar3,0,uVar2,puVar17,1,0,
                        in_stack_fffffffffffffd80 & 0xffffffffffffff00,puVar9,puVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar17);
  _objc_release(puVar12);
  _objc_release(ppuVar13);
  _objc_release(ppuVar6);
  _objc_release(param_2);
  _objc_release(ppuVar15);
LAB_10663ecd8:
  _objc_release(ppuVar6);
  func_0x0001000e2a84(puVar5);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return ppuVar18;
  }
  ___stack_chk_fail();
  ppuVar15 = (undefined **)0x8;
  __Block_object_dispose(&puStack_110);
  func_0x0001000e2a84(puVar5);
  __Unwind_Resume();
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar15;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar18;
  func_0x00010c27e300();
  *(bool *)(*(long *)(param_2[4] + 8) + 0x18) = ppuVar6 == (undefined **)0x1;
  _objc_release(ppuVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar15);
  return ppuVar15;
}



/* Entry: 10663edf8; end: 10663ee63;  */

void FUN_10663edf8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27e300();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar2 == 1;
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10663ee64; end: 10663ee77;  */

void FUN_10663ee64(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10663ee78; end: 10663f20f;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010663eee4 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10663ee78(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_2);
      }
      lVar5 = *(long *)(lVar8 * 8);
      lVar9 = lVar5;
      func_0x00010c27e300();
      if (lVar9 == 1) {
        uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar7);
        _objc_release(lVar5);
      }
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    lVar1 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar2;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar2);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28);
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6);
      _objc_release(uVar7);
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
    lVar1 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = lVar3;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar3);
      }
      uVar7 = *(undefined8 *)(lVar5 * 8);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 8) + 0x28);
      func_0x00010c2923e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6);
      _objc_release(uVar7);
      lVar5 = lVar5 + 1;
    } while (lVar1 != lVar5);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c07fc80();
  *(char *)(*(long *)(*(long *)(lVar3 + 0x20) + 8) + 0x18) = (char)lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10663f210; end: 10663f2b3;  */

void FUN_10663f210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c07fc80();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10663f2b4; end: 10663f32f;  */

void FUN_10663f2b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c26e100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10663f330; end: 10663f69f;  */

void FUN_10663f330(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  pcStack_100 = FUN_10663f6a0;
  uStack_f8 = 0x10663f6b0;
  uStack_f0 = 0;
  lVar2 = param_1;
  func_0x00010bef0e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c10ac80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bcd20();
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = puStack_110[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bef0c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfe20();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar7 = puStack_110[5];
  _objc_retain(lVar7);
  lVar2 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      lVar4 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        func_0x00010befa120(puVar3);
      }
      _objc_release(lVar4);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  puVar6 = puVar5;
  func_0x0001085a345c();
  _objc_release(puVar5);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uStack_f0);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  lVar2 = 8;
  __Block_object_dispose(&uStack_118);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return;
}



/* Entry: 10663f6a0; end: 10663f6b7;  */

void FUN_10663f6a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10663f6b8; end: 10663f70f;  */

void FUN_10663f6b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf28220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10663f710; end: 10663f717;  */

void FUN_10663f710(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10663f718; end: 10663f793;  */

void FUN_10663f718(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x0001006372a4();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_110931128);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10663f794; end: 10663f7eb;  */

bool FUN_10663f794(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27e300();
  if (lVar2 == 1) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c27e300(param_2);
    bVar1 = lVar2 == 2;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10663f7ec; end: 10663f7f3;  */

void FUN_10663f7ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10663f7f4; end: 10663f84b;  */

void FUN_10663f7f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10663f84c; end: 10663f853;  */

void FUN_10663f84c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10663f854; end: 10663f8ab;  */

void FUN_10663f854(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10663f8ac; end: 10663f8d3;  */

void FUN_10663f8ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10663f8d4; end: 10663fa73;  */

void FUN_10663f8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10663fa74;
  puStack_80 = &UNK_1109312e8;
  uStack_78 = param_2;
  uStack_70 = param_8;
  uStack_68 = param_6;
  _objc_retain(param_8);
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100504554(param_1,&puStack_98);
  puVar1 = PTR_PTR_1126b4600;
  _objc_alloc(PTR_PTR_1126b4600);
  uVar2 = param_1;
  func_0x00010bf51e00(param_1);
  func_0x00010bff7e80(puVar1);
  _objc_release(param_5);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b40();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10663fa74; end: 10663fc1b;  */

undefined1 * FUN_10663fa74(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int in_w7;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 unaff_x22;
  ulong unaff_x23;
  undefined8 uVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  int iStack_160;
  undefined1 uStack_15c;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  uint uStack_134;
  uint uStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  uint uStack_114;
  undefined *puStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  byte bVar17;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar15 = param_2;
  func_0x00010c244340();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = puVar14;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar14 = puVar15;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar14;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_2;
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = puVar15;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar16;
  func_0x00010c067fc0();
  uVar10 = (ulong)*(uint *)(param_1 + 0x30);
  iVar12 = (int)*(undefined8 *)(param_1 + 0x28);
  lVar11 = 1;
  puVar6 = puVar3;
  puVar8 = puVar4;
  puVar9 = puVar2;
  func_0x000108fec62c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar14);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar1 = lStack_58;
    pcStack_68 = FUN_10663fc1c;
    bVar17 = (byte)(unaff_x23 >> 0x20);
    puVar14 = (undefined *)(ulong)bVar17;
    iStack_128 = (int)unaff_x23;
    uStack_130 = (uint)uStack_60._1_1_;
    uStack_134 = (uint)(byte)uStack_60;
    lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    iStack_12c = in_w7;
    iStack_124 = iVar12;
    puStack_110 = puVar15;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_f8 = puVar8;
    _objc_retain(puVar8);
    uStack_108 = uVar13;
    _objc_retain(uVar13);
    _objc_retain(puVar9);
    uStack_100 = uVar10;
    _objc_retain(uVar10);
    _objc_retain(lVar11);
    _objc_retain(lVar1);
    _objc_retain(unaff_x26);
    _objc_retain(unaff_x25);
    _objc_retain(unaff_x22);
    uStack_114 = (uint)bVar17;
    if ((unaff_x23 & 0x100000000) == 0) {
      _objc_retain(lVar11);
      if ((puVar9 == (undefined *)0x0) && (iStack_124 != 0)) {
        uStack_f0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
        puVar15 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x4031000000000000);
        _objc_retainAutoreleasedReturnValue();
        uStack_e8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
        puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
        puStack_e0 = puVar15;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_d8 = puVar14;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar15);
        puVar15 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        func_0x00010c04e840();
        puVar14 = PTR_PTR_1126bd8e8;
        func_0x00010bf8ea40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        puVar3 = puStack_110;
      }
      else {
        uVar13 = 2;
        if (iStack_124 == 0) {
          uVar13 = 0;
        }
        uVar16 = 6;
        if (uStack_134 == 0) {
          uVar16 = uVar13;
        }
        uVar13 = 7;
        if (uStack_130 == 0) {
          uVar13 = uVar16;
        }
        uVar16 = 4;
        if (iStack_12c == 0) {
          uVar16 = uVar13;
        }
        puVar15 = PTR_PTR_1126b19f8;
        func_0x00010c0cbb20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_e0 = puVar15;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        if (lVar11 == 0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010c0812e0(PTR__OBJC_CLASS___NSDate_1126ae770);
        }
        puVar3 = puStack_110;
        uStack_148 = 0;
        uStack_150 = 1;
        uStack_158 = 0;
        uStack_15c = 1;
        iStack_160 = iStack_128;
        puVar14 = puStack_110;
        func_0x000108feb5c8(puStack_110,puStack_f8,uStack_108,puVar9,uStack_100,uVar16,puVar15,
                            puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar2);
      _objc_release(lVar11);
      puVar15 = PTR_PTR_1126b4600;
      _objc_alloc(PTR_PTR_1126b4600);
      func_0x00010bff7e80();
      _objc_release(puVar14);
    }
    else {
      puVar15 = (undefined *)0x0;
      puVar3 = puStack_110;
    }
    puVar6 = PTR_PTR_1126b4608;
    _objc_alloc();
    iStack_160 = uStack_114 << 0x18;
    func_0x00010bff7b40();
    _objc_release(puVar15);
    _objc_release(unaff_x22);
    _objc_release(unaff_x25);
    _objc_release(unaff_x26);
    _objc_release(lVar1);
    _objc_release(lVar11);
    _objc_release(uStack_100);
    _objc_release(puVar9);
    _objc_release(uStack_108);
    _objc_release(puStack_f8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d0) {
      ___stack_chk_fail();
      ppuVar7 = &puStack_190;
      pcStack_168 = FUN_10664000c;
      puStack_188 = PTR_PTR_1126f2310;
      puStack_190 = puVar3;
      puStack_180 = puVar14;
      puStack_178 = puVar6;
      ppuStack_170 = &puStack_70;
      _objc_msgSendSuper2(&puStack_190,PTR_s_init_1125d9248);
      if (ppuVar7 != (undefined **)0x0) {
        *(undefined4 *)((long)ppuVar7 + 8) = 0;
        puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)((long)ppuVar7 + 0x10);
        *(undefined **)((long)ppuVar7 + 0x10) = puVar15;
        _objc_release(uVar13);
      }
      return (undefined1 *)ppuVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 10663fc1c; end: 10664000b;  */

undefined1 *
FUN_10663fc1c(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6,int param_7,int param_8,uint param_9,
             undefined4 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined4 param_15,byte param_16,undefined8 param_17)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  int iStack_100;
  undefined1 uStack_fc;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  uint uStack_b4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar6 = (undefined *)(ulong)param_16;
  uStack_c8 = param_15;
  uStack_c0 = param_14;
  uStack_d0 = param_9 >> 8 & 0xff;
  uStack_d4 = param_9 & 0xff;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_cc = param_8;
  iStack_c4 = param_7;
  puStack_b0 = param_1;
  _objc_retain();
  uStack_98 = param_2;
  _objc_retain(param_2);
  uStack_a8 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_a0 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_17);
  uStack_b4 = (uint)param_16;
  if ((param_16 & 1) == 0) {
    _objc_retain(param_6);
    if ((param_4 == 0) && (iStack_c4 != 0)) {
      uStack_90 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4031000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_80 = puVar6;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar4;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar6);
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e840();
      puVar6 = PTR_PTR_1126bd8e8;
      func_0x00010bf8ea40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar2 = puStack_b0;
    }
    else {
      uVar5 = 2;
      if (iStack_c4 == 0) {
        uVar5 = 0;
      }
      uVar1 = 6;
      if (uStack_d4 == 0) {
        uVar1 = uVar5;
      }
      uVar5 = 7;
      if (uStack_d0 == 0) {
        uVar5 = uVar1;
      }
      uVar1 = 4;
      if (iStack_cc == 0) {
        uVar1 = uVar5;
      }
      puVar6 = PTR_PTR_1126b19f8;
      func_0x00010c0cbb20();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_80 = puVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (param_6 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010c0812e0(PTR__OBJC_CLASS___NSDate_1126ae770);
      }
      puVar2 = puStack_b0;
      uStack_e8 = 0;
      uStack_e0 = param_17;
      uStack_f0 = 1;
      uStack_f8 = 0;
      uStack_fc = 1;
      iStack_100 = uStack_c8;
      puVar6 = puStack_b0;
      func_0x000108feb5c8(puStack_b0,uStack_98,uStack_a8,param_4,uStack_a0,uVar1,puVar4,puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar7);
    _objc_release(param_6);
    puVar7 = PTR_PTR_1126b4600;
    _objc_alloc(PTR_PTR_1126b4600);
    func_0x00010bff7e80();
    _objc_release(puVar6);
  }
  else {
    puVar7 = (undefined *)0x0;
    puVar2 = puStack_b0;
  }
  puVar4 = PTR_PTR_1126b4608;
  _objc_alloc();
  uStack_f8 = param_17;
  iStack_100 = uStack_b4 << 0x18;
  func_0x00010bff7b40();
  _objc_release(puVar7);
  _objc_release(param_17);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(uStack_a0);
  _objc_release(param_4);
  _objc_release(uStack_a8);
  _objc_release(uStack_98);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_130;
  pcStack_108 = FUN_10664000c;
  puStack_128 = PTR_PTR_1126f2310;
  puStack_130 = puVar2;
  puStack_120 = puVar6;
  puStack_118 = puVar4;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    *(undefined4 *)((long)ppuVar3 + 8) = 0;
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined **)((long)ppuVar3 + 0x10) = puVar6;
    _objc_release(uVar5);
  }
  return (undefined1 *)ppuVar3;
}



/* Entry: 10664000c; end: 10664007b; -[SCImpalaOwnedStoryPublicDeleteTombstoneStore init] */

undefined1 * FUN_10664000c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2310;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10664007c; end: 106640247; -[SCImpalaOwnedStoryPublicDeleteTombstoneStore recordComponentId:currentUserId:businessProfileId:storyId:] */

void FUN_10664007c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) &&
      (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) &&
     (lVar1 = param_6, func_0x00010c08fa60(), lVar1 != 0)) {
    _os_unfair_lock_lock(param_1 + 8);
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0e00e0(puVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,param_4);
    }
    puVar3 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_2,puVar3,param_5);
    }
    puVar4 = puVar3;
    func_0x00010c0e00e0(puVar3,param_2,param_6);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar4,param_6);
    }
    func_0x00010befa120(puVar4,param_2,param_3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106640248; end: 1066403bb; -[SCImpalaOwnedStoryPublicDeleteTombstoneStore componentIdsForCurrentUserId:businessProfileId:storyId:] */

void FUN_106640248(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (((lVar1 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) ||
     (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0)) {
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _os_unfair_lock_lock(param_1 + 8);
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf51e00();
    if (puVar5 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar5);
      puVar6 = puVar5;
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066403bc; end: 10664053f; -[SCImpalaOwnedStoryPublicDeleteTombstoneStore removeComponentId:currentUserId:businessProfileId:storyId:] */

void FUN_1066403bc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) &&
      (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) &&
     (lVar1 = param_6, func_0x00010c08fa60(), lVar1 != 0)) {
    _os_unfair_lock_lock(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      func_0x00010c12d3e0(lVar1,param_2,param_6);
    }
    lVar4 = lVar1;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      func_0x00010c12d3e0(lVar2,param_2,param_5);
    }
    lVar4 = lVar2;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_4);
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _os_unfair_lock_unlock(param_1 + 8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106640540; end: 106640583; -[SCImpalaOwnedStoryPublicDeleteTombstoneStore clear] */

void FUN_106640540(long param_1)

{
  _os_unfair_lock_lock(param_1 + 8);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 106640584; end: 10664058f; -[SCImpalaOwnedStoryPublicDeleteTombstoneStore .cxx_destruct] */

void FUN_106640584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106640590; end: 10664059b; +[SCImpalaJoinedStoryStream _storyRingEmissionLogTemplate] */

undefined ** FUN_106640590(void)

{
  return &PTR____CFConstantStringClassReference_110e57ef8;
}



/* Entry: 10664059c; end: 10664078b; -[SCImpalaJoinedStoryStream initWithPublicStoryStateObserver:myStoriesDataCoordinator:snapProProfilesProvider:publicDeleteTombstoneStore:currentUserId:businessProfileId:storyId:] */

undefined1 *
FUN_10664059c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar5 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f2318;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)((long)puVar5 + 8);
    *(undefined8 *)((long)puVar5 + 8) = param_3;
    _objc_release(uVar6);
    _objc_retain(param_4);
    uVar6 = *(undefined8 *)((long)puVar5 + 0x10);
    *(undefined8 *)((long)puVar5 + 0x10) = param_4;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar6 = *(undefined8 *)((long)puVar5 + 0x18);
    *(undefined8 *)((long)puVar5 + 0x18) = param_5;
    _objc_release(uVar6);
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)puVar5 + 0x20);
    *(undefined8 *)((long)puVar5 + 0x20) = param_6;
    _objc_release(uVar6);
    uVar6 = param_7;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)puVar5 + 0x88);
    *(undefined8 *)((long)puVar5 + 0x88) = uVar6;
    _objc_release(uVar7);
    uVar6 = param_8;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)puVar5 + 0x90);
    *(undefined8 *)((long)puVar5 + 0x90) = uVar6;
    _objc_release(uVar7);
    uVar6 = param_9;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)puVar5 + 0x98);
    *(undefined8 *)((long)puVar5 + 0x98) = uVar6;
    _objc_release(uVar7);
    puVar4 = PTR____NSArray0__struct_11034ab48;
    uVar6 = *(undefined8 *)((long)puVar5 + 0x40);
    *(undefined **)((long)puVar5 + 0x40) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar5 + 0x48);
    *(undefined **)((long)puVar5 + 0x48) = puVar4;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar5 + 0x50);
    *(undefined **)((long)puVar5 + 0x50) = puVar4;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar5 + 0x58);
    *(undefined **)((long)puVar5 + 0x58) = puVar4;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar5 + 0x60);
    *(undefined **)((long)puVar5 + 0x60) = puVar4;
    _objc_release(uVar6);
    do {
      lVar1 = lRam00000001136c3ac0 + 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x1136c3ac0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        lRam00000001136c3ac0 = lVar1;
      }
    } while (cVar2 != '\0');
    *(long *)((long)puVar5 + 0x30) = lVar1;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar5;
}



/* Entry: 10664078c; end: 106640807; -[SCImpalaJoinedStoryStream subscribeOnNext:] */

undefined8 FUN_10664078c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x81) & 1) == 0)) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
    _objc_release(uVar2);
    func_0x00010be80200(param_1);
    func_0x00010bec0760(param_1);
    func_0x00010bec0020(param_1);
    func_0x00010bec13c0(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106640808; end: 10664085b; -[SCImpalaJoinedStoryStream _startMyStoriesDataUpdateListener] */

void FUN_106640808(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bef9980(lVar1,param_2,param_1);
    *(char *)(param_1 + 0x80) = (char)lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10664085c; end: 10664097f; -[SCImpalaJoinedStoryStream _primeFriendSnaps] */

void FUN_10664085c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x98);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar3 = auStack_48;
      _objc_initWeak(puVar3,param_1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c11d5e0(lVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106640980; end: 106640a33;  */

void FUN_106640980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x81) & 1) == 0)) {
    uVar1 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be193a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010be87280(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106640a34; end: 106640bef; -[SCImpalaJoinedStoryStream _startFriendSubscription] */

void FUN_106640a34(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined **unaff_x22;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x78) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x98);
      func_0x00010c08fa60();
      if (lVar2 != 0) {
        uStack_50 = *(undefined8 *)(param_1 + 0x98);
        unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = (undefined *)unaff_x22;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c258860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(unaff_x22);
        if (lVar2 != 0) {
          _objc_initWeak(auStack_58,param_1);
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0xc2000000;
          pcStack_70 = FUN_106640bf0;
          puStack_68 = &UNK_110842c58;
          param_2 = auStack_58;
          _objc_copyWeak(auStack_60);
          lVar5 = lVar2;
          func_0x00010c25ff60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0x78);
          *(long *)(param_1 + 0x78) = lVar5;
          _objc_release(uVar8);
          _objc_destroyWeak(auStack_60);
          _objc_destroyWeak(auStack_58);
          unaff_x22 = &puStack_80;
        }
        _objc_release(lVar2);
      }
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined *)((long)unaff_x22 + 0x20));
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x81) & 1) == 0)) {
    puVar6 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010be193a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x40);
    *(long *)(lVar1 + 0x40) = lVar2;
    _objc_release(uVar8);
    _objc_release(puVar7);
    func_0x00010be87280(lVar1);
    _objc_release(puVar6);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106640bf0; end: 106640cc3;  */

void FUN_106640bf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x81) & 1) == 0)) {
    uVar1 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be193a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010be87280(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106640cc4; end: 106640f5b; -[SCImpalaJoinedStoryStream _friendSnapsByFilteringDeletedComponents:] */

void FUN_106640cc4(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar6 = param_3;
  if (puVar1 == (undefined8 *)0x0) {
    _objc_retain(param_3);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined8 **)(param_1 + 0x98);
    lVar3 = lVar2;
    func_0x00010bfaa2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf529e0();
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (lVar2 == 0) {
      _objc_retain(param_3);
    }
    else {
      func_0x00010bf529e0(param_3);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      _objc_retain(param_3);
      puVar10 = &uStack_140;
      param_4 = auStack_100;
      puVar4 = param_3;
      func_0x00010bf52a60();
      if (puVar4 != (undefined8 *)0x0) {
        lVar2 = *plStack_130;
        do {
          puVar10 = (undefined8 *)0x0;
          do {
            if (*plStack_130 != lVar2) {
              _objc_enumerationMutation(param_3);
            }
            uStack_160 = 0;
            uStack_150 = 0x2020000000;
            uStack_148 = 0;
            puStack_158 = &uStack_160;
            func_0x00010bf97ce0(lVar3);
            if ((*(byte *)(puStack_158 + 3) & 1) == 0) {
              func_0x00010befa120(puVar1);
            }
            param_2 = 8;
            __Block_object_dispose(&uStack_160,8);
            puVar10 = (undefined8 *)((long)puVar10 + 1);
          } while (puVar4 != puVar10);
          puVar10 = &uStack_140;
          param_4 = auStack_100;
          puVar4 = param_3;
          func_0x00010bf52a60();
        } while (puVar4 != (undefined8 *)0x0);
      }
      _objc_release(param_3);
      puVar4 = puVar1;
      func_0x00010bf529e0();
      puVar5 = param_3;
      func_0x00010bf529e0();
      if (puVar4 == puVar5) {
        _objc_retain(param_3);
      }
      else {
        puVar6 = puVar1;
        func_0x00010bf51e00();
      }
      _objc_release(puVar1);
    }
    _objc_release(lVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(param_2);
  func_0x00010c067fc0();
  if (puVar10 == (undefined8 *)0x2) {
    uVar7 = param_3[4];
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    FUN_106641024();
    if ((int)uVar8 == 0) {
      uVar9 = param_3[4];
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      FUN_106641024();
      _objc_release(uVar9);
      _objc_release(uVar7);
      if ((int)uVar8 == 0) goto LAB_10664100c;
    }
    else {
      _objc_release(uVar7);
    }
    *(undefined1 *)(*(long *)(param_3[5] + 8) + 0x18) = 1;
    *param_4 = 1;
  }
LAB_10664100c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106640f5c; end: 106641023;  */

void FUN_106640f5c(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010c067fc0();
  if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_106641024();
    if ((int)uVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      FUN_106641024();
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((int)uVar2 == 0) goto LAB_10664100c;
    }
    else {
      _objc_release(uVar1);
    }
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
LAB_10664100c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106641024; end: 1066410fb;  */

ulong FUN_106641024(ulong param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar3 = param_1;
  func_0x00010c08fa60();
  if (((uVar3 == 0) || (lVar1 = param_2, func_0x00010c08fa60(), lVar1 == 0)) ||
     (uVar3 = param_1, func_0x00010c0720c0(), (uVar3 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_1);
      ppuVar2 = &PTR____CFConstantStringClassReference_110dbdd98;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dbdd98);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bfdcf80(param_1);
      _objc_release(param_1);
      _objc_release(ppuVar2);
    }
    else {
      uVar3 = 1;
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1066410fc; end: 1066411eb; -[SCImpalaJoinedStoryStream _startPublicSubscription] */

void FUN_1066410fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_1 + 0x70) == 0) && (*(long *)(param_1 + 8) != 0)) {
    lVar1 = *(long *)(param_1 + 0x90);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar3 = *(undefined8 *)(param_1 + 8);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0e0d00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = uVar3;
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 1066411ec; end: 1066412eb;  */

void FUN_1066411ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1066412ec; end: 106641413;  */

void FUN_1066412ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x81) & 1) != 0)) goto LAB_1066413f0;
  *(undefined1 *)(lVar3 + 0x68) = 1;
  lVar4 = lVar3;
  func_0x00010bdf6fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar5 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x50) = lVar4;
  _objc_release(uVar5);
  lVar7 = lVar3;
  func_0x00010be83c60(lVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + 0x48);
  *(long *)(lVar3 + 0x48) = lVar7;
  _objc_release(uVar5);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
  }
  _objc_retain(puVar1);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c1058e0();
  if ((iVar2 == 0) || (puVar6 = puVar1, func_0x00010bf529e0(), puVar6 != (undefined *)0x0)) {
LAB_10664139c:
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)(lVar3 + 0x60);
    *(undefined **)(lVar3 + 0x60) = puVar1;
    _objc_release(uVar5);
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x60);
    func_0x00010bf529e0();
    if (lVar7 == 0) goto LAB_10664139c;
  }
  lVar7 = lVar3;
  func_0x00010be83c60(lVar3,param_2,*(undefined8 *)(lVar3 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar3 + 0x58);
  *(long *)(lVar3 + 0x58) = lVar7;
  _objc_release(uVar5);
  func_0x00010be87280(lVar3,param_2,*(undefined8 *)(lVar3 + 0x58));
  _objc_release(puVar1);
  _objc_release(lVar4);
LAB_1066413f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106641414; end: 1066414cf; -[SCImpalaJoinedStoryStream _currentPublicSnaps] */

void FUN_106641414(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bdd7140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c259c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2592e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000106643040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066414d0; end: 106641673; -[SCImpalaJoinedStoryStream _businessProfileHandler] */

void FUN_1066414d0(long param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1b0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar4 = lVar1;
    func_0x00010c1168c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar4);
          }
          param_2 = PTR_PTR_1126b0f68;
          puVar10 = *(undefined **)(lStack_128 + lVar12 * 8);
          _objc_retain(puVar10);
          _objc_opt_class(param_2);
          puVar3 = puVar10;
          _objc_opt_isKindOfClass(puVar10,param_2);
          puVar9 = puVar10;
          if (((ulong)puVar3 & 1) == 0) {
            puVar9 = (undefined *)0x0;
          }
          _objc_retain(puVar9);
          _objc_release(puVar10);
          puVar3 = puVar9;
          func_0x00010bf24ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = *(undefined8 **)(param_1 + 0x90);
          puVar10 = puVar3;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if (((ulong)puVar10 & 1) != 0) goto LAB_10664161c;
          _objc_release(puVar9);
          lVar12 = lVar12 + 1;
        } while (lVar2 != lVar12);
        lVar2 = lVar4;
        puVar8 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    puVar9 = (undefined *)0x0;
LAB_10664161c:
    _objc_release(lVar4);
    param_3 = (undefined *)puVar8;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = *(long *)(lVar1 + 0x20);
  puVar8 = *(undefined8 **)(lVar1 + 0x88);
  func_0x00010bf44400();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_3;
  func_0x00010bf529e0();
  if ((puVar9 == (undefined *)0x0) ||
     (lVar1 = lVar4, func_0x00010bf529e0(), puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,
     lVar1 == 0)) {
    puVar9 = PTR____NSArray0__struct_11034ab48;
    if (param_3 != (undefined *)0x0) {
      puVar9 = param_3;
    }
    _objc_retain(puVar9);
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(param_3);
    puVar8 = &uStack_270;
    puVar9 = param_3;
    func_0x00010bf52a60();
    if (puVar9 != (undefined *)0x0) {
      lVar1 = *plStack_260;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          uStack_290 = 0;
          uStack_280 = 0x2020000000;
          uStack_278 = 0;
          puStack_288 = &uStack_290;
          func_0x00010bf97e80(lVar4);
          if ((*(byte *)(puStack_288 + 3) & 1) == 0) {
            func_0x00010befa120(puVar3);
          }
          param_2 = (undefined *)0x8;
          __Block_object_dispose(&uStack_290,8);
          puVar10 = puVar10 + 1;
        } while (puVar9 != puVar10);
        puVar8 = &uStack_270;
        puVar9 = param_3;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar9 = puVar3;
    func_0x00010bf529e0();
    puVar10 = param_3;
    func_0x00010bf529e0();
    if (puVar9 == puVar10) {
      _objc_retain(param_3);
      puVar9 = param_3;
    }
    else {
      puVar9 = puVar3;
      func_0x00010bf51e00();
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(param_2);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_106641024();
  if ((int)uVar6 == 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    FUN_106641024();
    _objc_release(uVar7);
    _objc_release(uVar5);
    if ((int)uVar6 == 0) goto LAB_106641990;
  }
  else {
    _objc_release(uVar5);
  }
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = 1;
  *(undefined1 *)puVar8 = 1;
LAB_106641990:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106641674; end: 1066418f3; -[SCImpalaJoinedStoryStream _publicSnapsByFilteringDeleteTombstones:] */

void FUN_106641674(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  func_0x00010bf44400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf529e0();
  if ((puVar2 == (undefined *)0x0) ||
     (lVar9 = lVar1, func_0x00010bf529e0(), puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,
     lVar9 == 0)) {
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (param_3 != (undefined *)0x0) {
      puVar3 = param_3;
    }
    _objc_retain(puVar3);
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_3);
    puVar7 = &uStack_140;
    puVar3 = param_3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar9 = *plStack_130;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          uStack_160 = 0;
          uStack_150 = 0x2020000000;
          uStack_148 = 0;
          puStack_158 = &uStack_160;
          func_0x00010bf97e80(lVar1);
          if ((*(byte *)(puStack_158 + 3) & 1) == 0) {
            func_0x00010befa120(puVar2);
          }
          param_2 = 8;
          __Block_object_dispose(&uStack_160,8);
          puVar8 = puVar8 + 1;
        } while (puVar3 != puVar8);
        puVar7 = &uStack_140;
        puVar3 = param_3;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar3 = puVar2;
    func_0x00010bf529e0();
    puVar8 = param_3;
    func_0x00010bf529e0();
    if (puVar3 == puVar8) {
      _objc_retain(param_3);
      puVar3 = param_3;
    }
    else {
      puVar3 = puVar2;
      func_0x00010bf51e00();
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(param_2);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_106641024();
  if ((int)uVar5 == 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    FUN_106641024();
    _objc_release(uVar6);
    _objc_release(uVar4);
    if ((int)uVar5 == 0) goto LAB_106641990;
  }
  else {
    _objc_release(uVar4);
  }
  *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x18) = 1;
  *(undefined1 *)puVar7 = 1;
LAB_106641990:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066418f4; end: 1066419a7;  */

void FUN_1066418f4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_106641024();
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    FUN_106641024();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_106641990;
  }
  else {
    _objc_release(uVar1);
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  *param_3 = 1;
LAB_106641990:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066419a8; end: 106641b3f; -[SCImpalaJoinedStoryStream _recomputeAndEmitWithPendingPublicSnaps:] */

void FUN_1066419a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (*(undefined **)(param_1 + 0x48) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_1 + 0x48);
    }
    _objc_retain(puVar1);
    if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_1 + 0x40);
    }
    _objc_retain(puVar2);
    lVar3 = *(long *)(param_1 + 0x90);
    func_0x00010c08fa60();
    if (((lVar3 != 0) && (*(char *)(param_1 + 0x68) == '\x01')) &&
       (puVar4 = puVar1, func_0x00010bf529e0(), puVar4 == (undefined *)0x0)) {
      func_0x00010bf529e0();
    }
    puVar4 = puVar2;
    FUN_106642684(puVar2,puVar1,param_3,*(undefined8 *)(param_1 + 0x90));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x28);
    _objc_retainBlock();
    if (lVar3 != 0) {
      lVar5 = lVar3;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar3);
      _objc_retain(puVar4);
      func_0x00010c0f7fc0(lVar5);
      _objc_release(lVar5);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106641b40; end: 106641b53;  */

void FUN_106641b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106641b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 106641b54; end: 106641e1b; -[SCImpalaJoinedStoryStream didUpdateMyStoriesDataRequest:] */

void FUN_106641b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf51e00();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_106641e1c;
  uStack_c0 = 0x106641e2c;
  uStack_b8 = 0;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106641e34;
  puStack_118 = &UNK_110931370;
  puStack_d8 = &uStack_e0;
  puStack_a8 = &uStack_b0;
  puStack_88 = &uStack_90;
  _objc_retain(uVar2);
  uStack_110 = uVar2;
  _objc_retain(uVar3);
  uStack_108 = uVar3;
  lStack_100 = param_1;
  _objc_retain(uVar4);
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_106641f74;
  puStack_148 = &UNK_1109313a0;
  uStack_f8 = uVar4;
  puStack_f0 = &uStack_b0;
  puStack_e8 = &uStack_90;
  _objc_retain(uVar3);
  uStack_140 = uVar3;
  puStack_138 = &uStack_e0;
  func_0x00010c0be260(param_3);
  if ((*(byte *)(puStack_88 + 3) & 1) == 0) {
    lVar5 = puStack_d8[5];
    func_0x00010c08fa60();
    if (lVar5 == 0) goto LAB_106641d3c;
  }
  puVar6 = auStack_168;
  _objc_initWeak(puVar6,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_170,auStack_168);
  func_0x00010c0f7fc0(puVar6);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
LAB_106641d3c:
  _objc_release(uStack_140);
  _objc_release(uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(uStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106641e1c; end: 106641e33;  */

void FUN_106641e1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106641e34; end: 106641f73;  */

void FUN_106641e34(long param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x00010c0720c0();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
LAB_106641f04:
    if ((uVar4 & 1) == 0) goto LAB_106641f48;
  }
  else {
    uVar2 = param_4;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_106641f04;
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      if (param_5 - 1U < 2) {
        func_0x00010c123580(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
      }
      else {
        if (param_5 != 3) goto LAB_106641f38;
        func_0x00010c12b860(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
      }
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
    }
  }
LAB_106641f38:
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 1;
LAB_106641f48:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106641f74; end: 106642003;  */

void FUN_106641f74(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (((lVar1 != 0) && (uVar2 = param_4, func_0x00010c0720c0(), (int)uVar2 != 0)) &&
     (lVar1 = param_2, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010bf51e00();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106642004; end: 10664240f;  */

void FUN_106642004(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if ((puVar2 != (undefined *)0x0) && ((puVar2[0x81] & 1) == 0)) {
    if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
      puVar3 = puVar2;
      func_0x00010be83c60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar2 + 0x48);
      *(undefined **)(puVar2 + 0x48) = puVar3;
      _objc_release(uVar8);
      puVar3 = puVar2;
      func_0x00010be83c60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar2 + 0x58);
      *(undefined **)(puVar2 + 0x58) = puVar3;
      _objc_release(uVar8);
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      func_0x00010be87280(puVar2);
    }
    else {
      puVar5 = puVar2;
      func_0x00010bdf6fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar3 = puVar5;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (puVar9 = puVar5, puVar3 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(puVar5);
          }
          uVar12 = *(undefined8 *)((long)puVar9 * 8);
          uVar8 = uVar12;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar8;
          FUN_106641024();
          if ((int)uVar6 != 0) {
            _objc_release(uVar8);
LAB_1066421fc:
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = *(long *)(puVar2 + 0x60);
            _objc_retain(lVar11);
            lVar4 = lVar11;
            func_0x00010bf52a60();
            lVar1 = lRam0000000000000000;
            while (lVar4 != 0) {
              lVar10 = 0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(lVar11);
                }
                uVar12 = *(undefined8 *)(lVar10 * 8);
                uVar8 = uVar12;
                func_0x00010bf3cf60();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar8;
                FUN_106641024();
                if ((int)uVar6 == 0) {
                  uVar13 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
                  func_0x00010bf3cf60(uVar12);
                  _objc_retainAutoreleasedReturnValue();
                  FUN_106641024(uVar13,uVar12);
                  _objc_release(uVar12);
                  _objc_release(uVar8);
                  if ((uVar13 & 1) == 0) {
                    func_0x00010befa120(puVar9);
                  }
                }
                else {
                  _objc_release(uVar8);
                }
                lVar10 = lVar10 + 1;
              } while (lVar4 != lVar10);
              lVar4 = lVar11;
              func_0x00010bf52a60();
            }
            _objc_release(lVar11);
            puVar3 = puVar9;
            func_0x00010bf51e00();
            uVar8 = *(undefined8 *)(puVar2 + 0x60);
            *(undefined **)(puVar2 + 0x60) = puVar3;
            _objc_release(uVar8);
            puVar3 = puVar2;
            func_0x00010be83c60();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(puVar2 + 0x58);
            *(undefined **)(puVar2 + 0x58) = puVar3;
            _objc_release(uVar8);
            _objc_retain(puVar5);
            uVar8 = *(undefined8 *)(puVar2 + 0x50);
            *(undefined **)(puVar2 + 0x50) = puVar5;
            _objc_release(uVar8);
            puVar3 = puVar2;
            func_0x00010be83c60();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(puVar2 + 0x48);
            *(undefined **)(puVar2 + 0x48) = puVar3;
            _objc_release(uVar8);
            func_0x00010be87280(puVar2);
            goto LAB_1066423bc;
          }
          uVar13 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
          func_0x00010bf3cf60(uVar12);
          _objc_retainAutoreleasedReturnValue();
          FUN_106641024(uVar13,uVar12);
          _objc_release(uVar12);
          _objc_release(uVar8);
          if ((uVar13 & 1) != 0) goto LAB_1066421fc;
          puVar9 = puVar9 + 1;
        } while (puVar3 != puVar9);
        puVar3 = puVar5;
        func_0x00010bf52a60();
      }
LAB_1066423bc:
      _objc_release(puVar9);
      _objc_release(puVar5);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar2[0x81] & 1) != 0) {
    return;
  }
  puVar2[0x81] = 1;
  func_0x00010bf2dba0(*(undefined8 *)(puVar2 + 0x70));
  uVar8 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = 0;
  _objc_release(uVar8);
  func_0x00010bf86d40(*(undefined8 *)(puVar2 + 0x78));
  uVar8 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = 0;
  _objc_release(uVar8);
  if (puVar2[0x80] == '\x01') {
    uVar8 = *(undefined8 *)(puVar2 + 0x10);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar8);
    puVar2[0x80] = 0;
  }
  uVar8 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 8) = 0;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106642410; end: 1066424af; -[SCImpalaJoinedStoryStream tearDown] */

void FUN_106642410(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x81) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x81) = 1;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x70));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066424b0; end: 1066424ff; -[SCImpalaJoinedStoryStream dealloc] */

void FUN_1066424b0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((*(byte *)(param_1 + 0x81) & 1) == 0) {
    func_0x00010c26ab80(param_1);
  }
  puStack_28 = PTR_PTR_1126f2318;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106642500; end: 106642507; -[SCImpalaJoinedStoryStream currentUserId] */

undefined8 FUN_106642500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106642508; end: 10664250f; -[SCImpalaJoinedStoryStream businessProfileId] */

undefined8 FUN_106642508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106642510; end: 106642517; -[SCImpalaJoinedStoryStream storyId] */

undefined8 FUN_106642510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106642518; end: 1066425e3; -[SCImpalaJoinedStoryStream .cxx_destruct] */

void FUN_106642518(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066425e4; end: 106642667; -[SCImpalaOwnedStoryPlaybackResolverItem initWithSnap:source:] */

undefined1 *
FUN_1066425e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2320;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106642668; end: 10664266f; -[SCImpalaOwnedStoryPlaybackResolverItem snap] */

undefined8 FUN_106642668(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106642670; end: 106642677; -[SCImpalaOwnedStoryPlaybackResolverItem source] */

undefined8 FUN_106642670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106642678; end: 106642683; -[SCImpalaOwnedStoryPlaybackResolverItem .cxx_destruct] */

void FUN_106642678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106642684; end: 106643647;  */

void FUN_106642684(long param_1,long param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puStack_5c0;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_270 [512];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_1);
  func_0x00010bf529e0(param_2);
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  plStack_420 = (long *)0x0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  _objc_retain(param_1);
  lVar16 = param_1;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar18 = *plStack_420;
    do {
      lVar19 = 0;
      do {
        if (*plStack_420 != lVar18) {
          _objc_enumerationMutation(param_1);
        }
        lVar21 = *(long *)(lStack_428 + lVar19 * 8);
        if (lVar21 != 0) {
          puVar3 = PTR_PTR_1126cc4d0;
          _objc_alloc();
          lVar13 = 0;
          FUN_106643774();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c047120();
          func_0x00010befa120(puVar2);
          _objc_release(puVar3);
          _objc_release(lVar21);
        }
        lVar19 = lVar19 + 1;
      } while (lVar16 != lVar19);
      lVar16 = param_1;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_2);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  lStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  _objc_retain(param_2);
  lVar16 = param_2;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar18 = *plStack_460;
    do {
      lVar19 = 0;
      do {
        if (*plStack_460 != lVar18) {
          _objc_enumerationMutation(param_2);
        }
        lVar21 = *(long *)(lStack_468 + lVar19 * 8);
        if (lVar21 != 0) {
          lVar4 = lVar21;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          if (lVar5 != 0) {
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(lVar21);
          }
          puVar6 = PTR_PTR_1126cc4d0;
          _objc_alloc();
          func_0x00010c047120();
          func_0x00010befa120(puVar2);
          _objc_release(puVar6);
        }
        lVar19 = lVar19 + 1;
      } while (lVar16 != lVar19);
      lVar16 = param_2;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(param_2);
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  lStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  plStack_4a0 = (long *)0x0;
  _objc_retain(param_3);
  lVar16 = param_3;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar18 = *plStack_4a0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_4a0 != lVar18) {
          _objc_enumerationMutation(param_3);
        }
        lVar21 = *(long *)(lStack_4a8 + lVar19 * 8);
        if (lVar21 != 0) {
          lVar4 = lVar21;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c08fa60();
          if (lVar5 == 0) {
            _objc_release(lVar4);
          }
          else {
            lVar5 = lVar21;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010bf4b900();
            _objc_release(lVar5);
            _objc_release(lVar4);
            if (((ulong)puVar6 & 1) != 0) goto LAB_106642a64;
          }
          puVar6 = PTR_PTR_1126cc4d0;
          _objc_alloc();
          lVar13 = param_4;
          FUN_106643774();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c047120();
          func_0x00010befa120(puVar2);
          _objc_release(puVar6);
          _objc_release(lVar21);
        }
LAB_106642a64:
        lVar19 = lVar19 + 1;
      } while (lVar16 != lVar19);
      lVar16 = param_3;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  _objc_release(param_3);
  func_0x00010c246ba0(puVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(puVar2);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(puVar2);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  plStack_4e0 = (long *)0x0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  _objc_retain(puVar2);
  puVar14 = &uStack_4f0;
  puVar15 = auStack_270;
  puStack_5c0 = puVar2;
  func_0x00010bf52a60();
  if (puStack_5c0 != (undefined *)0x0) {
    lVar16 = *plStack_4e0;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_4e0 != lVar16) {
          _objc_enumerationMutation(puVar2);
        }
        puVar22 = *(undefined **)(lStack_4e8 + (long)puVar17 * 8);
        _objc_retain(puVar22);
        puVar7 = puVar22;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar22;
        func_0x00010c247520();
        _objc_release(puVar22);
        ppuVar1 = &PTR____CFConstantStringClassReference_110e57f38;
        if (puVar8 != (undefined *)0x2) {
          ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        _objc_retain(ppuVar1);
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar7;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar20;
        func_0x00010c08fa60();
        _objc_release(puVar20);
        if (puVar9 != (undefined *)0x0) {
          puVar20 = puVar7;
          func_0x00010bf3cf60(puVar7);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = &PTR____CFConstantStringClassReference_110e57f58;
          func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e57f58);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8);
          _objc_release(ppuVar10);
          _objc_release(puVar20);
        }
        puVar20 = puVar7;
        func_0x00010c15f2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar20;
        func_0x00010c08fa60();
        _objc_release(puVar20);
        if (puVar9 != (undefined *)0x0) {
          ppuVar10 = ppuVar1;
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar7;
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar10;
          func_0x00010c25ce40(ppuVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8);
          _objc_release(ppuVar11);
          _objc_release(puVar20);
          _objc_release(ppuVar10);
        }
        _objc_release(ppuVar1);
        _objc_release(puVar7);
        _objc_retain(puVar8);
        puVar7 = puVar8;
        func_0x00010bf52a60();
        lVar18 = lRam0000000000000000;
        if (puVar7 != (undefined *)0x0) {
LAB_106642d44:
          puVar20 = (undefined *)0x0;
LAB_106642d48:
          if (lRam0000000000000000 != lVar18) {
            _objc_enumerationMutation(puVar8);
          }
          puVar9 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar9 == (undefined *)0x0) goto code_r0x000106642d7c;
          _objc_release(puVar8);
          puVar7 = puVar9;
          func_0x00010c2827c0();
          puVar20 = puVar22;
          func_0x00010c247520();
          if ((puVar20 == (undefined *)0x1) &&
             (puVar20 = puVar3, func_0x00010bf529e0(), puVar7 < puVar20)) {
            func_0x00010c23f220(puVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d04c0(puVar3);
            _objc_release(puVar22);
          }
          _objc_retain(puVar8);
          puVar7 = puVar8;
          func_0x00010bf52a60();
          lVar18 = lRam0000000000000000;
          while (puVar22 = puVar8, puVar7 != (undefined *)0x0) {
            puVar22 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar18) {
                _objc_enumerationMutation(puVar8);
              }
              func_0x00010c1d0640(puVar6);
              puVar22 = puVar22 + 1;
            } while (puVar7 != puVar22);
            puVar7 = puVar8;
            func_0x00010bf52a60();
          }
          goto LAB_106642f88;
        }
LAB_106642da4:
        _objc_release(puVar8);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf529e0(puVar3);
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar8);
        puVar7 = puVar8;
        func_0x00010bf52a60();
        lVar18 = lRam0000000000000000;
        while (puVar7 != (undefined *)0x0) {
          puVar20 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar18) {
              _objc_enumerationMutation(puVar8);
            }
            func_0x00010c1d0640(puVar6);
            puVar20 = puVar20 + 1;
          } while (puVar7 != puVar20);
          puVar7 = puVar8;
          func_0x00010bf52a60();
        }
        _objc_release(puVar8);
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
LAB_106642f88:
        _objc_release(puVar22);
        _objc_release(puVar9);
        _objc_release(puVar8);
        puVar17 = puVar17 + 1;
      } while (puVar17 != puStack_5c0);
      puVar14 = &uStack_4f0;
      puVar15 = auStack_270;
      puStack_5c0 = puVar2;
      func_0x00010bf52a60();
    } while (puStack_5c0 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar17 = puVar3;
  func_0x00010bf51e00();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(lVar13);
    _objc_retain(puVar14);
    _objc_retain(puVar15);
    lVar16 = lVar13;
    func_0x00010c08fa60();
    puVar17 = PTR____NSArray0__struct_11034ab48;
    if ((lVar16 != 0) &&
       (puVar3 = puVar2, func_0x00010c08fa60(), puVar17 = PTR____NSArray0__struct_11034ab48,
       puVar3 != (undefined *)0x0)) {
      puVar3 = PTR_PTR_1126b0ef0;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR____NSArray0__struct_11034ab48;
      if ((puVar3 != (undefined *)0x0) && (puVar6 = puVar3, func_0x00010bf31ee0(), (int)puVar6 == 4)
         ) {
        puVar6 = PTR_PTR_1126b1080;
        _objc_opt_new(PTR_PTR_1126b1080);
        func_0x00010c1a99c0();
        func_0x00010c1843a0(puVar6);
        func_0x00010c220e20(puVar6);
        func_0x00010c1805c0(puVar3);
        puVar17 = puVar3;
        func_0x00010c11ab00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar17;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        if (puVar7 == (undefined *)0x0) {
          puVar7 = PTR_PTR_1126b76d0;
          _objc_opt_new();
          puVar17 = puVar3;
          func_0x00010c11ab00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c73c0();
          _objc_release(puVar17);
        }
        puVar17 = puVar7;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar17;
        func_0x00010c08fa60();
        _objc_release(puVar17);
        if (puVar8 == (undefined *)0x0) {
          func_0x00010c21f760(puVar7);
        }
        func_0x00010c21e620(puVar7);
        puVar12 = puVar14;
        func_0x00010c08fa60();
        if (puVar12 != (undefined8 *)0x0) {
          puVar17 = puVar7;
          func_0x00010bfea260();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar17 == (undefined *)0x0) {
            puVar17 = PTR_PTR_1126b76d8;
            _objc_opt_new(PTR_PTR_1126b76d8);
            func_0x00010c1aaf80(puVar7);
            _objc_release(puVar17);
          }
          puVar17 = puVar7;
          func_0x00010bfea260(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c174420();
          _objc_release(puVar17);
        }
        puVar8 = puVar3;
        func_0x00010c11ab00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar8;
        func_0x000108f08890();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(lVar13);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
code_r0x000106642d7c:
  puVar20 = puVar20 + 1;
  if (puVar7 == puVar20) goto code_r0x000106642d88;
  goto LAB_106642d48;
code_r0x000106642d88:
  puVar7 = puVar8;
  func_0x00010bf52a60();
  if (puVar7 == (undefined *)0x0) goto LAB_106642da4;
  goto LAB_106642d44;
}



/* Entry: 106643648; end: 106643773;  */

void FUN_106643648(undefined8 param_1,undefined *param_2)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  long lVar38;
  
  puVar1 = PTR_PTR_1126cc4c8;
  lVar38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar37 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c048260();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b6408;
  _objc_alloc();
  func_0x00010bff7240();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b6410;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020580(0);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar37);
  puVar3 = puVar1;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
LAB_106643840:
    puVar3 = puVar1;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(puVar37);
    puVar2 = puVar3;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      _objc_retain(puVar37);
      puVar4 = puVar37;
    }
    else {
      puVar4 = puVar3;
      func_0x00010bf25140(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126cc4d8;
    _objc_alloc();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010c01e3e0();
    }
    else {
      puVar5 = puVar3;
      func_0x00010c0676a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b940(puVar3);
      func_0x00010c07d060(puVar3);
      func_0x00010c070680(puVar3);
      puVar6 = puVar3;
      func_0x00010bf93440(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01e3e0();
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar37);
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126cc4e0;
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_alloc();
    puVar4 = puVar1;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf12320();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf30da0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010bef2d20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010bf4e880();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010c094820();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010c281620();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010bf10040();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar1;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar1;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15e560();
    func_0x00010c141c40();
    puVar24 = puVar1;
    func_0x00010c0d2260();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar1;
    func_0x00010bf9a280();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar1;
    func_0x00010bf1f6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar1;
    func_0x00010c24b240();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar1;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar1;
    func_0x00010bf28d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24be20();
    puVar30 = puVar1;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ede0();
    puVar31 = puVar1;
    func_0x00010bf5b120();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar1;
    func_0x00010bf5b140();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar1;
    func_0x00010c0c5b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b820();
    puVar34 = puVar1;
    func_0x00010bf5b3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = puVar1;
    func_0x00010bf42120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0a00();
    puVar36 = puVar1;
    func_0x00010c262140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c044c20();
    _objc_release(puVar2);
    _objc_release(puVar36);
    _objc_release(puVar35);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = puVar37;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar3);
      if (puVar5 != (undefined *)0x0) goto LAB_106643840;
    }
    else {
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar37);
  _objc_release(puVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106643774; end: 106643ecb;  */

void FUN_106643774(undefined *param_1,undefined *param_2)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_1;
  func_0x00010c0b8240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
LAB_106643840:
    puVar1 = param_1;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(param_2);
    puVar2 = puVar1;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      _objc_retain(param_2);
      puVar3 = param_2;
    }
    else {
      puVar3 = puVar1;
      func_0x00010bf25140(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126cc4d8;
    _objc_alloc();
    if (puVar1 == (undefined *)0x0) {
      func_0x00010c01e3e0();
    }
    else {
      puVar4 = puVar1;
      func_0x00010c0676a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b940(puVar1);
      func_0x00010c07d060(puVar1);
      func_0x00010c070680(puVar1);
      puVar5 = puVar1;
      func_0x00010bf93440(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01e3e0();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(param_2);
    _objc_release(puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126cc4e0;
    _objc_retain(param_1);
    _objc_retain(puVar2);
    _objc_alloc();
    puVar3 = param_1;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf3cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bf12320();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf5bc00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1;
    func_0x00010bf30da0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    func_0x00010bef2d20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_1;
    func_0x00010bf4e880();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_1;
    func_0x00010c094820();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_1;
    func_0x00010c281620();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_1;
    func_0x00010bf10040();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_1;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_1;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = param_1;
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15e560();
    func_0x00010c141c40();
    puVar23 = param_1;
    func_0x00010c0d2260();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = param_1;
    func_0x00010bf9a280();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = param_1;
    func_0x00010bf1f6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = param_1;
    func_0x00010c24b240();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = param_1;
    func_0x00010c24b0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = param_1;
    func_0x00010bf28d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24be20();
    puVar29 = param_1;
    func_0x00010c2490c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ede0();
    puVar30 = param_1;
    func_0x00010bf5b120();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = param_1;
    func_0x00010bf5b140();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = param_1;
    func_0x00010c0c5b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b820();
    puVar33 = param_1;
    func_0x00010bf5b3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = param_1;
    func_0x00010bf42120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0a00();
    puVar35 = param_1;
    func_0x00010c262140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c044c20();
    _objc_release(puVar2);
    _objc_release(puVar35);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar2 = param_1;
    func_0x00010c0b8240();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = param_2;
      func_0x00010c08fa60();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      if (puVar4 != (undefined *)0x0) goto LAB_106643840;
    }
    else {
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106643ecc; end: 106644013;  */

ulong FUN_106643ecc(double param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  dVar4 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c23f220(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_1 <= dVar4) {
    if (dVar4 <= param_1) {
      uVar1 = param_3;
      func_0x00010c247520();
      uVar2 = param_4;
      func_0x00010c247520();
      if (uVar1 == uVar2) {
        uVar3 = 0;
      }
      else {
        uVar1 = param_3;
        func_0x00010c247520();
        if (uVar1 != 2) {
          uVar1 = (ulong)(uVar1 == 1);
        }
        uVar2 = param_4;
        func_0x00010c247520();
        if (uVar2 != 2) {
          uVar2 = (ulong)(uVar2 == 1);
        }
        uVar3 = (ulong)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar3 = 0xffffffffffffffff;
        }
      }
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106644014; end: 106644043; -[SCImpalaOwnedStoryRingOperaPlaylistPlugin setPlaylistItemController:] */

void FUN_106644014(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106644044; end: 1066440fb; -[SCImpalaOwnedStoryRingOperaPlaylistPlugin refreshCurrentPlaylistGroup] */

bool FUN_106644044(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c101400(*(undefined8 *)(param_1 + 8),param_2,lVar4);
  }
  _objc_release(lVar4);
  return lVar2 != 0;
}



/* Entry: 1066440fc; end: 106644107; -[SCImpalaOwnedStoryRingOperaPlaylistPlugin registeredEventsForOperaSession] */

undefined * FUN_1066440fc(void)

{
  return PTR____NSArray0__struct_11034ab48;
}


