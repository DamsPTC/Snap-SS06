/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e946b8; end: 108e947b3;  */

void FUN_108e946b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e947b4; end: 108e9481f;  */

void FUN_108e947b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfe90c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,*(undefined1 *)(param_1 + 0x28));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e94820; end: 108e94837;  */

void FUN_108e94820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e94834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),0,*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 108e94838; end: 108e94973; -[SCChatStickerView _getCTItemPresentationModelProviderTypeWithInstance:lowRes:isReaction:] */

void FUN_108e94838(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf96ee0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((param_5 == 0) || ((int)uVar3 != 2)) {
    puVar5 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960,param_2,param_4 ^ 1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126ba808;
    _objc_alloc(PTR_PTR_1126ba808);
    uVar1 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1c360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff8380(puVar4,param_2,uVar2,param_4 ^ 1,0xd,1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126bc960;
    func_0x00010c2904a0(PTR_PTR_1126bc960,param_2,puVar4,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e94974; end: 108e949b3; -[SCChatStickerView _isStickerLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e94974(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277ce8c);
  func_0x00010bfe6ac0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 108e949b4; end: 108e94b5f; -[SCChatStickerView _showItemInstance:withImage:showErrorImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e949b4(long param_1,undefined8 param_2,long param_3,undefined *param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c0840e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + _DAT_11277ce94);
  _objc_retain(lVar3);
  _objc_retain(param_3);
  if (lVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar3);
    if (param_4 != (undefined *)0x0) goto LAB_108e94a84;
LAB_108e94aac:
    if (param_5 == 0) {
      param_4 = (undefined *)0x0;
      goto LAB_108e94b2c;
    }
    param_4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110db0ed8);
    _objc_retainAutoreleasedReturnValue();
LAB_108e94ad0:
    lVar3 = (long)_DAT_11277ce88;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,1);
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar3));
    lVar3 = (long)_DAT_11277ce8c;
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
    lVar3 = param_1 + _DAT_11277ce98;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2552a0();
  }
  else if (param_3 != 0) {
    lVar1 = lVar3;
    func_0x00010c071ae0(lVar3,param_2,param_3);
    _objc_release(param_3);
    _objc_release(lVar3);
    if ((int)lVar1 == 0) goto LAB_108e94b2c;
    if (param_4 == (undefined *)0x0) goto LAB_108e94aac;
LAB_108e94a84:
    func_0x00010c1235a0(PTR_PTR_1126dbc28,param_2,lVar2);
    goto LAB_108e94ad0;
  }
  _objc_release(lVar3);
LAB_108e94b2c:
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e94b60; end: 108e94c0b; -[SCChatStickerView _showSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e94b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ce94);
  func_0x00010c0840e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277ce8c),param_2,1);
  lVar4 = (long)_DAT_11277ce88;
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108e94c0c; end: 108e94c43; -[SCChatStickerView setCTPItemViewService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e94c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277ceac);
  *(undefined8 *)(param_1 + _DAT_11277ceac) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e94c44; end: 108e94c77; -[SCChatStickerView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e94c44(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277ce8c;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c16ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setAutoPlayAnimatedImage__112638da0,0);
  return;
}



/* Entry: 108e94c78; end: 108e94cab; -[SCChatStickerView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e94c78(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277ce8c;
  func_0x00010c16ce00(*(undefined8 *)(param_1 + lVar1),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 108e94cac; end: 108e94ccb; -[SCChatStickerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e94cac(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277ce98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e94ccc; end: 108e94cdf; -[SCChatStickerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e94ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277ce98,param_3);
  return;
}



/* Entry: 108e94ce0; end: 108e94cef; -[SCChatStickerView canUseLowResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108e94ce0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277cea4);
}



/* Entry: 108e94cf0; end: 108e94cff; -[SCChatStickerView setCanUseLowResolution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e94cf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277cea4) = param_3;
  return;
}



/* Entry: 108e94d00; end: 108e94d9b; -[SCChatStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e94d00(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277ce98);
  _objc_storeStrong(param_1 + _DAT_11277cea0,0);
  _objc_storeStrong(param_1 + _DAT_11277ce84,0);
  _objc_storeStrong(param_1 + _DAT_11277ce9c,0);
  _objc_storeStrong(param_1 + _DAT_11277ce88,0);
  _objc_storeStrong(param_1 + _DAT_11277ce8c,0);
  _objc_storeStrong(param_1 + _DAT_11277ceac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ce94,0);
  return;
}



/* Entry: 108e94d9c; end: 108e94dc7;  */

undefined ** FUN_108e94d9c(int param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efd3f8;
  if (param_1 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e55078;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dd6e38;
  if (param_1 != 1) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 108e94dc8; end: 108e94e87; -[SCChatStickerSendEvent initWithSticker:section:position:source:searchSource:] */

undefined1 *
FUN_108e94dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fee48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e94e88; end: 108e94e8f; -[SCChatStickerSendEvent sticker] */

undefined8 FUN_108e94e88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e94e90; end: 108e94ebf; -[SCChatStickerSendEvent setSticker:] */

void FUN_108e94e90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108e94ec0; end: 108e94ec7; -[SCChatStickerSendEvent section] */

undefined8 FUN_108e94ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e94ec8; end: 108e94ef7; -[SCChatStickerSendEvent setSection:] */

void FUN_108e94ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e94ef8; end: 108e94eff; -[SCChatStickerSendEvent position] */

undefined8 FUN_108e94ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e94f00; end: 108e94f07; -[SCChatStickerSendEvent setPosition:] */

void FUN_108e94f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108e94f08; end: 108e94f0f; -[SCChatStickerSendEvent source] */

undefined8 FUN_108e94f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108e94f10; end: 108e94f17; -[SCChatStickerSendEvent setSource:] */

void FUN_108e94f10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 108e94f18; end: 108e94f1f; -[SCChatStickerSendEvent searchSource] */

undefined8 FUN_108e94f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108e94f20; end: 108e94f27; -[SCChatStickerSendEvent setSearchSource:] */

void FUN_108e94f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108e94f28; end: 108e94f2f; -[SCChatStickerSendEvent information] */

undefined8 FUN_108e94f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108e94f30; end: 108e94f5f; -[SCChatStickerSendEvent setInformation:] */

void FUN_108e94f30(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108e94f60; end: 108e94f67; -[SCChatStickerSendEvent replyAllGroupId] */

undefined8 FUN_108e94f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108e94f68; end: 108e94f97; -[SCChatStickerSendEvent setReplyAllGroupId:] */

void FUN_108e94f68(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108e94f98; end: 108e94fdf; -[SCChatStickerSendEvent .cxx_destruct] */

void FUN_108e94f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e94fe0; end: 108e9508b; -[SCChatStickerSearchBarView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e94fe0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fee50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010be3bda0(puVar1);
    func_0x00010bdec4a0(puVar1);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277cecc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277cecc) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e9508c; end: 108e950bf; -[SCChatStickerSearchBarView _initializeViews] */

void FUN_108e9508c(undefined8 param_1)

{
  func_0x00010be3baa0();
  func_0x00010be3ba20(param_1);
  func_0x00010be3bb00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be3b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initializeCancelLabel_11256c638);
  return;
}



/* Entry: 108e950c0; end: 108e95283; -[SCChatStickerSearchBarView _initializeSearchTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e950c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = PTR_PTR_1126b3f70;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ea0ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26bec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11277ced0;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08eb00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c1edbe0(uVar4);
  FUN_108e9953c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 108e95284; end: 108e9530f; -[SCChatStickerSearchBarView _initializeSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95284(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_11277ced4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108e95310; end: 108e95363; -[SCChatStickerSearchBarView _initializeRightStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95310(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar3 = (long)_DAT_11277ced8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108e95364; end: 108e95477; -[SCChatStickerSearchBarView _initializeCancelLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95364(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init(PTR_PTR_1126aea58);
  puVar2 = puVar1;
  func_0x00010c21ad00();
  func_0x000108e99554();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21e900(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_11277ced8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e95478; end: 108e954a3; -[SCChatStickerSearchBarView _createConstraints] */

void FUN_108e95478(undefined8 param_1)

{
  func_0x00010bdf3140();
  func_0x00010bdf2f00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdf2a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createRightStackViewConstraints_11255a420);
  return;
}



/* Entry: 108e954a4; end: 108e956af; -[SCChatStickerSearchBarView _createSeparatorConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e954a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11277ced4;
  lVar2 = *(long *)(param_1 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar14);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = (long)_DAT_11277ced0;
  lVar12 = *(long *)(lVar2 + lVar18);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010bf493c0(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar2 + _DAT_11277ced4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf49520(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar13;
  func_0x00010bf49420(0x4043e00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar13);
  _objc_release(uVar8);
  _objc_release(lVar14);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11277ced8;
  lVar14 = *(long *)(lVar12 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11277ced0;
  uVar5 = *(undefined8 *)(lVar12 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar14;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(lVar12 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010c2793a0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(lVar12 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(lVar12 + _DAT_11277ced4);
  func_0x00010bf1ff80(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar12 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(lVar12 + lVar18);
  func_0x00010bf1ff80(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar15;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c073050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar14 + _DAT_11277ced0),PTR_s_isFirstResponder_1125fa620);
  return;
}



/* Entry: 108e956b0; end: 108e958d3; -[SCChatStickerSearchBarView _createSearchTextFieldConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e956b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11277ced0;
  lVar2 = *(long *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277ced4);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49520(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49420(0x4043e00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar13);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11277ced8;
  lVar13 = *(long *)(lVar2 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11277ced0;
  uVar5 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar13;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar2 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2793a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar2 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar2 + _DAT_11277ced4);
  func_0x00010bf1ff80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(lVar2 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(lVar2 + lVar18);
  func_0x00010bf1ff80(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c073050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar13 + _DAT_11277ced0),PTR_s_isFirstResponder_1125fa620);
  return;
}



/* Entry: 108e958d4; end: 108e95b1b; -[SCChatStickerSearchBarView _createRightStackViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e958d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = (long)_DAT_11277ced8;
  lVar2 = *(long *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11277ced0;
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11277ced4);
  func_0x00010bf1ff80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493c0(0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c073050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + _DAT_11277ced0),PTR_s_isFirstResponder_1125fa620);
  return;
}



/* Entry: 108e95b1c; end: 108e95b2b; -[SCChatStickerSearchBarView isSearchBarFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c073050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ced0),PTR_s_isFirstResponder_1125fa620);
  return;
}



/* Entry: 108e95b2c; end: 108e95b3b; -[SCChatStickerSearchBarView stickerSearchBecomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95b2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ced0),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 108e95b3c; end: 108e95b4b; -[SCChatStickerSearchBarView stickerSearchSetText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ced0),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 108e95b4c; end: 108e95b8b; -[SCChatStickerSearchBarView hide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95b4c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277cedc) = 0;
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_11277ced0));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108e95b8c; end: 108e95bdb; -[SCChatStickerSearchBarView willSuspendActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95b8c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277ced0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c073040();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11277cedc) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_resignFirstResponder_11262c258);
    return;
  }
  return;
}



/* Entry: 108e95bdc; end: 108e95c0b; -[SCChatStickerSearchBarView didResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95bdc(long param_1)

{
  func_0x00010bfe1560();
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ced0),PTR_s_setText__1126625f0,0);
  return;
}



/* Entry: 108e95c0c; end: 108e95c4f; -[SCChatStickerSearchBarView willResumeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95c0c(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277cedc;
  if (*(char *)(param_1 + lVar1) == '\x01') {
    func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_11277ced0));
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 108e95c50; end: 108e95c53; -[SCChatStickerSearchBarView _didTapCancel] */

void FUN_108e95c50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 108e95c54; end: 108e95cc7; -[SCChatStickerSearchBarView textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e95c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfe1560(param_1);
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11277cecc),param_2,uVar1);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 108e95cc8; end: 108e95d1b; -[SCChatStickerSearchBarView textFieldDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95cc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11277cee0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c254da0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1586d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277ced0),PTR_s_selectAll__112633bd0,0);
  return;
}



/* Entry: 108e95d1c; end: 108e95d63; -[SCChatStickerSearchBarView textFieldDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95d1c(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11277cedc) & 1) != 0) {
    return;
  }
  param_1 = param_1 + _DAT_11277cee0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c254dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e95d64; end: 108e95d73; -[SCChatStickerSearchBarView searchTextChangeObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108e95d64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277cecc);
}



/* Entry: 108e95d74; end: 108e95d93; -[SCChatStickerSearchBarView keyboardDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95d74(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277cee0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e95d94; end: 108e95da7; -[SCChatStickerSearchBarView setKeyboardDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95d94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277cee0,param_3);
  return;
}



/* Entry: 108e95da8; end: 108e95e13; -[SCChatStickerSearchBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e95da8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277cee0);
  _objc_storeStrong(param_1 + _DAT_11277cecc,0);
  _objc_storeStrong(param_1 + _DAT_11277ced8,0);
  _objc_storeStrong(param_1 + _DAT_11277ced4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277ced0,0);
  return;
}



/* Entry: 108e95e14; end: 108e9616f; +[SCChatStickerSearchResultsFilterer filter:searchTerm:maxResults:avatarId:friendAvatarId:bitmojiStickerRefresher:] */

undefined8 *
FUN_108e95e14(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 *param_5,
             undefined8 *param_6,long param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bffc4a0();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = &uStack_130;
  puVar8 = auStack_f0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        puVar12 = *(undefined8 **)(lStack_128 + lVar9 * 8);
        puVar10 = puVar1;
        func_0x00010bf529e0();
        if (param_5 <= puVar10) goto LAB_108e960ec;
        puVar10 = puVar12;
        func_0x00010c27dd80();
        if (puVar10 != (undefined8 *)0x0) {
          puVar10 = puVar12;
          func_0x00010c27dd80();
          if (puVar10 == (undefined8 *)0x1) {
            puVar10 = puVar12;
            func_0x00010c2540c0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = param_1;
            func_0x00010bf8e2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_1;
            puVar7 = puVar4;
            puVar8 = puVar10;
            func_0x00010c1607e0();
            _objc_release(puVar4);
            if (((ulong)puVar6 & 1) == 0) {
              puVar7 = param_1;
              puVar8 = puVar10;
              func_0x00010bf8e380();
              if ((int)puVar7 != 0) {
                puVar4 = param_1;
                func_0x00010c265b20();
                _objc_retainAutoreleasedReturnValue();
                puVar6 = param_1;
                puVar7 = puVar4;
                puVar8 = puVar10;
                func_0x00010c1607e0();
                _objc_release(puVar4);
                if ((int)puVar6 == 0) goto LAB_108e960ac;
              }
              uVar3 = param_4;
              func_0x00010c08fa60();
              if (uVar3 < 3) {
                puVar7 = (undefined8 *)0x7;
                puVar4 = param_1;
                puVar8 = puVar10;
                func_0x00010bf8e380();
                if ((int)puVar4 != 0) goto LAB_108e960ac;
              }
              _objc_release(puVar10);
LAB_108e960b8:
              func_0x00010befa120(puVar1);
              puVar7 = puVar12;
            }
            else {
LAB_108e960ac:
              _objc_release(puVar10);
            }
          }
          else {
            puVar10 = puVar12;
            func_0x00010c271a80();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar10;
            func_0x00010bf96da0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            puVar5 = PTR_PTR_1126ba800;
            _objc_opt_class(PTR_PTR_1126ba800);
            puVar6 = puVar4;
            _objc_opt_isKindOfClass(puVar4,puVar5);
            puVar10 = puVar4;
            if (((ulong)puVar6 & 1) == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            _objc_retain(puVar10);
            _objc_release(puVar4);
            puVar4 = puVar10;
            func_0x00010bf1c500();
            _objc_release(puVar10);
            if (puVar4 != (undefined8 *)0x2) goto LAB_108e960b8;
            if (param_7 != 0) {
              puVar10 = param_8;
              puVar8 = param_6;
              func_0x00010c125080();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar12;
              if (puVar10 != (undefined8 *)0x0) {
                puVar7 = puVar10;
                func_0x00010befa120(puVar1);
              }
              goto LAB_108e960ac;
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar7 = &uStack_130;
      puVar8 = auStack_f0;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_108e960ec:
  _objc_release(param_3);
  puVar10 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar1 = puVar7;
  func_0x00010bf4b900();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = puVar8;
    func_0x00010c25ce40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf4b900(puVar7);
    _objc_release(puVar1);
  }
  else {
    puVar10 = (undefined8 *)0x1;
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  return puVar10;
}



/* Entry: 108e96170; end: 108e96207; +[SCChatStickerSearchResultsFilterer set:containsEmoji:] */

ulong FUN_108e96170(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf4b900(param_3,param_2,param_4);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_4;
    func_0x00010c25ce40(param_4,param_2,&PTR____CFConstantStringClassReference_110efd418);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf4b900(param_3,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108e96208; end: 108e963df; +[SCChatStickerSearchResultsFilterer emojiCategory:containsEmoji:] */

undefined8
FUN_108e96208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b61c0;
  func_0x00010bf61040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf333c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    param_1 = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar5 = puVar3;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        uVar7 = *(undefined8 *)((long)puVar9 * 8);
        func_0x00010c26b700(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar7);
        puVar9 = puVar9 + 1;
      } while (puVar6 != puVar9);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_alloc(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010bff4000();
    func_0x00010c1607e0(param_1);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lRam000000011372ea60 != -1) {
    func_0x000107c27d9c(0x11372ea60,&PTR___NSConcreteGlobalBlock_110ac7da8);
  }
  uVar7 = uRam000000011372ea58;
  _objc_retain(uRam000000011372ea58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return uVar7;
}



/* Entry: 108e963e0; end: 108e96433; +[SCChatStickerSearchResultsFilterer symbolsWhiteList] */

void FUN_108e963e0(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372ea60 != -1) {
    func_0x000107c27d9c(0x11372ea60,&PTR___NSConcreteGlobalBlock_110ac7da8);
  }
  uVar1 = uRam000000011372ea58;
  _objc_retain(uRam000000011372ea58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e96434; end: 108e964fb;  */

void FUN_108e96434(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110dcb3f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372ea58;
  puRam000000011372ea58 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e964fc; end: 108e9654f; +[SCChatStickerSearchResultsFilterer emojiBlackList] */

void FUN_108e964fc(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372ea70 != -1) {
    func_0x000107c27d9c(0x11372ea70,&PTR___NSConcreteGlobalBlock_110ac7dc8);
  }
  uVar1 = uRam000000011372ea68;
  _objc_retain(uRam000000011372ea68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e96550; end: 108e965e7;  */

void FUN_108e96550(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110e3ac18);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372ea68;
  puRam000000011372ea68 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e965e8; end: 108e96663; -[SCChatStickerSearchPillBarView initWithSearchDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e965e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fee58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11277cee4),param_3);
    func_0x00010beaf960(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e96664; end: 108e97027; -[SCChatStickerSearchPillBarView _setupSearchPillBarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e96664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar22 = (long)_DAT_11277cee8;
  uVar21 = *(undefined8 *)(param_1 + lVar22);
  *(undefined **)(param_1 + lVar22) = puVar1;
  _objc_release(uVar21);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar22));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar22));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar22);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar24);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar21);
  _objc_release(lVar3);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bdf3de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar22));
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar11);
  _objc_release(puVar1);
  puVar1 = puVar11;
  func_0x00010c08c0e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(puVar1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar22));
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar11);
  _objc_release(puVar1);
  lVar5 = param_1;
  func_0x00010be9c6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(puVar11);
  func_0x00010c181f00(0x443b8000,lVar5);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar24 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar24;
  func_0x00010bf493c0(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c274200(puVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar25;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar11;
  func_0x00010bf1ff80(puVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar15;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(puVar13);
  _objc_release(lVar25);
  _objc_release(lVar23);
  _objc_release(puVar12);
  _objc_release(lVar24);
  lVar24 = param_1;
  func_0x00010be9c540();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11277ceec;
  uVar21 = *(undefined8 *)(param_1 + lVar25);
  *(long *)(param_1 + lVar25) = lVar24;
  _objc_release(uVar21);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar25));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar25));
  func_0x00010befbb60(puVar11);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar7;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar19;
  func_0x00010bf493c0(0xc018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar18);
  _objc_release(uVar10);
  _objc_release(puVar16);
  _objc_release(uVar19);
  _objc_release(uVar8);
  _objc_release(puVar13);
  _objc_release(uVar9);
  _objc_release(uVar21);
  _objc_release(puVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  lVar24 = param_1;
  func_0x00010bdf3de0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_11277cef0;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(long *)(param_1 + lVar23) = lVar24;
  _objc_release(uVar21);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar22));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar23));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar23 = (long)_DAT_11277cef4;
  uVar21 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar1;
  _objc_release(uVar21);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar23));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar23));
  func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar23));
  func_0x00010befbb60(puVar11);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar25);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar23);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar19;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar13);
  _objc_release(uVar10);
  _objc_release(puVar16);
  _objc_release(uVar19);
  _objc_release(uVar21);
  _objc_release(puVar12);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(lVar24);
  _objc_release(uVar2);
  func_0x00010beaed00(param_1);
  func_0x00010beab920(param_1);
  _objc_release(lVar5);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126dbc90;
  _objc_alloc();
  lVar5 = lVar3 + _DAT_11277cee4;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c042980();
  lVar24 = (long)_DAT_11277cef8;
  uVar21 = *(undefined8 *)(lVar3 + lVar24);
  *(undefined **)(lVar3 + lVar24) = puVar1;
  _objc_release(uVar21);
  _objc_release(lVar5);
  func_0x00010c219b60(*(undefined8 *)(lVar3 + lVar24));
                    /* WARNING: Could not recover jumptable at 0x00010c1f7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + lVar24),PTR_s_setScrollDelegate__11265b8c8,lVar3);
  return;
}



/* Entry: 108e97028; end: 108e970af; -[SCChatStickerSearchPillBarView _setupPillCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e97028(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126dbc90;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11277cee4;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c042980();
  lVar4 = (long)_DAT_11277cef8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c1f7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setScrollDelegate__11265b8c8,param_1);
  return;
}



/* Entry: 108e970b0; end: 108e97397; -[SCChatStickerSearchPillBarView _setupCollectionContainerInSearchView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e970b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  lVar10 = (long)_DAT_11277cef8;
  func_0x00010befbb60(puVar1);
  func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_11277cee8));
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  uStack_98 = uVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_a8 = uVar2;
  uStack_90 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  uStack_b0 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  uStack_c0 = uVar3;
  uStack_88 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  uStack_d0 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_80 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  uStack_78 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar6;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar10);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar9);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puStack_d8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c0);
  _objc_release(puStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(puStack_a0);
  _objc_release(uStack_98);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11277cefc);
  *(undefined **)(param_1 + _DAT_11277cefc) = puVar1;
  _objc_release(uVar8);
  lVar10 = param_1;
  func_0x00010beab940();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_108e97398;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  puStack_130 = puVar6;
  puStack_128 = puVar7;
  uStack_120 = uVar2;
  puStack_118 = puVar9;
  uStack_110 = uVar3;
  uStack_108 = uVar4;
  puStack_100 = puVar1;
  lStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_148 = puVar9;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_140 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  func_0x00010c196020(0,0x3ff0000000000000,puVar5);
  _CATransform3DMakeRotation(&uStack_1c8,0x3ff921fb54442d18,0,0,0x3ff0000000000000);
  uStack_208 = uStack_180;
  uStack_210 = uStack_188;
  uStack_1f8 = uStack_170;
  uStack_200 = uStack_178;
  uStack_1e8 = uStack_160;
  uStack_1f0 = uStack_168;
  uStack_1d8 = uStack_150;
  uStack_1e0 = uStack_158;
  uStack_248 = uStack_1c0;
  uStack_250 = uStack_1c8;
  uStack_238 = uStack_1b0;
  uStack_240 = uStack_1b8;
  uStack_228 = uStack_1a0;
  uStack_230 = uStack_1a8;
  uStack_218 = uStack_190;
  uStack_220 = uStack_198;
  func_0x00010c219960(puVar5);
  uVar2 = *(undefined8 *)(lVar10 + _DAT_11277cefc);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010c1c2c00();
  _objc_release(uVar2);
  puVar9 = *(undefined **)(lVar10 + _DAT_11277cf00);
  *(undefined **)(lVar10 + _DAT_11277cf00) = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_s_layoutSublayersOfLayer__1125377f8;
  puStack_280 = &DAT_11277cefc;
  pcStack_258 = FUN_108e97544;
  puStack_288 = PTR_PTR_1126fee58;
  puStack_290 = puVar9;
  uStack_278 = uVar2;
  puStack_270 = puVar5;
  lStack_268 = lVar10;
  ppuStack_260 = &puStack_f0;
  _objc_retain(puVar1);
  _objc_msgSendSuper2(&puStack_290,puVar6,puVar1);
  puVar5 = puVar9;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  if (puVar1 == puVar5) {
    func_0x00010bed8e80(puVar9);
  }
  return;
}



/* Entry: 108e97398; end: 108e97543; -[SCChatStickerSearchPillBarView _setupCollectionGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e97398(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_68 = puVar6;
  func_0x00010bf41680(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb60(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c196020(0,0x3ff0000000000000,puVar1);
  _CATransform3DMakeRotation(&uStack_e8,0x3ff921fb54442d18,0,0,0x3ff0000000000000);
  uStack_128 = uStack_a0;
  uStack_130 = uStack_a8;
  uStack_118 = uStack_90;
  uStack_120 = uStack_98;
  uStack_108 = uStack_80;
  uStack_110 = uStack_88;
  uStack_f8 = uStack_70;
  uStack_100 = uStack_78;
  uStack_168 = uStack_e0;
  uStack_170 = uStack_e8;
  uStack_158 = uStack_d0;
  uStack_160 = uStack_d8;
  uStack_148 = uStack_c0;
  uStack_150 = uStack_c8;
  uStack_138 = uStack_b0;
  uStack_140 = uStack_b8;
  func_0x00010c219960(puVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277cefc);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1c2c00();
  _objc_release(uVar5);
  puVar6 = *(undefined **)(param_1 + _DAT_11277cf00);
  *(undefined **)(param_1 + _DAT_11277cf00) = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_s_layoutSublayersOfLayer__1125377f8;
  puStack_1a0 = &DAT_11277cefc;
  pcStack_178 = FUN_108e97544;
  puStack_1a8 = PTR_PTR_1126fee58;
  puStack_1b0 = puVar6;
  uStack_198 = uVar5;
  puStack_190 = puVar1;
  lStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_msgSendSuper2(&puStack_1b0,puVar3,puVar2);
  puVar1 = puVar6;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar2 == puVar1) {
    func_0x00010bed8e80(puVar6);
  }
  return;
}



/* Entry: 108e97544; end: 108e975d3; -[SCChatStickerSearchPillBarView layoutSublayersOfLayer:] */

void FUN_108e97544(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_layoutSublayersOfLayer__1125377f8;
  puStack_38 = PTR_PTR_1126fee58;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (param_3 == lVar2) {
    func_0x00010bed8e80(param_1);
  }
  return;
}



/* Entry: 108e975d4; end: 108e9767f; -[SCChatStickerSearchPillBarView didMoveToWindow] */

void FUN_108e975d4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fee58;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _objc_release();
  if (param_1 != 0) {
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 108e97680; end: 108e97687;  */

void FUN_108e97680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed8e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateGradientLayer_112593d48);
  return;
}



/* Entry: 108e97688; end: 108e9775b; -[SCChatStickerSearchPillBarView _updateGradientLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e97688(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar2 = (long)_DAT_11277cef8;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  if ((0.0 < param_3) && (func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2)), 0.0 < param_4)) {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
    dVar4 = param_3;
    func_0x000107c308a4();
    lVar3 = (long)_DAT_11277cf00;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf4cdc0(*(undefined8 *)(param_5 + lVar2));
    uVar1 = *(undefined8 *)(param_5 + lVar3);
    if (param_3 <= -param_4) {
      dVar4 = 1.0;
    }
    else {
      func_0x00010bf20c00(uVar1);
      dVar4 = -4.0 / dVar4 + 1.0;
      uVar1 = *(undefined8 *)(param_5 + lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c209770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(0,dVar4,uVar1,PTR_s_setStartPoint__112660000);
    return;
  }
  return;
}



/* Entry: 108e9775c; end: 108e9781f; -[SCChatStickerSearchPillBarView _searchImageView] */

void FUN_108e9775c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110ea0ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c219b60();
  func_0x00010c182220(puVar1,param_2,1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e97820; end: 108e9792f; -[SCChatStickerSearchPillBarView _searchCancelImageView] */

void FUN_108e97820(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf3ab20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  func_0x00010c21e900();
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x00010c182220(puVar3,param_2,1);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcd);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e97930; end: 108e97a4f; -[SCChatStickerSearchPillBarView _createStackViewHorizontalSpacerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e97930(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c219b60(puVar2,param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf49420(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar3 + _DAT_11277cee4;
  _objc_loadWeakRetained(puVar3);
  func_0x00010c0e98c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108e97a50; end: 108e97a83; -[SCChatStickerSearchPillBarView _didTapStickerSearchView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e97a50(long param_1)

{
  param_1 = param_1 + _DAT_11277cee4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e98c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e97a84; end: 108e97ab7; -[SCChatStickerSearchPillBarView _didTapSearchCancelView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e97a84(long param_1)

{
  param_1 = param_1 + _DAT_11277cee4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf3dd00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e97ab8; end: 108e97c03; -[SCChatStickerSearchPillBarView setText:isCategorySearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e97ab8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = param_3;
  _objc_retain(param_3);
  if ((uint)param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
    if ((int)puVar1 == 0) {
      lVar2 = (long)_DAT_11277cef4;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
      uVar3 = 0;
      goto LAB_108e97b94;
    }
  }
  FUN_108e9953c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_11277cef4;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar2),param_2,puVar1);
  uVar3 = 1;
LAB_108e97b94:
  _objc_release(puVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277ceec),param_2,uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277cef0),param_2,(uint)param_4 ^ 1);
  lVar2 = (long)_DAT_11277cefc;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,param_4);
  func_0x00010c1cbe20(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010bed8e80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e97c04; end: 108e97c13; -[SCChatStickerSearchPillBarView setBirthdayPillVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e97c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c170510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cef8),PTR_s_setBirthdayPillVisible__112639b60);
  return;
}



/* Entry: 108e97c14; end: 108e97c17; -[SCChatStickerSearchPillBarView pillCollectionViewDidScroll] */

void FUN_108e97c14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed8e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateGradientLayer_112593d48);
  return;
}



/* Entry: 108e97c18; end: 108e97cb3; -[SCChatStickerSearchPillBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e97c18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277cf00,0);
  _objc_storeStrong(param_1 + _DAT_11277cefc,0);
  _objc_storeStrong(param_1 + _DAT_11277cef8,0);
  _objc_storeStrong(param_1 + _DAT_11277ceec,0);
  _objc_storeStrong(param_1 + _DAT_11277cef4,0);
  _objc_storeStrong(param_1 + _DAT_11277cef0,0);
  _objc_storeStrong(param_1 + _DAT_11277cee8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277cee4);
  return;
}



/* Entry: 108e97cb4; end: 108e97cf3; -[SCChatStickerSearchPillBarViewInsetManager scrollViewWillBeginDragging:searchBarTopConstantConstant:contentInset:] */

void FUN_108e97cb4(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  double dVar1;
  
  dVar1 = param_2;
  func_0x00010bf4cdc0(param_5);
  *(double *)(param_3 + 8) = dVar1;
  *(double *)(param_3 + 0x10) = param_1 - param_2;
  *(undefined1 *)(param_3 + 0x18) = 0;
  return;
}



/* Entry: 108e97cf4; end: 108e97d07; -[SCChatStickerSearchPillBarViewInsetManager scrollViewWillEndDraggingWithTargetOffsetY:] */

void FUN_108e97cf4(double param_1,long param_2)

{
  *(bool *)(param_2 + 0x18) = param_1 == *(double *)(param_2 + 8);
  return;
}



/* Entry: 108e97d08; end: 108e97def; -[SCChatStickerSearchPillBarViewInsetManager searchPillInsetForScrollViewDidScroll:searchBarTopConstantConstant:contentInset:] */

void FUN_108e97d08(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_2;
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010c070ea0();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
    if ((param_2 <= param_1) || ((*(byte *)(param_3 + 0x18) & 1) == 0)) goto LAB_108e97dd0;
    dVar4 = *(double *)(param_3 + 8);
    func_0x00010bf4cdc0(param_5);
    dVar4 = dVar4 - dVar3;
    dVar3 = -dVar4;
    if (0.0 <= dVar4) {
      dVar3 = dVar4;
    }
    dVar3 = (double)NEON_fminnm(dVar3,0x4043000000000000);
  }
  else {
    func_0x00010bf4cdc0(param_5);
    dVar3 = (double)NEON_fminnm(((dVar3 - *(double *)(param_3 + 8)) - *(double *)(param_3 + 0x10)) /
                                38.0,0x3ff0000000000000);
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar3 = dVar3 * 38.0;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2 - dVar3,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
LAB_108e97dd0:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e97df0; end: 108e97e17; -[SCChatStickerSearchPillBarViewInsetManager searchPillInsetForScrollViewDidEndDragging:willDecelerate:searchBarTopConstantConstant:contentInset:] */

void FUN_108e97df0(void)

{
  uint in_w3;
  
  if ((in_w3 & 1) == 0) {
    func_0x00010bee0ca0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e97e18; end: 108e97e1b; -[SCChatStickerSearchPillBarViewInsetManager searchPillInsetForScrollViewDidEndDecelerating:searchBarTopConstantConstant:contentInset:] */

void FUN_108e97e18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStickerSearchBarPositionO_112595cd0);
  return;
}



/* Entry: 108e97e1c; end: 108e97ee7; -[SCChatStickerSearchPillBarViewInsetManager _updateStickerSearchBarPositionOnScrollingEnd:searchBarTopConstantConstant:contentInset:] */

void FUN_108e97e1c(double param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  
  dVar1 = param_2;
  _objc_retain(param_7);
  func_0x00010bf4d5e0(param_7);
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  if (param_4 - param_2 <= dVar1) {
    if ((param_2 <= param_1) || (param_1 <= param_2 + -38.0)) goto LAB_108e97ed4;
    dVar1 = 0.0;
    if (19.0 <= ABS(param_1 - param_2)) {
      dVar1 = 38.0;
    }
    param_2 = param_2 - dVar1;
  }
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
LAB_108e97ed4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e97ee8; end: 108e97fdf; -[SCChatStickerSearchPillCollectionView initWithSearchDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e97ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c91a0;
  _objc_alloc_init(PTR_PTR_1126c91a0);
  func_0x00010c1f7ac0();
  func_0x00010c197460(0,0x4040000000000000,puVar1);
  puStack_38 = PTR_PTR_1126fee60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame_collectionViewLayo_1125e29e0,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + (long)_DAT_11277cf10),param_3);
    puVar3 = PTR_PTR_1126d4e50;
    func_0x00010c0fbea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277cf14);
    *(undefined **)((long)puVar2 + (long)_DAT_11277cf14) = puVar3;
    _objc_release(uVar4);
    func_0x00010beab960(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 108e97fe0; end: 108e9807f; -[SCChatStickerSearchPillCollectionView _setupCollectionView] */

void FUN_108e97fe0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  func_0x00010c2025c0(param_1);
  _objc_opt_class(PTR_PTR_1126dc4b8);
  func_0x00010c126000(param_1);
  func_0x00010c181f80(0,0x4020000000000000,0,0x4020000000000000,param_1);
  func_0x00010c189840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDelegate__112640798,param_1);
  return;
}



/* Entry: 108e98080; end: 108e9808b; -[SCChatStickerSearchPillCollectionView setBirthdayPillVisible:] */

void FUN_108e98080(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc60b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addBirthdayPill_11254f1c8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeBirthdayPill_112580798);
  return;
}



/* Entry: 108e9808c; end: 108e9814f; -[SCChatStickerSearchPillCollectionView _pillsContainBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9808c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11277cf14;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0dfd20(uVar2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf960c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d4e50;
    func_0x00010bf1a820(PTR_PTR_1126d4e50);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf960c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar3,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 108e98150; end: 108e981cb; -[SCChatStickerSearchPillCollectionView _removeBirthdayPill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e98150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010be73e20();
  if ((int)lVar4 != 0) {
    lVar4 = (long)_DAT_11277cf14;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0d3c80();
    func_0x00010c12d3c0();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar3);
    func_0x00010c128b60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108e981cc; end: 108e9826b; -[SCChatStickerSearchPillCollectionView _addBirthdayPill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e981cc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = param_1;
  func_0x00010be73e20();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126d4e50;
  func_0x00010bf1a820(PTR_PTR_1126d4e50);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277cf14;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c0d3c80();
  func_0x00010c066b00();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  _objc_release(uVar5);
  func_0x00010c128b60(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 108e9826c; end: 108e982f7; -[SCChatStickerSearchPillCollectionView _stickerSearchPillAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e9826c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277cf14;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c142240();
  if (uVar2 < uVar1) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    uVar2 = param_3;
    func_0x00010c142240(param_3);
    func_0x00010c0dfd40(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e982f8; end: 108e98307; -[SCChatStickerSearchPillCollectionView collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e982f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277cf14),PTR_s_count_1125b2420);
  return;
}



/* Entry: 108e98308; end: 108e9840f; -[SCChatStickerSearchPillCollectionView collectionView:cellForItemAtIndexPath:] */

void FUN_108e98308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110efd5d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec2b40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar1 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(param_3,param_2,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bf960c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110efd5f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108e98410; end: 108e9848f; -[SCChatStickerSearchPillCollectionView collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e98410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bec2b40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11277cf10;
  _objc_loadWeakRetained(param_1);
  lVar2 = lVar1;
  func_0x00010c26b700(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8e40(param_1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e98490; end: 108e984c3; -[SCChatStickerSearchPillCollectionView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e98490(long param_1)

{
  param_1 = param_1 + _DAT_11277cf18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fbd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e984c4; end: 108e984e3; -[SCChatStickerSearchPillCollectionView scrollDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e984c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277cf18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


