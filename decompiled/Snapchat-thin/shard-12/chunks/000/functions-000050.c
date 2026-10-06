/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cb764c; end: 108cb7653; -[SCPreviewBlob setMediaDuration:] */

void FUN_108cb764c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 108cb7654; end: 108cb765b; -[SCPreviewBlob croppingState] */

undefined8 FUN_108cb7654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108cb765c; end: 108cb768b; -[SCPreviewBlob setCroppingState:] */

void FUN_108cb765c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb768c; end: 108cb7693; -[SCPreviewBlob croppingAspectRatio] */

undefined8 FUN_108cb768c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108cb7694; end: 108cb769b; -[SCPreviewBlob setCroppingAspectRatio:] */

void FUN_108cb7694(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x80) = param_1;
  return;
}



/* Entry: 108cb769c; end: 108cb76a3; -[SCPreviewBlob serverGalleryCropping] */

undefined8 FUN_108cb769c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108cb76a4; end: 108cb76d3; -[SCPreviewBlob setServerGalleryCropping:] */

void FUN_108cb76a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb76d4; end: 108cb76db; -[SCPreviewBlob captionsState] */

undefined8 FUN_108cb76d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108cb76dc; end: 108cb770b; -[SCPreviewBlob setCaptionsState:] */

void FUN_108cb76dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb770c; end: 108cb7713; -[SCPreviewBlob autoCaptionsState] */

undefined8 FUN_108cb770c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 108cb7714; end: 108cb7743; -[SCPreviewBlob setAutoCaptionsState:] */

void FUN_108cb7714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb7744; end: 108cb774b; -[SCPreviewBlob drawingMetadata] */

undefined8 FUN_108cb7744(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108cb774c; end: 108cb777b; -[SCPreviewBlob setDrawingMetadata:] */

void FUN_108cb774c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb777c; end: 108cb7783; -[SCPreviewBlob filtersState] */

undefined8 FUN_108cb777c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108cb7784; end: 108cb77b3; -[SCPreviewBlob setFiltersState:] */

void FUN_108cb7784(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb77b4; end: 108cb77bb; -[SCPreviewBlob liveCameraLensId] */

undefined8 FUN_108cb77b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108cb77bc; end: 108cb77c3; -[SCPreviewBlob setLiveCameraLensId:] */

void FUN_108cb77bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb77c4; end: 108cb77cb; -[SCPreviewBlob lensRankingId] */

undefined8 FUN_108cb77c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 108cb77cc; end: 108cb77d3; -[SCPreviewBlob setLensRankingId:] */

void FUN_108cb77cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb77d4; end: 108cb77db; -[SCPreviewBlob previewLensId] */

undefined8 FUN_108cb77d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 108cb77dc; end: 108cb77e3; -[SCPreviewBlob setPreviewLensId:] */

void FUN_108cb77dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb77e4; end: 108cb77eb; -[SCPreviewBlob stickersState] */

undefined8 FUN_108cb77e4(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 108cb77ec; end: 108cb77f3; -[SCPreviewBlob setStickersState:] */

void FUN_108cb77ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb77f4; end: 108cb77fb; -[SCPreviewBlob snapCraftStyleId] */

undefined8 FUN_108cb77f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 108cb77fc; end: 108cb7803; -[SCPreviewBlob setSnapCraftStyleId:] */

void FUN_108cb77fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb7804; end: 108cb780b; -[SCPreviewBlob snapAttachmentUrl] */

undefined8 FUN_108cb7804(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 108cb780c; end: 108cb7813; -[SCPreviewBlob setSnapAttachmentUrl:] */

void FUN_108cb780c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb7814; end: 108cb781b; -[SCPreviewBlob hasAnimatedContent] */

undefined1 FUN_108cb7814(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108cb781c; end: 108cb7823; -[SCPreviewBlob setHasAnimatedContent:] */

void FUN_108cb781c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108cb7824; end: 108cb782b; -[SCPreviewBlob audioFilterStyleId] */

undefined8 FUN_108cb7824(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 108cb782c; end: 108cb7833; -[SCPreviewBlob setAudioFilterStyleId:] */

void FUN_108cb782c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb7834; end: 108cb783b; -[SCPreviewBlob infoStickerDataProvider] */

undefined8 FUN_108cb7834(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 108cb783c; end: 108cb786b; -[SCPreviewBlob setInfoStickerDataProvider:] */

void FUN_108cb783c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb786c; end: 108cb7873; -[SCPreviewBlob bitmojiAvatarId] */

undefined8 FUN_108cb786c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 108cb7874; end: 108cb787b; -[SCPreviewBlob setBitmojiAvatarId:] */

void FUN_108cb7874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb787c; end: 108cb7883; -[SCPreviewBlob lensCommandMetadata] */

undefined8 FUN_108cb787c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 108cb7884; end: 108cb78b3; -[SCPreviewBlob setLensCommandMetadata:] */

void FUN_108cb7884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb78b4; end: 108cb78bb; -[SCPreviewBlob spectaclesRectificationConfig] */

undefined8 FUN_108cb78b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 108cb78bc; end: 108cb78eb; -[SCPreviewBlob setSpectaclesRectificationConfig:] */

void FUN_108cb78bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb78ec; end: 108cb78f3; -[SCPreviewBlob ctLensState] */

undefined8 FUN_108cb78ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 108cb78f4; end: 108cb7923; -[SCPreviewBlob setCtLensState:] */

void FUN_108cb78f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cb7924; end: 108cb7a7f; -[SCPreviewBlob .cxx_destruct] */

void FUN_108cb7924(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108cb7a80; end: 108cb7bcb; -[SCPreviewConfiguration commit] */

/* WARNING: Possible PIC construction at 0x000108cb7b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108cb7b94) */
/* WARNING: Removing unreachable block (ram,0x000108cb7bc8) */
/* WARNING: Removing unreachable block (ram,0x000108cb7bac) */

void FUN_108cb7a80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  *(undefined1 *)(param_1 + 8) = 1;
  lVar1 = *(long *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x200;
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar1);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      uVar4 = uVar5;
      func_0x00010c086dc0();
      if ((*(ulong *)(param_1 + 0x18) & uVar4) != 0) {
        func_0x00010bf427a0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(uVar5 + 0x10))();
        _objc_release(uVar5);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 108cb7bcc; end: 108cb7bd3; -[SCPreviewConfiguration resetWithoutCommit] */

void FUN_108cb7bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 108cb7bd4; end: 108cb7bdb; -[SCPreviewConfiguration isCommitted] */

undefined1 FUN_108cb7bd4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108cb7bdc; end: 108cb7c6f; -[SCPreviewConfiguration addOnCommitListener:forChangesToKeys:] */

void FUN_108cb7bdc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 8) == '\x01') {
    if ((*(ulong *)(param_1 + 0x18) & param_4) != 0) {
      (**(code **)(param_3 + 0x10))(param_3,param_1);
    }
  }
  else {
    puVar1 = PTR_PTR_1126db9f0;
    _objc_alloc(PTR_PTR_1126db9f0);
    func_0x00010c021040();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7c70; end: 108cb7cbb; -[SCPreviewConfiguration setMediaType:] */

void FUN_108cb7c70(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(long *)(param_1 + 0x168) != param_3) &&
     (func_0x00010beb6f40(iVar1,param_2,&PTR____CFConstantStringClassReference_110e8a318),
     iVar1 != 0)) {
    *(long *)(param_1 + 0x168) = param_3;
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x10;
  }
  return;
}



/* Entry: 108cb7cbc; end: 108cb7d1b; -[SCPreviewConfiguration setEditingStates:] */

void FUN_108cb7cbc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x160) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef10d8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x160);
    *(long *)(param_1 + 0x160) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7d1c; end: 108cb7d87; -[SCPreviewConfiguration setMultiSnapConfiguration:] */

void FUN_108cb7d1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x370) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef10f8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x370);
    *(long *)(param_1 + 0x370) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7d88; end: 108cb7ddf; -[SCPreviewConfiguration forceUpdateMultiSnapConfiguration:] */

void FUN_108cb7d88(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x370) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x370);
    *(long *)(param_1 + 0x370) = param_3;
    _objc_release(uVar1);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7de0; end: 108cb7e4b; -[SCPreviewConfiguration setMultiSnapConfigurationFuture:] */

void FUN_108cb7de0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x388) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1118),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x388);
    *(long *)(param_1 + 0x388) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x40000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7e4c; end: 108cb7eb7; -[SCPreviewConfiguration setBatchCaptureConfiguration:] */

void FUN_108cb7e4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0xc0) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1138),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(long *)(param_1 + 0xc0) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x2000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7eb8; end: 108cb7f23; -[SCPreviewConfiguration setTimelineConfiguration:] */

void FUN_108cb7eb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x378) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1158),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x378);
    *(long *)(param_1 + 0x378) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x80000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7f24; end: 108cb7f8f; -[SCPreviewConfiguration setAddSnapConfiguration:] */

void FUN_108cb7f24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x380) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1178),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x380);
    *(long *)(param_1 + 0x380) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x100000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7f90; end: 108cb7ffb; -[SCPreviewConfiguration setFilterDataProvider:] */

void FUN_108cb7f90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x70) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1198),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb7ffc; end: 108cb803b; -[SCPreviewConfiguration setAudioPresentInVideo:] */

void FUN_108cb7ffc(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(byte *)(param_1 + 0x9f) != param_3) &&
     (func_0x00010beb6f40(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef11d8),
     iVar1 != 0)) {
    *(char *)(param_1 + 0x9f) = (char)param_3;
  }
  return;
}



/* Entry: 108cb803c; end: 108cb809f; -[SCPreviewConfiguration setSnapSessionID:] */

void FUN_108cb803c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if (((uVar1 & 1) == 0) &&
     (lVar2 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1278),
     (int)lVar2 != 0)) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_3;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb80a0; end: 108cb8103; -[SCPreviewConfiguration setCaptureSessionID:] */

void FUN_108cb80a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if (((uVar1 & 1) == 0) &&
     (lVar2 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1298),
     (int)lVar2 != 0)) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_3;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb8104; end: 108cb8167; -[SCPreviewConfiguration setLensSessionID:] */

void FUN_108cb8104(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0720c0(uVar1,param_2,param_3);
  if (((uVar1 & 1) == 0) &&
     (lVar2 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef12b8),
     (int)lVar2 != 0)) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_3;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb8168; end: 108cb81c7; -[SCPreviewConfiguration setActiveCameraModes:] */

void FUN_108cb8168(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0xe0) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ed99f8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb81c8; end: 108cb8227; -[SCPreviewConfiguration setFrameHealthChecker:] */

void FUN_108cb81c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x3b8) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef12f8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x3b8);
    *(long *)(param_1 + 0x3b8) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb8228; end: 108cb8287; -[SCPreviewConfiguration setCreationTime:] */

void FUN_108cb8228(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x330) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1318),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x330);
    *(long *)(param_1 + 0x330) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb8288; end: 108cb82f3; -[SCPreviewConfiguration setDeepLinkMetadata:] */

void FUN_108cb8288(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x3c0) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1338),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x3c0);
    *(long *)(param_1 + 0x3c0) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x800;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb82f4; end: 108cb8333; -[SCPreviewConfiguration setMediaOrientation:] */

void FUN_108cb82f4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(long *)(param_1 + 0x180) != param_3) &&
     (func_0x00010beb6f40(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef1358),
     iVar1 != 0)) {
    *(long *)(param_1 + 0x180) = param_3;
  }
  return;
}



/* Entry: 108cb8334; end: 108cb8393; -[SCPreviewConfiguration setCaptionsState:] */

void FUN_108cb8334(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x260) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1378),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x260);
    *(long *)(param_1 + 0x260) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb8394; end: 108cb83ff; -[SCPreviewConfiguration setLiveCameraLensConfiguration:] */

void FUN_108cb8394(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x2c8) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1398),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x2c8);
    *(long *)(param_1 + 0x2c8) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb8400; end: 108cb846b; -[SCPreviewConfiguration setLensAssetsUploadInfoFuture:] */

void FUN_108cb8400(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x2e0) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef13b8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x2e0);
    *(long *)(param_1 + 0x2e0) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x10000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb846c; end: 108cb84ab; -[SCPreviewConfiguration setFromFrontFacingCamera:] */

void FUN_108cb846c(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(byte *)(param_1 + 0xa2) != param_3) &&
     (func_0x00010beb6f40(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef13d8),
     iVar1 != 0)) {
    *(char *)(param_1 + 0xa2) = (char)param_3;
  }
  return;
}



/* Entry: 108cb84ac; end: 108cb850b; -[SCPreviewConfiguration setRecordingMetadata:] */

void FUN_108cb84ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x2f8) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef13f8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x2f8);
    *(long *)(param_1 + 0x2f8) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb850c; end: 108cb856b; -[SCPreviewConfiguration setRecordingDeviceMotionData:] */

void FUN_108cb850c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x300) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1418),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x300);
    *(long *)(param_1 + 0x300) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb856c; end: 108cb85cb; -[SCPreviewConfiguration setRecordingRawAccelerometerData:] */

void FUN_108cb856c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x308) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1438),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x308);
    *(long *)(param_1 + 0x308) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb85cc; end: 108cb862b; -[SCPreviewConfiguration setRecordingRawGyroData:] */

void FUN_108cb85cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x310) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1458),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x310);
    *(long *)(param_1 + 0x310) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb862c; end: 108cb866b; -[SCPreviewConfiguration setReplyParametersWithReplyConfiguration:] */

void FUN_108cb862c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c2720a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb140(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb866c; end: 108cb86d7; -[SCPreviewConfiguration setFullScreenImageFuture:] */

void FUN_108cb866c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x1b0) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef14b8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x1b0);
    *(long *)(param_1 + 0x1b0) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb86d8; end: 108cb8743; -[SCPreviewConfiguration setRecordedVideoFuture:] */

void FUN_108cb86d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x1d0) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef14d8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x1d0);
    *(long *)(param_1 + 0x1d0) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x80;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb8744; end: 108cb87af; -[SCPreviewConfiguration setPlaceholderView:] */

void FUN_108cb8744(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x198) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef14f8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x198);
    *(long *)(param_1 + 0x198) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb87b0; end: 108cb87c3; -[SCPreviewConfiguration setIsFromSnapRecovery:] */

void FUN_108cb87b0(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x9d) != param_3) {
    *(char *)(param_1 + 0x9d) = (char)param_3;
  }
  return;
}



/* Entry: 108cb87c4; end: 108cb87d7; -[SCPreviewConfiguration setIsRecoveringSpotlightRemix:] */

void FUN_108cb87c4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x9e) != param_3) {
    *(char *)(param_1 + 0x9e) = (char)param_3;
  }
  return;
}



/* Entry: 108cb87d8; end: 108cb883b; -[SCPreviewConfiguration setQuickStickerCenter:] */

void FUN_108cb87d8(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  bVar1 = false;
  if ((*(double *)(param_3 + 0x490) == param_1) &&
     (bVar1 = false, !NAN(*(double *)(param_3 + 0x498)) && !NAN(param_2))) {
    bVar1 = *(double *)(param_3 + 0x498) == param_2;
  }
  if ((!bVar1) &&
     (func_0x00010beb6f40(iVar2,param_4,&PTR____CFConstantStringClassReference_110ef1558),
     iVar2 != 0)) {
    *(double *)(param_3 + 0x490) = param_1;
    *(double *)(param_3 + 0x498) = param_2;
    *(ulong *)(param_3 + 0x18) = *(ulong *)(param_3 + 0x18) | 0x8000;
  }
  return;
}



/* Entry: 108cb883c; end: 108cb889f; -[SCPreviewConfiguration setCognacAppAttachment:] */

void FUN_108cb883c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x3e0);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if (((uVar1 & 1) == 0) &&
     (lVar2 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1578),
     (int)lVar2 != 0)) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x3e0);
    *(undefined8 *)(param_1 + 0x3e0) = param_3;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb88a0; end: 108cb890b; -[SCPreviewConfiguration setBaseMediaMusicSelection:] */

void FUN_108cb88a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x60) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1598),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x200000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb890c; end: 108cb896b; -[SCPreviewConfiguration setBitmojiFashionContext:] */

void FUN_108cb890c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x88) != param_3) &&
     (lVar1 = param_1,
     func_0x00010beb6f40(param_1,param_2,&PTR____CFConstantStringClassReference_110ef15b8),
     (int)lVar1 != 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb896c; end: 108cb8a0b; -[SCPreviewConfiguration snapSessionID] */

void FUN_108cb896c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c0811c0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c070a20(), (int)uVar1 == 0)) {
    uVar1 = param_1;
    func_0x00010c06d080();
    if ((int)uVar1 == 0) {
      uVar1 = *(ulong *)(param_1 + 0x30);
      _objc_retain(uVar1);
      goto LAB_108cb89bc;
    }
    func_0x00010bf167e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf16c80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26fea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c2702a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
LAB_108cb89bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cb8a0c; end: 108cb8ad3; -[SCPreviewConfiguration captureSessionID] */

void FUN_108cb8a0c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00010c0811c0();
  if (((uVar3 & 1) == 0) && (uVar3 = param_1, func_0x00010c070a20(), (int)uVar3 == 0)) {
    uVar3 = param_1;
    func_0x00010c06d080();
    if ((int)uVar3 == 0) {
      uVar3 = *(ulong *)(param_1 + 0x38);
      _objc_retain(uVar3);
      goto LAB_108cb8a90;
    }
    func_0x00010bf167e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26fea0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
LAB_108cb8a90:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108cb8ad4; end: 108cb8b9b; -[SCPreviewConfiguration lensSessionID] */

void FUN_108cb8ad4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00010c0811c0();
  if (((uVar3 & 1) == 0) && (uVar3 = param_1, func_0x00010c070a20(), (int)uVar3 == 0)) {
    uVar3 = param_1;
    func_0x00010c06d080();
    if ((int)uVar3 == 0) {
      uVar3 = *(ulong *)(param_1 + 0x40);
      _objc_retain(uVar3);
      goto LAB_108cb8b58;
    }
    func_0x00010bf167e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26fea0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c096b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
LAB_108cb8b58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108cb8b9c; end: 108cb8ba3; -[SCPreviewConfiguration handsFree] */

void FUN_108cb8b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd3450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x238),PTR_s_handsFree_1125d26b8)
  ;
  return;
}



/* Entry: 108cb8ba4; end: 108cb8bbf; -[SCPreviewConfiguration isImageSnap] */

bool FUN_108cb8ba4(long param_1)

{
  func_0x00010c0c6c20();
  return param_1 == 0;
}



/* Entry: 108cb8bc0; end: 108cb8be7; -[SCPreviewConfiguration isShortVideo] */

void FUN_108cb8bc0(long param_1)

{
  FUN_108f4a2bc(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c07de70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isShortVideoBelowDurationSeconds_1125fd1a8);
  return;
}



/* Entry: 108cb8be8; end: 108cb8d1f; -[SCPreviewConfiguration isShortVideoBelowDurationSeconds:] */

bool FUN_108cb8be8(double param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  dVar3 = param_1;
  func_0x00010c0c6c20();
  if (lVar2 == 1) {
    lVar2 = param_2;
    func_0x00010c26fea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c26fea0();
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
      return dVar3 < param_1;
    }
    lVar2 = param_2;
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010bf998a0(param_2);
      if (dVar3 <= 0.0) goto LAB_108cb8ce4;
    }
    else {
      _objc_release();
    }
    lVar2 = param_2;
    func_0x00010c29ae80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010bf998a0(param_2);
    }
    else {
      func_0x00010c29ae80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c299d80();
      _objc_release(param_2);
    }
    _objc_release(lVar2);
    bVar1 = dVar3 < param_1;
  }
  else {
LAB_108cb8ce4:
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108cb8d20; end: 108cb8d3b; -[SCPreviewConfiguration isVideoSnap] */

bool FUN_108cb8d20(long param_1)

{
  func_0x00010c0c6c20();
  return param_1 == 1;
}



/* Entry: 108cb8d3c; end: 108cb8d77; -[SCPreviewConfiguration isStereoSnap] */

undefined8 FUN_108cb8d3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07f960();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108cb8d78; end: 108cb8db3; -[SCPreviewConfiguration isSnapFramed] */

undefined8 FUN_108cb8d78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2440e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07e820();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108cb8db4; end: 108cb8ebf; -[SCPreviewConfiguration isSnapCreatedByPhoneCameraMomentAgo] */

bool FUN_108cb8db4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = param_1;
  func_0x00010c243400();
  if (((((lVar2 == 4) || (lVar2 = param_1, func_0x00010c243400(), lVar2 == 0x13)) ||
       (lVar2 = param_1, func_0x00010c243400(), lVar2 == 0)) ||
      ((lVar2 = param_1, func_0x00010c243400(), lVar2 == 2 ||
       (lVar2 = param_1, func_0x00010c243400(), lVar2 == 3)))) ||
     (lVar2 = param_1, func_0x00010c243400(), lVar2 == 0x10)) {
    return true;
  }
  lVar2 = param_1;
  func_0x00010c243400();
  if (lVar2 == 0x11) {
    unaff_x20 = *(long *)(param_1 + 0x3c0);
    func_0x00010c0b3ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = unaff_x20;
    func_0x00010bf5ad20();
    if (lVar3 == 1) {
      bVar1 = true;
      goto LAB_108cb8eb4;
    }
  }
  lVar3 = param_1;
  func_0x00010c243400();
  if ((lVar3 == 0x15) || (lVar3 = param_1, func_0x00010c243400(), lVar3 == 0x24)) {
    bVar1 = true;
  }
  else {
    func_0x00010c243400(param_1);
    bVar1 = param_1 == 0x2d;
  }
  if (lVar2 != 0x11) {
    return bVar1;
  }
LAB_108cb8eb4:
  _objc_release(unaff_x20);
  return bVar1;
}



/* Entry: 108cb8ec0; end: 108cb8eff; -[SCPreviewConfiguration isSnapFromCamera] */

bool FUN_108cb8ec0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c243400();
  if (lVar2 == 4) {
    bVar1 = true;
  }
  else {
    func_0x00010c243400(param_1);
    bVar1 = param_1 == 0x13;
  }
  return bVar1;
}



/* Entry: 108cb8f00; end: 108cb8f1b; -[SCPreviewConfiguration isSnapFromMainCamera] */

bool FUN_108cb8f00(long param_1)

{
  func_0x00010c242400();
  return param_1 == 8;
}



/* Entry: 108cb8f1c; end: 108cb8f37; -[SCPreviewConfiguration isSnapFromDiscover] */

bool FUN_108cb8f1c(long param_1)

{
  func_0x00010c243400();
  return param_1 == 5;
}



/* Entry: 108cb8f38; end: 108cb8f77; -[SCPreviewConfiguration isSnapFromQuickPost] */

bool FUN_108cb8f38(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c242400();
  if (lVar2 == 0x45) {
    bVar1 = true;
  }
  else {
    func_0x00010c242400(param_1);
    bVar1 = param_1 == 0x46;
  }
  return bVar1;
}



/* Entry: 108cb8f78; end: 108cb8f93; -[SCPreviewConfiguration isSnapFromCameraRollCamera] */

bool FUN_108cb8f78(long param_1)

{
  func_0x00010c243400();
  return param_1 == 0x24;
}



/* Entry: 108cb8f94; end: 108cb8faf; -[SCPreviewConfiguration isSnapFromiOSPhoto] */

bool FUN_108cb8f94(long param_1)

{
  func_0x00010c243400();
  return param_1 == 6;
}



/* Entry: 108cb8fb0; end: 108cb900f; -[SCPreviewConfiguration isSnapFromSnapchatGallery] */

bool FUN_108cb8fb0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c243400();
  if (((lVar2 == 7) || (lVar2 = param_1, func_0x00010c243400(), lVar2 == 0x26)) ||
     (lVar2 = param_1, func_0x00010c243400(), lVar2 == 0x22)) {
    bVar1 = true;
  }
  else {
    func_0x00010c243400(param_1);
    bVar1 = param_1 == 8;
  }
  return bVar1;
}


