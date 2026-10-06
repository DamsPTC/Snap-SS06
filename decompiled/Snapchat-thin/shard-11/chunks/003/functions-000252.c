/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10849df8c; end: 10849df93; -[SCAdSnapViewingStatus setCanShowMultiSegmentExperience:] */

void FUN_10849df8c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x220) = param_3;
  return;
}



/* Entry: 10849df94; end: 10849e037; -[SCAdSnapViewingStatus setEndCardDisplayed:onlyIfUnset:] */

void FUN_10849df94(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((param_4 != 0) && (*(long *)(param_1 + 0x270) != 0)) {
    return;
  }
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  puVar1 = PTR_PTR_1126d99d0;
  _objc_alloc();
  func_0x00010c00fe00();
  uVar2 = *(undefined8 *)(param_1 + 0x270);
  *(undefined **)(param_1 + 0x270) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10849e038; end: 10849e11b; -[SCAdSnapViewingStatus setEndCardTapped:] */

void FUN_10849e038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x270);
  func_0x00010bf943c0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x270);
  func_0x00010bf94480(uVar3);
  puVar4 = PTR_PTR_1126d99d0;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = *(undefined **)(param_1 + 0x270);
  func_0x00010bf86b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar6 != (undefined *)0x0) {
    puVar1 = puVar6;
  }
  func_0x00010c00fe00(puVar4,param_2,uVar2,puVar5,uVar3,0,0,0,0,0,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x270);
  *(undefined **)(param_1 + 0x270) = puVar4;
  _objc_release(uVar2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10849e11c; end: 10849e14b; -[SCAdSnapViewingStatus setPollStickerSelectedOptionIds:] */

void FUN_10849e11c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849e14c; end: 10849e1e3; -[SCAdSnapViewingStatus pollStickerTrackInfo] */

void FUN_10849e14c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x270);
  func_0x00010bf94480();
  if (lVar1 == 4) {
    uVar2 = *(undefined8 *)(param_1 + 0x270);
    func_0x00010bf943c0(uVar2);
    puVar5 = PTR_PTR_1126d99d8;
    _objc_alloc(PTR_PTR_1126d99d8);
    uVar4 = *(undefined8 *)(param_1 + 0x178);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043c60(puVar5,param_2,uVar4,puVar3);
    _objc_release(puVar3);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10849e1e4; end: 10849e1eb; -[SCAdSnapViewingStatus adFavorited] */

undefined1 FUN_10849e1e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d8);
}



/* Entry: 10849e1ec; end: 10849e1f3; -[SCAdSnapViewingStatus canShowMultiSegmentExperience] */

undefined1 FUN_10849e1ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x220);
}



/* Entry: 10849e1f4; end: 10849e21b; -[SCAdSnapViewingStatus adFavoriteButtonTappedTimestampMsArray] */

void FUN_10849e1f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849e21c; end: 10849e223; -[SCAdSnapViewingStatus initialAdSubscribed] */

undefined1 FUN_10849e21c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a0);
}



/* Entry: 10849e224; end: 10849e22f; -[SCAdSnapViewingStatus setContextMenuOpen] */

void FUN_10849e224(long param_1)

{
  *(undefined1 *)(param_1 + 0x1a1) = 1;
  return;
}



/* Entry: 10849e230; end: 10849e237; -[SCAdSnapViewingStatus contextMenuOpen] */

undefined1 FUN_10849e230(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a1);
}



/* Entry: 10849e238; end: 10849e267; -[SCAdSnapViewingStatus setTryOnLensId:] */

void FUN_10849e238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849e268; end: 10849e2bb; -[SCAdSnapViewingStatus setTryOnOpenedWithARExperienceResumed:] */

void FUN_10849e268(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    func_0x00010bf604a0(param_2);
    *(undefined8 *)(param_2 + 0x1c0) = param_1;
    *(undefined1 *)(param_2 + 0x1b0) = 1;
    return;
  }
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    *(undefined1 *)(param_2 + 0x1b1) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be922b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__resetArExperienceViewTime_112582248);
  return;
}



/* Entry: 10849e2bc; end: 10849e2c7; -[SCAdSnapViewingStatus setTryOnAttachmentClicked] */

void FUN_10849e2bc(long param_1)

{
  *(undefined1 *)(param_1 + 0x1b1) = 1;
  return;
}



/* Entry: 10849e2c8; end: 10849e2cf; -[SCAdSnapViewingStatus appendTryOnLensSessionId:] */

void FUN_10849e2c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1d0),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 10849e2d0; end: 10849e32b; -[SCAdSnapViewingStatus onClickInteraction:] */

void FUN_10849e2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x23c);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x218),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x23c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10849e32c; end: 10849e407; -[SCAdSnapViewingStatus addAttachmentTriggeredTsMsToLastClickInteraction:] */

void FUN_10849e32c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_2 + 0x23c);
  lVar1 = *(long *)(param_2 + 0x218);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x218);
    func_0x00010bf529e0(lVar2);
    lVar3 = *(long *)(param_2 + 0x218);
    func_0x00010c0dfd40(lVar3,param_3,lVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf0d560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = lVar3;
      func_0x00010c2a89e0(param_1,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130f40(*(undefined8 *)(param_2 + 0x218),param_3,lVar2 + -1,lVar1);
      _objc_release(lVar1);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x23c);
  return;
}



/* Entry: 10849e408; end: 10849e4e3; -[SCAdSnapViewingStatus addAttachmentFullyVisibleTsMsToLastClickInteraction:] */

void FUN_10849e408(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_2 + 0x23c);
  lVar1 = *(long *)(param_2 + 0x218);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x218);
    func_0x00010bf529e0(lVar2);
    lVar3 = *(long *)(param_2 + 0x218);
    func_0x00010c0dfd40(lVar3,param_3,lVar2 + -1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf0cec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = lVar3;
      func_0x00010c2a8900(param_1,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130f40(*(undefined8 *)(param_2 + 0x218),param_3,lVar2 + -1,lVar1);
      _objc_release(lVar1);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x23c);
  return;
}



/* Entry: 10849e4e4; end: 10849e50b; -[SCAdSnapViewingStatus clickInteractionsArray] */

void FUN_10849e4e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849e50c; end: 10849e513; -[SCAdSnapViewingStatus onValdiAdTrackEvent:] */

void FUN_10849e50c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef8030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x228),PTR_s_addEvent__11259b9b0)
  ;
  return;
}



/* Entry: 10849e514; end: 10849e51b; -[SCAdSnapViewingStatus valdiAdTrackEventWrappers] */

void FUN_10849e514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x228),PTR_s_asList_1125a03c0);
  return;
}



/* Entry: 10849e51c; end: 10849e55f; -[SCAdSnapViewingStatus _resetArExperienceViewTime] */

void FUN_10849e51c(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_1 + 0x1c0);
  if (0.0 < dVar1) {
    func_0x00010bf604a0();
    dVar2 = *(double *)(param_1 + 0x1c0);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) + (long)(dVar1 - dVar2);
  }
  return;
}



/* Entry: 10849e560; end: 10849e8ab; -[SCAdSnapViewingStatus _setDefaultValue] */

void FUN_10849e560(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined ***)(param_1 + 0x20) = &PTR____CFConstantStringClassReference_110db86d8;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  *(undefined **)(param_1 + 0x280) = puVar2;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar2 = PTR_PTR_1126ca510;
  _objc_alloc();
  func_0x00010c0293c0(0x43e0000000000000);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar2;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined **)(param_1 + 0x1a8) = puVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x88) = 0;
  puVar2 = PTR_PTR_1126c5518;
  _objc_alloc_init();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined **)(param_1 + 0x100) = puVar2;
  _objc_release(uVar1);
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0xbff0000000000000;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar2;
  _objc_release(uVar1);
  iVar3 = 6;
  do {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c069cc0(PTR_PTR_1126d99e0);
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined8 *)(param_1 + 200) = 0xbff0000000000000;
  auVar4 = NEON_fmov(0xbff0000000000000,8);
  *(long *)(param_1 + 0xc0) = auVar4._8_8_;
  *(long *)(param_1 + 0xb8) = auVar4._0_8_;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined **)(param_1 + 0xf0) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined **)(param_1 + 0xf8) = puVar2;
  _objc_release(uVar1);
  *(undefined2 *)(param_1 + 0x108) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  _objc_release(uVar1);
  *(undefined2 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x192) = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined **)(param_1 + 0x198) = puVar2;
  _objc_release(uVar1);
  *(undefined2 *)(param_1 + 0x1a0) = 0;
  func_0x00010be922a0(param_1);
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined **)(param_1 + 0x1e0) = puVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  *(undefined **)(param_1 + 0x208) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(undefined **)(param_1 + 0x210) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x218);
  *(undefined **)(param_1 + 0x218) = puVar2;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined **)(param_1 + 0x1d0) = puVar2;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  *(undefined **)(param_1 + 0x178) = puVar2;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x270) = 0;
  _objc_release(uVar1);
  *(undefined2 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  return;
}



/* Entry: 10849e8ac; end: 10849e993; -[SCAdSnapViewingStatus _startTopSnapTimer:] */

void FUN_10849e8ac(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  
  if ((*(byte *)(param_2 + 0xd0) & 1) == 0) {
    dVar5 = param_1;
    func_0x00010bf604a0();
    *(double *)(param_2 + 0x278) = dVar5;
    *(undefined1 *)(param_2 + 0xd0) = 1;
    *(bool *)(param_2 + 0xa0) = 0.0 < param_1;
    lVar1 = *(long *)(param_2 + 0x280);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar4 = 0;
      do {
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(*(undefined8 *)(param_2 + 0x280));
        _objc_release(puVar2);
        uVar4 = uVar4 + 1;
        uVar3 = *(ulong *)(param_2 + 0x280);
        func_0x00010bf529e0();
      } while (uVar4 < uVar3);
    }
    *(double *)(param_2 + 0xb8) = param_1;
    *(undefined8 *)(param_2 + 200) = 0;
    *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_2 + 0x278);
    if (0 < *(long *)(param_2 + 0x40)) {
                    /* WARNING: Could not recover jumptable at 0x00010bee4230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,param_2,PTR_s__updateVolume_forIndex__112596a30,0);
      return;
    }
  }
  return;
}



/* Entry: 10849e994; end: 10849ea5b; -[SCAdSnapViewingStatus _stopTopSnapTimer] */

void FUN_10849e994(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  if ((*(char *)(param_1 + 0xd0) == '\x01') && (*(double *)(param_1 + 0x278) != -1.0)) {
    func_0x00010bedb7a0(*(undefined8 *)(param_1 + 0xb8),param_1);
    lVar1 = param_1;
    func_0x00010bfcb4a0();
    dVar5 = (double)lVar1;
    if ((double)*(long *)(param_1 + 0x48) < dVar5) {
      dVar4 = dVar5;
      if ((double)*(long *)(param_1 + 0x40) <= dVar5) {
        dVar4 = (double)*(long *)(param_1 + 0x40);
      }
      *(long *)(param_1 + 0x48) = (long)dVar4;
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bff4000();
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined **)(param_1 + 0xa8) = puVar2;
      _objc_release(uVar3);
    }
    if ((double)*(long *)(param_1 + 0x50) < dVar5) {
      *(long *)(param_1 + 0x50) = (long)dVar5;
    }
    *(undefined8 *)(param_1 + 0x278) = 0xbff0000000000000;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}



/* Entry: 10849ea5c; end: 10849eaa3; -[SCAdSnapViewingStatus getNextQuadrantIndexForTimestamp:] */

long FUN_10849ea5c(long param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    dVar1 = (double)param_3;
    dVar2 = *(double *)(param_1 + 0x278);
    if ((dVar2 <= dVar1) && (dVar3 = (double)*(long *)(param_1 + 0x40), dVar1 <= dVar2 + dVar3)) {
      return (long)((dVar1 - dVar2) / (dVar3 * 0.25));
    }
  }
  return -1;
}



/* Entry: 10849eaa4; end: 10849eacf; -[SCAdSnapViewingStatus getTopSnapViewTimeMillis] */

long FUN_10849eaa4(double param_1,long param_2)

{
  func_0x00010bf604a0();
  return (long)(param_1 - *(double *)(param_2 + 0x278));
}



/* Entry: 10849ead0; end: 10849eadb; -[SCAdSnapViewingStatus currentTimeInMillis] */

void FUN_10849ead0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf604d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126afec0,PTR_s_currentTimeInMilliseconds_1125b5ad8);
  return;
}



/* Entry: 10849eadc; end: 10849ebf3; -[SCAdSnapViewingStatus _updateMediaVolumePercent:] */

void FUN_10849eadc(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (*(long *)(param_2 + 0x40) != 0) {
    dVar6 = param_1;
    func_0x00010bf604a0();
    dVar7 = dVar6 - *(double *)(param_2 + 0x278);
    dVar8 = *(double *)(param_2 + 0xc0);
    dVar9 = (double)*(long *)(param_2 + 0x40);
    _fmod(dVar7,dVar9);
    dVar7 = dVar7 / dVar9;
    if (dVar9 <= dVar6 - dVar8) {
      lVar4 = 0;
      do {
        func_0x00010bee4220(*(undefined8 *)(param_2 + 0xb8),param_2,param_3,lVar4);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 6);
    }
    else {
      lVar4 = param_2;
      func_0x00010be20be0(*(undefined8 *)(param_2 + 200));
      lVar2 = param_2;
      func_0x00010be20be0(dVar7);
      iVar1 = (int)lVar2 + 6;
      if (*(double *)(param_2 + 200) <= dVar7) {
        iVar1 = (int)lVar2;
      }
      iVar3 = (int)lVar4;
      if (iVar3 < iVar1) {
        uVar5 = (ulong)iVar3;
        lVar4 = (long)iVar1 - (long)iVar3;
        do {
          func_0x00010bee4220(*(undefined8 *)(param_2 + 0xb8),param_2,param_3,uVar5 % 6);
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    *(double *)(param_2 + 0xc0) = dVar6;
    *(double *)(param_2 + 200) = dVar7;
    *(double *)(param_2 + 0xb8) = param_1;
  }
  return;
}



/* Entry: 10849ebf4; end: 10849ec5b; -[SCAdSnapViewingStatus _getNextPlaybackIndexForPercent:] */

undefined4 FUN_10849ebf4(double param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0.0) {
    return 0;
  }
  if (param_1 <= 0.25) {
    return 1;
  }
  if (param_1 <= 0.5) {
    return 2;
  }
  if (0.75 < param_1) {
    uVar1 = 5;
    if (param_1 <= 0.97) {
      uVar1 = 4;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 10849ec5c; end: 10849ed07; -[SCAdSnapViewingStatus _updateVolume:forIndex:] */

void FUN_10849ec5c(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  
  if (param_4 < 6) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    dVar3 = param_1;
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar1);
    if (dVar3 < param_1) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(param_2 + 0xb0),param_3,puVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 10849ed08; end: 10849eda3; -[SCAdSnapViewingStatus _webViewViewingStatus:] */

void FUN_10849ed08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x100);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126c5518;
    _objc_alloc_init(PTR_PTR_1126c5518);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x100),param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  func_0x00010c0e00e0(uVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10849eda4; end: 10849edab; -[SCAdSnapViewingStatus swipeUpAttempts] */

undefined8 FUN_10849eda4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}



/* Entry: 10849edac; end: 10849edb3; -[SCAdSnapViewingStatus allSwipeAttempts] */

undefined8 FUN_10849edac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x248);
}



/* Entry: 10849edb4; end: 10849edbb; -[SCAdSnapViewingStatus preferredWidthDp] */

undefined8 FUN_10849edb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x250);
}



/* Entry: 10849edbc; end: 10849edc3; -[SCAdSnapViewingStatus preferredHeightDp] */

undefined8 FUN_10849edbc(long param_1)

{
  return *(undefined8 *)(param_1 + 600);
}



/* Entry: 10849edc4; end: 10849edcb; -[SCAdSnapViewingStatus preferredImageSizeDp] */

undefined8 FUN_10849edc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x260);
}



/* Entry: 10849edcc; end: 10849edd3; -[SCAdSnapViewingStatus didExpandAdAtIndex] */

undefined8 FUN_10849edcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x268);
}



/* Entry: 10849edd4; end: 10849ee03; -[SCAdSnapViewingStatus setDidExpandAdAtIndex:] */

void FUN_10849edd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x268) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849ee04; end: 10849ee0b; -[SCAdSnapViewingStatus endCardInteractionInfo] */

undefined8 FUN_10849ee04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}



/* Entry: 10849ee0c; end: 10849ee13; -[SCAdSnapViewingStatus currentTopSnapStartTimestamp] */

undefined8 FUN_10849ee0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 10849ee14; end: 10849ee1b; -[SCAdSnapViewingStatus setCurrentTopSnapStartTimestamp:] */

void FUN_10849ee14(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x278) = param_1;
  return;
}



/* Entry: 10849ee1c; end: 10849ee23; -[SCAdSnapViewingStatus audioQuadrantStateForCurrentSession] */

undefined8 FUN_10849ee1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



/* Entry: 10849ee24; end: 10849ee53; -[SCAdSnapViewingStatus setAudioQuadrantStateForCurrentSession:] */

void FUN_10849ee24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849ee54; end: 10849f03f; -[SCAdSnapViewingStatus .cxx_destruct] */

void FUN_10849ee54(long param_1)

{
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10849f040; end: 10849f19b; -[SCAdSnapWebViewViewingStatus init] */

undefined1 * FUN_10849f040(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fca68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined **)((long)puVar1 + 200) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd0);
    *(undefined **)((long)puVar1 + 0xd0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xd8);
    *(undefined **)((long)puVar1 + 0xd8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0xe0);
    *(undefined **)((long)puVar1 + 0xe0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x128);
    *(undefined **)((long)puVar1 + 0x128) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x130);
    *(undefined **)((long)puVar1 + 0x130) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x138);
    *(undefined **)((long)puVar1 + 0x138) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d6ce0;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x150);
    *(undefined **)((long)puVar1 + 0x150) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10849f19c; end: 10849fe1f; -[SCAdSnapWebViewViewingStatus webViewTrackInfo] */

void FUN_10849f19c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 uStack_dc;
  undefined1 uStack_d8;
  undefined1 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar22 = *(undefined **)(param_1 + 8);
  if ((puVar22 == (undefined *)0x0) || (*(long *)(param_1 + 0x78) != 0)) {
    puVar5 = PTR_PTR_1126d99e8;
    _objc_alloc();
    func_0x00010c062f60();
    puStack_98 = PTR_PTR_1126d99f0;
    _objc_alloc();
    uVar13 = *(undefined8 *)(param_1 + 0xe8);
    uVar14 = *(undefined8 *)(param_1 + 0xf0);
    lVar6 = *(long *)(param_1 + 0xd0);
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      uVar15 = 0;
    }
    else {
      uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uStack_b8;
      func_0x00010bf51e00();
    }
    lVar7 = *(long *)(param_1 + 200);
    func_0x00010bf529e0();
    if (lVar7 == 0) {
      uStack_a0 = 0;
    }
    else {
      uStack_c8 = *(undefined8 *)(param_1 + 200);
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = uStack_c8;
      func_0x00010bf51e00();
    }
    lVar8 = *(long *)(param_1 + 0xd8);
    func_0x00010bf529e0();
    if (lVar8 == 0) {
      uStack_b0 = 0;
    }
    else {
      uStack_d0 = *(undefined8 *)(param_1 + 0xd8);
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = uStack_d0;
      func_0x00010bf51e00();
    }
    uVar20 = *(undefined8 *)(param_1 + 0xf8);
    uVar21 = *(undefined8 *)(param_1 + 0x100);
    uVar23 = *(undefined8 *)(param_1 + 0x108);
    uVar1 = *(undefined1 *)(param_1 + 0x14b);
    lVar9 = *(long *)(param_1 + 0xe0);
    func_0x00010bf529e0();
    if (lVar9 == 0) {
      uVar24 = 0;
      func_0x00010c01ee20(puStack_98,param_2,uVar13,uVar14,uVar15,uStack_a0,uStack_b0,uVar20,uVar21,
                          uVar23,uVar1,0);
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0xe0);
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf51e00();
      uVar24 = uVar11;
      func_0x00010c01ee20(puStack_98,param_2,uVar13,uVar14,uVar15,uStack_a0,uStack_b0,uVar20,uVar21,
                          uVar23,uVar1,uVar11);
      _objc_release(uVar11);
      _objc_release(uVar10);
    }
    if (lVar8 != 0) {
      _objc_release(uStack_b0);
      _objc_release(uStack_d0);
    }
    if (lVar7 != 0) {
      _objc_release(uStack_a0);
      _objc_release(uStack_c8);
    }
    if (lVar6 != 0) {
      _objc_release(uVar15);
      _objc_release(uStack_b8);
    }
    puVar12 = PTR_PTR_1126d99f8;
    _objc_alloc();
    uVar13 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010bf51e00(uVar13);
    uVar14 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010bf51e00(uVar14);
    uVar15 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010bf51e00(uVar15);
    func_0x00010c002d40(puVar12,param_2,uVar13,uVar14,uVar15);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    lVar6 = *(long *)(param_1 + 0x150);
    func_0x00010bfdcde0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010bfdcde0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(uVar13);
    }
    _objc_release(lVar6);
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010c064600();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    if (lVar7 == 0) {
      lVar6 = *(long *)(param_1 + 0x88);
    }
    _objc_retain(lVar6);
    _objc_release(lVar7);
    puVar22 = *(undefined **)(param_1 + 0x78);
    if (puVar22 == (undefined *)0x0) {
      puVar22 = PTR_PTR_1126b9318;
      func_0x00010bfe6000();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_release(puVar22);
    }
    else {
      _objc_retain(puVar22);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010bfdcde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar19 = puVar22;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010bfdcde0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2af540(puVar22,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010c064600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar22 = puVar19;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010c064600(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b5440(puVar19,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010c13b100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar19 = puVar22;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010c13b100(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b72c0(puVar22,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010c087e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar22 = puVar19;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010c087e20(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b8480(puVar19,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010c087e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar19 = puVar22;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010c087e40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b84a0(puVar22,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010c087e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar22 = puVar19;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010c087e80(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b84c0(puVar19,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010c291200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar19 = puVar22;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010c291200(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bc2a0(puVar22,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010bfb1060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar22 = puVar19;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010bfb1060(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ae260(puVar19,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010c0d6be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar19 = puVar22;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010c0d6be0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b4540(puVar22,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010bf87c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010bf87c20(uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar19;
      func_0x00010c2ac820(puVar19,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(uVar13);
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010bf87c20(uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar22;
      func_0x00010c2ac8a0(puVar22,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010bf87d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar22 = puVar19;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010bf87d40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ac880(puVar19,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010bfbb940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar19 = puVar22;
    if (lVar7 != 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010bfbb940(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ae980(puVar22,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      _objc_release(uVar13);
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010c13b880();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar19;
    if (lVar7 != 0) {
      puVar22 = puVar19;
      func_0x00010bf87c80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar7);
      if (puVar22 == (undefined *)0x0) {
        uVar13 = *(undefined8 *)(param_1 + 0x150);
        func_0x00010c13b880(uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ac860(puVar19,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_release(uVar13);
      }
    }
    func_0x00010be1d600();
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010bf9a760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == 0) {
      lVar7 = *(long *)(param_1 + 0x150);
      func_0x00010bf21840();
      puVar22 = PTR_PTR_1126d9a00;
      if (lVar7 != 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x150);
        func_0x00010bf21840(uVar13);
        func_0x00010bef6400(puVar22,param_2,uVar13);
      }
    }
    lVar7 = *(long *)(param_1 + 0x150);
    func_0x00010bfbca00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      lVar8 = *(long *)(param_1 + 0x40);
      func_0x00010bf51e00();
      _objc_retain();
      _objc_release(lVar8);
    }
    else {
      _objc_retain(lVar7);
      lVar8 = lVar7;
    }
    _objc_release(lVar7);
    lVar9 = *(long *)(param_1 + 0x150);
    func_0x00010bfbc920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    if (lVar9 == 0) {
      lVar7 = *(long *)(param_1 + 0x48);
    }
    _objc_retain(lVar7);
    _objc_release(lVar9);
    lVar17 = *(long *)(param_1 + 0x150);
    func_0x00010bfbc940();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar17;
    if (lVar17 == 0) {
      lVar9 = *(long *)(param_1 + 0x50);
    }
    _objc_retain(lVar9);
    _objc_release(lVar17);
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      uStack_d4 = (undefined1)*(undefined8 *)(param_1 + 0x150);
      func_0x00010bfd75c0();
    }
    else {
      uStack_d4 = 1;
    }
    if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
      uStack_d8 = (undefined1)*(undefined8 *)(param_1 + 0x150);
      func_0x00010bfd75e0();
    }
    else {
      uStack_d8 = 1;
    }
    if ((*(byte *)(param_1 + 0x62) & 1) == 0) {
      uStack_dc = (undefined1)*(undefined8 *)(param_1 + 0x150);
      func_0x00010c2a3fe0();
    }
    else {
      uStack_dc = 1;
    }
    lVar18 = *(long *)(param_1 + 0x150);
    func_0x00010c14c1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar18;
    if (lVar18 == 0) {
      lVar17 = *(long *)(param_1 + 0x68);
    }
    _objc_retain(lVar17);
    _objc_release(lVar18);
    puVar22 = PTR_PTR_1126b9310;
    _objc_alloc();
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    uVar2 = *(undefined1 *)(param_1 + 0x11);
    uVar23 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined1 *)(param_1 + 0x20);
    uVar21 = *(undefined8 *)(param_1 + 0x28);
    uVar13 = *(undefined8 *)(param_1 + 0x90);
    uVar14 = *(undefined8 *)(param_1 + 0x98);
    uVar4 = *(undefined1 *)(param_1 + 0x30);
    uVar20 = *(undefined8 *)(param_1 + 0x38);
    uVar15 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf51e00();
    lVar18 = *(long *)(param_1 + 0x160);
    if (lVar18 < 1) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar18);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0266e0(uVar23,puVar22,param_2,uVar1,uVar2,uVar3,uVar21,uVar13,uVar14,uVar4,uVar20,
                        lVar8,CONCAT71(CONCAT61((int6)((ulong)uVar24 >> 0x10),uStack_d8),uStack_d4),
                        lVar7,lVar9,0,uStack_dc);
    if (0 < lVar18) {
      _objc_release(puVar19);
    }
    _objc_release(uVar15);
    _objc_release(lVar17);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(puVar16);
    _objc_release(lVar6);
    _objc_release(puVar12);
    _objc_release(puStack_98);
    _objc_release(puVar5);
  }
  else {
    _objc_retain(puVar22);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 10849fe20; end: 10849fe5f; -[SCAdSnapWebViewViewingStatus didReceiveWebViewContext:] */

void FUN_10849fe20(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x150);
    func_0x00010c0cab40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10849fe60; end: 1084a021b; -[SCAdSnapWebViewViewingStatus onWebBrowserSessionEvent:] */

void FUN_10849fe60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_458;
  undefined8 uStack_450;
  code *pcStack_448;
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  code *pcStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  code *pcStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  code *pcStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
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
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1084a021c;
  puStack_30 = &UNK_1108484c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1084a0228;
  puStack_58 = &UNK_110a4af38;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1084a0238;
  puStack_80 = &UNK_1108544b0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1084a026c;
  puStack_a8 = &UNK_110a4af68;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1084a0288;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1084a0290;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1084a0298;
  puStack_120 = &UNK_1108544b0;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x1084a02a4;
  puStack_148 = &UNK_110a4af98;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x1084a02b0;
  puStack_170 = &UNK_110842e18;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1084a02b8;
  puStack_198 = &UNK_1108724a0;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_1084a0300;
  puStack_1c0 = &UNK_110a4afc8;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x1084a0310;
  puStack_1e8 = &UNK_110842e18;
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_1084a0320;
  puStack_210 = &UNK_11088b498;
  puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_248 = 0xc2000000;
  pcStack_240 = FUN_1084a03ac;
  puStack_238 = &UNK_110842e18;
  puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_270 = 0xc2000000;
  uStack_268 = 0x1084a03bc;
  puStack_260 = &UNK_110842e18;
  puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_298 = 0xc2000000;
  uStack_290 = 0x1084a03cc;
  puStack_288 = &UNK_110842e18;
  puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2c0 = 0xc2000000;
  pcStack_2b8 = FUN_1084a03dc;
  puStack_2b0 = &UNK_110841f20;
  puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e8 = 0xc2000000;
  pcStack_2e0 = FUN_1084a0420;
  puStack_2d8 = &UNK_110842e18;
  puStack_318 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_310 = 0xc2000000;
  uStack_308 = 0x1084a0430;
  puStack_300 = &UNK_110842e18;
  puStack_340 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_338 = 0xc2000000;
  uStack_330 = 0x1084a0440;
  puStack_328 = &UNK_110841f20;
  puStack_368 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_360 = 0xc2000000;
  uStack_358 = 0x1084a044c;
  puStack_350 = &UNK_110842e18;
  puStack_390 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_388 = 0xc2000000;
  uStack_380 = 0x1084a045c;
  puStack_378 = &UNK_110842e18;
  puStack_3b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3b0 = 0xc2000000;
  uStack_3a8 = 0x1084a046c;
  puStack_3a0 = &UNK_110842e18;
  puStack_3e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3d8 = 0xc2000000;
  pcStack_3d0 = FUN_1084a047c;
  puStack_3c8 = &UNK_1108544b0;
  puStack_408 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_400 = 0xc2000000;
  pcStack_3f8 = FUN_1084a04b0;
  puStack_3f0 = &UNK_110842e18;
  puStack_430 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_428 = 0xc2000000;
  pcStack_420 = FUN_1084a04c4;
  puStack_418 = &UNK_110a4b018;
  puStack_458 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_450 = 0xc2000000;
  pcStack_448 = FUN_1084a0544;
  puStack_440 = &UNK_1108544b0;
  uStack_438 = param_1;
  uStack_410 = param_1;
  uStack_3e8 = param_1;
  uStack_3c0 = param_1;
  uStack_398 = param_1;
  uStack_370 = param_1;
  uStack_348 = param_1;
  uStack_320 = param_1;
  uStack_2f8 = param_1;
  uStack_2d0 = param_1;
  uStack_2a8 = param_1;
  uStack_280 = param_1;
  uStack_258 = param_1;
  uStack_230 = param_1;
  uStack_208 = param_1;
  uStack_1e0 = param_1;
  uStack_1b8 = param_1;
  uStack_190 = param_1;
  uStack_168 = param_1;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bf520(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160,&puStack_188,&puStack_1b0,&puStack_1d8,
                      &PTR___NSConcreteGlobalBlock_110a4aff8,&puStack_200,&puStack_228,&puStack_250,
                      &puStack_278,&puStack_2a0,&puStack_2c8,&puStack_2f0,&puStack_318,&puStack_340,
                      &puStack_368,&puStack_390,&puStack_3b8,&puStack_3e0,&puStack_408,&puStack_430,
                      &puStack_458);
  return;
}



/* Entry: 1084a021c; end: 1084a0237;  */

void FUN_1084a021c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onPrefetchHintsLoad__1126170f8,param_2);
  return;
}



/* Entry: 1084a0238; end: 1084a026b;  */

void FUN_1084a0238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a026c; end: 1084a02b7;  */

void FUN_1084a026c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onGAHitReceived_hitLatency_hitTs_112616bb0,
             param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1084a02b8; end: 1084a02ff;  */

void FUN_1084a02b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80) = param_2;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a0300; end: 1084a031f;  */

void FUN_1084a0300(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6c410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onUserInteractionEvent__112578aa0,param_2);
  return;
}



/* Entry: 1084a0320; end: 1084a03ab;  */

void FUN_1084a0320(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x98) = puVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x140) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084a03ac; end: 1084a03db;  */

void FUN_1084a03ac(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x140) = 3;
  return;
}



/* Entry: 1084a03dc; end: 1084a041f;  */

void FUN_1084a03dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x68) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084a0420; end: 1084a047b;  */

void FUN_1084a0420(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x149) = 1;
  return;
}



/* Entry: 1084a047c; end: 1084a04af;  */

void FUN_1084a047c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x158);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x158) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a04b0; end: 1084a04c3;  */

void FUN_1084a04b0(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0x160) = *(long *)(*(long *)(param_1 + 0x20) + 0x160) + 1;
  return;
}



/* Entry: 1084a04c4; end: 1084a0543;  */

void FUN_1084a04c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168) = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x170);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x170) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084a0544; end: 1084a0577;  */

void FUN_1084a0544(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x178);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x178) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a0578; end: 1084a0587; -[SCAdSnapWebViewViewingStatus onPrefetchHintsLoad:] */

void FUN_1084a0578(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1084a0588; end: 1084a05cb; -[SCAdSnapWebViewViewingStatus adoptWebViewTrackInfo:] */

void FUN_1084a0588(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084a05cc; end: 1084a0637; -[SCAdSnapWebViewViewingStatus setLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:initialPageStatusCode:] */

void FUN_1084a05cc(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  *(undefined1 *)(param_2 + 0x10) = param_4;
  *(undefined1 *)(param_2 + 0x11) = param_5;
  *(undefined8 *)(param_2 + 0x18) = param_1;
  if (param_6 != 0) {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_2 + 0x28) = param_6;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1084a0638; end: 1084a0703; -[SCAdSnapWebViewViewingStatus onGAHitReceived:hitLatency:hitTsMs:isPageView:isLandingPage:] */

void FUN_1084a0638(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  int param_6,int param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010befa120(uVar2,param_2,param_3);
  lVar1 = param_4;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_5;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
  }
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar1;
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  if ((param_6 != 0) && (*(undefined1 *)(param_1 + 0x60) = 1, param_7 != 0)) {
    *(undefined1 *)(param_1 + 0x61) = 1;
  }
  return;
}



/* Entry: 1084a0704; end: 1084a073b; -[SCAdSnapWebViewViewingStatus _onPixelRequestIntercept:] */

void FUN_1084a0704(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    param_3 = *(long *)(param_1 + 0x58);
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a073c; end: 1084a07c7; -[SCAdSnapWebViewViewingStatus _onAdobePing:] */

void FUN_1084a073c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_3;
  if (*(long *)(param_1 + 0xb8) != 0) {
    lVar1 = *(long *)(param_1 + 0xb8);
  }
  _objc_retain(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar1;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = *(long *)(param_1 + 0xc0);
  func_0x00010c067fc0(lVar1);
  func_0x00010c0df780(puVar2,param_2,lVar1 + 1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084a07c8; end: 1084a091f; -[SCAdSnapWebViewViewingStatus _onBrowserEvent:] */

void FUN_1084a07c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
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
  
  _objc_retain(param_4);
  func_0x00010c270aa0(param_4);
  uVar1 = param_4;
  func_0x00010bf9a440(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1084a0920;
  puStack_58 = &UNK_110848c48;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1084a0964;
  puStack_88 = &UNK_110848c48;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1084a09a8;
  puStack_b8 = &UNK_110946228;
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_1084a0a3c;
  puStack_e0 = &UNK_110842e18;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_1084a0a4c;
  puStack_108 = &UNK_110855e40;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x1084a0a98;
  puStack_138 = &UNK_110848c48;
  uStack_130 = param_2;
  uStack_128 = param_1;
  uStack_100 = param_2;
  uStack_d8 = param_2;
  uStack_b0 = param_2;
  uStack_a8 = param_1;
  uStack_80 = param_2;
  uStack_78 = param_1;
  uStack_50 = param_2;
  uStack_48 = param_1;
  func_0x00010c0be660(uVar1,param_3,&puStack_70,&puStack_a0,&puStack_d0,&puStack_f8,&puStack_120,
                      &puStack_150);
  _objc_release(uVar1);
  return;
}



/* Entry: 1084a0920; end: 1084a09a7;  */

void FUN_1084a0920(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0xa0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084a09a8; end: 1084a0a3b;  */

void FUN_1084a09a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0df720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0xb0) = puVar1;
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084a0a3c; end: 1084a0a4b;  */

void FUN_1084a0a3c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 100) = 1;
  return;
}



/* Entry: 1084a0a4c; end: 1084a0ae3;  */

void FUN_1084a0a4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084a0ae4; end: 1084a0b27; -[SCAdSnapWebViewViewingStatus onWebViewLoad:webBrowserType:] */

void FUN_1084a0ae4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x80) = param_4;
  return;
}



/* Entry: 1084a0b28; end: 1084a0b33; -[SCAdSnapWebViewViewingStatus onWebViewGAIncluded] */

void FUN_1084a0b28(long param_1)

{
  *(undefined1 *)(param_1 + 0x62) = 1;
  return;
}



/* Entry: 1084a0b34; end: 1084a0b3f; -[SCAdSnapWebViewViewingStatus _onOpenInBrowser] */

void FUN_1084a0b34(long param_1)

{
  *(undefined1 *)(param_1 + 99) = 1;
  return;
}



/* Entry: 1084a0b40; end: 1084a0b4b; -[SCAdSnapWebViewViewingStatus _onWebViewPrefetchedHtmlLoaded] */

void FUN_1084a0b40(long param_1)

{
  *(undefined1 *)(param_1 + 0x110) = 1;
  return;
}



/* Entry: 1084a0b4c; end: 1084a0be7; -[SCAdSnapWebViewViewingStatus _onUserInteractionEvent:] */

void FUN_1084a0b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
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
  pcStack_28 = FUN_1084a0be8;
  puStack_20 = &UNK_110a4b048;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1084a0c54;
  puStack_48 = &UNK_110a4b078;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1084a0ce0;
  puStack_70 = &UNK_110a4b0a8;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bd0e0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 1084a0be8; end: 1084a0c53;  */

void FUN_1084a0be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d9a08;
  _objc_alloc(PTR_PTR_1126d9a08);
  func_0x00010c052a80(param_1,param_2,param_3);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_4 + 0x20) + 0x128),param_5,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084a0c54; end: 1084a0cdf;  */

void FUN_1084a0c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d9a10;
  _objc_alloc(PTR_PTR_1126d9a10);
  func_0x00010c04bc60(param_1,param_2,param_3,param_4,param_5,param_6);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_7 + 0x20) + 0x130),param_8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084a0ce0; end: 1084a0d3b;  */

void FUN_1084a0ce0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d9a18;
  _objc_alloc(PTR_PTR_1126d9a18);
  func_0x00010c011920(param_1);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x138));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084a0d3c; end: 1084a0d63; -[SCAdSnapWebViewViewingStatus _getBrowserType] */

undefined * FUN_1084a0d3c(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x140) == 1) {
    return (undefined *)0x3;
  }
  puVar1 = PTR_PTR_1126d9a00;
                    /* WARNING: Could not recover jumptable at 0x00010bef6410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d9a00,PTR_s_adWebBrowserTypeFromWebBrowserTy_11259b2a8,
             *(undefined8 *)(param_1 + 0x80));
  return puVar1;
}



/* Entry: 1084a0d64; end: 1084a0f2b; -[SCAdSnapWebViewViewingStatus .cxx_destruct] */

void FUN_1084a0d64(long param_1)

{
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084a0f2c; end: 1084a103b; -[SCAdViewingStatus initWithAdType:adKey:responseReceiveTimestampInMillis:adProductType:tileWidth:tileHeight:screenWidth:screenHeight:] */

undefined1 *
FUN_1084a0f2c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fca70;
  uStack_70 = param_6;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x68) = param_10;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x78) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar1 + 0x50) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = param_2;
    *(undefined4 *)((long)puVar1 + 0x44) = param_3;
    *(undefined4 *)((long)puVar1 + 0x48) = param_4;
    *(undefined4 *)((long)puVar1 + 0x4c) = param_5;
    func_0x00010bea3500(puVar1);
  }
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 1084a103c; end: 1084a1043; -[SCAdViewingStatus viewingStatusCount] */

void FUN_1084a103c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1084a1044; end: 1084a104b; -[SCAdViewingStatus snapCount] */

void FUN_1084a1044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1084a104c; end: 1084a1053; -[SCAdViewingStatus totalTopSnapsMediaDurationMillis] */

undefined8 FUN_1084a104c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1084a1054; end: 1084a11fb; -[SCAdViewingStatus totalSwipeUps] */

long FUN_1084a1054(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x58) == 0x16 || *(long *)(param_1 + 0x58) == 5) {
    lVar6 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 == 0) {
LAB_1084a11b8:
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          lVar2 = *(long *)(lVar8 * 8);
          func_0x00010c264640();
          lVar7 = lVar2 + lVar7;
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 == 0) goto LAB_1084a11b8;
    lVar7 = 0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        lVar2 = *(long *)(lVar8 * 8);
        func_0x00010c264640();
        lVar7 = lVar2 + lVar7;
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar7;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(lVar6 + 0x58) == 0x16 || *(long *)(lVar6 + 0x58) == 5) {
    lVar6 = *(long *)(lVar6 + 0x10);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 != 0) {
      lVar7 = 0;
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          lVar2 = *(long *)(lVar8 * 8);
          func_0x00010c264640();
          if (lVar2 != 0) {
            lVar7 = lVar7 + 1;
          }
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      goto LAB_1084a136c;
    }
  }
  else {
    lVar6 = *(long *)(lVar6 + 8);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 != 0) {
      lVar7 = 0;
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          lVar2 = *(long *)(lVar8 * 8);
          func_0x00010c264640();
          if (lVar2 != 0) {
            lVar7 = lVar7 + 1;
          }
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      goto LAB_1084a136c;
    }
  }
  lVar7 = 0;
LAB_1084a136c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar7;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(lVar6 + 0x10);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  if (lVar3 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar4 = *(ulong *)(lVar5 * 8);
        func_0x00010c06c960();
        if ((uVar4 & 1) != 0) {
          lVar5 = 1;
          goto LAB_1084a146c;
        }
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar5 = 0;
  }
LAB_1084a146c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(lVar6 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bfcb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s_getTotalMillis_1125d0700);
  return lVar5;
}



/* Entry: 1084a11fc; end: 1084a13ab; -[SCAdViewingStatus uniqueSwipeUps] */

long FUN_1084a11fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x58) == 0x16 || *(long *)(param_1 + 0x58) == 5) {
    lVar6 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 != 0) {
      lVar7 = 0;
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          lVar2 = *(long *)(lVar8 * 8);
          func_0x00010c264640();
          if (lVar2 != 0) {
            lVar7 = lVar7 + 1;
          }
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      goto LAB_1084a136c;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 8);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 != 0) {
      lVar7 = 0;
      do {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          lVar2 = *(long *)(lVar8 * 8);
          func_0x00010c264640();
          if (lVar2 != 0) {
            lVar7 = lVar7 + 1;
          }
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      goto LAB_1084a136c;
    }
  }
  lVar7 = 0;
LAB_1084a136c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar7;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(lVar6 + 0x10);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  if (lVar3 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar4 = *(ulong *)(lVar5 * 8);
        func_0x00010c06c960();
        if ((uVar4 & 1) != 0) {
          lVar5 = 1;
          goto LAB_1084a146c;
        }
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar5 = 0;
  }
LAB_1084a146c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(lVar6 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bfcb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s_getTotalMillis_1125d0700);
  return lVar5;
}



/* Entry: 1084a13ac; end: 1084a14ab; -[SCAdViewingStatus isAudioOn] */

undefined8 FUN_1084a13ac(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar4 = 0;
  if (lVar2 != 0) {
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar3 = *(ulong *)(lVar7 * 8);
        func_0x00010c06c960();
        if ((uVar3 & 1) != 0) {
          uVar4 = 1;
          goto LAB_1084a146c;
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar4 = 0;
  }
LAB_1084a146c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bfcb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_getTotalMillis_1125d0700);
    return uVar4;
  }
  return uVar4;
}



/* Entry: 1084a14ac; end: 1084a14b3; -[SCAdViewingStatus timeViewedInMillis] */

void FUN_1084a14ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_getTotalMillis_1125d0700);
  return;
}



/* Entry: 1084a14b4; end: 1084a14fb; -[SCAdViewingStatus exitEvent] */

void FUN_1084a14b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23e120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084a14fc; end: 1084a1563; -[SCAdViewingStatus addAdSnapInteraction:] */

void FUN_1084a14fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if ((param_3 != 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    _objc_retain(param_3);
    func_0x00010befa120(lVar1,param_2,param_3);
    lVar1 = param_3;
    func_0x00010c274ca0();
    _objc_release(param_3);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar1;
  }
  return;
}



/* Entry: 1084a1564; end: 1084a15cb; -[SCAdViewingStatus adTypeAtSnapIndex:] */

undefined8 FUN_1084a1564(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (-1 < (long)param_3) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dfd40(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bef60a0();
      _objc_release(uVar2);
      return uVar3;
    }
  }
  return 0x17;
}



/* Entry: 1084a15cc; end: 1084a161f; -[SCAdViewingStatus adSnapInteractionAtSnapIndex:] */

void FUN_1084a15cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (((uVar1 != 0) && (func_0x00010bf529e0(), -1 < (long)param_3)) && (param_3 < uVar1)) {
    func_0x00010c0dfd20(*(undefined8 *)(param_1 + 8),param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084a1620; end: 1084a1673; -[SCAdViewingStatus adViewingTrackInfoAtIndex:] */

void FUN_1084a1620(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (((uVar1 != 0) && (func_0x00010bf529e0(), -1 < (long)param_3)) && (param_3 < uVar1)) {
    func_0x00010c0dfd20(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084a1674; end: 1084a16e7; -[SCAdViewingStatus currentViewingInteractionForSnapIndex:] */

void FUN_1084a1674(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x58) == 0x16 || *(long *)(param_1 + 0x58) == 5) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2415a0();
    if (lVar2 == param_3) {
      _objc_retain(lVar1);
      lVar2 = lVar1;
    }
    else {
      lVar2 = 0;
    }
    _objc_release(lVar1);
  }
  else {
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1084a16e8; end: 1084a195f; -[SCAdViewingStatus adShowAtSnapIndex:onTopSnap:onBottomSnap:currentMediaVolumePercent:isUnSkippableAd:] */

void FUN_1084a16e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  func_0x00010c24d960(*(undefined8 *)(param_2 + 0x28));
  *(undefined1 *)(param_2 + 0x50) = 1;
  *(undefined1 *)(param_2 + 0x51) = param_7;
  func_0x00010beaa1c0(param_2,param_3,param_4);
  lVar1 = param_2;
  func_0x00010bef53e0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (*(long *)(param_2 + 0x58) == 0x16 || *(long *)(param_2 + 0x58) == 5)) {
    lVar2 = lVar1;
    func_0x00010c274ca0();
    lVar3 = lVar1;
    func_0x00010c0b5260();
    lVar4 = *(long *)(param_2 + 0x10);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar4 == 0) || (lVar5 = lVar4, func_0x00010c2415a0(), lVar5 != param_4)) {
      puVar6 = PTR_PTR_1126d9998;
      _objc_alloc();
      lVar5 = lVar1;
      func_0x00010bef60a0(lVar1);
      lVar7 = lVar1;
      func_0x00010bef31c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      lVar8 = lVar1;
      func_0x00010c107040(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010c106ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar1;
      func_0x00010c106c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff2120(uVar11,puVar6,param_3,lVar5,lVar7,param_4,lVar2,lVar3,lVar8,lVar9,lVar10);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      lVar2 = lVar1;
      func_0x00010bf94440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
        lVar2 = lVar1;
        func_0x00010bf94440(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf94480();
        func_0x00010c195e00(puVar6,param_3,lVar3,0);
        _objc_release(lVar2);
      }
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x10),param_3,puVar6);
      _objc_release(puVar6);
    }
    else {
      func_0x00010c28cee0(lVar4,param_3,lVar2,lVar3);
    }
    _objc_release(lVar4);
  }
  func_0x00010bef5160(param_1,lVar1,param_3,param_5,param_6);
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef5160(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1084a1960; end: 1084a1a5f; -[SCAdViewingStatus adHideAtSnapIndex:viewContext:isUnskippableAd:] */

void FUN_1084a1960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar5);
  func_0x00010c255780(*(undefined8 *)(param_1 + 0x28));
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf9b740(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef2b60();
  lVar4 = param_1;
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef2b60();
  _objc_release(lVar4);
  if (param_5 != 0) {
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a1a60; end: 1084a1b2b; -[SCAdViewingStatus adSnapHideAtSnapIndex:onTopSnap:skipEvent:exitEventSwipeInfo:dismissDuration:] */

void FUN_1084a1a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010bef53e0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef5360(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef5360(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


