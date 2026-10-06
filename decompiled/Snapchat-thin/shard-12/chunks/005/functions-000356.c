/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091fdc84; end: 1091fdd2f; -[SCFeatureDirectorModeThumbnailsImpl startEnterEditingModeWithThumbnailsHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdc84(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *(char *)(param_1 + _DAT_112783880) = (char)param_3;
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11278387c;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar1);
    func_0x00010c110a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa20a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1091fdd30; end: 1091fddd3; -[SCFeatureDirectorModeThumbnailsImpl revealThumbnails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdd30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_112783880) = 0;
  lVar2 = (long)_DAT_11278387c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
  func_0x00010c110a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa20a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fddd4; end: 1091fdde3; -[SCFeatureDirectorModeThumbnailsImpl deselectSelectedSegmentIfAny] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fddd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_deselectSelectedSegmentIfAny_1125b93d0)
  ;
  return;
}



/* Entry: 1091fdde4; end: 1091fddf3; -[SCFeatureDirectorModeThumbnailsImpl exitSegmentThumbnailsReordering] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fdde4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9bad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_exitSegmentsReordering_1125c4858);
  return;
}



/* Entry: 1091fddf4; end: 1091fde03; -[SCFeatureDirectorModeThumbnailsImpl restoreThumbnailsToInitialStateInReorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fddf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13c770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),
             PTR_s_restoreToInitialSegmentsInReorde_11262cbf8);
  return;
}



/* Entry: 1091fde04; end: 1091fde13; -[SCFeatureDirectorModeThumbnailsImpl setSegmentThumbnailSelectedAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fde04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),
             PTR_s_setSegmentThumbnailSelectedAtInd_11265c4f8);
  return;
}



/* Entry: 1091fde14; end: 1091fdfff; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didAddSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fde14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + _DAT_112783874);
  func_0x00010c26dc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_release();
  if (lVar2 != 0) {
    _dispatch_group_create();
    _objc_initWeak(auStack_68,param_1);
    _dispatch_group_enter(lVar3);
    uVar4 = param_4;
    func_0x00010bfb13c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1091fe000;
    puStack_88 = &UNK_110859d38;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(lVar3);
    uVar5 = param_4;
    lStack_80 = lVar3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1091fe250;
    puStack_b8 = &UNK_110841fb0;
    _objc_copyWeak(auStack_a8,auStack_68);
    _objc_retain(param_4);
    uStack_b0 = param_4;
    func_0x000107c27d98(lVar3,PTR___dispatch_main_q_11034be20,&puStack_d0);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uStack_78);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091fe000; end: 1091fe207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fe000(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (param_2 == 0)) || (param_3 != 0)) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112783878);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112783874);
    func_0x00010c26dc60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    if (*(long *)(param_1 + 0x28) == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bfb13e0(&uStack_90);
    }
    func_0x00010c297200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar9);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    func_0x00010bf08740(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar9);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bfb1920(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a80(*(undefined8 *)(param_2 + 0x20));
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 1091fe208; end: 1091fe24f;  */

void FUN_1091fe208(long param_1,undefined8 param_2)

{
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193a80(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1091fe250; end: 1091fe2fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fe250(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112783874);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8c600(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a120(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193ac0(uVar4,param_2,puVar3,*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091fe2fc; end: 1091fe413; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didAddSegments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fe2fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar2 = auStack_d8;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_120,puVar2,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bf7f5e0(param_1,param_2,param_3,*(undefined8 *)(lStack_118 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      puVar2 = auStack_d8;
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_120,puVar2,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  if ((*(byte *)(param_3 + _DAT_1127838a0) & 1) == 0) {
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa20e0();
  }
  else {
    func_0x00010c110a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2080();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1091fe414; end: 1091fe4af; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didSelectSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fe414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + _DAT_1127838a0) & 1) == 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa20e0();
  }
  else {
    func_0x00010c110a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2080();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091fe4b0; end: 1091fe50f; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didDeselectSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fe4b0(long param_1)

{
  if (*(char *)(param_1 + _DAT_1127838a0) == '\x01') {
    func_0x00010c110a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1091fe510; end: 1091fe583; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didTrimSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fe510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + _DAT_1127838a0) == '\x01') {
    _objc_retain(param_4);
    func_0x00010c110a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2100();
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1091fe584; end: 1091fe5e3; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:isPlaybackManuallyPaused:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fe584(long param_1)

{
  if (*(char *)(param_1 + _DAT_1127838a0) == '\x01') {
    func_0x00010c110a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1091fe5e4; end: 1091fe63f; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidTapAddMore:] */

void FUN_1091fe5e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c110a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2260();
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fe640; end: 1091fe69b; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:updateEditedThumbnailForSegment:] */

void FUN_1091fe640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c110a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2160();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fe69c; end: 1091fe6ff; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:didSeekToTime:] */

void FUN_1091fe69c(undefined8 param_1)

{
  func_0x00010c110a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa20c0();
  _objc_release(param_1);
  return;
}



/* Entry: 1091fe700; end: 1091fe737; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidFinishSeeking:] */

void FUN_1091fe700(undefined8 param_1)

{
  func_0x00010c110a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fe738; end: 1091fe787; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnails:isInReordering:] */

void FUN_1091fe738(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x00010c110a80();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bfa21e0();
  }
  else {
    func_0x00010bfa21c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fe788; end: 1091fe7bf; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidDeleteSegmentInReorder:] */

void FUN_1091fe788(undefined8 param_1)

{
  func_0x00010c110a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fe7c0; end: 1091fe7f7; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidEndDroppingInReorder:] */

void FUN_1091fe7c0(undefined8 param_1)

{
  func_0x00010c110a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa21a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fe7f8; end: 1091fe82f; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidStartUpdatingCollectionView:] */

void FUN_1091fe7f8(undefined8 param_1)

{
  func_0x00010c110a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fe830; end: 1091fe867; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidFinishUpdatingCollectionView:] */

void FUN_1091fe830(undefined8 param_1)

{
  func_0x00010c110a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fe868; end: 1091fe89f; -[SCFeatureDirectorModeThumbnailsImpl directorModeThumbnailsDidTapTemplateExplorerButton:] */

void FUN_1091fe868(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091fe8a0; end: 1091fe917; -[SCFeatureDirectorModeThumbnailsImpl availableIntervalForIncreasingTrimLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1091fe8a0(double param_1,long param_2)

{
  double dVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dVar1 = *(double *)(param_2 + _DAT_112783884);
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010c276460(&uStack_48,param_2);
  }
  _CMTimeGetSeconds(&uStack_48);
  _objc_release(param_2);
  return dVar1 - param_1;
}



/* Entry: 1091fe918; end: 1091fe91b; -[SCFeatureDirectorModeThumbnailsImpl preferredHeight] */

void FUN_1091fe918(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becbdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__thumbnailsViewHeight_112590920);
  return;
}



/* Entry: 1091fe91c; end: 1091fe92b; -[SCFeatureDirectorModeThumbnailsImpl componentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fe91c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278387c),PTR_s_view_1126849e8);
  return;
}



/* Entry: 1091fe92c; end: 1091fead3; -[SCFeatureDirectorModeThumbnailsImpl _setupThumbnailsInParentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fe92c(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  if (*(char *)(param_3 + _DAT_112783898) != '\x01') {
    func_0x00010becbde0(param_3);
    lVar3 = (long)_DAT_112783888;
    lVar2 = param_3 + lVar3;
    dVar5 = param_1;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c23d0a0();
    _objc_release(lVar2);
    lVar2 = param_3 + lVar3;
    _objc_loadWeakRetained(lVar2);
    lVar4 = (long)_DAT_11278387c;
    uVar1 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2);
    _objc_release(uVar1);
    _objc_release(lVar2);
    lVar3 = param_3 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c23d0a0();
    uVar1 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(0,param_2 - param_1,dVar5,param_1);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  lVar2 = (long)_DAT_11278388c;
  if (*(long *)(param_3 + lVar2) != 0) {
    lVar3 = param_3 + _DAT_112783888;
    _objc_loadWeakRetained(lVar3);
    uVar1 = *(undefined8 *)(param_3 + _DAT_11278387c);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar3);
    _objc_release(uVar1);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + lVar2),PTR_s_setActive__112636340,1);
    return;
  }
  return;
}



/* Entry: 1091fead4; end: 1091febcf; -[SCFeatureDirectorModeThumbnailsImpl _thumbnailsViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1091fead4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    ulong param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_90 [32];
  double dStack_70;
  
  if (*(char *)(param_5 + (long)_DAT_112783898) == '\x01') {
    lVar3 = (long)_DAT_11278388c;
    iVar1 = (int)*(undefined8 *)(param_5 + lVar3);
    func_0x00010bfd76c0();
    if (iVar1 != 0) {
      if (*(long *)(param_5 + lVar3) != 0) {
        func_0x00010bfc1860(auStack_90);
        return dStack_70;
      }
      return 0.0;
    }
  }
  else {
    uVar2 = param_5;
    func_0x000107c30a74();
    if (((int)uVar2 != 0) && (func_0x000107c30a6c(), (uVar2 & 1) == 0)) {
      lVar4 = (long)_DAT_112783888;
      lVar3 = param_5 + lVar4;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf20c00();
      dVar5 = (double)(ulong)(uint)(int)(param_3 / 0.5625);
      func_0x00010c14d9e0(dVar5,PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_release(lVar3);
      lVar4 = param_5 + lVar4;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bf20c00();
      _objc_release(lVar4);
      return param_4 - (dVar5 + (double)(float)(int)(param_3 / 0.5625));
    }
  }
  return 76.0;
}



/* Entry: 1091febd0; end: 1091febdf; -[SCFeatureDirectorModeThumbnailsImpl mediaConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091febd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783874);
}



/* Entry: 1091febe0; end: 1091febff; -[SCFeatureDirectorModeThumbnailsImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091febe0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127838a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091fec00; end: 1091fec13; -[SCFeatureDirectorModeThumbnailsImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fec00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127838a4,param_3);
  return;
}



/* Entry: 1091fec14; end: 1091fec33; -[SCFeatureDirectorModeThumbnailsImpl previewDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fec14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127838a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091fec34; end: 1091fec47; -[SCFeatureDirectorModeThumbnailsImpl setPreviewDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fec34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127838a8,param_3);
  return;
}



/* Entry: 1091fec48; end: 1091fecdb; -[SCFeatureDirectorModeThumbnailsImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fec48(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127838a8);
  _objc_destroyWeak(param_1 + _DAT_1127838a4);
  _objc_storeStrong(param_1 + _DAT_112783874,0);
  _objc_storeStrong(param_1 + _DAT_112783890,0);
  _objc_storeStrong(param_1 + _DAT_11278388c,0);
  _objc_storeStrong(param_1 + _DAT_112783878,0);
  _objc_storeStrong(param_1 + _DAT_11278387c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112783888);
  return;
}



/* Entry: 1091fecdc; end: 1091fed2f; -[SCDMTrayUIHostViewController init] */

undefined1 * FUN_1091fecdc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700f90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1091fed30; end: 1091fedaf; -[SCDMTrayUIHostViewController dismissViewControllerAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fed30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_1127838ac) != 0) {
    (**(code **)(*(long *)(param_1 + _DAT_1127838ac) + 0x10))();
  }
  puStack_38 = PTR_PTR_112700f90;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dismissViewControllerAnimated_co_1125bec68,param_3,param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 1091fedb0; end: 1091fedbf; -[SCDMTrayUIHostViewController onUIKitDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091fedb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127838ac);
}



/* Entry: 1091fedc0; end: 1091fedcb; -[SCDMTrayUIHostViewController setOnUIKitDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fedc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1091fedcc; end: 1091feddf; -[SCDMTrayUIHostViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fedcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127838ac,0);
  return;
}



/* Entry: 1091fede0; end: 1091fee9b; -[SCDMTrayUIController initWithParentViewController:delegate:] */

undefined8 *
FUN_1091fede0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_4);
  puStack_40 = PTR_PTR_112700f98;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    _objc_storeWeak(puVar1 + 5,param_4);
  }
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  return puVar1;
}



/* Entry: 1091fee9c; end: 1091feef7; -[SCDMTrayUIController trayUIPresenter] */

void FUN_1091fee9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126dde80;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091feef8; end: 1091ff08f; -[SCDMTrayUIController show] */

void FUN_1091feef8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x40),param_2,param_1);
  lVar2 = param_1;
  func_0x00010bfe4680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1;
  func_0x00010bfe4680(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1091ff00c;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010c10eda0(lVar2,param_2,lVar3,0,&puStack_58);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1091ff090; end: 1091ff093; -[SCDMTrayUIController showWithPosition:] */

void FUN_1091ff090(void)

{
  return;
}



/* Entry: 1091ff094; end: 1091ff09b; -[SCDMTrayUIController hideAnimated:] */

void FUN_1091ff094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_hideAnimated__1125d5fd0);
  return;
}



/* Entry: 1091ff09c; end: 1091ff0c3; -[SCDMTrayUIController interactionObservable] */

void FUN_1091ff09c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091ff0c4; end: 1091ff0cb; -[SCDMTrayUIController dismiss] */

void FUN_1091ff0c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideAnimated__1125d5fd0,1);
  return;
}



/* Entry: 1091ff0cc; end: 1091ff0d3; -[SCDMTrayUIController trayViewController] */

void FUN_1091ff0cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27b750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_trayViewController_11267c7f8);
  return;
}



/* Entry: 1091ff0d4; end: 1091ff0db; -[SCDMTrayUIController currentPosition] */

void FUN_1091ff0d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_currentPosition_1125b5870);
  return;
}



/* Entry: 1091ff0dc; end: 1091ff0e3; -[SCDMTrayUIController possibleInteractivePositions] */

void FUN_1091ff0dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1044f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_possibleInteractivePositions_11261eb58);
  return;
}



/* Entry: 1091ff0e4; end: 1091ff0eb; -[SCDMTrayUIController setTrayPosition:animated:interactionMethod:] */

void FUN_1091ff0e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c219f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTrayPosition_animated_interac_1126641f0);
  return;
}



/* Entry: 1091ff0ec; end: 1091ff0f3; -[SCDMTrayUIController setTrayPosition:animated:] */

void FUN_1091ff0ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c219f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTrayPosition_animated__1126641e8);
  return;
}



/* Entry: 1091ff0f4; end: 1091ff0fb; -[SCDMTrayUIController trayHeightForPosition:] */

void FUN_1091ff0f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27b370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_trayHeightForPosition__11267c700);
  return;
}



/* Entry: 1091ff0fc; end: 1091ff103; -[SCDMTrayUIController trayAccessoryHeight] */

void FUN_1091ff0fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_trayAccessoryHeight_11267c678);
  return;
}



/* Entry: 1091ff104; end: 1091ff10b; -[SCDMTrayUIController resizeTrayAnimated:] */

void FUN_1091ff104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resizeTrayAnimated__11262c2e0);
  return;
}



/* Entry: 1091ff10c; end: 1091ff16b; -[SCDMTrayUIController trayHostFrameSize] */

undefined1  [16]
FUN_1091ff10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  param_5 = param_5 + 8;
  _objc_loadWeakRetained(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar1);
  _objc_release(param_5);
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 1091ff16c; end: 1091ff1af; -[SCDMTrayUIController mapTrayController:didTemporarilyResizeToHeight:] */

void FUN_1091ff16c(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  func_0x00010c27b6a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091ff1b0; end: 1091ff27f; -[SCDMTrayUIController mapTrayController:blockForAnchoringToHeight:animated:] */

void FUN_1091ff1b0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = param_2;
  func_0x00010c27b680(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1091ff280;
    puStack_50 = &UNK_110849530;
    _objc_retain(lVar1);
    ppuVar2 = &puStack_68;
    lStack_48 = lVar1;
    _objc_retainBlock(ppuVar2);
    _objc_release(lStack_48);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1091ff280; end: 1091ff28b;  */

void FUN_1091ff280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001091ff288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1091ff28c; end: 1091ff3bf; -[SCDMTrayUIController controllerPresentedInTrayWrapper:] */

void FUN_1091ff28c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b1f08;
  _objc_alloc(PTR_PTR_1126b1f08);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037cc0(*(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0,
                      0x4024000000000000,0,puVar1,param_2,0x1a,0x10,2,0,puVar2,0,puVar3,
                      &UNK_100010100);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c6010;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010bfe4680(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034140(puVar2,param_2,lVar4,*(undefined8 *)(param_1 + 0x18),0,param_1,puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar2;
  _objc_release(uVar5);
  _objc_release(lVar4);
  func_0x00010beae740(param_1);
  func_0x00010c235840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091ff3c0; end: 1091ff42b; -[SCDMTrayUIController gestureRecognizer:shouldReceiveTouch:] */

bool FUN_1091ff3c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  if (param_3 == *(long *)(param_1 + 0x40)) {
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_4 == lVar2;
    _objc_release();
    _objc_release(param_4);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1091ff42c; end: 1091ff523; -[SCDMTrayUIController hostViewController] */

void FUN_1091ff42c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126dde88;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1c8b80(*(undefined8 *)(param_1 + 0x10));
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c1d4260(*(undefined8 *)(param_1 + 0x10));
    lVar3 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091ff524; end: 1091ff54f;  */

void FUN_1091ff524(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ff550; end: 1091ff55f; -[SCDMTrayUIController _handleBackgroundTap] */

void FUN_1091ff550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c219f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTrayPosition_animated__1126641e8,2,1);
  return;
}



/* Entry: 1091ff560; end: 1091ff5f7; -[SCDMTrayUIController _cleanup] */

void FUN_1091ff560(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  func_0x00010c1d4260(*(undefined8 *)(param_1 + 0x10),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x10),param_2,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27b6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ff5f8; end: 1091ff62b; -[SCDMTrayUIController _handleDismiss] */

void FUN_1091ff5f8(long param_1,undefined8 param_2)

{
  func_0x00010c1d4260(*(undefined8 *)(param_1 + 0x10),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c219f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTrayPosition_animated__1126641e8,2,0);
  return;
}



/* Entry: 1091ff62c; end: 1091ff72f; -[SCDMTrayUIController _setupObservables] */

void FUN_1091ff62c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0687c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1091ff730; end: 1091ff777;  */

void FUN_1091ff730(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be324a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091ff778; end: 1091ff7ef; -[SCDMTrayUIController _handleTrayInteraction:] */

void FUN_1091ff778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_28 = FUN_1091ff7f0;
  puStack_20 = &UNK_1108f98c0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091ff840;
  puStack_48 = &UNK_1108f98f0;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c17e0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1091ff7f0; end: 1091ff83f;  */

void FUN_1091ff7f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar1 = PTR_PTR_1126dde90;
  func_0x00010c2a5be0(PTR_PTR_1126dde90,param_2,*(long *)(param_1 + 0x20),param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091ff840; end: 1091ff8bb;  */

void FUN_1091ff840(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar1 = PTR_PTR_1126dde90;
  func_0x00010bf73720(PTR_PTR_1126dde90,param_2,*(long *)(param_1 + 0x20),param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__cleanup_112555698)
    ;
    return;
  }
  return;
}



/* Entry: 1091ff8bc; end: 1091ff8c3; -[SCDMTrayUIController isPresenting] */

undefined1 FUN_1091ff8bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 1091ff8c4; end: 1091ff933; -[SCDMTrayUIController .cxx_destruct] */

void FUN_1091ff8c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091ff934; end: 1091ffb73; -[SCDMTrayWrapperViewController presentViewController:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ff934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar5 = (long)_DAT_1127838d4;
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_5 + lVar5);
  *(undefined8 *)(param_5 + lVar5) = param_7;
  _objc_release(uVar1);
  func_0x00010bef7700(param_5,param_6,*(undefined8 *)(param_5 + lVar5));
  lVar2 = param_5;
  func_0x00010be9c300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_alloc_init();
    lVar6 = (long)_DAT_1127838d8;
    uVar1 = *(undefined8 *)(param_5 + lVar6);
    *(undefined **)(param_5 + lVar6) = puVar3;
    _objc_release(uVar1);
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar6),param_6,0);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c1827c0(param_3,param_4,*(undefined8 *)(param_5 + lVar6));
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar6),param_6,uVar1);
    uVar4 = *(undefined8 *)(param_5 + lVar6);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc6f40(param_5,param_6,uVar4,lVar2);
    _objc_release(lVar2);
    func_0x00010bdc6f40(param_5,param_6,uVar1,*(undefined8 *)(param_5 + lVar6));
  }
  else {
    uVar1 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc6f40(param_5,param_6,uVar1,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(uVar1);
  func_0x00010bf77e80(*(undefined8 *)(param_5 + lVar5),param_6,param_5);
  param_5 = param_5 + _DAT_1127838dc;
  _objc_loadWeakRetained(param_5);
  func_0x00010bf4ff00();
  _objc_release(param_5);
  if (param_9 != 0) {
    (**(code **)(param_9 + 0x10))(param_9);
  }
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1091ffb74; end: 1091ffbbb; -[SCDMTrayWrapperViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ffb74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127838d8);
  if (lVar1 == 0) {
    func_0x00010be9c300();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1091ffbbc; end: 1091ffbc3; -[SCDMTrayWrapperViewController autoSizingEnabled] */

undefined8 FUN_1091ffbbc(void)

{
  return 1;
}



/* Entry: 1091ffbc4; end: 1091ffbcb; -[SCDMTrayWrapperViewController autoSizingFullishEnabled] */

undefined8 FUN_1091ffbc4(void)

{
  return 1;
}



/* Entry: 1091ffbcc; end: 1091ffbd7; -[SCDMTrayWrapperViewController trayFeatureName] */

undefined ** FUN_1091ffbcc(void)

{
  return &PTR____CFConstantStringClassReference_110f2c1d8;
}



/* Entry: 1091ffbd8; end: 1091ffe1f; -[SCDMTrayWrapperViewController _addFullSizeContraintsToChildView:inParentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ffbd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  puVar14 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010c2a5060(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar10 = param_4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar11 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar14);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar18);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = (long)_DAT_1127838d4;
  uVar13 = *(ulong *)(lVar1 + lVar18);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar15 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar14);
  _objc_release(uVar13);
  uVar13 = *(ulong *)(lVar1 + lVar18);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar15 & 1) == 0) {
    uVar15 = uVar13;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    _objc_release(uVar13);
    puVar14 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_retain(uVar16);
    _objc_opt_class(puVar14);
    uVar13 = uVar16;
    _objc_opt_isKindOfClass(uVar16,puVar14);
    uVar15 = uVar16;
    if ((uVar13 & 1) == 0) {
      uVar15 = 0;
    }
    _objc_retain(uVar15);
    _objc_release(uVar16);
  }
  else {
    puVar14 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar16 = uVar13;
    _objc_opt_isKindOfClass(uVar13,puVar14);
    uVar15 = uVar13;
    if ((uVar16 & 1) == 0) {
      uVar15 = 0;
    }
    _objc_retain(uVar15);
    uVar16 = uVar13;
  }
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
  return;
}



/* Entry: 1091ffe20; end: 1091fff47; -[SCDMTrayWrapperViewController _scrollViewInWrappedVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091ffe20(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127838d4;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  _objc_release(uVar1);
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar1 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar3 = uVar1;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    uVar4 = uVar1;
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1091fff48; end: 1091fff67; -[SCDMTrayWrapperViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fff48(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127838dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091fff68; end: 1091fff7b; -[SCDMTrayWrapperViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fff68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127838dc,param_3);
  return;
}



/* Entry: 1091fff7c; end: 1091fffc7; -[SCDMTrayWrapperViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091fff7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127838dc);
  _objc_storeStrong(param_1 + _DAT_1127838d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127838d4,0);
  return;
}



/* Entry: 1091fffc8; end: 109200027;  */

undefined8 FUN_1091fffc8(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  func_0x000107c30a74();
  if ((param_2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    _CGRectGetHeight();
    _objc_release(puVar1);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109200028; end: 109200043;  */

undefined1  [16] FUN_109200028(double param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  dVar1 = param_2 * 0.5625;
  if (param_1 <= param_2 * 0.5625) {
    param_2 = param_1 / 0.5625;
    dVar1 = param_1;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = dVar1;
  return auVar2;
}



/* Entry: 109200044; end: 109200073;  */

void FUN_109200044(long param_1)

{
  if (param_1 == 0) {
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d3c80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109200074; end: 10920024f; -[SCTimelineButton initWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109200074(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112700fa0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar5 = (long)_DAT_1127838e0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar5 = (long)_DAT_1127838e4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(puVar1);
    puVar2 = PTR_PTR_1126b08d8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30a28(0x4024000000000000,0x3fb999999999999a,
                        *(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2,puVar1,puVar3);
    _objc_release(puVar3);
    func_0x00010bde65c0(puVar1);
    func_0x00010bea8c20(puVar1);
    func_0x00010c195480(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109200250; end: 10920026b; -[SCTimelineButton setType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109200250(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_1127838e8)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea8c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setTypeNoGuard__112587cb0);
  return;
}



/* Entry: 10920026c; end: 1092003ab; -[SCTimelineButton setEnabled:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920026c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar4 = param_1;
  func_0x00010c071800();
  if (param_3 != (int)lVar4) {
    func_0x00010c195460(param_1);
    lVar4 = (long)_DAT_1127838ec;
    func_0x00010c2559c0(*(undefined8 *)(param_1 + lVar4));
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1092003ac;
    puStack_60 = &UNK_11084ceb8;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = (undefined1)param_3;
    ppuVar1 = &puStack_78;
    _objc_retainBlock();
    if (param_4 == 0) {
      (*(code *)ppuVar1[2])(ppuVar1);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      _objc_alloc();
      func_0x00010c00ea00(0x3fb999999999999a);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar4));
    }
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1092003ac; end: 1092003fb;  */

void FUN_1092003ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = 0x3ff0000000000000;
    if (*(char *)(param_1 + 0x28) == '\0') {
      uVar2 = 0x3fd999999999999a;
    }
    func_0x00010c1677c0(uVar2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1092003fc; end: 109200577; -[SCTimelineButton _setTypeNoGuard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092003fc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *unaff_x22;
  undefined *unaff_x23;
  
  *(ulong *)(param_1 + _DAT_1127838e8) = param_3;
  puVar2 = PTR_PTR_1126b0c40;
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127838e0);
  if (param_3 == 2) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x81);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7ac0(0x4040000000000000,0x4040000000000000,0x4014000000000000,0x4014000000000000,
                        0x4014000000000000,0x4014000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    if (param_3 == 1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110f2c218;
    }
    else {
      puVar2 = unaff_x22;
      if (param_3 != 0) goto LAB_109200500;
      ppuVar3 = &PTR____CFConstantStringClassReference_110f2c1f8;
    }
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  unaff_x23 = puVar2;
  func_0x00010bfe9720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_109200500:
  func_0x00010c1a9f00(uVar4);
  _objc_release(unaff_x23);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127838e4);
  if (param_3 < 3) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c16e440(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be92770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetConstraints_112582378);
  return;
}



/* Entry: 109200578; end: 1092007b7; -[SCTimelineButton _resetConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109200578(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = (long)_DAT_1127838f0;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar20));
  lVar19 = (long)_DAT_1127838e0;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_1127838e8;
  lVar16 = *(long *)(param_1 + lVar21);
  uVar23 = 0x4030000000000000;
  if (lVar16 != 1) {
    uVar23 = 0x402a000000000000;
  }
  uVar7 = 0x4036000000000000;
  if (lVar16 != 2) {
    uVar7 = uVar23;
  }
  uVar23 = uVar6;
  func_0x00010bf49420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(param_1 + lVar21);
  uVar24 = 0x4030000000000000;
  if (lVar16 != 1) {
    uVar24 = 0x402a000000000000;
  }
  uVar17 = 0x4036000000000000;
  if (lVar16 != 2) {
    uVar17 = uVar24;
  }
  uVar24 = uVar7;
  func_0x00010bf49420(uVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar8;
  _objc_release(uVar17);
  _objc_release(uVar24);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar22);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar18);
  _objc_release(uVar2);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf494e0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf494e0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_1127838e4;
  uVar6 = *(undefined8 *)(puVar8 + lVar22);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar8;
  func_0x00010bf34860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(puVar8 + lVar22);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  func_0x00010bf348e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar8 + lVar22);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(puVar8 + lVar22);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar24;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar4);
  _objc_release(uVar24);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar14);
  _objc_release(uVar23);
  _objc_release(uVar3);
  _objc_release(puVar13);
  _objc_release(uVar6);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar9 + _DAT_1127838ec,0);
  _objc_storeStrong(puVar9 + _DAT_1127838f0,0);
  _objc_storeStrong(puVar9 + _DAT_1127838e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar9 + _DAT_1127838e0,0);
  return;
}



/* Entry: 1092007b8; end: 109200a17; -[SCTimelineButton _constrainSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092007b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf494e0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf494e0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_1127838e4;
  uVar6 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + _DAT_1127838ec,0);
  _objc_storeStrong(lVar2 + _DAT_1127838f0,0);
  _objc_storeStrong(lVar2 + _DAT_1127838e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_1127838e0,0);
  return;
}



/* Entry: 109200a18; end: 109200a77; -[SCTimelineButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109200a18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127838ec,0);
  _objc_storeStrong(param_1 + _DAT_1127838f0,0);
  _objc_storeStrong(param_1 + _DAT_1127838e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127838e0,0);
  return;
}



/* Entry: 109200a78; end: 109200a83; +[SCCTemplateSnapDocFactoryImpl modulePath] */

undefined ** FUN_109200a78(void)

{
  return &PTR____CFConstantStringClassReference_110f2c538;
}



/* Entry: 109200a84; end: 109200a8b; +[SCCTemplateSnapDocFactoryImpl asyncStrictMode] */

undefined8 FUN_109200a84(void)

{
  return 0;
}



/* Entry: 109200a8c; end: 109200aeb; -[SCCTemplateSnapDocFactoryImpl createTemplateSnapDocFactoryWithSdomServiceDependencies:] */

void FUN_109200a8c(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x0001092010fc();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x20;
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109201130();
  _objc_release(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109200aec; end: 109200c4f; +[SCCTemplateSnapDocFactoryImpl invokeWithJSRuntimeProvider:sdomServiceDependencies:completionHandler:] */

void FUN_109200aec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x000109201144();
  uStack_60 = 0xc2000000;
  uStack_58 = 0x109200bc4;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = lVar1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,auStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  func_0x000109201130();
  _objc_release(param_3);
  return;
}



/* Entry: 109200c50; end: 109200c73; +[SCCTemplateSnapDocFactoryImpl valdiMarshallableObjectDescriptor] */

void FUN_109200c50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae1220;
  param_1[1] = &PTR_DAT_110ae1250;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}


