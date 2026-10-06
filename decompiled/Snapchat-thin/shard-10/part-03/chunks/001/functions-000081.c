/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e7ccb8; end: 107e7ccbf; -[SCMemoriesFeaturedStoryViewModelBuilder withShouldShowCenteredTitlesView:] */

void FUN_107e7ccb8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x72) = param_3;
  return;
}



/* Entry: 107e7ccc0; end: 107e7ccc7; -[SCMemoriesFeaturedStoryViewModelBuilder withShowMenuButtonInBlackColor:] */

void FUN_107e7ccc0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x73) = param_3;
  return;
}



/* Entry: 107e7ccc8; end: 107e7cccf; -[SCMemoriesFeaturedStoryViewModelBuilder withEnableEditButton:] */

void FUN_107e7ccc8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x74) = param_3;
  return;
}



/* Entry: 107e7ccd0; end: 107e7ccd7; -[SCMemoriesFeaturedStoryViewModelBuilder withEnableMenuButton:] */

void FUN_107e7ccd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x75) = param_3;
  return;
}



/* Entry: 107e7ccd8; end: 107e7ccdf; -[SCMemoriesFeaturedStoryViewModelBuilder withEnableSaveButton:] */

void FUN_107e7ccd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x76) = param_3;
  return;
}



/* Entry: 107e7cce0; end: 107e7cce7; -[SCMemoriesFeaturedStoryViewModelBuilder withEnableSendButton:] */

void FUN_107e7cce0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x77) = param_3;
  return;
}



/* Entry: 107e7cce8; end: 107e7ccef; -[SCMemoriesFeaturedStoryViewModelBuilder withSnapsViewProgress:] */

void FUN_107e7cce8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 107e7ccf0; end: 107e7ccf7; -[SCMemoriesFeaturedStoryViewModelBuilder withCellViewingState:] */

void FUN_107e7ccf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 107e7ccf8; end: 107e7ccff; -[SCMemoriesFeaturedStoryViewModelBuilder withFeaturedStoryType:] */

void FUN_107e7ccf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 107e7cd00; end: 107e7cd07; -[SCMemoriesFeaturedStoryViewModelBuilder withShouldShowSpinner:] */

void FUN_107e7cd00(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 107e7cd08; end: 107e7cd0f; -[SCMemoriesFeaturedStoryViewModelBuilder withTotalExpectedClientGenSnapsCount:] */

void FUN_107e7cd08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 107e7cd10; end: 107e7cd17; -[SCMemoriesFeaturedStoryViewModelBuilder withClientGenStoryGenerationProgress:] */

void FUN_107e7cd10(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0xa0) = param_1;
  return;
}



/* Entry: 107e7cd18; end: 107e7cdb3; -[SCMemoriesFeaturedStoryViewModelBuilder .cxx_destruct] */

void FUN_107e7cd18(long param_1)

{
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



/* Entry: 107e7cdb4; end: 107e7ce2b; -[SCMemoriesFeaturedStoriesSectionViewModel initWithFeaturedStories:] */

undefined1 * FUN_107e7cdb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fb710;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e7ce2c; end: 107e7ce4f; -[SCMemoriesFeaturedStoriesSectionViewModel copyWithZone:] */

undefined8 FUN_107e7ce2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e7ce50; end: 107e7ce57; -[SCMemoriesFeaturedStoriesSectionViewModel hash] */

void FUN_107e7ce50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107e7ce58; end: 107e7cee7; -[SCMemoriesFeaturedStoriesSectionViewModel isEqual:] */

long FUN_107e7ce58(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e7cecc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107e7cecc;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107e7cecc;
    }
  }
  lVar3 = 1;
LAB_107e7cecc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e7cee8; end: 107e7ceef; -[SCMemoriesFeaturedStoriesSectionViewModel featuredStories] */

undefined8 FUN_107e7cee8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e7cef0; end: 107e7cefb; -[SCMemoriesFeaturedStoriesSectionViewModel .cxx_destruct] */

void FUN_107e7cef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e7cefc; end: 107e7cfa7; -[SCMemoriesFeaturedStoryBitmojiViewModel initWithBitmojiComicId:friendUserId:] */

undefined1 *
FUN_107e7cefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb718;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e7cfa8; end: 107e7cfcb; -[SCMemoriesFeaturedStoryBitmojiViewModel copyWithZone:] */

undefined8 FUN_107e7cfa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e7cfcc; end: 107e7d03f; -[SCMemoriesFeaturedStoryBitmojiViewModel hash] */

undefined8 * FUN_107e7cfcc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107e7d0c0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107e7d0cc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107e7d0cc;
        }
        goto LAB_107e7d0c0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107e7d0cc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107e7d040; end: 107e7d0e7; -[SCMemoriesFeaturedStoryBitmojiViewModel isEqual:] */

long FUN_107e7d040(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e7d0c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e7d0cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107e7d0cc;
        }
        goto LAB_107e7d0c0;
      }
    }
    lVar3 = 0;
  }
LAB_107e7d0cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e7d0e8; end: 107e7d0ef; -[SCMemoriesFeaturedStoryBitmojiViewModel bitmojiComicId] */

undefined8 FUN_107e7d0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e7d0f0; end: 107e7d0f7; -[SCMemoriesFeaturedStoryBitmojiViewModel friendUserId] */

undefined8 FUN_107e7d0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e7d0f8; end: 107e7d127; -[SCMemoriesFeaturedStoryBitmojiViewModel .cxx_destruct] */

void FUN_107e7d0f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e7d128; end: 107e7d1e3; -[SCMemoriesFeaturedStoryLocationMapViewModel initWithLocation:zoomLevel:selfBitmojiImage:] */

undefined1 *
FUN_107e7d128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fb720;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107e7d1e4; end: 107e7d207; -[SCMemoriesFeaturedStoryLocationMapViewModel copyWithZone:] */

undefined8 FUN_107e7d1e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e7d208; end: 107e7d29f; -[SCMemoriesFeaturedStoryLocationMapViewModel hash] */

undefined8 * FUN_107e7d208(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_107e7d354:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107e7d360;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107e7d360;
        }
        goto LAB_107e7d354;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_107e7d360:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 107e7d2a0; end: 107e7d37b; -[SCMemoriesFeaturedStoryLocationMapViewModel isEqual:] */

long FUN_107e7d2a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e7d354:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e7d360;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107e7d360;
        }
        goto LAB_107e7d354;
      }
    }
    lVar4 = 0;
  }
LAB_107e7d360:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107e7d37c; end: 107e7d383; -[SCMemoriesFeaturedStoryLocationMapViewModel location] */

undefined8 FUN_107e7d37c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107e7d384; end: 107e7d38b; -[SCMemoriesFeaturedStoryLocationMapViewModel zoomLevel] */

undefined8 FUN_107e7d384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107e7d38c; end: 107e7d393; -[SCMemoriesFeaturedStoryLocationMapViewModel selfBitmojiImage] */

undefined8 FUN_107e7d38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e7d394; end: 107e7d3c3; -[SCMemoriesFeaturedStoryLocationMapViewModel .cxx_destruct] */

void FUN_107e7d394(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107e7d3c4; end: 107e7d4bf; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo initWithCollectionId:thumbnailUrl:titleOverlayUrl:thumbnailUrlType:titleOverlayUrlType:thumbnailEncrypted:] */

undefined1 *
FUN_107e7d3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fb728;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
    *(undefined4 *)((long)puVar1 + 0x10) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107e7d4c0; end: 107e7d4e3; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo copyWithZone:] */

undefined8 FUN_107e7d4c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e7d4e4; end: 107e7d577; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo hash] */

undefined8 * FUN_107e7d4e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lStack_40 = (long)(int)*(undefined8 *)(param_1 + 0xc);
  lStack_38 = (long)(int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_58;
  uStack_48 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107e7d640:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107e7d64c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(int *)((long)puVar3 + 0xc) == *(int *)((long)param_3 + 0xc) &&
         (*(int *)(puVar3 + 2) == *(int *)(param_3 + 2))) &&
        (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[3];
      if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[5];
          if (puVar6 != (undefined8 *)param_3[5]) {
            func_0x00010c071ae0();
            goto LAB_107e7d64c;
          }
          goto LAB_107e7d640;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107e7d64c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107e7d578; end: 107e7d667; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo isEqual:] */

long FUN_107e7d578(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e7d640:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e7d64c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
         (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 0x10))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_107e7d64c;
          }
          goto LAB_107e7d640;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107e7d64c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e7d668; end: 107e7d66f; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo collectionId] */

undefined8 FUN_107e7d668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e7d670; end: 107e7d677; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo thumbnailUrl] */

undefined8 FUN_107e7d670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e7d678; end: 107e7d67f; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo titleOverlayUrl] */

undefined8 FUN_107e7d678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e7d680; end: 107e7d687; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo thumbnailUrlType] */

undefined4 FUN_107e7d680(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107e7d688; end: 107e7d68f; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo titleOverlayUrlType] */

undefined4 FUN_107e7d688(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 107e7d690; end: 107e7d697; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo thumbnailEncrypted] */

undefined1 FUN_107e7d690(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e7d698; end: 107e7d6d3; -[SCMemoriesFeaturedStoryThumbnailDownloadInfo .cxx_destruct] */

void FUN_107e7d698(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107e7d6d4; end: 107e7d73f; +[SCMemoriesFeaturedStoryDeeplinkInfo toFeaturedStoryWithCollectionId:] */

void FUN_107e7d6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2130;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e7d740; end: 107e7d7a3; +[SCMemoriesFeaturedStoryDeeplinkInfo toSnapWithSnapId:] */

void FUN_107e7d740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2130;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107e7d7a4; end: 107e7d7c7; -[SCMemoriesFeaturedStoryDeeplinkInfo copyWithZone:] */

undefined8 FUN_107e7d7a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e7d7c8; end: 107e7d83f; -[SCMemoriesFeaturedStoryDeeplinkInfo hash] */

void FUN_107e7d7c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126fb730;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e7d840; end: 107e7d883; -[SCMemoriesFeaturedStoryDeeplinkInfo internalInit] */

void FUN_107e7d840(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fb730;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e7d884; end: 107e7d93b; -[SCMemoriesFeaturedStoryDeeplinkInfo isEqual:] */

long FUN_107e7d884(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e7d914:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e7d920;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107e7d920;
        }
        goto LAB_107e7d914;
      }
    }
    lVar3 = 0;
  }
LAB_107e7d920:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e7d93c; end: 107e7d9bf; -[SCMemoriesFeaturedStoryDeeplinkInfo matchToSnap:toFeaturedStory:] */

void FUN_107e7d93c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_107e7d9a4;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_107e7d9a4;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_107e7d9a4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e7d9c0; end: 107e7d9ef; -[SCMemoriesFeaturedStoryDeeplinkInfo .cxx_destruct] */

void FUN_107e7d9c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107e7d9f0; end: 107e7da63; -[SCGrapheneMemoriesFtsMetric2 init] */

undefined1 * FUN_107e7d9f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb738;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e7da64; end: 107e7dadb;  */

void FUN_107e7da64(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110a10530,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107e7dadc; end: 107e7dbf7; -[SCMemoriesBadgeIcon initWithLength:iconType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107e7dadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126fb740;
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_70 = param_2;
  _objc_msgSendSuper2(uVar3,uVar4,uVar5,uVar6,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127709c4) = param_4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127709c8) = param_1;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127709cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127709cc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010be9d980(puVar1);
    func_0x00010be49280(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e7dbf8; end: 107e7dc8f; -[SCMemoriesBadgeIcon setCustomIconImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7dbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_1127709c4) == 1) {
    uVar1 = param_3;
    func_0x00010bfe9720(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127709cc),param_2,uVar1);
    _objc_release(uVar1);
    lVar2 = (long)_DAT_1127709d0;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e7dc90; end: 107e7dcb7; -[SCMemoriesBadgeIcon setCustomIconImageColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7dc90(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127709c4) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c216170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127709cc),PTR_s_setTintColor__112663280);
    return;
  }
  return;
}



/* Entry: 107e7dcb8; end: 107e7ddc3; -[SCMemoriesBadgeIcon _selectIconImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7dcb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + _DAT_1127709c4) == 2) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e84798;
  }
  else {
    if (*(long *)(param_1 + _DAT_1127709c4) != 3) {
      lVar4 = (long)_DAT_1127709d0;
      goto LAB_107e7dd3c;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110ec19d8;
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127709d0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
LAB_107e7dd3c:
  lVar4 = *(long *)(param_1 + lVar4);
  if (lVar4 != 0) {
    func_0x00010bfe9720(lVar4,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_1127709cc;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107e7ddc4; end: 107e7dfdf; -[SCMemoriesBadgeIcon _layoutIconImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7ddc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_1127709cc;
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar14));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_1127709c8;
  uVar9 = uVar8;
  func_0x00010bf49420(*(double *)(param_1 + lVar15) + -10.0);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(*(double *)(param_1 + lVar15) + -10.0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_1127709cc),PTR_s_setImage__1126481e8,0);
  return;
}



/* Entry: 107e7dfe0; end: 107e7dff3; -[SCMemoriesBadgeIcon invalidateImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7dfe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127709cc),PTR_s_setImage__1126481e8,0);
  return;
}



/* Entry: 107e7dff4; end: 107e7dff7; -[SCMemoriesBadgeIcon resetImage] */

void FUN_107e7dff4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__selectIconImage_112585008);
  return;
}



/* Entry: 107e7dff8; end: 107e7e02b; -[SCMemoriesBadgeIcon resetImageForIconType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7dff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c069f60();
  *(undefined8 *)(param_1 + _DAT_1127709c4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be9d990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__selectIconImage_112585008);
  return;
}



/* Entry: 107e7e02c; end: 107e7e03b; -[SCMemoriesBadgeIcon iconType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7e02c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127709c4);
}



/* Entry: 107e7e03c; end: 107e7e07b; -[SCMemoriesBadgeIcon .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7e03c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127709d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127709cc,0);
  return;
}



/* Entry: 107e7e07c; end: 107e7e10f; -[SCGalleryTabsCollectionViewCell initWithFrame:] */

undefined1 * FUN_107e7e07c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb748;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e7e110; end: 107e7e4eb; -[SCGalleryTabsCollectionViewCell setTabView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107e7e110(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
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
  _objc_retain(param_3);
  lVar18 = (long)_DAT_1127709d4;
  if (*(long *)(param_1 + lVar18) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar18);
    *(long *)(param_1 + lVar18) = param_3;
    _objc_release(uVar2);
    lVar17 = *(long *)(param_1 + lVar18);
    if (lVar17 != 0) {
      _objc_retain(lVar17);
      puStack_b8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b0 = 0x3032000000;
      uStack_a8 = 0x107e7e510;
      uStack_a0 = 0x107e7e520;
      uStack_98 = 0;
      func_0x00010c14cb20(lVar17);
      uVar3 = puStack_b8[5];
      _objc_retain();
      __Block_object_dispose(&uStack_c0,8);
      _objc_release(uStack_98);
      _objc_release(lVar17);
      func_0x00010c2115e0(uVar3);
      lVar17 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar17);
      func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_1 + lVar18);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar17;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar18);
      uStack_90 = uVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010bf4dce0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar18);
      uStack_88 = uVar9;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + lVar18);
      uStack_80 = uVar13;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar16);
      _objc_release(uVar15);
      _objc_release(lVar18);
      _objc_release(param_1);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(lVar5);
      _objc_release(lVar17);
      _objc_release(uVar4);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_c0,8);
  __Unwind_Resume();
  return *(long *)(param_3 + _DAT_1127709d4);
}



/* Entry: 107e7e4ec; end: 107e7e4fb; -[SCGalleryTabsCollectionViewCell tabView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7e4ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127709d4);
}



/* Entry: 107e7e4fc; end: 107e7e527; -[SCGalleryTabsCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7e4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127709d4,0);
  return;
}



/* Entry: 107e7e528; end: 107e7e59f;  */

void FUN_107e7e528(long param_1,ulong param_2,undefined1 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c3a88;
  _objc_opt_class(PTR_PTR_1126c3a88);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(ulong *)(lVar4 + 0x28) = param_2;
    _objc_release(uVar3);
    *param_3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107e7e5a0; end: 107e7e637; -[SCMemoriesLightGrayCollectionViewCell initWithFrame:] */

undefined1 * FUN_107e7e5a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fb750;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107e7e638; end: 107e7fbdf; -[SCMemoriesStoriesTabCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107e7e638(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b8 = PTR_PTR_1126fb758;
  puVar1 = &uStack_1c0;
  uStack_1c0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar32 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar34 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar35 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    lVar28 = (long)_DAT_1127709e0;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar28);
    *(undefined **)((long)puVar1 + lVar28) = puVar2;
    _objc_release(uVar25);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar28));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar25;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar17;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar18;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar20);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar18);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar17);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar25);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar4);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c13a140(0x4022000000000000,0x4022000000000000,0x4022000000000000,0x4022000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar3);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c219b60(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_d0 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010bf1ff80(uVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_c8 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c08de00(uVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    puStack_c0 = puVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(puVar13);
    _objc_release(uVar20);
    _objc_release(puVar14);
    _objc_release(puVar19);
    _objc_release(uVar18);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar17);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar25);
    _objc_release(puVar5);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    lVar26 = (long)_DAT_1127709e4;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined **)((long)puVar1 + lVar26) = puVar2;
    _objc_release(uVar25);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar26));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar28));
    uVar17 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar17;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar29 = (long)_DAT_1127709e8;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined8 *)((long)puVar1 + lVar29) = uVar25;
    _objc_release(uVar20);
    _objc_release(uVar18);
    _objc_release(uVar17);
    uVar17 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar17;
    func_0x00010bf49420(0x4057800000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar30 = (long)_DAT_1127709ec;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar30);
    *(undefined8 *)((long)puVar1 + lVar30) = uVar25;
    _objc_release(uVar18);
    _objc_release(uVar17);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar26));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar18;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar17;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar4;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar25;
    uStack_e0 = *(undefined8 *)((long)puVar1 + lVar29);
    uStack_d8 = *(undefined8 *)((long)puVar1 + lVar30);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar25);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar17);
    _objc_release(uVar20);
    _objc_release(uVar18);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    lVar31 = (long)_DAT_1127709f0;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar31);
    *(undefined **)((long)puVar1 + lVar31) = puVar2;
    _objc_release(uVar25);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar31));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar26));
    uVar17 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010bfe0660(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = (long)_DAT_1127709f4;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar30);
    *(undefined8 *)((long)puVar1 + lVar30) = uVar25;
    _objc_release(uVar20);
    _objc_release(uVar18);
    _objc_release(uVar17);
    uVar17 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010bfe0660(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = (long)_DAT_1127709f8;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined8 *)((long)puVar1 + lVar29) = uVar25;
    _objc_release(uVar20);
    _objc_release(uVar18);
    _objc_release(uVar17);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar31));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar17;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar25;
    uStack_100 = *(undefined8 *)((long)puVar1 + lVar30);
    uStack_f8 = *(undefined8 *)((long)puVar1 + lVar29);
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar25);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar17);
    _objc_release(uVar20);
    _objc_release(uVar18);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    lVar29 = (long)_DAT_1127709fc;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar2;
    _objc_release(uVar25);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar29));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar31));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar29));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar25;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar20;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar18;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_118 = uVar17;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar17);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar18);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar25);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    lVar27 = (long)_DAT_112770a00;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar27);
    *(undefined **)((long)puVar1 + lVar27) = puVar2;
    _objc_release(uVar25);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar26));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar27));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar20;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = uVar18;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar17;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar1 + lVar26);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar12;
    func_0x00010bf49520(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_138 = uVar25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar25);
    _objc_release(uVar21);
    _objc_release(uVar12);
    _objc_release(uVar17);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar18);
    _objc_release(uVar4);
    _objc_release(uVar20);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    lVar31 = (long)_DAT_112770a04;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar31);
    *(undefined **)((long)puVar1 + lVar31) = puVar2;
    _objc_release(uVar25);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar31));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar31));
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar31));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar31));
    func_0x00010c1c83a0(0x3fe8787878787878,*(undefined8 *)((long)puVar1 + lVar31));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar27));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar31));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = uVar20;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = uVar18;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar21;
    func_0x00010bf49500();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = uVar17;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar23;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_150 = uVar25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar25);
    _objc_release(uVar23);
    _objc_release(uVar17);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar18);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar20);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    lVar30 = (long)_DAT_112770a08;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar30);
    *(undefined **)((long)puVar1 + lVar30) = puVar2;
    _objc_release(uVar25);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar28));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar30));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = uVar20;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = uVar18;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar21;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = uVar17;
    uVar22 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar22;
    func_0x00010bf49420(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_170 = uVar25;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar25);
    _objc_release(uVar22);
    _objc_release(uVar17);
    _objc_release(uVar21);
    _objc_release(uVar18);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar20);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    lVar29 = (long)_DAT_112770a0c;
    uVar25 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar2;
    _objc_release(uVar25);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar26));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar29));
    uVar17 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar17;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar26 = (long)_DAT_112770a10;
    uVar20 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = uVar25;
    _objc_release(uVar20);
    _objc_release(uVar18);
    _objc_release(uVar17);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_1b0 = *(undefined8 *)((long)puVar1 + lVar26);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a8 = uVar25;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a0 = uVar18;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar21;
    func_0x00010bf49420(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_198 = uVar17;
    uVar22 = *(undefined8 *)((long)puVar1 + lVar29);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_190 = uVar20;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar15);
    _objc_release(uVar20);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar17);
    _objc_release(uVar21);
    _objc_release(uVar18);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar25);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  return puVar3;
}



/* Entry: 107e7fbe0; end: 107e7fbe7; +[SCMemoriesStoriesTabCell cellHeightForViewModel:] */

undefined8 FUN_107e7fbe0(void)

{
  return 0;
}



/* Entry: 107e7fbe8; end: 107e7fbef; +[SCMemoriesStoriesTabCell actionMenuHeightForPage:] */

undefined8 FUN_107e7fbe8(void)

{
  return 0;
}



/* Entry: 107e7fbf0; end: 107e7fbf3; -[SCMemoriesStoriesTabCell setViewModel:offset:selectMode:disableMode:snapThumbnailGenerator:editDataMutator:encryptedContentManager:cachingMediaManager:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:] */

void FUN_107e7fbf0(void)

{
  return;
}



/* Entry: 107e7fbf4; end: 107e7fd77; -[SCMemoriesStoriesTabCell animateLongTapForTouchLocation:reverse:] */

void FUN_107e7fbf4(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_70 [8];
  double dStack_68;
  double dStack_60;
  undefined1 auStack_58 [8];
  
  dVar3 = 0.95;
  dVar6 = 1.0;
  if (param_6 == 0) {
    dVar6 = dVar3;
  }
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar4 = dVar3;
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(puVar1);
  uVar2 = param_4;
  func_0x00010bf4b2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(uVar2);
  dVar5 = dVar6;
  if (dVar3 - param_3 < dVar4) {
    dVar4 = 1.0 - dVar6;
    dVar3 = dVar4 * (dVar3 - param_3);
    uVar2 = param_4;
    func_0x00010bf4b2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetHeight();
    dVar5 = 1.0 - dVar3 / dVar4;
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_58,param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_70,auStack_58);
  dStack_68 = dVar6;
  dStack_60 = dVar5;
  func_0x00010bf03400(0x3fc999999999999a,puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107e7fd78; end: 107e7fdf3;  */

void FUN_107e7fd78(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [48];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CGAffineTransformMakeScale
              (auStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    lVar2 = lVar1;
    func_0x00010bf4b2a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107e7fdf4; end: 107e7fdf7; -[SCMemoriesStoriesTabCell setSelected:selectOverlayImage:snapIds:] */

void FUN_107e7fdf4(void)

{
  return;
}



/* Entry: 107e7fdf8; end: 107e7fdfb; -[SCMemoriesStoriesTabCell setSelectionOrderNumber:orderNumbersBySnapId:] */

void FUN_107e7fdf8(void)

{
  return;
}



/* Entry: 107e7fdfc; end: 107e7fe03; -[SCMemoriesStoriesTabCell interactionMode] */

undefined8 FUN_107e7fdfc(void)

{
  return 0;
}



/* Entry: 107e7fe04; end: 107e7fe07; -[SCMemoriesStoriesTabCell setSelectMode:] */

void FUN_107e7fe04(void)

{
  return;
}



/* Entry: 107e7fe08; end: 107e7fe0f; -[SCMemoriesStoriesTabCell canSelectAtPoint:] */

undefined8 FUN_107e7fe08(void)

{
  return 0;
}



/* Entry: 107e7fe10; end: 107e7fe93; -[SCMemoriesStoriesTabCell setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7fe10(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + _DAT_1127709d8) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127709d8) = (char)param_3;
  uVar2 = 0x3fe0000000000000;
  if (param_3 == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  lVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setUserInteractionEnabled__112665468,param_3 ^ 1);
  return;
}



/* Entry: 107e7fe94; end: 107e7fe97; -[SCMemoriesStoriesTabCell startGeneratingUpdates] */

void FUN_107e7fe94(void)

{
  return;
}



/* Entry: 107e7fe98; end: 107e7fe9b; -[SCMemoriesStoriesTabCell stopGeneratingUpdates] */

void FUN_107e7fe98(void)

{
  return;
}



/* Entry: 107e7fe9c; end: 107e7feab; -[SCMemoriesStoriesTabCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107e7fe9c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127709d8);
}



/* Entry: 107e7feac; end: 107e7febb; -[SCMemoriesStoriesTabCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7feac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770a14);
}



/* Entry: 107e7febc; end: 107e7fecb; -[SCMemoriesStoriesTabCell type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7febc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127709dc);
}



/* Entry: 107e7fecc; end: 107e7fedb; -[SCMemoriesStoriesTabCell setType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7fecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127709dc) = param_3;
  return;
}



/* Entry: 107e7fedc; end: 107e7feeb; -[SCMemoriesStoriesTabCell editDataMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7fedc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770a18);
}



/* Entry: 107e7feec; end: 107e7fefb; -[SCMemoriesStoriesTabCell encryptedContentManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7feec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770a1c);
}



/* Entry: 107e7fefc; end: 107e7ff0b; -[SCMemoriesStoriesTabCell cachingMediaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7fefc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770a20);
}



/* Entry: 107e7ff0c; end: 107e7ff1b; -[SCMemoriesStoriesTabCell memoriesEntrySyncStatusGeneratorBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7ff0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770a24);
}



/* Entry: 107e7ff1c; end: 107e7ff2b; -[SCMemoriesStoriesTabCell containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7ff1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127709e0);
}



/* Entry: 107e7ff2c; end: 107e7ff3b; -[SCMemoriesStoriesTabCell imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7ff2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127709fc);
}



/* Entry: 107e7ff3c; end: 107e7ff4b; -[SCMemoriesStoriesTabCell imageWrapperView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7ff3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127709f0);
}



/* Entry: 107e7ff4c; end: 107e7ff5b; -[SCMemoriesStoriesTabCell headerContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7ff4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127709e4);
}



/* Entry: 107e7ff5c; end: 107e7ff6b; -[SCMemoriesStoriesTabCell labelsContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7ff5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770a00);
}



/* Entry: 107e7ff6c; end: 107e7ff7b; -[SCMemoriesStoriesTabCell titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7ff6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770a04);
}



/* Entry: 107e7ff7c; end: 107e7ff8b; -[SCMemoriesStoriesTabCell subtitleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7ff7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770a0c);
}


