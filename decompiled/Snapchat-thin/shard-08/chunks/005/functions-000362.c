/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10623a69c; end: 10623a6c3;  */

void FUN_10623a69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010623a6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10623a6c4; end: 10623a70b; -[SCSpotlightCommentsAttachmentFetcher _disposeUploadObserver:] */

void FUN_10623a6c4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    func_0x00010c12d360(uVar1,param_2,param_3);
    func_0x00010bf86d40(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10623a70c; end: 10623a853; -[SCSpotlightCommentsAttachmentFetcher _unresolvedCustomStickerItemIdForReply:] */

void FUN_10623a70c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10623a3c0;
    uStack_40 = 0x10623a3d0;
    uStack_38 = 0;
    lVar1 = param_3;
    func_0x00010c131a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bd240();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = puStack_58[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10623a854; end: 10623a9df;  */

void FUN_10623a854(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf96ee0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 3) goto LAB_10623a9c8;
  lVar1 = param_2;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf61ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bfd8f20();
  if ((int)lVar1 == 0) {
LAB_10623a964:
    lVar1 = param_2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x28) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar1 = lVar3;
    func_0x00010bf92c80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      _objc_release(lVar1);
      goto LAB_10623a964;
    }
    lVar2 = lVar3;
    func_0x00010bf92c60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 == 0) goto LAB_10623a964;
  }
  _objc_release(lVar3);
LAB_10623a9c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10623a9e0; end: 10623aae7; -[SCSpotlightCommentsAttachmentFetcher _spotlightReplyWithResolvedAttachmentForReply:itemInstance:sectionName:] */

void FUN_10623a9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c131a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b5ff8;
  func_0x00010bf5cda0(PTR_PTR_1126b5ff8,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1d04c0(uVar2,param_2,puVar3,0);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0e88;
  func_0x00010c24bfc0(PTR_PTR_1126c0e88,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2b6e60(puVar3,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10623aae8; end: 10623ac63; -[SCSpotlightCommentsAttachmentFetcher _customStickerItemInstanceFromPersistedItem:] */

void FUN_10623aae8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b0cb8;
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10623ac4c;
  }
  _objc_retain(param_3);
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c008360(puVar1,param_2,lVar2,0);
  _objc_release(lVar2);
  puVar6 = puVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010bf96ee0();
  _objc_release(puVar6);
  puVar6 = (undefined *)0x0;
  if ((int)puVar3 == 3) {
    puVar6 = puVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf61ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bfd8f20();
    if ((int)puVar6 == 0) {
LAB_10623ac38:
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar3;
      func_0x00010bf92c80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c08fa60();
      if (puVar4 == (undefined *)0x0) {
        _objc_release(puVar6);
        goto LAB_10623ac38;
      }
      puVar4 = puVar3;
      func_0x00010bf92c60();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      _objc_release(puVar6);
      if (puVar5 == (undefined *)0x0) goto LAB_10623ac38;
      puVar6 = PTR_PTR_1126b0cc0;
      _objc_opt_new(PTR_PTR_1126b0cc0);
      func_0x00010c1b5d40();
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
LAB_10623ac4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10623ac64; end: 10623acab; -[SCSpotlightCommentsAttachmentFetcher .cxx_destruct] */

void FUN_10623ac64(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10623acac; end: 10623ad3b; -[SCSpotlightRepliesShareImageView pointInside:withEvent:] */

void FUN_10623acac(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1;
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar1 = dVar3;
  func_0x00010bfb68e0(param_5);
  _CGRectGetHeight();
  dVar2 = 44.0;
  dVar4 = 44.0 - dVar1;
  func_0x00010bf20c00(param_5);
  dVar4 = dVar4 * -0.5;
  dVar3 = (44.0 - dVar3) * -0.5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar3 + dVar1,dVar4 + dVar2,param_3 - (dVar3 + dVar3),param_4 - (dVar4 + dVar4),param_1
             ,param_2);
  return;
}



/* Entry: 10623ad3c; end: 10623ae87;  */

void FUN_10623ad3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c219b60();
  func_0x000106261b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar2,0);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c181cc0(0x447a0000,puVar1,param_2,0);
  func_0x00010c181f00(0x41c80000,puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10623ae88; end: 10623af07; -[SCSpotlightRepliesCollectionViewCellHeightProvider init] */

undefined1 * FUN_10623ae88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f08d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10623af08; end: 10623af0f; -[SCSpotlightRepliesCollectionViewCellHeightProvider calculateHeightForViewModel:] */

undefined8
FUN_10623af08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_4;
  func_0x00010c24bfa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf92100(param_4);
  uVar3 = param_4;
  func_0x00010c238f20(param_4);
  uVar4 = param_4;
  func_0x00010bf91e60(param_4);
  _objc_release(param_4);
  FUN_10623d88c(uVar1,uVar2,uVar3,uVar4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10623af10; end: 10623b067; -[SCSpotlightRepliesCollectionViewCellHeightProvider precomputeCellHeightForViewModel:] */

double FUN_10623af10(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  float fVar5;
  double dVar6;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c238f20();
  dVar6 = 0.0;
  if ((uVar2 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010c24bfa0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c131d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 != 0) {
      _os_unfair_lock_lock(param_2 + 0x18);
      uVar2 = *(ulong *)(param_2 + 0x10);
      func_0x00010c0e00e0(uVar2,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      if ((uVar2 == 0) ||
         (uVar3 = uVar2, func_0x00010c071ae0(uVar2,param_3,param_4), (uVar3 & 1) == 0)) {
        func_0x00010bf27940(param_2,param_3,param_4);
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x10),param_3,param_4,uVar1);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 8),param_3,puVar4,uVar1);
      }
      else {
        puVar4 = *(undefined **)(param_2 + 8);
        func_0x00010c0e00e0(puVar4,param_3,uVar1);
        fVar5 = SUB84(param_1,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        param_1 = (double)fVar5;
      }
      _objc_release(puVar4);
      _os_unfair_lock_unlock(param_2 + 0x18);
      _objc_release(uVar2);
      dVar6 = param_1;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return dVar6;
}



/* Entry: 10623b068; end: 10623b097; -[SCSpotlightRepliesCollectionViewCellHeightProvider .cxx_destruct] */

void FUN_10623b068(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10623b098; end: 10623b163; -[SCSpotlightRepliesCommentPosterThumbnailFetcher initWithBitmojiSelfieFetcher:imageFetchingService:storiesThumbnailCoordinator:] */

undefined1 *
FUN_10623b098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f08d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10623b164; end: 10623b36f; -[SCSpotlightRepliesCommentPosterThumbnailFetcher fetchBitmojiSelfieWithUserId:selfieId:avatarId:completion:] */

void FUN_10623b164(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (((lVar1 == 0) || (lVar1 = param_5, func_0x00010c08fa60(), lVar1 == 0)) ||
       (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0)) {
      (**(code **)(param_6 + 0x10))(param_6,0,0);
    }
    else {
      puVar2 = PTR_PTR_1126afd38;
      _objc_opt_new(PTR_PTR_1126afd38);
      func_0x00010c2bc360();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b8160(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b78c0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2bcea0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2bbd20(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf21f60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_6);
      func_0x00010bfaa020(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(param_6);
      _objc_release(param_4);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10623b370; end: 10623b3eb;  */

void FUN_10623b370(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_release();
  bVar1 = param_3 == lVar3;
  uVar2 = param_2;
  if (!bVar1) {
    uVar2 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),bVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10623b3ec; end: 10623b623; -[SCSpotlightRepliesCommentPosterThumbnailFetcher fetchPublicProfileThumbnailWithURL:completion:] */

void FUN_10623b3ec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
    else {
      puVar2 = PTR_PTR_1126b08b0;
      func_0x00010bf33760(PTR_PTR_1126b08b0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b17d8;
      _objc_alloc(PTR_PTR_1126b17d8);
      func_0x00010c003a80();
      func_0x00010c1c5440();
      puVar4 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      lVar1 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011b80(puVar4);
      _objc_release(lVar1);
      puVar6 = PTR_PTR_1126b85a0;
      puVar5 = puVar3;
      func_0x00010bf220e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23c900(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126b85a8;
      _objc_alloc(PTR_PTR_1126b85a8);
      puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010c01cf00(puVar5);
      _objc_release(puVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(param_4);
      func_0x00010bfa7900(uVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10623b624; end: 10623b6df;  */

void FUN_10623b624(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10623b6e0; end: 10623b727;  */

void FUN_10623b6e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10623b728; end: 10623b73b;  */

void FUN_10623b728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010623b738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 10623b73c; end: 10623b7fb; -[SCSpotlightRepliesCommentPosterThumbnailFetcher fetchStoriesThumbnailWithThumbnailInfo:completion:] */

void FUN_10623b73c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c11da60(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10623b7fc; end: 10623b85b;  */

void FUN_10623b7fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),puVar1 != (undefined *)0x0,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10623b85c; end: 10623b897; -[SCSpotlightRepliesCommentPosterThumbnailFetcher .cxx_destruct] */

void FUN_10623b85c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10623b898; end: 10623bf27;  */

/* WARNING: Possible PIC construction at 0x00010623b8dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010623b8e0) */
/* WARNING: Removing unreachable block (ram,0x00010623b91c) */
/* WARNING: Removing unreachable block (ram,0x00010623b928) */
/* WARNING: Removing unreachable block (ram,0x00010623b92c) */
/* WARNING: Removing unreachable block (ram,0x00010623b93c) */
/* WARNING: Removing unreachable block (ram,0x00010623b944) */
/* WARNING: Removing unreachable block (ram,0x00010623b978) */
/* WARNING: Removing unreachable block (ram,0x00010623b984) */
/* WARNING: Removing unreachable block (ram,0x00010623b988) */
/* WARNING: Removing unreachable block (ram,0x00010623b998) */
/* WARNING: Removing unreachable block (ram,0x00010623b9a0) */
/* WARNING: Removing unreachable block (ram,0x00010623b9f0) */
/* WARNING: Removing unreachable block (ram,0x00010623ba04) */
/* WARNING: Removing unreachable block (ram,0x00010623ba20) */
/* WARNING: Removing unreachable block (ram,0x00010623b9c4) */
/* WARNING: Removing unreachable block (ram,0x00010623b9d0) */
/* WARNING: Removing unreachable block (ram,0x00010623b9ec) */
/* WARNING: Removing unreachable block (ram,0x00010623ba28) */
/* WARNING: Removing unreachable block (ram,0x00010623ba34) */
/* WARNING: Removing unreachable block (ram,0x00010623ba8c) */
/* WARNING: Removing unreachable block (ram,0x00010623ba68) */

void FUN_10623b898(double param_1,long param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_270;
  
  _objc_retain(param_3);
  puVar9 = &uStack_330;
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar10 = param_2;
  func_0x00010c08fa60();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar10 != 0) {
    if (puRam00000001136c34b0 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
      func_0x00010c127e80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puRam00000001136c34b0;
      puRam00000001136c34b0 = puVar3;
      _objc_release(puVar4);
    }
    puVar4 = puRam00000001136c34b0;
    _objc_retain(puRam00000001136c34b0);
    param_7 = param_2;
    func_0x00010c08fa60();
    puVar3 = puVar4;
    func_0x00010c0c1b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    param_1 = 0.0;
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    _objc_retain(puVar3);
    param_6 = 0x10;
    puVar5 = puVar3;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar10 = *plStack_320;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_320 != lVar10) {
            _objc_enumerationMutation(puVar3);
          }
          param_7 = *(long *)(lStack_328 + (long)puVar11 * 8);
          func_0x00010c11f2a0(param_7);
          lVar6 = param_2;
          func_0x00010c260c80();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126c9038;
          _objc_alloc();
          func_0x00010c11f2a0();
          param_8 = param_3;
          func_0x00010c05b140();
          func_0x00010befa120(puVar4);
          _objc_release(puVar7);
          _objc_release(lVar6);
          puVar11 = puVar11 + 1;
        } while (puVar5 != puVar11);
        param_6 = 0x10;
        puVar5 = puVar3;
        puVar9 = &uStack_330;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
    param_4 = (undefined1 *)puVar9;
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) {
    ___stack_chk_fail();
    plVar2 = plStack_320;
    lVar10 = lStack_328;
    uVar1 = uStack_330;
    puVar4 = PTR_PTR_1126c0e98;
    _objc_retain();
    _objc_retain(lVar10);
    _objc_retain(uVar1);
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_alloc();
    puVar3 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    lVar6 = param_7;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf529e0();
    if (lVar8 == 0) {
      _objc_retain(param_7);
      lVar8 = param_7;
    }
    else {
      lVar8 = lVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar6);
    _objc_release(param_7);
    _objc_release(param_7);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    func_0x00010c26f320();
    func_0x00010c03e5c0(param_1 * 1000.0);
    _objc_release(plVar2);
    _objc_release(lVar10);
    _objc_release(uVar1);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(puVar5);
    _objc_release(lVar8);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10623bf28; end: 10623bf4b;  */

undefined ** FUN_10623bf28(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_1111807e8;
}



/* Entry: 10623bf4c; end: 10623c22b;  */

undefined * FUN_10623bf4c(ulong param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_180;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  puVar10 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    puStack_180 = (undefined *)0x0;
  }
  else {
    puStack_180 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    uVar12 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar11 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_90 = uVar12;
    uStack_88 = uVar11;
    puStack_80 = param_3;
    puStack_78 = param_2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840();
    _objc_release(puVar14);
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    _objc_retain(param_4);
    puVar10 = &uStack_170;
    lVar2 = param_4;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar13 = *plStack_160;
      do {
        lVar15 = 0;
        do {
          if (*plStack_160 != lVar13) {
            _objc_enumerationMutation(param_4);
          }
          lVar16 = *(long *)(lStack_168 + lVar15 * 8);
          lVar3 = lVar16;
          func_0x00010c11f2a0();
          func_0x00010c11f2a0(lVar16);
          uVar1 = (long)puVar9 + lVar3;
          uVar4 = param_1;
          func_0x00010c08fa60();
          if (uVar1 <= uVar4) {
            puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
            uStack_130 = uVar11;
            func_0x00010c23ba80();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = PTR__OBJC_CLASS___UIFont_1126aec38;
            uStack_128 = uVar12;
            puStack_120 = puVar5;
            func_0x00010c102de0(param_3);
            func_0x00010bf6d680();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            puStack_118 = puVar14;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c11f2a0(lVar16);
            func_0x00010c11f2a0(lVar16);
            func_0x00010bef6f40(puStack_180);
            _objc_release(puVar6);
            _objc_release(puVar14);
            _objc_release(puVar5);
          }
          lVar15 = lVar15 + 1;
        } while (lVar2 != lVar15);
        puVar10 = &uStack_170;
        lVar2 = param_4;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_180);
    return puStack_180;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puVar7 = puVar9;
  func_0x00010c11f2a0();
  puVar8 = puVar10;
  func_0x00010c11f2a0();
  if (puVar8 < puVar7) {
    puVar14 = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar7 = puVar9;
    func_0x00010c11f2a0(puVar9);
    puVar8 = puVar10;
    func_0x00010c11f2a0(puVar10);
    puVar14 = (undefined *)(ulong)(puVar7 < puVar8);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  return puVar14;
}



/* Entry: 10623c22c; end: 10623c2b7;  */

ulong FUN_10623c22c(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_2;
  func_0x00010c11f2a0();
  uVar1 = param_3;
  func_0x00010c11f2a0();
  if (uVar1 < uVar2) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = param_2;
    func_0x00010c11f2a0(param_2);
    uVar1 = param_3;
    func_0x00010c11f2a0(param_3);
    uVar2 = (ulong)(uVar2 < uVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10623c2b8; end: 10623c8ab;  */

undefined * FUN_10623c2b8(undefined *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010c132180();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c08fa60();
  if (puVar13 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = param_1;
    func_0x00010c262200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf529e0();
    _objc_release(puVar13);
    puVar10 = param_1;
    if (puVar3 == (undefined *)0x0) {
      puVar13 = param_1;
      func_0x00010c0ca820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar13;
      func_0x00010bf529e0();
      _objc_release(puVar13);
      if (puVar3 == (undefined *)0x0) {
        puVar13 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840(puVar13);
      }
      else {
        func_0x00010c0ca820(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar2;
        FUN_10623bf4c(puVar2,param_2,param_3,puVar10);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c262200();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar2);
      _objc_retain(param_2);
      _objc_retain(param_3);
      _objc_retain(puVar10);
      puVar13 = puVar2;
      func_0x00010c08fa60();
      if (puVar13 == (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
        _objc_alloc();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840();
        _objc_release(puVar3);
        puVar4 = puVar10;
        func_0x00010c246ca0();
        _objc_retainAutoreleasedReturnValue();
        dVar18 = 0.0;
        puVar3 = puVar4;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar3 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar4);
            }
            lVar15 = *(long *)((long)puVar14 * 8);
            lVar5 = lVar15;
            func_0x00010c11f2a0();
            func_0x00010c11f2a0(lVar15);
            puVar7 = (undefined *)(lVar11 + lVar5);
            puVar6 = puVar13;
            func_0x00010c08fa60();
            if (puVar7 <= puVar6) {
              puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010c23ba80();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
              func_0x00010c102de0(param_3);
              func_0x00010bf6d680();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c11f2a0(lVar15);
              func_0x00010c11f2a0(lVar15);
              func_0x00010bef6f40(puVar13);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(puVar6);
              func_0x00010c102de0(param_3);
              puVar6 = PTR_PTR_1126b0c40;
              dVar18 = dVar18 * 0.7;
              puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
              func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
              _objc_retainAutoreleasedReturnValue();
              dVar16 = dVar18;
              func_0x00010bfe7aa0(dVar18,dVar18,puVar6);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              puVar8 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
              _objc_alloc_init(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
              func_0x00010c1a9f00();
              func_0x00010c102de0(param_3);
              dVar17 = 1.0;
              func_0x00010c1739e0(0x3ff0000000000000,dVar16 * -0.1,dVar18,dVar18,puVar8);
              puVar9 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
              _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
              puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
              func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff4f40(puVar9);
              _objc_release(puVar7);
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c102de0(param_3);
              dVar18 = dVar17 * 0.3;
              func_0x00010c0df720(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08fa60(puVar9);
              func_0x00010bef6f20(puVar9);
              _objc_release(puVar7);
              func_0x00010c11f2a0(lVar15);
              func_0x00010c11f2a0(lVar15);
              func_0x00010c066640(puVar13);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar6);
            }
            puVar14 = puVar14 + 1;
          } while (puVar3 != puVar14);
          puVar3 = puVar4;
          func_0x00010bf52a60();
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar10);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(puVar2);
    }
    _objc_release(puVar10);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  if (param_1 + -1 < (undefined *)0x8) {
    return *(undefined **)(&UNK_10ddda398 + (long)(param_1 + -1) * 8);
  }
  return (undefined *)0x0;
}



/* Entry: 10623c8ac; end: 10623c8cf;  */

undefined8 FUN_10623c8ac(long param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined8 *)(&UNK_10ddda398 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10623c8d0; end: 10623c993;  */

void FUN_10623c8d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0cc820();
  _objc_release(uVar3);
  if ((int)uVar1 == 1) {
    uVar3 = 2;
  }
  else {
    uVar3 = param_2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf96ee0();
    _objc_release(uVar1);
    _objc_release(uVar3);
    if ((int)uVar2 != 3) goto LAB_10623c97c;
    uVar3 = 3;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar3;
LAB_10623c97c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10623c994; end: 10623cbd7;  */

void FUN_10623c994(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    uVar4 = 1;
    func_0x00010ba60238(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar4);
  }
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar5 != 0) {
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar4 = *(undefined8 *)(lVar7 * 8);
        _objc_retain(uVar4);
        uStack_120 = 0;
        uStack_110 = 0x2020000000;
        uStack_108 = 0;
        puStack_118 = &uStack_120;
        func_0x00010c0bd240(uVar4);
        lVar8 = puStack_118[3];
        __Block_object_dispose(&uStack_120,8);
        _objc_release(uVar4);
        if (lVar8 != 0) {
          func_0x00010ba60238(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(lVar8);
        }
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = param_2;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_120,8);
    __Unwind_Resume();
    puVar2 = param_1;
    if (param_1 != (undefined *)0x0) {
      _objc_retain(param_1);
      puVar3 = param_1;
      func_0x00010c132180(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c131a20(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      puVar2 = puVar3;
      FUN_10623c994(puVar3,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10623cbd8; end: 10623cc63;  */

void FUN_10623cbd8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010c132180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c131a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = lVar1;
    FUN_10623c994(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10623cc64; end: 10623cc7b;  */

void FUN_10623cc64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10623cc7c; end: 10623ccbb;  */

void FUN_10623cc7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_10623ccbc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10623ccbc; end: 10623ce13;  */

void FUN_10623ccbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfd8220();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd6be0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_1;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf96ee0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      if ((int)uVar4 == 3) {
        func_0x00010c0840e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010916182c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if ((int)uVar4 != 2) goto LAB_10623cda8;
        func_0x00010c0840e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf1c2e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf41a00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_10623cdac;
    }
  }
LAB_10623cda8:
  uVar4 = 0;
LAB_10623cdac:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10623ce14; end: 10623ce6b;  */

void FUN_10623ce14(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_110917b18);
    lVar1 = param_1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10623ce6c; end: 10623cf53;  */

void FUN_10623ce6c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_10623cc64;
    uStack_30 = 0x10623cc74;
    uStack_28 = 0;
    func_0x00010c0bd240(param_2);
    uVar1 = puStack_48[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10623cf54; end: 10623d037;  */

undefined8 FUN_10623cf54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  uVar2 = 0xffffffffffffffff;
  if (lVar1 != 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0xffffffffffffffff;
    lVar1 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bd240();
    _objc_release(lVar1);
    uVar2 = puStack_48[3];
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10623d038; end: 10623d047;  */

void FUN_10623d038(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 10623d048; end: 10623d0ab; -[SCSpotlightRepliesMentionsManager init] */

undefined1 * FUN_10623d048(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f08e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10623d0ac; end: 10623d0b3; -[SCSpotlightRepliesMentionsManager addMention:] */

void FUN_10623d0ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 10623d0b4; end: 10623d0bb; -[SCSpotlightRepliesMentionsManager removeMention:] */

void FUN_10623d0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_removeObject__112628ef8)
  ;
  return;
}



/* Entry: 10623d0bc; end: 10623d0c3; -[SCSpotlightRepliesMentionsManager removeAllMentions] */

void FUN_10623d0bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10623d0c4; end: 10623d0db; -[SCSpotlightRepliesMentionsManager allMentions] */

void FUN_10623d0c4(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10623d0dc; end: 10623d127; -[SCSpotlightRepliesMentionsManager updateWithMentions:] */

void FUN_10623d0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c12adc0(uVar1);
  func_0x00010befa160(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10623d128; end: 10623d133; -[SCSpotlightRepliesMentionsManager .cxx_destruct] */

void FUN_10623d128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10623d134; end: 10623d257; -[SCSpotlightRepliesReactionManager initWithUserId:nsDataWriter:directories:] */

undefined1 *
FUN_10623d134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f08e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf878c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10623d258; end: 10623d467; -[SCSpotlightRepliesReactionManager prepareWithCompletion:] */

void FUN_10623d258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10623d330;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10623d468; end: 10623d4df; -[SCSpotlightRepliesReactionManager reactionTypeWithReplyId:] */

long FUN_10623d468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dff20(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c067ec0(uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x28);
  return (long)(int)uVar2;
}



/* Entry: 10623d4e0; end: 10623d5ef; -[SCSpotlightRepliesReactionManager setReactionTypeWithReplyId:reactionTypeId:] */

void FUN_10623d4e0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    _os_unfair_lock_lock(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar2);
    _objc_release(param_3);
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 0x28);
    _objc_initWeak(auStack_38,param_1);
    puVar1 = &UNK_10f37081a;
    _dispatch_queue_create(&UNK_10f37081a,0);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10623d5f0;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010007380c(puVar1,&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10623d5f0; end: 10623d61b;  */

void FUN_10623d5f0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c14ac20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10623d61c; end: 10623d697; -[SCSpotlightRepliesReactionManager saveReactionsToFile] */

void FUN_10623d61c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,
                      *(undefined8 *)(param_1 + 8),0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bdac0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10623d698; end: 10623d743; -[SCSpotlightRepliesReactionManager _readReactionDict] */

void FUN_10623d698(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c27f240(puVar3,param_2,puVar2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (puVar3 == (undefined *)0x0) {
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    _objc_alloc();
    func_0x00010c00c560();
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10623d744; end: 10623d823; -[SCSpotlightRepliesReactionManager .cxx_destruct] */

void FUN_10623d744(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10623d824; end: 10623d88b;  */

void FUN_10623d824(void)

{
  _objc_alloc(PTR_PTR_1126c9070);
  func_0x00010bff3e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10623d88c; end: 10623db8f;  */

double FUN_10623d88c(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                    long param_6,int param_7,int param_8)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar2 = param_5;
  _objc_retain();
  if ((int)param_6 == 0) {
    bVar1 = true;
  }
  else {
    lVar2 = param_5;
    func_0x00010c0f3b40();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    _objc_release();
    lVar2 = param_5;
    FUN_1062687a4();
    param_6 = lVar2;
  }
  if (param_7 == 0) {
    dVar10 = 0.0;
    dVar9 = 40.0;
  }
  else {
    lVar3 = lVar2;
    if (lRam00000001136c34b8 == 0) {
      func_0x00010623adf8();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lRam00000001136c34b8;
      lRam00000001136c34b8 = lVar2;
      _objc_release();
    }
    if (lRam00000001136c34c0 == 0) {
      func_0x00010623ad3c();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lRam00000001136c34c0;
      lRam00000001136c34c0 = lVar3;
      _objc_release(lVar2);
    }
    func_0x00010bfb68e0(lRam00000001136c34b8);
    dVar9 = 0.0;
    func_0x00010c0699c0(lRam00000001136c34c0);
    param_1 = param_3 + 0.0 + param_1 + 12.0 + 14.0;
    dVar10 = param_1 + 10.0;
  }
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  FUN_10623c2b8(param_5,puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (lVar2 == 0) {
    param_4 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  }
  else {
    dVar7 = 10.0;
    if (!bVar1) {
      dVar7 = 58.0;
    }
    dVar8 = 40.0;
    if (!bVar1) {
      dVar8 = 30.0;
    }
    func_0x00010bf20bc0((((((param_1 + -4.0 + -4.0) - dVar7) - dVar8) + -8.0 + -5.0) - dVar10) -
                        dVar9,0x7fefffffffffffff,lVar2);
  }
  lVar3 = param_5;
  func_0x00010c131a20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  dVar9 = 0.0;
  dVar10 = 0.0;
  if ((param_8 != 0) && (lVar6 != 0)) {
    lVar3 = param_5;
    func_0x00010c132180();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c08fa60();
    dVar10 = 0.0;
    if (lVar6 != 0) {
      dVar10 = 3.0;
    }
    _objc_release(lVar3);
    dVar9 = 100.0;
  }
  bVar1 = (int)param_6 == 0;
  dVar7 = 30.0;
  if (bVar1) {
    dVar7 = 0.0;
  }
  dVar8 = 2.0;
  if (bVar1) {
    dVar8 = 10.0;
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  return dVar10 + dVar8 + dVar7 + (double)(float)(int)param_4 + 20.0 + 2.0 + 2.5 + dVar9;
}



/* Entry: 10623db90; end: 10623dc2b;  */

undefined8 FUN_10623db90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c24bfa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf92100(param_2);
  uVar3 = param_2;
  func_0x00010c238f20(param_2);
  uVar4 = param_2;
  func_0x00010bf91e60(param_2);
  _objc_release(param_2);
  FUN_10623d88c(uVar1,uVar2,uVar3,uVar4);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10623dc2c; end: 10623e25f;  */

undefined1 *
FUN_10623dc2c(undefined *param_1,undefined4 param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined *param_7,undefined *param_8,
             undefined8 param_9,undefined8 param_10,byte param_11,undefined4 param_12,
             undefined *param_13,undefined8 param_14,byte param_15)

{
  byte bVar1;
  byte bVar2;
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
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined1 uStack_1ae;
  undefined1 uStack_1ad;
  byte bStack_1ac;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  undefined8 uStack_1a8;
  byte bStack_1a0;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  uint uStack_14c;
  undefined *puStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined4 uStack_114;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  uStack_114 = SUB84(param_8,0);
  puStack_a8 = (undefined *)CONCAT44(puStack_a8._4_4_,(int)param_3);
  puStack_128 = (undefined *)CONCAT44(puStack_128._4_4_,(uint)param_15);
  puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,(uint)param_11);
  uStack_120 = param_9;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  puVar9 = param_5;
  uVar13 = param_6;
  puVar10 = param_7;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_b8 = param_10;
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puVar6 = param_1;
  func_0x00010c131d20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c08fa60();
  _objc_release(puVar6);
  if (puVar7 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
    uVar15 = uStack_b8;
  }
  else {
    puStack_d8 = (undefined *)CONCAT44(puStack_d8._4_4_,param_2);
    puVar6 = param_1;
    func_0x00010c132080();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c14da60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = param_1;
    FUN_1062687a4();
    puStack_d0 = param_13;
    uStack_140 = SUB84(param_7,0);
    uStack_13c = (undefined4)param_6;
    puStack_c8 = param_5;
    puStack_c0 = param_4;
    if ((int)puVar6 == 0) {
      uStack_14c = 0;
    }
    else {
      puVar6 = param_1;
      func_0x00010c132000();
      uStack_14c = (uint)(puVar6 == (undefined *)0x1);
    }
    ppuStack_80 = &PTR____CFConstantStringClassReference_110e46fd8;
    puVar6 = param_1;
    func_0x00010bf51e00();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar9 = PTR_PTR_1126c9098;
    _objc_alloc();
    func_0x00010c120aa0(puVar7);
    puStack_148 = puVar6;
    func_0x00010c03cec0();
    puVar6 = PTR_PTR_1126b02a8;
    puStack_e0 = puVar9;
    _objc_alloc();
    func_0x00010c01b460();
    puVar9 = PTR_PTR_1126b02a8;
    puStack_e8 = puVar6;
    _objc_alloc();
    func_0x00010c01b460();
    puVar6 = PTR_PTR_1126b02a8;
    puStack_f0 = puVar9;
    _objc_alloc();
    func_0x00010c01b460();
    puVar9 = PTR_PTR_1126b02a8;
    puStack_f8 = puVar6;
    _objc_alloc();
    uStack_130 = param_14;
    puStack_138 = puVar7;
    if (((ulong)puStack_a8 & 1) == 0) {
      func_0x00010c01b460();
      puStack_158 = (undefined *)0x0;
      puStack_100 = (undefined *)0x0;
      puStack_108 = puVar9;
    }
    else {
      func_0x00010c01b460();
      puVar6 = PTR_PTR_1126b02a8;
      puStack_100 = puVar9;
      _objc_alloc();
      func_0x00010c01b460();
      puStack_108 = (undefined *)0x0;
      puStack_158 = puVar6;
    }
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar7 = PTR_PTR_1126b02a8;
    puStack_110 = puVar6;
    _objc_alloc();
    puStack_d8 = puVar8;
    func_0x00010c01b460();
    puVar8 = PTR_PTR_1126b02a8;
    puStack_160 = puVar7;
    _objc_alloc();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110e46fd8;
    puVar7 = param_1;
    func_0x00010bf51e00();
    puVar6 = puStack_d0;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e47158;
    puVar9 = puStack_d0;
    puStack_90 = puVar7;
    if (puStack_d0 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460();
    puStack_168 = puVar8;
    _objc_release(puVar10);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar9);
    }
    _objc_release(puVar7);
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    puVar11 = PTR_PTR_1126b02a8;
    puStack_170 = puVar6;
    _objc_alloc();
    func_0x00010c01b460();
    bVar1 = (byte)puStack_b0;
    bVar2 = (byte)puStack_128;
    puVar6 = PTR_PTR_1126c9060;
    _objc_alloc();
    puVar7 = param_1;
    puStack_178 = puVar6;
    func_0x00010c131f40();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar7;
    func_0x00010c08fa60();
    if (puVar7 == (undefined *)0x0) {
      func_0x000106261c20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = param_1;
      func_0x00010c131f40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = param_1;
    puStack_180 = puVar7;
    func_0x00010c1321a0();
    func_0x00010623d78c();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    puStack_190 = puVar6;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = puVar8;
    func_0x00010c0720c0();
    puVar12 = param_1;
    func_0x00010c131f60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010c0720c0();
    param_14 = uStack_130;
    uVar13 = uStack_130;
    func_0x00010bf91a40();
    uVar15 = uStack_b8;
    param_7 = puStack_158;
    puVar5 = puStack_160;
    puVar4 = puStack_168;
    puVar6 = puStack_170;
    puVar3 = puStack_180;
    puVar7 = puStack_190;
    bStack_1ac = (byte)uVar13 & (byte)uStack_14c;
    uStack_1a8 = uStack_120;
    uStack_1a9 = SUB81(puStack_a8,0);
    uStack_1aa = (undefined1)uStack_114;
    uStack_1ab = (undefined1)uStack_140;
    uStack_1ad = (undefined1)uStack_13c;
    uStack_1ae = SUB81(puStack_b0,0);
    uStack_1af = SUB81(puVar9,0);
    uStack_1b0 = SUB81(puVar8,0);
    puStack_1c8 = puStack_168;
    puStack_1c0 = puStack_170;
    puStack_1d8 = puStack_110;
    puStack_1d0 = puStack_160;
    puStack_1e0 = puStack_f8;
    puStack_1f0 = puStack_108;
    puStack_1e8 = puStack_f0;
    puStack_1f8 = puStack_158;
    puStack_200 = puStack_100;
    puVar16 = puStack_178;
    puVar8 = puStack_180;
    puVar9 = puStack_190;
    uVar13 = uStack_b8;
    puVar10 = puStack_e0;
    param_8 = puStack_e8;
    puStack_1b8 = puVar11;
    bStack_1a0 = bVar1 | bVar2;
    puStack_b0 = puVar11;
    puStack_a8 = param_1;
    func_0x00010c04b520();
    _objc_release(puVar12);
    _objc_release(puStack_188);
    _objc_release(puVar7);
    _objc_release(puVar3);
    param_5 = puStack_c8;
    _objc_release(puStack_128);
    _objc_release(puStack_b0);
    _objc_release(puVar6);
    _objc_release(puVar4);
    param_4 = puStack_c0;
    _objc_release(puVar5);
    _objc_release(puStack_110);
    _objc_release(param_7);
    _objc_release(puStack_100);
    _objc_release(puStack_108);
    _objc_release(puStack_f8);
    _objc_release(puStack_f0);
    puVar11 = puStack_a8;
    _objc_release(puStack_e8);
    _objc_release(puStack_e0);
    _objc_release(puStack_148);
    _objc_release(puStack_d8);
    _objc_release(puStack_138);
    param_3 = param_1;
    param_13 = puStack_d0;
    param_1 = puVar11;
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(uVar15);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar11 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return puVar16;
  }
  ___stack_chk_fail();
  puVar5 = puStack_1f0;
  puVar4 = puStack_1f8;
  puVar3 = puStack_200;
  ppuVar14 = &puStack_270;
  pcStack_208 = FUN_10623e260;
  puStack_260 = param_7;
  puStack_258 = param_1;
  puStack_250 = param_13;
  uStack_248 = param_14;
  puStack_240 = param_5;
  puStack_238 = param_4;
  puStack_230 = puVar7;
  puStack_228 = puVar6;
  uStack_220 = uVar15;
  puStack_218 = puVar16;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(uVar13);
  _objc_retain(puVar10);
  _objc_retain(param_8);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  puStack_268 = PTR_PTR_1126f08f0;
  puStack_270 = puVar11;
  _objc_msgSendSuper2(&puStack_270,PTR_s_init_1125d9248);
  if (ppuVar14 != (undefined **)0x0) {
    _objc_retain(param_3);
    uVar15 = *(undefined8 *)((long)ppuVar14 + 8);
    *(undefined **)((long)ppuVar14 + 8) = param_3;
    _objc_release(uVar15);
    _objc_retain(puVar8);
    uVar15 = *(undefined8 *)((long)ppuVar14 + 0x10);
    *(undefined **)((long)ppuVar14 + 0x10) = puVar8;
    _objc_release(uVar15);
    _objc_retain(puVar9);
    uVar15 = *(undefined8 *)((long)ppuVar14 + 0x18);
    *(undefined **)((long)ppuVar14 + 0x18) = puVar9;
    _objc_release(uVar15);
    _objc_retain(uVar13);
    uVar15 = *(undefined8 *)((long)ppuVar14 + 0x20);
    *(undefined8 *)((long)ppuVar14 + 0x20) = uVar13;
    _objc_release(uVar15);
    _objc_retain(puVar10);
    uVar15 = *(undefined8 *)((long)ppuVar14 + 0x48);
    *(undefined **)((long)ppuVar14 + 0x48) = puVar10;
    _objc_release(uVar15);
    _objc_retain(param_8);
    uVar15 = *(undefined8 *)((long)ppuVar14 + 0x50);
    *(undefined **)((long)ppuVar14 + 0x50) = param_8;
    _objc_release(uVar15);
    _objc_retain(puVar3);
    uVar15 = *(undefined8 *)((long)ppuVar14 + 0x58);
    *(undefined **)((long)ppuVar14 + 0x58) = puVar3;
    _objc_release(uVar15);
    _objc_retain(puVar4);
    uVar15 = *(undefined8 *)((long)ppuVar14 + 0x60);
    *(undefined **)((long)ppuVar14 + 0x60) = puVar4;
    _objc_release(uVar15);
    _objc_retain(puVar5);
    uVar15 = *(undefined8 *)((long)ppuVar14 + 0x68);
    *(undefined **)((long)ppuVar14 + 0x68) = puVar5;
    _objc_release(uVar15);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(puVar10);
  _objc_release(uVar13);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_3);
  return (undefined1 *)ppuVar14;
}



/* Entry: 10623e260; end: 10623e42f; -[SCSpotlightRepliesShareManager initWithSpotlightShareSender:conversationDestinationParser:sendToScopeExposer:sendToScopeServices:notificationPool:offPlatformLinkGenerationService:spotlightPlatformAnalyticsCreator:spotlightRepliesUpdateAnnouncer:discoverFeedDataFetcher:circumstanceEngine:] */

undefined1 *
FUN_10623e260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f08f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10623e430; end: 10623e74f; -[SCSpotlightRepliesShareManager shareReplyWithPresentingViewController:spotlightReply:avatarImage:attachmentImage:compositeStoryId:mediaPlaybackSessionId:] */

void FUN_10623e430(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_4 != 0) && (lVar1 == 0)) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = param_4;
    _objc_release(uVar2);
    uVar3 = param_4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = uVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_8;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar4;
    _objc_release(uVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110e46e38);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined ***)(param_1 + 0x70) = &PTR____CFConstantStringClassReference_110e46e38;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b0818;
    _objc_alloc();
    puVar5 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c044540(puVar4,param_2,puVar5,0x1a,0x20,0xffffffffffffffff,0x39,0,0,0,uVar3,0,0);
    _objc_release(uVar3);
    _objc_release(puVar5);
    lVar1 = param_1;
    func_0x00010bea0bc0(param_1,param_2,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b0810;
    _objc_alloc(PTR_PTR_1126b0810);
    func_0x00010c046120();
    uVar3 = param_4;
    func_0x00010c242640(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c241220(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010beb1e80(param_1,param_2,puVar4,uVar3,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf23ee0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),
                        PTR____NSArray0__struct_11034ab48,lVar1,0,puVar5,0,lVar7,puVar4,
                        uVar8 & 0xffffffffffff0000,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar7);
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(puVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10623e750; end: 10623ea1f; -[SCSpotlightRepliesShareManager shareContentWithPresentingViewController:compositeStoryId:snapCreatorUserId:snapId:mediaPlaybackSessionId:] */

void FUN_10623e750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(ulong *)(param_1 + 0x40) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_7;
    _objc_release(uVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110e46ef8);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(undefined ***)(param_1 + 0x70) = &PTR____CFConstantStringClassReference_110e46ef8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x000108f51d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c25ba80(uVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    lVar1 = param_1;
    func_0x00010bea0b80(param_1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0818;
    _objc_alloc();
    puVar6 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c044540(puVar3,param_2,puVar6,0x1a,0x18,0xffffffffffffffff,0x39,0,0,0,param_6,0,0);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b0810;
    _objc_alloc(PTR_PTR_1126b0810);
    func_0x00010c046120();
    lVar7 = param_1;
    func_0x00010beb1e80(param_1,param_2,puVar3,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf23ee0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),
                        PTR____NSArray0__struct_11034ab48,lVar1,0,puVar6,0,lVar7,puVar3,
                        uVar8 & 0xffffffffffff0000,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10623ea20; end: 10623ec0b; -[SCSpotlightRepliesShareManager _sendToPreviewConfigurationWithDiscoverFeedStory:] */

void FUN_10623ea20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be1be00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110917b68);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126c90a0;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031ee0(puVar1,param_2,puVar2,0x49);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae720;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = 0xc2000000;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10623ec0c;
    puStack_70 = &UNK_110917b38;
    puStack_68 = puVar1;
    _objc_retain(puVar1);
    func_0x00010bf11fe0(puVar2,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c70e0(puVar1);
    _objc_release(puStack_68);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b07e8;
  _objc_alloc(PTR_PTR_1126b07e8);
  func_0x00010c061960();
  puVar3 = PTR_PTR_1126b07f0;
  func_0x00010c299100(uVar5,PTR_PTR_1126b07f0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b07f8;
  _objc_alloc(PTR_PTR_1126b07f8);
  func_0x00010c01ddc0(0x405e000000000000);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar4 = *(undefined **)(puVar2 + 0x20);
    func_0x00010c0c70c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10623ec0c; end: 10623ec3f;  */

void FUN_10623ec0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c70c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fe360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10623ec40; end: 10623ec6f;  */

void FUN_10623ec40(void)

{
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10623ec70; end: 10623edff; -[SCSpotlightRepliesShareManager _generateShareableMediaWithStory:] */

void FUN_10623ec70(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_10623ee00;
    uStack_40 = 0x10623ee10;
    uStack_38 = 0;
    lVar1 = param_3;
    func_0x00010c259560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bf680();
    _objc_release(lVar1);
    if (puStack_58[5] == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126c90a8;
      _objc_alloc(PTR_PTR_1126c90a8);
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
      func_0x00010c04e820();
      func_0x00010c061300(puVar3);
      _objc_release(puVar2);
    }
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10623ee00; end: 10623ee17;  */

void FUN_10623ee00(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10623ee18; end: 10623ef07;  */

void FUN_10623ee18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10623ef08; end: 10623f09b; -[SCSpotlightRepliesShareManager _shareSheetConfigurationWithAttribution:posterId:snapId:] */

void FUN_10623ef08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10623f09c;
  puStack_68 = &UNK_110863958;
  uStack_60 = uVar5;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(uVar5);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2498;
  _objc_alloc(PTR_PTR_1126b2498);
  uVar3 = param_3;
  func_0x00010c15d5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c037ea0(puVar2,param_2,param_4,param_5,uVar3,0,0);
  _objc_release(param_4);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10623f09c; end: 10623f157;  */

void FUN_10623f09c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbf840(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae558;
  puVar2 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar3 = uVar1;
  func_0x00010beec820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar2,param_2,uVar3,uVar1,0,1,0,0);
  func_0x00010bfe9ca0(puVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10623f158; end: 10623f343; -[SCSpotlightRepliesShareManager _sendToPreviewConfigurationWithSpotlightReply:avatarImage:attachmentImage:] */

void FUN_10623f158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b07e8;
  _objc_alloc(PTR_PTR_1126b07e8);
  func_0x00010c061960();
  puVar3 = PTR_PTR_1126b07f0;
  if (param_5 == 0) {
    func_0x00010bfbb840(PTR_PTR_1126b07f0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfbb880(0x400c000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b07f8;
  _objc_alloc(PTR_PTR_1126b07f8);
  func_0x00010c01ddc0(0x405e000000000000);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10623f344; end: 10623f38f;  */

void FUN_10623f344(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be21a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10623f390; end: 10623f49f; -[SCSpotlightRepliesShareManager _getPreviewImageWithSpotlightReply:avatarImage:attachmentImage:] */

void FUN_10623f390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c90b0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c131f40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1321a0(param_4);
  uVar3 = param_4;
  func_0x00010c132180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c131f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfffe60(param_1,puVar1,param_3,uVar2,uVar3,uVar4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10623f4a0; end: 10623f5b3; -[SCSpotlightRepliesShareManager didSendWithSelectionState:] */

void FUN_10623f4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c1599e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea0000(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c12e300(param_1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10623f5b4;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10623f5b4; end: 10623f5df;  */

void FUN_10623f5b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10623f5e0; end: 10623f5e3; -[SCSpotlightRepliesShareManager didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_10623f5e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeSendToScope_1126292e0);
  return;
}



/* Entry: 10623f5e4; end: 10623f647; -[SCSpotlightRepliesShareManager removeSendToScope] */

void FUN_10623f5e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10623f648; end: 10623f6c3; -[SCSpotlightRepliesShareManager detachSendToIfPresented] */

void FUN_10623f648(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e300(param_1);
    uVar3 = *(ulong *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126aead8;
    _objc_opt_class(PTR_PTR_1126aead8);
    _objc_opt_isKindOfClass(uVar3,puVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010c283640(*(undefined8 *)(param_1 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdfb730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__detachUI_11255c768);
    return;
  }
  return;
}



/* Entry: 10623f6c4; end: 10623f6f3; -[SCSpotlightRepliesShareManager _detachUI] */

void FUN_10623f6c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x28),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10623f6f4; end: 10623fa2b; -[SCSpotlightRepliesShareManager _sendResultShareToSelectedItems:additionalText:] */

void FUN_10623f6f4(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar12 = param_3;
  func_0x00010bf529e0();
  if (ppuVar12 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    ppuVar2 = param_3;
    func_0x00010bf52a60();
    if (ppuVar2 == (undefined **)0x0) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      lVar10 = *plStack_120;
      do {
        ppuVar12 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          lVar14 = *(long *)(lStack_128 + (long)ppuVar12 * 8);
          lVar15 = lVar14;
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar6 = PTR_PTR_1126b01c0;
          lVar3 = lVar14;
          func_0x00010c122a80(lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          if (lVar15 == 0) {
            func_0x00010c294260(puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            _objc_release(lVar4);
            lVar15 = 1;
          }
          else {
            func_0x00010bfcf680();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            _objc_release(lVar4);
            _objc_release(lVar3);
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar14;
            func_0x00010bf529e0();
            lVar3 = lVar14;
          }
          _objc_release(lVar3);
          lVar11 = lVar15 + lVar11;
          func_0x00010befa120(puVar1);
          _objc_release(puVar6);
          ppuVar12 = (undefined **)((long)ppuVar12 + 1);
        } while (ppuVar2 != ppuVar12);
        ppuVar2 = param_3;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(param_3);
    uVar13 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar13);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf51e00();
    uVar8 = uVar7;
    func_0x00010c246920(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_10623fa2c;
    puStack_158 = &UNK_1108dd9e8;
    uStack_150 = uVar13;
    lStack_148 = param_1;
    _objc_retain(param_4);
    uVar9 = uVar13;
    uStack_140 = param_4;
    lStack_138 = lVar11;
    _objc_retain(uVar13);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &puStack_170;
    func_0x00010c297260(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar6);
    _objc_release(uVar7);
    _objc_release(uStack_140);
    _objc_release(uStack_150);
    _objc_release(uVar13);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    _objc_retain(ppuVar2);
    if ((undefined **)param_3[4] == &PTR____CFConstantStringClassReference_110e46e38) {
      func_0x00010be9fde0(param_3[5]);
    }
    else if ((undefined **)param_3[4] == &PTR____CFConstantStringClassReference_110e46ef8) {
      func_0x00010bea0580(param_3[5]);
    }
    _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10623fa2c; end: 10623fac3;  */

void FUN_10623fa2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(undefined ***)(param_1 + 0x20) == &PTR____CFConstantStringClassReference_110e46e38) {
    func_0x00010be9fde0(*(undefined8 *)(param_1 + 0x28));
  }
  else if (*(undefined ***)(param_1 + 0x20) == &PTR____CFConstantStringClassReference_110e46ef8) {
    func_0x00010bea0580(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10623fac4; end: 10623fd1f; -[SCSpotlightRepliesShareManager _sendReplyShareToConversations:additionalText:numOfRecipients:error:] */

void FUN_10623fac4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  if (param_6 != 0) {
    return;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010bf026a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c241220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf579a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126c6908;
  _objc_alloc(PTR_PTR_1126c6908);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c241220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c131d20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000ba0(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10623fd20;
  puStack_70 = &UNK_110855e40;
  ppuVar5 = &puStack_88;
  lStack_68 = param_1;
  _objc_retainBlock(ppuVar5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf50b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c15cbc0(uVar2);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10623fd20; end: 10623fddb;  */

void FUN_10623fd20(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  if (param_2 == 0) {
    func_0x000106262010();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000106262028();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10623fddc; end: 10623fff7; -[SCSpotlightRepliesShareManager _sendSpotlightShareToConversations:additionalText:numOfRecipients:error:] */

void FUN_10623fddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  if (param_6 != 0) {
    return;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf026a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf579a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b5bd0;
  _objc_alloc(PTR_PTR_1126b5bd0);
  puVar5 = PTR_PTR_1126b5bd8;
  func_0x00010bf421a0(PTR_PTR_1126b5bd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000c00(puVar4);
  _objc_release(puVar5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10623fff8;
  puStack_70 = &UNK_110855e40;
  ppuVar6 = &puStack_88;
  lStack_68 = param_1;
  _objc_retainBlock(ppuVar6);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf50b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c15cbe0(uVar7);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar3);
  _objc_release(ppuVar6);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 10623fff8; end: 1062400b3;  */

void FUN_10623fff8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  if (param_2 == 0) {
    func_0x0001062620a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001062620b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1062400b4; end: 1062400cb; -[SCSpotlightRepliesShareManager delegate] */

void FUN_1062400b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062400cc; end: 1062400d7; -[SCSpotlightRepliesShareManager setDelegate:] */

void FUN_1062400cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 1062400d8; end: 1062401ab; -[SCSpotlightRepliesShareManager .cxx_destruct] */

void FUN_1062400d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062401ac; end: 10624028b; -[SCSpotlightCommentsSnapRepliesLogger initWithRepliesLoggingInfo:isCommentAdmin:discoverFeedEventsController:] */

undefined1 *
FUN_1062401ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f08f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10624028c; end: 106240363; -[SCSpotlightCommentsSnapRepliesLogger setCommentsTraySessionId:] */

void FUN_10624028c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106240364; end: 106240397;  */

void FUN_106240364(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106240398; end: 1062404df; -[SCSpotlightCommentsSnapRepliesLogger logCommentsSnapReplyAction:onSpotlightSnapReply:interactionContext:itemPos:gesture:] */

void FUN_106240398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1062404e0; end: 10624051b;  */

void FUN_1062404e0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be51c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10624051c; end: 10624054b; -[SCSpotlightCommentsSnapRepliesLogger _setCommentsTraySessionId:] */

void FUN_10624051c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10624054c; end: 106240773; -[SCSpotlightCommentsSnapRepliesLogger _logCommentsSnapReplyAction:onSpotlightSnapReply:interactionContext:itemPos:gesture:] */

void FUN_10624054c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be0d8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    lVar2 = param_4;
    func_0x00010bf82560(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar1,param_2,lVar3,&PTR____CFConstantStringClassReference_110f437d8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c245680(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15f2e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110f437f8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  if (param_6 != 0) {
    func_0x00010c1d0640(lVar1,param_2,param_6,&PTR____CFConstantStringClassReference_110e72518);
  }
  if (param_7 != 0) {
    func_0x00010c1d0640(lVar1,param_2,param_7,&PTR____CFConstantStringClassReference_110ed79b8);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110f43818);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar1,param_2,puVar5,&PTR____CFConstantStringClassReference_110f43838);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0();
  _objc_release(uVar6);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106240774; end: 106240927; -[SCSpotlightCommentsSnapRepliesLogger _extraDataForContentCommentsEventBase] */

void FUN_106240774(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010c1d0640(puVar1,param_2,*(long *)(param_1 + 8),
                        &PTR____CFConstantStringClassReference_110f430f8);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf454e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,uVar3,&PTR____CFConstantStringClassReference_110dc60f8);
    _objc_release(uVar3);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110dba818);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110dba818);
  }
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4de00(uVar3);
  func_0x00010c0df780(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f41e78);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0f1e60(uVar3);
  func_0x00010c0df780(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f430d8);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106240928; end: 10624096f; -[SCSpotlightCommentsSnapRepliesLogger .cxx_destruct] */

void FUN_106240928(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106240970; end: 106240cb3;  */

void FUN_106240970(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  
  _objc_retain();
  func_0x00010baf2e2c(param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45eb8;
  if (param_4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45ed8;
  }
  _objc_retain(ppuVar1);
  switch(param_3) {
  case 0:
    FUN_1062646d4(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 1:
    FUN_1062663a4(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 2:
    FUN_106265efc(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 3:
    FUN_106264198(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 4:
    FUN_106265c84(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 5:
    FUN_10626494c(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 6:
    FUN_1062657dc(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 7:
    FUN_10626661c(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 8:
    FUN_106263f68(param_2,param_5,ppuVar1,1);
    break;
  case 9:
    FUN_106265a54(param_2,param_5,ppuVar1,1);
    break;
  case 10:
    FUN_1062650b8(param_2,param_5,ppuVar1,1);
    break;
  case 0xb:
    if (param_6 != 0) {
      FUN_106264640(param_1,param_2,param_5,ppuVar1);
    }
    break;
  case 0xc:
    FUN_106264e88(param_2,param_5,ppuVar1,1);
    break;
  case 0xd:
    FUN_1062652e8(param_2,param_5,ppuVar1,1);
    break;
  case 0xe:
    if (param_6 != 0) {
      FUN_106264df4(0x3ff0000000000000,param_2,param_5,ppuVar1);
    }
    break;
  case 0xf:
    FUN_106265748(0x3ff0000000000000,param_2,param_5,ppuVar1);
    break;
  case 0x10:
    FUN_106266174(param_2,param_5,ppuVar1,1);
    break;
  case 0x11:
    FUN_106266d3c(param_2,param_5,ppuVar1,1);
    break;
  case 0x12:
    FUN_106266f6c(param_2,param_5,ppuVar1,1);
    break;
  case 0x13:
    FUN_106266ac4(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 0x14:
    FUN_106266894(param_2,param_5,ppuVar1,1);
    break;
  case 0x16:
    FUN_1062682e8(param_2,param_5,1);
    break;
  case 0x17:
    FUN_10626719c(param_2,param_5,param_7,ppuVar1,1);
    break;
  case 0x18:
    FUN_106267414(param_2,param_5,1);
    break;
  case 0x19:
    FUN_106267588(param_2,param_5,1);
    break;
  case 0x1a:
    FUN_1062676fc(param_2,param_5,1);
  }
  _objc_release(ppuVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106240cb4; end: 106240cbf; +[SCSpotlightRepliesLogger announcerIdentifier] */

undefined ** FUN_106240cb4(void)

{
  return &PTR____CFConstantStringClassReference_110e45ef8;
}



/* Entry: 106240cc0; end: 106240cc7; -[SCSpotlightRepliesLogger addListener:] */

void FUN_106240cc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106240cc8; end: 106240ccf; -[SCSpotlightRepliesLogger removeListener:] */

void FUN_106240cc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}


