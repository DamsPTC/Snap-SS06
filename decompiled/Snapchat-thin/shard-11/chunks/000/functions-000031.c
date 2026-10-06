/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10807a78c; end: 10807a8cf; -[SCLongformShowOperaDataModelBuilder .cxx_destruct] */

void FUN_10807a78c(long param_1)

{
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10807a8d0; end: 10807a993; +[SCLongformShowSnapOperaDataModel longformSnapWithUniqueIdentifier:editionId:longformSnap:] */

void FUN_10807a8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c9a80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10807a994; end: 10807aa5f; +[SCLongformShowSnapOperaDataModel publisherSnapWithUniqueIdentifier:editionId:publisherSnap:] */

void FUN_10807a994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c9a80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10807aa60; end: 10807aa83; -[SCLongformShowSnapOperaDataModel copyWithZone:] */

undefined8 FUN_10807aa60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10807aa84; end: 10807ab2b; -[SCLongformShowSnapOperaDataModel hash] */

void FUN_10807aa84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126fc430;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807ab2c; end: 10807ab6f; -[SCLongformShowSnapOperaDataModel internalInit] */

void FUN_10807ab2c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fc430;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807ab70; end: 10807ac87; -[SCLongformShowSnapOperaDataModel isEqual:] */

long FUN_10807ab70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10807ac60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10807ac6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_10807ac6c;
                }
                goto LAB_10807ac60;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10807ac6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10807ac88; end: 10807ad23; -[SCLongformShowSnapOperaDataModel matchLongformSnap:publisherSnap:] */

void FUN_10807ac88(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10807ad08;
    lVar2 = 0x38;
    lVar3 = 0x30;
    lVar4 = 0x28;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10807ad08;
    lVar2 = 0x20;
    lVar3 = 0x18;
    lVar4 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_1 + lVar4),*(undefined8 *)(param_1 + lVar3),
             *(undefined8 *)(param_1 + lVar2));
LAB_10807ad08:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10807ad24; end: 10807ad83; -[SCLongformShowSnapOperaDataModel .cxx_destruct] */

void FUN_10807ad24(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10807ad84; end: 10807adcf; +[SCCheckInHelpers legacyRankingSignalsWithLocation:] */

void FUN_10807ad84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d90c0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  FUN_10807add0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10807add0; end: 10807ae7f;  */

void FUN_10807add0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b6728;
  func_0x00010bf60d80(PTR_PTR_1126b6728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225980(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c2a5520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c1b0220(param_1);
  _objc_release(uVar2);
  if (param_2 != 0) {
    func_0x00010bf01f00(param_2);
    func_0x00010c167980(param_1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10807ae80; end: 10807aecb; +[SCCheckInHelpers rankingSignalsWithLocation:] */

void FUN_10807ae80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d90c8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  FUN_10807add0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10807aecc; end: 10807af3f; -[SCPreviewFeatureSnapCropServices initWithSnapCrop:] */

undefined1 * FUN_10807aecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc438;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10807af40; end: 10807af47; -[SCPreviewFeatureSnapCropServices snapCrop] */

undefined8 FUN_10807af40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10807af48; end: 10807af53; -[SCPreviewFeatureSnapCropServices .cxx_destruct] */

void FUN_10807af48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10807af54; end: 10807b103; -[SCPreviewSendFlowRequestAndInviteHandler initWithConfiguration:previewScopeServices:pollsCreationManager:kronosCalendarServices:creativeToolsABProvider:composerServices:shareYoursClient:] */

undefined1 *
FUN_10807af54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fc440;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10807b104; end: 10807b10f; -[SCPreviewSendFlowRequestAndInviteHandler setPreviewViewControllerGallery:] */

void FUN_10807b104(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 10807b110; end: 10807b13f; -[SCPreviewSendFlowRequestAndInviteHandler setInfoStickerFeature:] */

void FUN_10807b110(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10807b140; end: 10807b16f; -[SCPreviewSendFlowRequestAndInviteHandler setPrivateStoryInviteStickerFeature:] */

void FUN_10807b140(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10807b170; end: 10807b19f; -[SCPreviewSendFlowRequestAndInviteHandler setPollsStickerFeature:] */

void FUN_10807b170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10807b1a0; end: 10807b1cf; -[SCPreviewSendFlowRequestAndInviteHandler setSendingFeature:] */

void FUN_10807b1a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10807b1d0; end: 10807b1ff; -[SCPreviewSendFlowRequestAndInviteHandler setMultiSnapFeature:] */

void FUN_10807b1d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10807b200; end: 10807b377; -[SCPreviewSendFlowRequestAndInviteHandler handleRequestAndInviteFeaturesWithRecipientIds:storiesPostingConfig:businessIdsCount:fullMediaContentBounds:sendSnapBlock:] */

void FUN_10807b200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  uVar2 = param_10;
  _objc_retain(param_10);
  _dispatch_group_create();
  lVar3 = param_5;
  func_0x00010bebc8e0();
  if ((int)lVar3 != 0) {
    func_0x00010bfd21c0(param_5);
  }
  iVar1 = (int)*(undefined8 *)(param_5 + 0x28);
  func_0x00010bfda620();
  if (iVar1 != 0) {
    func_0x00010bfd1f40(param_5);
  }
  iVar1 = (int)*(undefined8 *)(param_5 + 0x18);
  func_0x00010bfd7f00();
  if (iVar1 != 0) {
    func_0x00010bfd22e0(param_5);
  }
  iVar1 = (int)*(undefined8 *)(param_5 + 0x18);
  func_0x00010bfd7f00();
  if (iVar1 != 0) {
    func_0x00010bfd2800(param_5);
  }
  lVar3 = param_5;
  func_0x00010bebc8c0();
  if ((int)lVar3 != 0) {
    func_0x00010bfd1e80(param_5);
  }
  iVar1 = (int)*(undefined8 *)(param_5 + 0x18);
  func_0x00010bfd7f00();
  if (iVar1 != 0) {
    func_0x00010bfd2760(param_5);
  }
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10807b378;
  puStack_88 = &UNK_110a19a90;
  lStack_80 = param_5;
  uStack_78 = param_10;
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  _objc_retain(param_10);
  func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_a0);
  _objc_release(uStack_78);
  _objc_release(param_10);
  _objc_release(uVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 10807b378; end: 10807b3eb;  */

void FUN_10807b378(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c15ba60(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c08f640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77600();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10807b3ec; end: 10807b3ef; -[SCPreviewSendFlowRequestAndInviteHandler handleSnapRequestStickerSendWithRecipientIds:dispatchGroup:] */

void FUN_10807b3ec(void)

{
  return;
}



/* Entry: 10807b3f0; end: 10807b3f3; -[SCPreviewSendFlowRequestAndInviteHandler handleSnapRequestStickerReplyWithDispatchGroup:] */

void FUN_10807b3f0(void)

{
  return;
}



/* Entry: 10807b3f4; end: 10807b533; -[SCPreviewSendFlowRequestAndInviteHandler handlePrivateStoryInviteStickerSendWithDispatchGroup:] */

void FUN_10807b3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _dispatch_group_enter(param_3);
  puVar2 = PTR_PTR_1126ae790;
  lVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10807b534; end: 10807b633;  */

void FUN_10807b534(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    _dispatch_group_create();
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    _objc_retain(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    func_0x00010c1830a0(uVar3);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10807b634; end: 10807b68b;  */

bool FUN_10807b634(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 6) {
    lVar2 = param_2;
    func_0x00010bfee000(param_2);
    bVar1 = lVar2 == 10;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10807b68c; end: 10807b8bf;  */

void FUN_10807b68c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10807b8c0;
    uStack_70 = 0x10807b8d0;
    uStack_68 = 0;
    func_0x00010c280560(param_3);
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (lVar3 == 0) {
      _dispatch_group_enter(*(undefined8 *)(param_1 + 0x20));
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      _objc_retain(param_3);
      _objc_retain(param_2);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      func_0x00010bf59360(uVar5);
      _dispatch_group_wait(*(undefined8 *)(param_1 + 0x20),0xffffffffffffffff);
      lVar4 = puStack_88[5];
      _objc_retain(lVar4);
      _objc_release(uVar6);
      _objc_release(param_2);
      param_1 = param_3;
    }
    else {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      lVar4 = param_1;
      func_0x00010bee0f80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_1);
    _objc_release(lVar3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10807b8c0; end: 10807b8d7;  */

void FUN_10807b8c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10807b8d8; end: 10807ba5b;  */

void FUN_10807b8d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c259fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  FUN_10841fa68(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25a5c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27dd80();
  iVar1 = (int)uVar3;
  uVar3 = 3;
  if ((iVar1 == -0x4524111 || iVar1 == 2) || iVar1 == 0) {
    uVar3 = 0;
  }
  func_0x000108e9bb40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d360(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108e9f190(uVar3,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10807ba5c; end: 10807bca7; -[SCPreviewSendFlowRequestAndInviteHandler _updateStoryInviteSticker:ephemeralMedia:usingAlreadyCreatedStoryInvite:] */

void FUN_10807ba5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0846e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c259fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  uVar2 = uVar4;
  func_0x00010c259cc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c06a860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x000108e9f190(param_3,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c259fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  FUN_10841fa68(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar7;
  func_0x00010c259cc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c06a860(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c25a5c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c27dd80();
  iVar1 = (int)uVar9;
  if (((iVar1 == -0x4524111) || (iVar1 == 2)) || (iVar1 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 3;
  }
  func_0x000108e9bb40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d360(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10807bca8; end: 10807be53; -[SCPreviewSendFlowRequestAndInviteHandler handleAutoSaveIfRequired:recipientsCount:businessIdsCount:] */

void FUN_10807bca8(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  func_0x00010c105440(param_3);
  func_0x00010c105460(param_3);
  lVar2 = lVar1;
  func_0x00010c22e160();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  uVar3 = param_3;
  func_0x00010beffdc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf62100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || ((int)lVar2 != 0)) {
    lVar2 = lVar4;
    func_0x000100504554(lVar4,&PTR___NSConcreteGlobalBlock_110a19b40);
    lVar1 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar1);
    puVar5 = PTR_PTR_1126d4c58;
    _objc_alloc(PTR_PTR_1126d4c58);
    func_0x00010bff5dc0();
    func_0x00010bf11c40(lVar1);
    _objc_release(puVar5);
    _objc_release(lVar1);
    if ((param_4 == 0) && ((uVar3 = param_3, FUN_10846b590(), param_5 == 0 && ((uVar3 & 1) == 0))))
    {
      func_0x00010be17c60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c29a0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c29ae80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b460();
      _objc_release(lVar6);
      _objc_release(lVar1);
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10807be54; end: 10807be5f;  */

void FUN_10807be54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5070;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(param_2);
  func_0x00010c1143e0(param_2);
  func_0x00010c075620(param_2);
  uVar3 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c03bfc0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10807be60; end: 10807c03f; -[SCPreviewSendFlowRequestAndInviteHandler handlePollsSticker:] */

void FUN_10807be60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010be17c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf9b3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1deb80(*(undefined8 *)(param_1 + 0x28));
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010c15e020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dea00();
    _objc_release(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    _dispatch_group_enter(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c1032a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    func_0x00010bf58380(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10807c040; end: 10807c13b;  */

void FUN_10807c040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10807c13c;
  puStack_70 = &UNK_110871ae8;
  _objc_retain(param_2);
  uStack_68 = param_2;
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  uStack_48 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 10807c13c; end: 10807c1df;  */

void FUN_10807c13c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1deac0(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c2242c0(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x40));
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c15e020();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1dea00();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10807c1e0; end: 10807c2fb; -[SCPreviewSendFlowRequestAndInviteHandler handleQuestionSticker] */

void FUN_10807c1e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c255440(uVar1,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bb2f8;
  _objc_opt_class(PTR_PTR_1126bb2f8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    uVar5 = uVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08fa60();
    _objc_release(uVar5);
    if (uVar6 != 0) {
      func_0x00010c15e020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26b700(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e6540(param_1);
      _objc_release(uVar3);
      _objc_release(param_1);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10807c2fc; end: 10807c40b; -[SCPreviewSendFlowRequestAndInviteHandler handleSnapMeSticker] */

void FUN_10807c2fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c255440(lVar1,param_2,0x17);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010010fab4();
  lVar1 = lVar3;
  if ((int)lVar4 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  if (lVar1 != 0) {
    lVar4 = lVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      func_0x00010c15e020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26b700(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204d80(param_1);
      _objc_release(lVar3);
      _objc_release(param_1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10807c40c; end: 10807c51b; -[SCPreviewSendFlowRequestAndInviteHandler handlePlanStickerCreateAndInviteWithRecipientIds:dispatchGroup:] */

void FUN_10807c40c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x48) != 0) {
    _dispatch_group_enter(param_4);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10807c51c; end: 10807c603;  */

void FUN_10807c51c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c1830a0(uVar2);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10807c604; end: 10807c65b;  */

bool FUN_10807c604(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 6) {
    lVar2 = param_2;
    func_0x00010bfee000(param_2);
    bVar1 = lVar2 == 0x16;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10807c65c; end: 10807cbc7;  */

void FUN_10807c65c(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar12 = param_3;
  if (param_1 == 0) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c280560(param_3);
    func_0x00010c0df780(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = param_3;
      func_0x00010c0846e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010c0fdf20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      ppuVar4 = ppuVar6;
      func_0x00010bf99f40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar3 = ppuVar4;
      }
      _objc_retain();
      _objc_release();
      puStack_90 = &uStack_98;
      uStack_98 = 0;
      uStack_88 = 0x3032000000;
      pcStack_80 = FUN_10807b8c0;
      uStack_78 = 0x10807b8d0;
      uStack_70 = 0;
      puStack_c0 = &uStack_c8;
      uStack_c8 = 0;
      uStack_b8 = 0x3032000000;
      pcStack_b0 = FUN_10807b8c0;
      uStack_a8 = 0x10807b8d0;
      puStack_a0 = PTR____NSArray0__struct_11034ab48;
      _dispatch_group_create();
      _dispatch_group_enter();
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      ppuVar5 = ppuVar6;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c251160();
      ppuVar11 = ppuVar6;
      func_0x00010c09f7c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c27e340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06bea0();
      ppuVar8 = ppuVar6;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a200();
      _objc_retain(ppuVar4);
      func_0x00010bf57980(uVar10);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(ppuVar11);
      _objc_release(ppuVar5);
      _objc_retain(ppuVar3);
      uVar10 = 0;
      _dispatch_time(0,5000000000);
      ppuVar5 = ppuVar4;
      _dispatch_group_wait(ppuVar4,uVar10);
      ppuVar11 = ppuVar3;
      if (ppuVar5 == (undefined **)0x0) {
        lVar9 = puStack_90[5];
        func_0x00010c08fa60();
        if (lVar9 != 0) {
          ppuVar11 = (undefined **)puStack_90[5];
          _objc_retain(ppuVar11);
          _objc_release(ppuVar3);
        }
      }
      ppuVar5 = ppuVar11;
      func_0x00010c08fa60();
      if (ppuVar5 == (undefined **)0x0) {
        _objc_retain(param_3);
      }
      else {
        func_0x00010be9f5a0(param_1);
        ppuVar5 = (undefined **)PTR_PTR_1126d90d0;
        func_0x00010c0fdf60();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (ppuVar5 != (undefined **)0x0) {
          func_0x00010c280560(param_3);
          func_0x00010c0df780(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_4);
          _objc_release(puVar1);
          ppuVar12 = ppuVar5;
        }
        _objc_retain(ppuVar12);
        _objc_release(ppuVar5);
      }
      _objc_release(ppuVar11);
      _objc_release(ppuVar4);
      _objc_release(ppuVar4);
      __Block_object_dispose(&uStack_c8,8);
      _objc_release(puStack_a0);
      __Block_object_dispose(&uStack_98,8);
      _objc_release(uStack_70);
      _objc_release(ppuVar3);
    }
    else {
      ppuVar3 = ppuVar2;
      func_0x00010c0846e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar5;
      func_0x00010c0fdf20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar11;
      func_0x00010bf99f40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      ppuVar3 = (undefined **)PTR_PTR_1126d90d0;
      func_0x00010c0fdf60();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar12 = ppuVar3;
      }
      _objc_retain(ppuVar12);
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar2);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return;
}



/* Entry: 10807cbc8; end: 10807cc57;  */

void FUN_10807cbc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10807cc58; end: 10807cde7; -[SCPreviewSendFlowRequestAndInviteHandler _sendKronosEventShareForEventId:recipientIds:] */

void FUN_10807cc58(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if ((lVar2 != 0) && (lVar2 = param_4, func_0x00010bf529e0(), lVar2 != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
    func_0x00010c07a200();
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x58);
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      if (lVar2 != 0) {
        lVar3 = param_4;
        func_0x00010bf51e00();
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        uStack_50 = 0x10807cd78;
        puStack_48 = &UNK_11096b7e8;
        _objc_retain(param_3);
        lStack_40 = param_3;
        lStack_38 = lVar3;
        _objc_retain(lVar3);
        func_0x00010bfc69a0(lVar2,param_2,&puStack_60);
        _objc_release(lStack_38);
        _objc_release(lStack_40);
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10807cde8; end: 10807cec7; -[SCPreviewSendFlowRequestAndInviteHandler handleShareYoursStickerSendWithDispatchGroup:] */

void FUN_10807cde8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _dispatch_group_enter(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10807cec8; end: 10807cf8f;  */

void FUN_10807cec8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    func_0x00010c1830a0(uVar2);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10807cf90; end: 10807cfe7;  */

bool FUN_10807cf90(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c27dd80();
  if (lVar2 == 6) {
    lVar2 = param_2;
    func_0x00010bfee000(param_2);
    bVar1 = lVar2 == 0x18;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10807cfe8; end: 10807d4bb;  */

void FUN_10807cfe8(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  ppuVar13 = param_3;
  if (param_1 == 0) {
    _objc_retain(param_3);
    goto LAB_10807d45c;
  }
  ppuVar1 = param_3;
  func_0x00010c0846e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfedf20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c22b4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar4;
  func_0x00010c22b440();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (ppuVar2 == (undefined **)0x0) {
    func_0x00010c280560(param_3);
    func_0x00010c0df780(puVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (lVar6 == 0) {
      lVar10 = *(long *)(param_1 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar10 == 0) {
        _objc_retain(param_3);
      }
      else {
        ppuVar2 = ppuVar4;
        func_0x00010c118940();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar1 = ppuVar2;
        }
        _objc_retain(ppuVar1);
        _objc_release();
        puStack_88 = &uStack_90;
        uStack_90 = 0;
        uStack_80 = 0x3032000000;
        pcStack_78 = FUN_10807b8c0;
        uStack_70 = 0x10807b8d0;
        uStack_68 = 0;
        _dispatch_group_create();
        _dispatch_group_enter();
        lVar12 = lVar10;
        func_0x00010bf58e00(lVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(ppuVar2);
        func_0x00010c25ff60(lVar12);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar12);
        uVar11 = 0;
        _dispatch_time(0,5000000000);
        ppuVar3 = ppuVar2;
        _dispatch_group_wait(ppuVar2,uVar11);
        if (ppuVar3 == (undefined **)0x0) {
          lVar12 = puStack_88[5];
          func_0x00010c08fa60();
          if (lVar12 == 0) goto LAB_10807d358;
          func_0x00010c1fef20(param_2);
          ppuVar3 = (undefined **)PTR_PTR_1126d90d0;
          func_0x00010c22b520();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (ppuVar3 != (undefined **)0x0) {
            func_0x00010c280560(param_3);
            func_0x00010c0df780(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_4);
            _objc_release(puVar5);
            ppuVar13 = ppuVar3;
          }
          _objc_retain(ppuVar13);
          _objc_release(ppuVar3);
        }
        else {
LAB_10807d358:
          _objc_retain(param_3);
        }
        _objc_release(ppuVar2);
        _objc_release(ppuVar2);
        __Block_object_dispose(&uStack_90,8);
        _objc_release(uStack_68);
        _objc_release(ppuVar1);
      }
    }
    else {
      lVar12 = lVar6;
      func_0x00010c0846e0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar12;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c22b4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c22b440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar12);
      func_0x00010c1fef20(param_2);
      ppuVar1 = (undefined **)PTR_PTR_1126d90d0;
      func_0x00010c22b520();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar1 != (undefined **)0x0) {
        ppuVar13 = ppuVar1;
      }
      _objc_retain(ppuVar13);
      _objc_release(ppuVar1);
    }
    _objc_release(lVar10);
    _objc_release(lVar6);
  }
  else {
    ppuVar1 = ppuVar4;
    func_0x00010c22b440(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fef20(param_2);
    _objc_release(ppuVar1);
    _objc_retain(param_3);
  }
  _objc_release(ppuVar4);
LAB_10807d45c:
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 10807d4bc; end: 10807d563;  */

void FUN_10807d4bc(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10807d52c;
  puStack_30 = &UNK_110842b58;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c0800(param_2,param_2,&puStack_48,&PTR___NSConcreteGlobalBlock_110a19c30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10807d564; end: 10807d567;  */

void FUN_10807d564(void)

{
  return;
}



/* Entry: 10807d568; end: 10807d5bb; -[SCPreviewSendFlowRequestAndInviteHandler sendingEphemeralMediaList] */

void FUN_10807d568(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010010fab4();
  uVar1 = uVar2;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10807d5bc; end: 10807d647; -[SCPreviewSendFlowRequestAndInviteHandler _firstEphemeralMedia] */

void FUN_10807d5bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c15e020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf98360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010010fab4();
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10807d648; end: 10807d70f; -[SCPreviewSendFlowRequestAndInviteHandler _snapContainsStoryInviteSticker] */

undefined4 FUN_10807d648(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar4 = lVar7;
  func_0x00010c1143a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010010fab4();
  uVar1 = uVar5;
  if ((int)uVar6 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c233c60();
  _objc_release(lVar7);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar6 = uVar1;
    func_0x00010c2529e0(uVar1);
    uVar3 = (undefined4)uVar6;
  }
  if (lVar4 != 0) {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10807d710; end: 10807d7a3; -[SCPreviewSendFlowRequestAndInviteHandler _snapContainsPlanSticker] */

uint FUN_10807d710(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfd7f00(uVar3,param_2,0x16);
  uVar1 = (uint)uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0d2440();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010010fab4();
  uVar3 = uVar4;
  if ((int)uVar5 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c233c60();
  if (iVar2 != 0) {
    uVar5 = uVar3;
    func_0x00010c2529e0(uVar3);
    uVar1 = (uint)uVar5 | uVar1;
  }
  _objc_release(uVar3);
  return uVar1 & 1;
}



/* Entry: 10807d7a4; end: 10807d85f; -[SCPreviewSendFlowRequestAndInviteHandler .cxx_destruct] */

void FUN_10807d7a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
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



/* Entry: 10807d860; end: 10807d983; +[SCStickerSendUtilities planStickerStateFromState:withEventId:] */

void FUN_10807d860(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfee000();
  if (lVar1 == 0x16) {
    lVar1 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0cc0c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0fdf20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197860();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010bec2ba0(param_1,param_2,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10807d984; end: 10807daa7; +[SCStickerSendUtilities shareYoursStickerStateFromState:withShareYoursId:] */

void FUN_10807d984(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfee000();
  if (lVar1 == 0x18) {
    lVar1 = param_3;
    func_0x00010c0846e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0cc0c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfedf20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c22b4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fef20();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010bec2ba0(param_1,param_2,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10807daa8; end: 10807dd23; +[SCStickerSendUtilities _stickerStateFromState:withItemInstance:] */

void FUN_10807daa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc();
  uVar2 = param_5;
  func_0x00010c27dd80();
  uVar3 = param_5;
  func_0x00010bfee000();
  uVar4 = param_5;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010bf377a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010bf5d7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1281e0(param_5);
  uVar13 = param_1;
  uVar16 = param_2;
  func_0x00010bf345e0(param_5);
  uVar14 = uVar13;
  func_0x00010c141a80(param_5);
  uVar15 = uVar14;
  func_0x00010c14e120(param_5);
  uVar7 = param_5;
  func_0x00010c269880();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010c081660();
  func_0x00010c081160();
  uVar9 = param_5;
  func_0x00010c2790e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010bfedfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06c000();
  func_0x00010c280560();
  func_0x00010c073260();
  uVar11 = param_5;
  func_0x00010bf06320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c263180();
  uVar12 = param_5;
  func_0x00010bf8c1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c055c20(param_1,param_2,uVar13,uVar16,uVar14,uVar15,puVar1,param_4,uVar2,uVar3,uVar4,
                      uVar5,uVar6,param_6,uVar7,(char)uVar8);
  _objc_release(param_6);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10807dd24; end: 10807dd97; -[SCPreviewFeatureMultiSnapServices initWithMultiSnap:] */

undefined1 * FUN_10807dd24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc448;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10807dd98; end: 10807dd9f; -[SCPreviewFeatureMultiSnapServices multiSnap] */

undefined8 FUN_10807dd98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10807dda0; end: 10807ddab; -[SCPreviewFeatureMultiSnapServices .cxx_destruct] */

void FUN_10807dda0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10807ddac; end: 10807de1f; -[SCPreviewFeaturePollsStickerServices initWithPollsSticker:] */

undefined1 * FUN_10807ddac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc450;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10807de20; end: 10807de27; -[SCPreviewFeaturePollsStickerServices pollsSticker] */

undefined8 FUN_10807de20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10807de28; end: 10807de33; -[SCPreviewFeaturePollsStickerServices .cxx_destruct] */

void FUN_10807de28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10807de34; end: 10807dea7; -[SCPreviewFeaturePrivateStoryInviteStickerServices initWithPrivateStoryInviteSticker:] */

undefined1 * FUN_10807de34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10807dea8; end: 10807deaf; -[SCPreviewFeaturePrivateStoryInviteStickerServices privateStoryInviteSticker] */

undefined8 FUN_10807dea8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10807deb0; end: 10807debb; -[SCPreviewFeaturePrivateStoryInviteStickerServices .cxx_destruct] */

void FUN_10807deb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10807debc; end: 10807df4f;  */

ulong FUN_10807debc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010befc200();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010befc240(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 == 0) && (uVar2 = param_1, func_0x00010c077e60(), (uVar2 & 1) == 0)) {
      uVar2 = param_1;
      func_0x00010befc300(param_1);
    }
    else {
      uVar2 = 1;
    }
    _objc_release(uVar1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10807df50; end: 10807dfab;  */

bool FUN_10807df50(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c077de0();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010c1322e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10807dfac; end: 10807e037;  */

bool FUN_10807dfac(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c077de0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c1322e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      uVar3 = param_1;
      func_0x00010c1322c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar3 != 0;
      _objc_release();
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 10807e038; end: 10807e0ab; -[SCMaxGroupSizeAlertView initWithGroupsDataMutator:] */

undefined1 * FUN_10807e038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc460;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10807e0ac; end: 10807e287; -[SCMaxGroupSizeAlertView presentMaxGroupSizeAlertViewForGroup:] */

undefined * FUN_10807e0ac(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be5dc20();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed3b78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ed3b78,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126af4d8;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ed3b98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ed3b98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  puVar6 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c235c00();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010c06ecc0();
  puVar6 = *(undefined **)(puVar2 + 8);
  func_0x00010c269d40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010c0c2920();
  }
  else {
    func_0x00010c0c2900();
  }
  _objc_release(puVar6);
  return puVar2;
}



/* Entry: 10807e288; end: 10807e2e3; -[SCMaxGroupSizeAlertView _maxGroupSizeWithGroup:] */

undefined8 FUN_10807e288(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c06ecc0();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if ((param_3 & 1) == 0) {
    func_0x00010c0c2920();
  }
  else {
    func_0x00010c0c2900();
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10807e2e4; end: 10807e2ef; -[SCMaxGroupSizeAlertView .cxx_destruct] */

void FUN_10807e2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10807e2f0; end: 10807e31b; +[SCGrapheneSendToMetric sendToRenderFinish] */

void FUN_10807e2f0(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e31c; end: 10807e347; +[SCGrapheneSendToMetric sendToLoadFinish] */

void FUN_10807e31c(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e348; end: 10807e373; +[SCGrapheneSendToMetric previewQuickSendRepeated] */

void FUN_10807e348(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e374; end: 10807e39f; +[SCGrapheneSendToMetric sendToAvailableSections] */

void FUN_10807e374(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e3a0; end: 10807e3cb; +[SCGrapheneSendToMetric sendToReplySection] */

void FUN_10807e3a0(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e3cc; end: 10807e3f7; +[SCGrapheneSendToMetric spotlightSectionUiEnabled] */

void FUN_10807e3cc(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e3f8; end: 10807e423; +[SCGrapheneSendToMetric spotlightSectionUiGated] */

void FUN_10807e3f8(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e424; end: 10807e44f; +[SCGrapheneSendToMetric spotlightSectionUiDisabled] */

void FUN_10807e424(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e450; end: 10807e47b; +[SCGrapheneSendToMetric spotlightSectionActionEnabled] */

void FUN_10807e450(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e47c; end: 10807e4a7; +[SCGrapheneSendToMetric spotlightSectionActionGated] */

void FUN_10807e47c(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e4a8; end: 10807e4d3; +[SCGrapheneSendToMetric spotlightSectionHighlightUi] */

void FUN_10807e4a8(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e4d4; end: 10807e4ff; +[SCGrapheneSendToMetric spotlightSectionHighlight] */

void FUN_10807e4d4(void)

{
  _objc_alloc(PTR_PTR_1126d4ca0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10807e500; end: 10807e59f; -[SCGrapheneSendToMetric description] */

void FUN_10807e500(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dba418;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dba418,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fc468;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10807e5a0; end: 10807e74f; -[SCGrapheneRegistry sendToGraphene] */

void FUN_10807e5a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10807e628;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137290c8 != -1) {
    func_0x000107c27d9c(0x1137290c8,&puStack_48);
  }
  uVar1 = uRam00000001137290c0;
  _objc_retain(uRam00000001137290c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10807e750; end: 10807e7c3; -[SCPreviewFeatureRotationServices initWithRotation:] */

undefined1 * FUN_10807e750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fc470;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10807e7c4; end: 10807e7cb; -[SCPreviewFeatureRotationServices rotation] */

undefined8 FUN_10807e7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10807e7cc; end: 10807e7d7; -[SCPreviewFeatureRotationServices .cxx_destruct] */

void FUN_10807e7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10807e7d8; end: 10807eb6f; -[SCSnapCommonLoggingParamsBuilder updateIndividualEditingLoggingFromParams:timeRange:] */

void FUN_10807e7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf037a0(param_3);
  func_0x00010c2a83a0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf03500(param_3);
  func_0x00010c2a8360(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2a8340(param_3);
  func_0x00010c2bcf00(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf89ea0(param_3);
  func_0x00010c2aca40(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf5c920(param_3);
  func_0x00010c2ab6a0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf2fba0(param_3);
  func_0x00010c2a9fa0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf93ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad240(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfadd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ade40(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfadfa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adf40(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfc11a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aed60(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfae8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae1a0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf30820(param_3);
  func_0x00010c2aa100(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c253c00(param_3);
  func_0x00010c2ba100(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2551a0(param_3);
  func_0x00010c2ba260(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfae160(param_3);
  func_0x00010c2adfa0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfae340(param_3);
  func_0x00010c2ae060(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfadfc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2adf60(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfae520(param_3);
  func_0x00010c2ae140(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfae500(param_3);
  func_0x00010c2ae120(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c243700(param_3);
  func_0x00010c2b9800(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2a8860(param_3);
  func_0x00010c2bcf20(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf0f140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8c40(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfae3c0(param_3);
  _objc_release(param_3);
  func_0x00010c2ae0c0(param_1,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uStack_48 = *(undefined8 *)(param_4 + 0x20);
  dVar2 = *(double *)(param_4 + 0x18);
  uStack_40 = *(undefined8 *)(param_4 + 0x28);
  dStack_50 = dVar2;
  _CMTimeGetSeconds(&dStack_50);
  func_0x00010c2b8080((float)dVar2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc6e0(param_1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10807eb70; end: 10807ec47; -[SCMultiSnapGallerySnapshot initWithGallerySnapOverlays:orderedStateIndexes:statesByIndex:] */

undefined1 *
FUN_10807eb70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fc478;
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



/* Entry: 10807ec48; end: 10807ec4f; -[SCMultiSnapGallerySnapshot gallerySnapOverlays] */

undefined8 FUN_10807ec48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10807ec50; end: 10807ec57; -[SCMultiSnapGallerySnapshot orderedStateIndexes] */

undefined8 FUN_10807ec50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10807ec58; end: 10807ec5f; -[SCMultiSnapGallerySnapshot statesByIndex] */

undefined8 FUN_10807ec58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10807ec60; end: 10807ec9b; -[SCMultiSnapGallerySnapshot .cxx_destruct] */

void FUN_10807ec60(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10807ec9c; end: 10807f087; -[SCMultiSnapStateHandlerImpl initWithMultiSnapIndexProvider:timeRanges:overlaySize:userSession:previewCameraSourceOverlayService:userInfoServices:overlayFormatServices:userTaggingFeature:targetTrajectoryFactory:stickerInjector:ctpItemViewService:snapEditorTweaks:isBatchCapture:] */

undefined8 *
FUN_10807ec9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_80 = PTR_PTR_1126fc480;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_5);
    puVar1[2] = param_1;
    puVar1[3] = param_2;
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xe) = param_16;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_6;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        puVar4 = PTR_PTR_1126c4908;
        _objc_alloc(PTR_PTR_1126c4908);
        uVar5 = param_6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          func_0x00010bdc1120(&uStack_c0,uVar5);
        }
        func_0x00010c0522a0(puVar4);
        func_0x00010befa120(puVar3);
        _objc_release(puVar4);
        _objc_release(uVar5);
        uVar7 = uVar7 + 1;
        uVar5 = param_6;
        func_0x00010bf529e0();
      } while (uVar7 < uVar5);
    }
    _objc_retain(param_6);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_6;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}


