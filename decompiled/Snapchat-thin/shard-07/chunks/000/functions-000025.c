/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1050717b0; end: 10507196b; -[SCChatInfoAttachmentIconImageDownloader _handleUpdatedUrlPreview:] */

void FUN_1050717b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined1 uStack_178;
  undefined auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bea9e00(param_1);
  uVar1 = param_3;
  func_0x00010c28f9a0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20));
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_retain(lVar2);
  puVar7 = auStack_d8;
  uVar8 = 0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010bdcbae0(param_1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    puVar7 = auStack_d8;
    uVar8 = 0x10;
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf368a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x38);
  __Unwind_Resume(param_3);
  _objc_retain(puVar7);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bf28660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40(lVar6);
  _objc_release(lVar6);
  if (lVar3 != 0) {
    puVar4 = puVar7;
    func_0x00010c26dde0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar4);
      puVar5 = puVar4;
    }
    _objc_release(puVar4);
    if (lVar2 == 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,lVar9,puVar5,uVar8);
    }
    else {
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0xc2000000;
      pcStack_1a0 = FUN_105071b00;
      puStack_198 = &UNK_110864938;
      lStack_190 = lVar9;
      lStack_180 = lVar3;
      _objc_retain(puVar5);
      uStack_178 = (undefined1)uVar8;
      puStack_188 = puVar5;
      func_0x00010007380c(lVar2,&puStack_1b0);
      _objc_release(puStack_188);
    }
    _objc_release(puVar5);
  }
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(puVar7);
  return;
}



/* Entry: 10507196c; end: 105071aff; -[SCChatInfoAttachmentIconImageDownloader _announceDownloadCompletion:urlAttachmentContent:cached:] */

void FUN_10507196c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf28660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40(param_3);
  _objc_release(param_3);
  if (lVar1 != 0) {
    puVar4 = param_4;
    func_0x00010c26dde0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar4);
      puVar5 = puVar4;
    }
    _objc_release(puVar4);
    if (lVar2 == 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,lVar3,puVar5,param_5);
    }
    else {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_105071b00;
      puStack_78 = &UNK_110864938;
      lStack_70 = lVar3;
      lStack_60 = lVar1;
      _objc_retain(puVar5);
      uStack_58 = (undefined1)param_5;
      puStack_68 = puVar5;
      func_0x00010007380c(lVar2,&puStack_90);
      _objc_release(puStack_68);
    }
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 105071b00; end: 105071b17;  */

void FUN_105071b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105071b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 105071b18; end: 105071b8f; -[SCChatInfoAttachmentIconImageDownloader _getUrlContent:] */

void FUN_105071b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105071b90; end: 105071c17; -[SCChatInfoAttachmentIconImageDownloader _setUrlContent:] */

void FUN_105071b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010c28f9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105071c18; end: 105071ca3; -[SCChatInfoAttachmentIconImageDownloader _hasActiveDownload:] */

bool FUN_105071c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_3);
  return lVar2 != 0;
}



/* Entry: 105071ca4; end: 105071d87; -[SCChatInfoAttachmentIconImageDownloader _addDownloadHandler:urlString:] */

void FUN_105071ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x38);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0e00e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  func_0x00010befa120(puVar2,param_2,param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar2,param_4);
  _objc_release(puVar2);
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105071d88; end: 105071d9f; -[SCChatInfoAttachmentIconImageDownloader delegate] */

void FUN_105071d88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105071da0; end: 105071dab; -[SCChatInfoAttachmentIconImageDownloader setDelegate:] */

void FUN_105071da0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105071dac; end: 105071e73; -[SCChatInfoAttachmentIconImageDownloader .cxx_destruct] */

void FUN_105071dac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105071e74; end: 105071f77;  */

void FUN_105071e74(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = param_1;
  FUN_105075d38();
  puVar4 = PTR_PTR_1126aed98;
  if ((puVar1 == (undefined *)0x3) || (puVar1 == (undefined *)0x2)) {
    puVar4 = param_1;
    FUN_105076090(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (puVar1 == (undefined *)0x1) {
    puVar1 = param_1;
    FUN_105076090(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5da0(puVar4,param_2,1,puVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105071f78; end: 10507223b; -[SCUnifiedProfileChatAttachmentSectionDataProvider initWithUserSession:ownerId:conversationId:conversationType:imageDownloader:labelInfoFetcher:snapchatterProvider:chatAttachmentDataStore:profileSavedAttachmentsFetcher:profileChatMessagesUpdateTracker:maxCellsCanRenderBeforeViewMore:friendmojiPresenter:grapheneServices:simpleContentFetcher:urlPreviewProvider:] */

undefined8 *
FUN_105071f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain();
  puStack_70 = PTR_PTR_1126e5d50;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b4578;
    _objc_alloc();
    func_0x00010c046900();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar1[2]);
    _objc_retain(param_9);
    uVar3 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar3);
    func_0x00010befc780(puVar1[5]);
    puVar2 = PTR_PTR_1126b4580;
    _objc_alloc();
    func_0x00010c05e040();
    uVar3 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar3);
    puVar1[10] = param_13;
    puVar2 = PTR_PTR_1126b4330;
    _objc_alloc();
    func_0x00010bff3160();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar3);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10507223c; end: 105072247; +[SCUnifiedProfileChatAttachmentSectionDataProvider announcerIdentifier] */

undefined ** FUN_10507223c(void)

{
  return &PTR____CFConstantStringClassReference_110dc4038;
}



/* Entry: 105072248; end: 10507224f; -[SCUnifiedProfileChatAttachmentSectionDataProvider addListener:] */

void FUN_105072248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105072250; end: 105072257; -[SCUnifiedProfileChatAttachmentSectionDataProvider removeListener:] */

void FUN_105072250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105072258; end: 105072283; -[SCUnifiedProfileChatAttachmentSectionDataProvider setUp] */

void FUN_105072258(long param_1,undefined8 param_2)

{
  func_0x00010befc780(*(undefined8 *)(param_1 + 0x48),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bfa8c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_fetchMoreSavedInChatAttachmentDa_1125c7ca8);
  return;
}



/* Entry: 105072284; end: 10507228f; -[SCUnifiedProfileChatAttachmentSectionDataProvider tearDown] */

void FUN_105072284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12eeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeUpdateListener__1126295c8,param_1);
  return;
}



/* Entry: 105072290; end: 105072357; -[SCUnifiedProfileChatAttachmentSectionDataProvider setSectionDataModel:] */

void FUN_105072290(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar3 = param_1;
  func_0x00010bde7580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar3;
  _objc_release(uVar6);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar7 = *(ulong *)(param_1 + 0x78);
  _objc_retain(uVar7);
  _objc_opt_class(puVar4);
  uVar5 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar1 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  func_0x00010bf529e0();
  _objc_release(uVar1);
  func_0x00010c1ec5a0(*(undefined8 *)(param_1 + 0x58));
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x48);
  func_0x00010bfddca0();
  *(undefined1 *)(param_1 + 0x38) = uVar2;
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105072358; end: 105072437; -[SCUnifiedProfileChatAttachmentSectionDataProvider numberOfItemsInSection:] */

ulong FUN_105072358(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar4 = *(ulong *)(param_1 + 0x78);
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
  uVar3 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  if (uVar3 == 0) {
    func_0x00010c2341c0(param_1);
    param_1 = param_1 & 0xffffffff;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x78);
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
    param_1 = uVar1;
    func_0x00010bf529e0(uVar1);
    _objc_release(uVar1);
  }
  return param_1;
}



/* Entry: 105072438; end: 1050725f3; -[SCUnifiedProfileChatAttachmentSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105072438(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar10 = *(ulong *)(param_1 + 0x78);
  _objc_retain(uVar10);
  _objc_opt_class(ppuVar7);
  uVar2 = uVar10;
  _objc_opt_isKindOfClass(uVar10,ppuVar7);
  uVar1 = uVar10;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar10);
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    func_0x00010c2341c0();
    if ((int)param_1 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126aea98;
      _objc_alloc();
      ppuVar4 = &PTR____CFConstantStringClassReference_110dc4018;
      ppuVar7 = (undefined **)0x0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4018,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x000108f5f424();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffd260();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1050725f4;
    puStack_60 = &UNK_110845ab0;
    ppuVar7 = &puStack_78;
    puVar8 = param_3;
    lStack_58 = param_1;
    func_0x000100504554(param_3,ppuVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puVar9 = *(undefined **)(*(long *)(param_3 + 0x20) + 0x78);
    _objc_retain(puVar9);
    _objc_retain(ppuVar7);
    _objc_opt_class(puVar8);
    puVar6 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar8);
    puVar3 = puVar9;
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar9);
    func_0x00010c0840e0(ppuVar7);
    _objc_release(ppuVar7);
    puVar8 = puVar3;
    func_0x00010c0dfd40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1050725f4; end: 10507269b;  */

void FUN_1050725f4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x78);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010c0840e0(param_2);
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10507269c; end: 10507275f; -[SCUnifiedProfileChatAttachmentSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10507269c(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    ppuVar4 = &puStack_130;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_e0,puVar2);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_105072920;
    puStack_f0 = &UNK_110845ae0;
    _objc_copyWeak(auStack_e8,auStack_e0);
    ppuVar3 = &puStack_108;
    _objc_retainBlock();
    puStack_130 = puVar2;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1050729b8;
    puStack_118 = &UNK_110845ae0;
    puVar8 = auStack_e0;
    _objc_copyWeak(auStack_110);
    _objc_retainBlock();
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f11cb8;
    ppuVar5 = ppuVar3;
    _objc_retainBlock();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110f11d18;
    puVar6 = (undefined1 *)ppuVar4;
    ppuStack_c8 = ppuVar5;
    _objc_retainBlock();
    puStack_c0 = puVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_110);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_e8);
    puVar6 = auStack_e0;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_110);
      _objc_destroyWeak(auStack_e8);
      _objc_destroyWeak(auStack_e0);
      __Unwind_Resume(puVar6);
      _objc_retain(puVar8);
      puVar6 = puVar6 + 0x20;
      _objc_loadWeakRetained(puVar6);
      puVar2 = PTR_PTR_1126b4590;
      _objc_retain(puVar8);
      _objc_opt_class(puVar2);
      puVar7 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar2);
      puVar1 = puVar8;
      if (((ulong)puVar7 & 1) == 0) {
        puVar1 = (undefined1 *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar8);
      func_0x00010bde4e40(puVar6);
      _objc_release(puVar1);
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105072760; end: 10507291f; -[SCUnifiedProfileChatAttachmentSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105072760(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  ppuVar3 = &puStack_e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_90,param_1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105072920;
  puStack_a0 = &UNK_110845ae0;
  _objc_copyWeak(auStack_98,auStack_90);
  ppuVar2 = &puStack_b8;
  _objc_retainBlock();
  puStack_e0 = puVar6;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1050729b8;
  puStack_c8 = &UNK_110845ae0;
  puVar8 = auStack_90;
  _objc_copyWeak(auStack_c0);
  _objc_retainBlock();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f11cb8;
  ppuVar4 = ppuVar2;
  _objc_retainBlock();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f11d18;
  puVar5 = (undefined1 *)ppuVar3;
  ppuStack_78 = ppuVar4;
  _objc_retainBlock();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_98);
  puVar5 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar8);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  puVar6 = PTR_PTR_1126b4590;
  _objc_retain(puVar8);
  _objc_opt_class(puVar6);
  puVar7 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar6);
  puVar1 = puVar8;
  if (((ulong)puVar7 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar8);
  func_0x00010bde4e40(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105072920; end: 1050729b7;  */

void FUN_105072920(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR_PTR_1126b4590;
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
  func_0x00010bde4e40(param_1);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050729b8; end: 1050729ff;  */

void FUN_1050729b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5a80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105072a00; end: 105072a07; -[SCUnifiedProfileChatAttachmentSectionDataProvider dataLoadingStatus] */

undefined8 FUN_105072a00(void)

{
  return 1;
}



/* Entry: 105072a08; end: 105072a0f; -[SCUnifiedProfileChatAttachmentSectionDataProvider shouldShowSectionWhenNoChatAttachments] */

undefined8 FUN_105072a08(void)

{
  return 1;
}



/* Entry: 105072a10; end: 105072a17; -[SCUnifiedProfileChatAttachmentSectionDataProvider senderSubtitleForSavedInfoAttachmentDataModel:] */

undefined8 FUN_105072a10(void)

{
  return 0;
}



/* Entry: 105072a18; end: 105072a97; -[SCUnifiedProfileChatAttachmentSectionDataProvider _containerCellViewModelsFromDataCoordinator] */

void FUN_105072a18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf35e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105072a98; end: 105072aa3;  */

void FUN_105072a98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde7390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__containerCellViewModelForChatAt_112557680,
             param_2);
  return;
}



/* Entry: 105072aa4; end: 10507306b; -[SCUnifiedProfileChatAttachmentSectionDataProvider _containerCellViewModelForChatAttachmentDataModel:] */

void FUN_105072aa4(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  ulong in_stack_ffffffffffffff78;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar11 = param_3;
  FUN_105075d38();
  if (ppuVar11 == (undefined **)0x3) {
    ppuVar11 = *(undefined ***)(param_1 + 0x10);
    func_0x00010c271400();
    _objc_retainAutoreleasedReturnValue();
    iVar13 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bf9fde0();
  }
  else {
    if (ppuVar11 == (undefined **)0x4) {
      ppuVar11 = param_3;
      FUN_105076254();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = *(long *)(param_1 + 0x28);
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c280060();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar14;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(puVar9);
      if (lVar5 == 0) {
        ppuVar1 = ppuVar11;
        func_0x00010befb700(*(undefined8 *)(param_1 + 0x28));
        puVar9 = (undefined *)0x0;
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x60);
        ppuVar1 = &PTR____CFConstantStringClassReference_110f11d38;
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f11d38);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107cf001c(uVar12,lVar5,1,0xffffffffcf5d0adf,0xd8,0,ppuVar1,1,0,0,0,
                            in_stack_ffffffffffffff78 & 0xffffffffffffff00);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        puVar9 = PTR_PTR_1126aea98;
        _objc_alloc(PTR_PTR_1126aea98);
        ppuVar1 = &PTR____CFConstantStringClassReference_110f11d18;
        func_0x00010bffd260();
        _objc_release(uVar12);
      }
      goto LAB_105073018;
    }
    ppuVar11 = (undefined **)0x0;
    iVar13 = 0;
  }
  func_0x00010c15df00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(ppuVar11);
  _objc_retain(param_1);
  ppuVar1 = param_3;
  FUN_105075d38();
  ppuVar2 = param_3;
  if (ppuVar1 == (undefined **)0x3) {
    if (ppuVar11 == (undefined **)0x0) {
      FUN_105071e74();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      if (iVar13 == 0) {
        puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108f62fec(ppuVar2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
      }
      else {
        func_0x000108f62f68();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release();
    }
    else {
      ppuVar2 = ppuVar11;
      func_0x000108f62f68();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
    }
LAB_105072d88:
    uVar12 = 0x4044000000000000;
    uVar15 = 0x4044000000000000;
  }
  else {
    FUN_105071e74();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000108f62f68();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar12 = 0x403c000000000000;
    if (ppuVar1 == (undefined **)0x1) {
      uVar15 = 0x403c000000000000;
    }
    else {
      if (ppuVar1 != (undefined **)0x2) goto LAB_105072d88;
      uVar15 = 0x4040800000000000;
    }
  }
  func_0x000108f62d74(uVar12,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  _objc_retain(param_3);
  _objc_retain(param_1);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar5 = param_1;
    func_0x000108f63554(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar9);
    _objc_release(lVar5);
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = param_3;
  func_0x00010c0cb9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5aa0(0x4024000000000000,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar7 = puVar6;
  func_0x000108f63554(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar9);
  _objc_release(puVar7);
  puVar7 = puVar9;
  func_0x00010bf51e00(puVar9);
  puVar8 = puVar7;
  func_0x000108f6340c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(param_1);
  _objc_release(param_3);
  lVar5 = param_1;
  _objc_release(param_1);
  func_0x000108f637bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  ppuVar1 = param_3;
  FUN_105075d38();
  puVar9 = PTR_PTR_1126b02a8;
  if (ppuVar1 == (undefined **)0x3) {
    _objc_alloc(PTR_PTR_1126b02a8);
LAB_105072f64:
    func_0x00010c01b460();
  }
  else {
    if (ppuVar1 == (undefined **)0x2) {
      _objc_alloc(PTR_PTR_1126b02a8);
      goto LAB_105072f64;
    }
    puVar9 = (undefined *)0x0;
    if (ppuVar1 == (undefined **)0x1) {
      puVar9 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      goto LAB_105072f64;
    }
  }
  _objc_release(param_3);
  func_0x00010c053700(puVar4);
  _objc_release(puVar9);
  _objc_release(lVar5);
  _objc_release(puVar8);
  puVar9 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  ppuVar1 = &PTR____CFConstantStringClassReference_110f11cb8;
  func_0x00010bffd260();
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
  _objc_release(ppuVar11);
  _objc_release(param_3);
  lVar5 = param_1;
LAB_105073018:
  _objc_release(lVar5);
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(ppuVar1);
    func_0x00010c1c4540(ppuVar1);
    puVar9 = param_3[0xb];
    func_0x00010c14fc00(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d2520(ppuVar1);
    _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10507306c; end: 1050730d7; -[SCUnifiedProfileChatAttachmentSectionDataProvider _configureChatAttachmentCollectionViewCell:] */

void FUN_10507306c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c1c4540(param_3,param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c14fc00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2520(param_3,param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050730d8; end: 10507317b; -[SCUnifiedProfileChatAttachmentSectionDataProvider _configureSnapchatterCollectionViewCell:] */

void FUN_1050730d8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b4598;
  _objc_opt_class(PTR_PTR_1126b4598);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  func_0x00010c1ac420(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c14fc00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2520(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10507317c; end: 1050731d3; -[SCUnifiedProfileChatAttachmentSectionDataProvider chatInfoAttachmentIconImageDownloader:] */

void FUN_10507317c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1050731d4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x70),param_2,&puStack_38);
  return;
}



/* Entry: 1050731d4; end: 1050731df;  */

void FUN_1050731d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSectionDataModel__11265beb0,0);
  return;
}



/* Entry: 1050731e0; end: 10507321f; -[SCUnifiedProfileChatAttachmentSectionDataProvider shouldShowLoadingState] */

byte FUN_1050731e0(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010bfa8c00(*(undefined8 *)(param_1 + 0x48));
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 105073220; end: 1050732ef; -[SCUnifiedProfileChatAttachmentSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_105073220(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [5];
  
  puVar4 = auStack_80;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7eb8);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b4580;
    func_0x00010bf04780(PTR_PTR_1126b4580);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar1 == 0) goto LAB_1050732d4;
    pcVar5 = (code *)0x1050732fc;
  }
  else {
    pcVar5 = FUN_1050732f0;
    puVar4 = auStack_58;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puVar4[1] = 0xc2000000;
  puVar4[2] = pcVar5;
  puVar4[3] = &UNK_110842e18;
  puVar4[4] = param_1;
  func_0x00010c0f7fc0(uVar3);
LAB_1050732d4:
  _objc_release(param_3);
  return;
}



/* Entry: 1050732f0; end: 105073307;  */

void FUN_1050732f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f9230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSectionDataModel__11265beb0,0);
  return;
}



/* Entry: 105073308; end: 10507331f; -[SCUnifiedProfileChatAttachmentSectionDataProvider dataProviderDelegate] */

void FUN_105073308(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105073320; end: 10507332b; -[SCUnifiedProfileChatAttachmentSectionDataProvider setDataProviderDelegate:] */

void FUN_105073320(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 10507332c; end: 105073333; -[SCUnifiedProfileChatAttachmentSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10507332c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105073334; end: 105073363; -[SCUnifiedProfileChatAttachmentSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105073334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105073364; end: 10507336b; -[SCUnifiedProfileChatAttachmentSectionDataProvider sectionDataModel] */

undefined8 FUN_105073364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10507336c; end: 10507341b; -[SCUnifiedProfileChatAttachmentSectionDataProvider .cxx_destruct] */

void FUN_10507336c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10507341c; end: 1050734f3; -[SCChatUrlAttachmentContent initWithUrlString:urlPreview:thumbnailImage:] */

undefined1 *
FUN_10507341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5d58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050734f4; end: 105073517; -[SCChatUrlAttachmentContent copyWithZone:] */

undefined8 FUN_1050734f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105073518; end: 105073597; -[SCChatUrlAttachmentContent hash] */

undefined8 * FUN_105073518(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105073630:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10507363c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10507363c;
          }
          goto LAB_105073630;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10507363c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105073598; end: 105073657; -[SCChatUrlAttachmentContent isEqual:] */

long FUN_105073598(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105073630:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10507363c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10507363c;
          }
          goto LAB_105073630;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10507363c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105073658; end: 10507365f; -[SCChatUrlAttachmentContent urlString] */

undefined8 FUN_105073658(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105073660; end: 105073667; -[SCChatUrlAttachmentContent urlPreview] */

undefined8 FUN_105073660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105073668; end: 10507366f; -[SCChatUrlAttachmentContent thumbnailImage] */

undefined8 FUN_105073668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105073670; end: 1050736ab; -[SCChatUrlAttachmentContent .cxx_destruct] */

void FUN_105073670(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050736ac; end: 105073907; -[SCProfileArroyoChatAttachmentDataCoordinator initWithConversationId:ownerID:conversationType:numberOfMessagesPerPage:savedAttachmentMessagesFetcher:chatMessagesUpdateTracker:grapheneRegistry:profileType:] */

undefined8 *
FUN_1050736ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e5d60;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b45a8;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b3d60;
    func_0x00010c11a120(PTR_PTR_1126b3d60);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b3d60;
    func_0x00010c11a0e0(PTR_PTR_1126b3d60);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b3d60;
    func_0x00010c11a100(PTR_PTR_1126b3d60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017b40();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)(puVar1 + 9) = 1;
    uVar2 = puVar1[10];
    puVar1[10] = 0;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105073908; end: 1050739d3; -[SCProfileArroyoChatAttachmentDataCoordinator chatAttachments] */

void FUN_105073908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1050739d4;
  uStack_30 = 0x1050739e4;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1050739ec;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050739d4; end: 1050739eb;  */

void FUN_1050739d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050739ec; end: 105073a27;  */

void FUN_1050739ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105073a28; end: 105073acf; -[SCProfileArroyoChatAttachmentDataCoordinator hasMoreChatAttachments] */

undefined1 FUN_105073a28(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105073ad0;
  puStack_58 = &UNK_11084b9d0;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_70);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105073ad0; end: 105073ae3;  */

void FUN_105073ad0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x48);
  return;
}



/* Entry: 105073ae4; end: 105073b8b; -[SCProfileArroyoChatAttachmentDataCoordinator fetchMoreChatAttachments] */

void FUN_105073ae4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105073b8c; end: 105073bb7;  */

void FUN_105073b8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105073bb8; end: 105073d03; -[SCProfileArroyoChatAttachmentDataCoordinator _fetchMoreChatAttachments] */

void FUN_105073bb8(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    if (*(char *)(param_1 + 0x48) == '\x01') {
      _objc_initWeak(auStack_58,param_1);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_105073d04;
      puStack_70 = &UNK_110864998;
      lStack_68 = param_1;
      _objc_copyWeak(auStack_60,auStack_58);
      ppuVar1 = &puStack_88;
      _objc_retainBlock(ppuVar1);
      func_0x00010c250800(*(undefined8 *)(param_1 + 0x40));
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14b7e0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(ppuVar1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  return;
}



/* Entry: 105073d04; end: 105073d87;  */

void FUN_105073d04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x58) = 0;
    return;
  }
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed34c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105073d88; end: 1050743db; -[SCProfileArroyoChatAttachmentDataCoordinator _updateAttachmentsFromAppendedMessages:nextPaginationCursor:] */

/* WARNING: Possible PIC construction at 0x000105073e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105073e48) */
/* WARNING: Removing unreachable block (ram,0x000105073e74) */

void FUN_105073d88(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 auStack_310 [8];
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  long lStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 auStack_220 [16];
  long lStack_1a0;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_e8 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar4 = auStack_e8;
  puVar13 = (undefined8 *)0x10;
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 == (undefined8 *)0x0) {
    _objc_release(param_3);
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    func_0x00010c0d3c80();
    puVar3 = puVar4;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x60) = puVar4;
    _objc_release(uVar14);
    *(bool *)(param_1 + 0x48) = param_4 != 0;
    uVar14 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = param_4;
    _objc_retain(param_4);
    _objc_release(uVar14);
    *(undefined1 *)(param_1 + 0x58) = 0;
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    puVar5 = param_3;
    func_0x00010bf529e0();
    puVar4 = puVar2;
    func_0x00010bf529e0();
    puVar13 = (undefined8 *)(ulong)*(byte *)(param_1 + 0x48);
    func_0x00010c1222a0(uVar14);
    _objc_release(param_4);
    func_0x00010bdcc700(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    uVar14 = 0x105073f90;
    ___stack_chk_fail();
  }
  else {
    if (*plStack_120 != *plStack_120) {
      _objc_enumerationMutation(param_3);
    }
    param_3 = (undefined8 *)*plStack_128;
    param_2 = *(undefined8 *)(param_1 + 0x10);
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    uVar14 = 0x105073e48;
  }
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar5;
  puStack_140 = &stack0xfffffffffffffff0;
  uStack_138 = uVar14;
  _objc_retain();
  _objc_retain(param_2);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = param_3;
  func_0x00010c244700();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  func_0x00010c26c400();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c08fa60();
  puStack_2a8 = puVar8;
  puStack_280 = param_3;
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = puVar8;
    func_0x00010bf529e0();
    if (puVar9 != (undefined8 *)0x0) {
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      puStack_2b0 = puVar7;
      puStack_290 = puVar5;
      uStack_288 = param_2;
      _objc_retain(puVar8);
      puVar11 = &uStack_260;
      puVar4 = auStack_220;
      puVar13 = (undefined8 *)0x10;
      puVar7 = puVar8;
      func_0x00010bf52a60();
      puStack_278 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        lStack_2a0 = *plStack_250;
        puStack_298 = puVar6;
        do {
          puVar4 = (undefined8 *)0x0;
          do {
            if (*plStack_250 != lStack_2a0) {
              _objc_enumerationMutation(puStack_2a8);
            }
            uVar14 = *(undefined8 *)(lStack_258 + (long)puVar4 * 8);
            puVar13 = (undefined8 *)PTR_PTR_1126b4478;
            _objc_alloc();
            puVar3 = puStack_280;
            puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar5 = puStack_280;
            puStack_270 = puVar13;
            func_0x00010bf490e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puStack_268 = puVar5;
            func_0x00010c11f2a0(uVar14);
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puStack_2c0 = puVar5;
            puStack_2b8 = (undefined8 *)puVar6;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar3;
            func_0x00010bf50280(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar3;
            func_0x00010bf490e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010c0cb8c0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c0cb9a0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR_PTR_1126b45b8;
            func_0x00010c26b700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26c3e0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            puStack_2c0 = (undefined8 *)uStack_288;
            puStack_2b8 = puStack_290;
            puVar5 = puStack_270;
            func_0x00010c059000();
            _objc_release(puVar12);
            _objc_release(puVar3);
            _objc_release(puVar7);
            _objc_release(puVar8);
            _objc_release(puVar11);
            _objc_release(puVar13);
            _objc_release(puVar2);
            _objc_release(puVar6);
            _objc_release(puStack_268);
            puVar6 = puStack_298;
            func_0x00010befa120(puStack_298);
            _objc_release(puVar5);
            puVar8 = puStack_2a8;
            puVar4 = (undefined8 *)((long)puVar4 + 1);
          } while (puStack_278 != puVar4);
          puVar11 = &uStack_260;
          puVar4 = auStack_220;
          puVar13 = (undefined8 *)0x10;
          puVar7 = puStack_2a8;
          func_0x00010bf52a60();
          puStack_278 = puVar7;
        } while (puVar7 != (undefined8 *)0x0);
      }
      _objc_release(puVar8);
      param_3 = puStack_280;
      param_2 = uStack_288;
      puVar7 = puStack_2b0;
    }
  }
  else {
    puVar4 = (undefined8 *)PTR_PTR_1126b4478;
    _objc_alloc();
    puVar2 = param_3;
    puStack_268 = puVar4;
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3;
    func_0x00010bf490e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010c0cb8c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb9a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b45b8;
    func_0x00010c2448a0(PTR_PTR_1126b45b8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_268;
    puVar4 = puVar3;
    puVar13 = puVar11;
    puStack_2c0 = (undefined8 *)param_2;
    puStack_2b8 = puVar5;
    func_0x00010c059000();
    _objc_release(puVar12);
    puVar5 = puStack_280;
    puVar8 = puStack_2a8;
    _objc_release(param_3);
    _objc_release(puVar9);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar11 = puVar10;
    func_0x00010befa120(puVar6);
    _objc_release(puVar10);
    param_3 = puVar5;
    puVar5 = puVar10;
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_2);
  puVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  pcStack_2c8 = FUN_1050743dc;
  puStack_300 = puVar6;
  puStack_2f8 = puVar3;
  puStack_2f0 = puVar2;
  uStack_2e8 = param_2;
  puStack_2e0 = puVar5;
  puStack_2d8 = param_3;
  ppuStack_2d0 = &puStack_140;
  _objc_retain(puVar11);
  _objc_retain(puVar4);
  _objc_retain(puVar13);
  iVar1 = (int)puVar8[1];
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_308,puVar8);
    uVar14 = puVar8[6];
    _objc_copyWeak(auStack_310,auStack_308);
    _objc_retain(puVar4);
    _objc_retain(puVar13);
    func_0x00010c0f7fc0(uVar14);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_310);
    _objc_destroyWeak(auStack_308);
  }
  _objc_release(puVar13);
  _objc_release(puVar4);
  _objc_release(puVar11);
  return;
}



/* Entry: 1050743dc; end: 105074507; -[SCProfileArroyoChatAttachmentDataCoordinator didUpdateConversation:updatedMessages:removedMessageIds:] */

void FUN_1050743dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105074508; end: 10507453b;  */

void FUN_105074508(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed34e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10507453c; end: 1050749c3; -[SCProfileArroyoChatAttachmentDataCoordinator _updateAttachmentsFromAppendedMessages:removedMessageIds:] */

void FUN_10507453c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x22;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 *puStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  _objc_retain(puVar9);
  puVar6 = param_3;
  func_0x00010bf529e0();
  puVar4 = puVar9;
  if (puVar6 != (undefined8 *)0x0) {
    unaff_x19 = *(undefined8 **)(param_1 + 0x10);
    uStack_148 = *(undefined8 *)(param_1 + 0x18);
    lStack_160 = param_1;
    puStack_158 = param_4;
    _objc_retain(param_3);
    puStack_140 = unaff_x19;
    _objc_retain(unaff_x19);
    puStack_168 = puVar9;
    func_0x00010c0d3c80();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar8 = &uStack_130;
    puVar2 = auStack_f0;
    puVar6 = param_3;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      lStack_138 = *plStack_120;
      puStack_150 = param_3;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lStack_138) {
            _objc_enumerationMutation(puStack_150);
          }
          puVar10 = *(undefined8 **)(lStack_128 + (long)puVar8 * 8);
          puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
          _objc_opt_new();
          puVar4 = puVar9;
          func_0x00010bf529e0();
          if (puVar4 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)0x0;
            do {
              puVar5 = puVar9;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = puVar5;
              func_0x00010c0cb5a0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x19 = puVar10;
              func_0x00010bf490e0();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = unaff_x22;
              func_0x00010c0720c0();
              _objc_release(unaff_x19);
              _objc_release(unaff_x22);
              _objc_release(puVar5);
              if ((int)puVar3 != 0) {
                func_0x00010bef92c0(puVar2);
              }
              puVar4 = (undefined8 *)((long)puVar4 + 1);
              puVar5 = puVar9;
              func_0x00010bf529e0();
            } while (puVar4 < puVar5);
          }
          puVar4 = puVar2;
          func_0x00010bf529e0();
          if (puVar4 != (undefined8 *)0x0) {
            func_0x000105073f90(puVar10,puStack_140,uStack_148);
            _objc_retainAutoreleasedReturnValue();
            unaff_x19 = puVar2;
            func_0x00010bf529e0();
            puVar4 = puVar10;
            func_0x00010bf529e0();
            if (unaff_x19 == puVar4) {
              func_0x00010c130f60(puVar9);
            }
            else {
              puVar4 = puVar10;
              func_0x00010bf529e0();
              if (puVar4 == (undefined8 *)0x0) {
                func_0x00010c12d480(puVar9);
              }
            }
            _objc_release(puVar10);
          }
          _objc_release(puVar2);
          param_3 = puStack_150;
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar8 != puVar6);
        puVar8 = &uStack_130;
        puVar2 = auStack_f0;
        puVar6 = puStack_150;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    puVar4 = puVar9;
    func_0x00010bf51e00();
    _objc_release(puVar9);
    _objc_release(puStack_140);
    _objc_release(param_3);
    _objc_release(puStack_168);
    param_4 = puStack_158;
    param_1 = lStack_160;
  }
  puVar6 = param_4;
  func_0x00010bf529e0();
  puVar9 = puVar4;
  if (puVar6 != (undefined8 *)0x0) {
    _objc_retain(puVar4);
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar8 = param_4;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_opt_new();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      do {
        unaff_x19 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = unaff_x19;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = puVar6;
        puVar8 = puVar3;
        func_0x00010bf4b900();
        _objc_release(puVar3);
        _objc_release(unaff_x19);
        if ((int)unaff_x22 != 0) {
          puVar8 = puVar5;
          func_0x00010bef92c0(puVar10);
        }
        puVar5 = (undefined8 *)((long)puVar5 + 1);
        puVar3 = puVar4;
        func_0x00010bf529e0();
      } while (puVar5 < puVar3);
    }
    puVar5 = puVar10;
    func_0x00010bf529e0();
    if (puVar5 == (undefined8 *)0x0) {
      _objc_retain(puVar4);
    }
    else {
      unaff_x19 = puVar4;
      func_0x00010c0d3c80();
      puVar8 = puVar10;
      func_0x00010c12d480();
      puVar9 = unaff_x19;
      func_0x00010bf51e00();
      _objc_release(unaff_x19);
    }
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar4);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  _objc_retain(puVar6);
  _objc_retain(puVar9);
  if (puVar6 == puVar9) {
    _objc_release(puVar9);
    _objc_release(puVar6);
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      _objc_release(puVar6);
    }
    else {
      unaff_x19 = puVar6;
      puVar8 = puVar9;
      func_0x00010c071ae0();
      _objc_release(puVar9);
      _objc_release(puVar6);
      if (((ulong)unaff_x19 & 1) != 0) goto LAB_105074970;
    }
    puVar4 = puVar9;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x60) = puVar4;
    _objc_release(uVar7);
    func_0x00010bdcc700(param_1);
  }
LAB_105074970:
  _objc_release(puVar9);
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_178 = FUN_1050749c4;
    puStack_1a0 = unaff_x22;
    puStack_198 = param_3;
    puStack_190 = puVar6;
    puStack_188 = unaff_x19;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(puVar2);
    iVar1 = (int)puVar4[1];
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      _objc_initWeak(auStack_1a8,puVar4);
      uVar7 = puVar4[6];
      _objc_copyWeak(auStack_1b0,auStack_1a8);
      _objc_retain(puVar2);
      func_0x00010c0f7fc0(uVar7);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_1b0);
      _objc_destroyWeak(auStack_1a8);
    }
    _objc_release(puVar2);
    _objc_release(puVar8);
    return;
  }
  return;
}



/* Entry: 1050749c4; end: 105074abf; -[SCProfileArroyoChatAttachmentDataCoordinator didResetConversation:messages:] */

void FUN_1050749c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105074ac0; end: 105074af3;  */

void FUN_105074ac0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105074af4; end: 105074c87; -[SCProfileArroyoChatAttachmentDataCoordinator _resetAttachmentsFromMessages:] */

undefined ** FUN_105074af4(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  ppuVar2 = param_3;
  FUN_105098624();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  *(undefined ***)(param_1 + 0x50) = ppuVar2;
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar2 != (undefined **)0x0) {
    ppuVar7 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar6 = *(undefined8 *)((long)ppuVar7 * 8);
      func_0x000105073f90(uVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3);
      _objc_release(uVar6);
      ppuVar7 = (undefined **)((long)ppuVar7 + 1);
    } while (ppuVar2 != ppuVar7);
    ppuVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar4;
  _objc_release(uVar6);
  func_0x00010bdcc700(param_1);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110dc4078;
}



/* Entry: 105074c88; end: 105074c93; +[SCProfileArroyoChatAttachmentDataCoordinator announcerIdentifier] */

undefined ** FUN_105074c88(void)

{
  return &PTR____CFConstantStringClassReference_110dc4078;
}



/* Entry: 105074c94; end: 105074c9b; -[SCProfileArroyoChatAttachmentDataCoordinator addUpdateListener:] */

void FUN_105074c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105074c9c; end: 105074ca3; -[SCProfileArroyoChatAttachmentDataCoordinator removeUpdateListener:] */

void FUN_105074c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105074ca4; end: 105074d67; -[SCProfileArroyoChatAttachmentDataCoordinator _announceUpdate] */

void FUN_105074ca4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 105074d68; end: 105074ddf; -[SCProfileArroyoChatAttachmentDataCoordinator .cxx_destruct] */

void FUN_105074d68(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105074de0; end: 105074f43; -[SCProfileChatAttachmentDataSource initWithUserSession:ownerID:conversationId:conversationType:chatAttachmentDataStore:savedAttachmentMessagesFetcher:chatMessagesUpdateTracker:grapheneServices:] */

undefined8 *
FUN_105074de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e5d68;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b45b0;
    _objc_alloc();
    uVar4 = param_10;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0053a0();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar4);
    func_0x00010befc780(puVar1[1]);
    puVar2 = PTR_PTR_1126b45a0;
    _objc_opt_new();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105074f44; end: 105074f4f; +[SCProfileChatAttachmentDataSource announcerIdentifier] */

undefined ** FUN_105074f44(void)

{
  return &PTR____CFConstantStringClassReference_110dc40b8;
}



/* Entry: 105074f50; end: 105074f57; -[SCProfileChatAttachmentDataSource addUpdateListener:] */

void FUN_105074f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105074f58; end: 105074f5f; -[SCProfileChatAttachmentDataSource removeUpdateListener:] */

void FUN_105074f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105074f60; end: 105074f67; -[SCProfileChatAttachmentDataSource chatAttachmentDataModels] */

void FUN_105074f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf35f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_chatAttachments_1125ab170);
  return;
}



/* Entry: 105074f68; end: 105074f6f; -[SCProfileChatAttachmentDataSource hasUnloadedContent] */

void FUN_105074f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd92d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hasMoreChatAttachments_1125d3e58);
  return;
}



/* Entry: 105074f70; end: 105074f77; -[SCProfileChatAttachmentDataSource fetchMoreSavedInChatAttachmentDataModels] */

void FUN_105074f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa8bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchMoreChatAttachments_1125c7c90);
  return;
}



/* Entry: 105074f78; end: 10507503b; -[SCProfileChatAttachmentDataSource _dispatchSavedInChatCardsUpdate] */

void FUN_105074f78(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 10507503c; end: 1050750bf; -[SCProfileChatAttachmentDataSource didUpdateWithAnnouncerIdentifier:] */

void FUN_10507503c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b45b0;
  _objc_retain(param_3);
  func_0x00010bf04780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be03f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispatchSavedInChatCardsUpdate_11255e980);
    return;
  }
  return;
}



/* Entry: 1050750c0; end: 1050750ef; -[SCProfileChatAttachmentDataSource .cxx_destruct] */

void FUN_1050750c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050750f0; end: 10507524f; -[SCProfileChatAttachmentDataStore initWithDocObjectContext:] */

undefined8 * FUN_1050750f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5d70;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_initWeak(auStack_48,puVar1);
    uVar2 = puVar1[2];
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105075250; end: 10507527b;  */

void FUN_105075250(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10507527c; end: 1050753ab; -[SCProfileChatAttachmentDataStore chatAttachmentDataModelsForOwnerId:completionQueue:completionHandler:] */

void FUN_10507527c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050753ac; end: 1050753e3;  */

void FUN_1050753ac(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be104a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050753e4; end: 105075513; -[SCProfileChatAttachmentDataStore fetchMetadataForOwnerId:completionQueue:completionHandler:] */

void FUN_1050753e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105075514; end: 10507554b;  */

void FUN_105075514(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10507554c; end: 10507567b; -[SCProfileChatAttachmentDataStore updateChatAttachmentDataModelForOwnerId:chatAttachmentDataModels:fetchMetadata:] */

void FUN_10507554c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10507567c; end: 1050756b3;  */

void FUN_10507567c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050756b4; end: 1050757b3; -[SCProfileChatAttachmentDataStore updateFetchMetadataChecksumForOwnerId:checksum:] */

void FUN_1050756b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050757b4; end: 1050757e7;  */

void FUN_1050757b4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed80a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050757e8; end: 105075807; -[SCProfileChatAttachmentDataStore _deleteExpiredDataModels] */

void FUN_1050757e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_performChanges_completionQueue_c_11261bb60,
             &PTR___NSConcreteGlobalBlock_1108649e8,0,0);
  return;
}



/* Entry: 105075808; end: 1050758db; -[SCProfileChatAttachmentDataStore _fetchChatAttachmentDataModelsForOwnerId:completionQueue:completionHandler:] */

void FUN_105075808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  FUN_105077028(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1050758dc;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_60);
  _objc_release(param_4);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1050758dc; end: 1050758eb;  */

void FUN_1050758dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001050758e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1050758ec; end: 1050759bf; -[SCProfileChatAttachmentDataStore _fetchMetadataForOwnerId:completionQueue:completionHandler:] */

void FUN_1050758ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  FUN_105077fa8(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1050759c0;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_5;
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_60);
  _objc_release(param_4);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1050759c0; end: 1050759cf;  */

void FUN_1050759c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001050759cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1050759d0; end: 105075ab3; -[SCProfileChatAttachmentDataStore _updateChatAttachmentDataModels:ownerId:fetchMetadata:] */

void FUN_1050759d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105075ab4;
  puStack_50 = &UNK_110864a08;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8500(uVar1,param_2,&puStack_68,0,0);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}


