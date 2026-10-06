/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060fe7b4; end: 1060fe7bb; -[SCShoppingLensItemSetDomain domainLabel] */

undefined8 FUN_1060fe7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060fe7bc; end: 1060fe7c3; -[SCShoppingLensItemSetDomain showcaseContext] */

undefined8 FUN_1060fe7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060fe7c4; end: 1060fe7cb; -[SCShoppingLensItemSetDomain stateKey] */

undefined8 FUN_1060fe7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060fe7cc; end: 1060fe7d3; -[SCShoppingLensItemSetDomain stateProducts] */

undefined8 FUN_1060fe7cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060fe7d4; end: 1060fe7db; -[SCShoppingLensItemSetDomain assetCategory] */

undefined8 FUN_1060fe7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060fe7dc; end: 1060fe7e3; -[SCShoppingLensItemSetDomain renderingGroups] */

undefined8 FUN_1060fe7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1060fe7e4; end: 1060fe7eb; -[SCShoppingLensItemSetDomain displayCardType] */

undefined8 FUN_1060fe7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1060fe7ec; end: 1060fe84b; -[SCShoppingLensItemSetDomain .cxx_destruct] */

void FUN_1060fe7ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fe84c; end: 1060fe8d3; -[SCShoppingLensItemSetStateProduct initWithStateKey:productId:] */

undefined1 *
FUN_1060fe84c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126efb68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060fe8d4; end: 1060fe8f7; -[SCShoppingLensItemSetStateProduct copyWithZone:] */

undefined8 FUN_1060fe8d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1060fe8f8; end: 1060fe963; -[SCShoppingLensItemSetStateProduct hash] */

undefined8 * FUN_1060fe8f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1060fe9e8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1060fe9e8;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_1060fe9e8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1060fe9e8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1060fe964; end: 1060fea03; -[SCShoppingLensItemSetStateProduct isEqual:] */

long FUN_1060fe964(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1060fe9e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_1060fe9e8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1060fe9e8;
    }
  }
  lVar3 = 1;
LAB_1060fe9e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1060fea04; end: 1060fea0b; -[SCShoppingLensItemSetStateProduct stateKey] */

undefined8 FUN_1060fea04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060fea0c; end: 1060fea13; -[SCShoppingLensItemSetStateProduct productId] */

undefined8 FUN_1060fea0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060fea14; end: 1060fea1f; -[SCShoppingLensItemSetStateProduct .cxx_destruct] */

void FUN_1060fea14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fea20; end: 1060fea97; -[SCShoppingLensItemSetRenderingGroup initWithRenderingOptions:] */

undefined1 * FUN_1060fea20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126efb70;
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



/* Entry: 1060fea98; end: 1060feabb; -[SCShoppingLensItemSetRenderingGroup copyWithZone:] */

undefined8 FUN_1060fea98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1060feabc; end: 1060feac3; -[SCShoppingLensItemSetRenderingGroup hash] */

void FUN_1060feabc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1060feac4; end: 1060feb53; -[SCShoppingLensItemSetRenderingGroup isEqual:] */

long FUN_1060feac4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1060feb38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1060feb38;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1060feb38;
    }
  }
  lVar3 = 1;
LAB_1060feb38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1060feb54; end: 1060feb5b; -[SCShoppingLensItemSetRenderingGroup renderingOptions] */

undefined8 FUN_1060feb54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060feb5c; end: 1060feb67; -[SCShoppingLensItemSetRenderingGroup .cxx_destruct] */

void FUN_1060feb5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060feb68; end: 1060febaf; -[SCShoppingLensItemSetRenderingOptionWrapper initWithOptionName:] */

void FUN_1060feb68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126efb78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1060febb0; end: 1060febd3; -[SCShoppingLensItemSetRenderingOptionWrapper copyWithZone:] */

undefined8 FUN_1060febb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1060febd4; end: 1060febe3; -[SCShoppingLensItemSetRenderingOptionWrapper hash] */

long FUN_1060febd4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 1060febe4; end: 1060fec6b; -[SCShoppingLensItemSetRenderingOptionWrapper isEqual:] */

bool FUN_1060febe4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1060fec6c; end: 1060fec73; -[SCShoppingLensItemSetRenderingOptionWrapper optionName] */

undefined8 FUN_1060fec6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060fec74; end: 1060fec7b; -[SCShoppingLensDeepLinkServices deeplinkPresenter] */

undefined8 FUN_1060fec74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060fec7c; end: 1060fec87; -[SCShoppingLensDeepLinkServices .cxx_destruct] */

void FUN_1060fec7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fec88; end: 1060fec8f; -[SCShoppingLensLoadingIndicatorServices loadingIndicatorPresenter] */

undefined8 FUN_1060fec88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060fec90; end: 1060fec9b; -[SCShoppingLensLoadingIndicatorServices .cxx_destruct] */

void FUN_1060fec90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fec9c; end: 1060feca3; -[SCShoppingLensPDPServices pdpPresenter] */

undefined8 FUN_1060fec9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060feca4; end: 1060fecaf; -[SCShoppingLensPDPServices .cxx_destruct] */

void FUN_1060feca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fecb0; end: 1060fecb7; -[SCShoppingLensTwoDTryOnServices twoDTryOnPresenter] */

undefined8 FUN_1060fecb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1060fecb8; end: 1060fecc3; -[SCShoppingLensTwoDTryOnServices .cxx_destruct] */

void FUN_1060fecb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fecc4; end: 1060fed4b; -[SCSnapKitCameraGrapheneMetricsReporter logCreativeKitLensUnlockErrorWithProductType:] */

void FUN_1060fecc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8070;
  _objc_retain(param_3);
  func_0x00010bf399e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1060fed4c; end: 1060fedd3; -[SCSnapKitCameraGrapheneMetricsReporter logCreativeKitLensUnlockSuccessWithProductType:] */

void FUN_1060fed4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8070;
  _objc_retain(param_3);
  func_0x00010bf39a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1060fedd4; end: 1060feddf; -[SCSnapKitCameraGrapheneMetricsReporter .cxx_destruct] */

void FUN_1060fedd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fede0; end: 1060fee5b; -[SCSnapKitCameraFeatureProviderPlugin .cxx_destruct] */

void FUN_1060fede0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060fee5c; end: 1060fee8f; -[SCCameraDeepLinkStickerPreviewView initWithFrame:] */

void FUN_1060fee5c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126efbb0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1060fee90; end: 1060fefa7; -[SCCameraDeepLinkStickerPreviewView configureSticker:stickerView:] */

void FUN_1060fee90(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c255280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c255280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar1);
  }
  if (param_4 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c4978;
    func_0x00010c254120(PTR_PTR_1126c4978,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(param_4);
    puVar3 = param_4;
  }
  func_0x00010becee20(param_1,param_2,puVar3,param_3);
  func_0x00010be04ec0(param_1,param_2,puVar3);
  func_0x00010befbb60(param_1,param_2,puVar3);
  func_0x00010c20bb80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060fefa8; end: 1060ff0b3; -[SCCameraDeepLinkStickerPreviewView _transformStickerView:sticker:] */

void FUN_1060fefa8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126c4978;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c253ae0(puVar1,param_6,param_8);
  func_0x00010bfb68e0(param_5);
  param_1 = param_1 * param_3;
  func_0x00010bfb68e0(param_5);
  func_0x00010c17a6a0(param_1,param_2 * param_4,param_7);
  func_0x00010c254d80(PTR_PTR_1126c4978,param_6,param_8);
  _CGAffineTransformMakeScale(&uStack_80);
  func_0x00010c254d60(PTR_PTR_1126c4978,param_6,param_8);
  _objc_release(param_8);
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  _CGAffineTransformRotate(&uStack_b0,param_1,&uStack_e0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010c219960(param_7,param_6,&uStack_b0);
  _objc_release(param_7);
  return;
}



/* Entry: 1060ff0b4; end: 1060ff1db; -[SCCameraDeepLinkStickerPreviewView _displayStickerToolTipWithStickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ff0b4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  if (*(char *)(param_2 + _DAT_11273f678) == '\x01') {
    func_0x00010bf345e0(param_4);
    uVar1 = param_4;
    dVar6 = param_1;
    func_0x00010bfb68e0(param_4);
    _CGRectGetMinY();
    dVar6 = dVar6 + -5.0;
    func_0x000108ed0860();
    _objc_retainAutoreleasedReturnValue();
    dVar5 = 100.0;
    if (dVar6 < 100.0) {
      func_0x00010bf345e0(param_4);
      dVar6 = dVar5;
      func_0x00010bfb68e0(param_4);
      _CGRectGetMaxY();
      dVar6 = dVar6 + 5.0;
      param_1 = dVar5;
    }
    puVar2 = PTR_PTR_1126b09c0;
    _objc_alloc();
    func_0x00010c051640();
    lVar4 = (long)_DAT_11273f67c;
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    *(undefined **)(param_2 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c10c340(param_1,dVar6,0x4008000000000000,*(undefined8 *)(param_2 + lVar4),param_3,
                        param_2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar4),param_3,param_2);
    func_0x00010c201360(param_2,param_3,0);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060ff1dc; end: 1060ff20f; -[SCCameraDeepLinkStickerPreviewView dismissTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ff1dc(long param_1)

{
  func_0x00010bf82f40(*(undefined8 *)(param_1 + _DAT_11273f67c));
                    /* WARNING: Could not recover jumptable at 0x00010c201370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setShouldShowStickerTooltip__11265df00,0);
  return;
}



/* Entry: 1060ff210; end: 1060ff213; -[SCCameraDeepLinkStickerPreviewView tooltipDidDismiss:] */

void FUN_1060ff210(void)

{
  return;
}



/* Entry: 1060ff214; end: 1060ff26b; -[SCCameraDeepLinkStickerPreviewView stickerContainsPoint:] */

undefined8 FUN_1060ff214(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c255280();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1060ff26c; end: 1060ff27b; -[SCCameraDeepLinkStickerPreviewView shouldShowStickerTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060ff26c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273f678);
}



/* Entry: 1060ff27c; end: 1060ff28b; -[SCCameraDeepLinkStickerPreviewView setShouldShowStickerTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ff27c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273f678) = param_3;
  return;
}



/* Entry: 1060ff28c; end: 1060ff29b; -[SCCameraDeepLinkStickerPreviewView stickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060ff28c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f680);
}



/* Entry: 1060ff29c; end: 1060ff2db; -[SCCameraDeepLinkStickerPreviewView setStickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ff29c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273f680;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060ff2dc; end: 1060ff31b; -[SCCameraDeepLinkStickerPreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ff2dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f680,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273f67c,0);
  return;
}



/* Entry: 1060ff31c; end: 1060ff4e3; -[SCCameraDeepLinkView initWithFrame:controller:metadata:delegate:legacyCameraTooltipsService:cameraConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1060ff31c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_88 = PTR_PTR_1126efbb8;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_90,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273f684),param_9);
    puVar2 = PTR_PTR_1126c8080;
    _objc_alloc();
    func_0x00010bfb68e0(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_11273f688;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_retain();
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010c1af000(*(undefined8 *)((long)puVar1 + lVar4));
    uVar3 = param_8;
    func_0x00010bf2fba0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273f68c;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273f690;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273f694),param_11);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 1060ff4e4; end: 1060ff60f; -[SCCameraDeepLinkView setMetadata:buttonPosition:stickerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ff4e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar4 = (long)_DAT_11273f68c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  *(long *)(param_1 + _DAT_11273f698) = param_4;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273f69c);
  *(undefined8 *)(param_1 + _DAT_11273f69c) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  *(ulong *)(param_1 + _DAT_11273f6a0) = (ulong)(param_4 != 0);
  func_0x00010be926e0(param_1);
  func_0x00010be93de0(param_1);
  lVar1 = param_1;
  func_0x00010c254ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2553e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47480(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1060ff610; end: 1060ff6d3; -[SCCameraDeepLinkView updateStickerPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ff610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11273f68c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010c254ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c2553e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf47480(lVar1,param_2,uVar3,*(undefined8 *)(param_1 + _DAT_11273f69c));
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060ff6d4; end: 1060ff6e3; -[SCCameraDeepLinkView hideTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ff6d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273f6a4),PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 1060ff6e4; end: 1060ff79f; -[SCCameraDeepLinkView shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1060ff6e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  if (*(long *)(param_3 + _DAT_11273f6a8) != 0) {
    dVar2 = 100.0;
    dVar3 = 100.0;
    if (*(long *)(param_3 + _DAT_11273f6a0) != 1) {
      dVar3 = 0.0;
    }
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c14d9e0();
    _CGRectContainsPoint
              (0x402a000000000000,dVar3 + dVar2 + 0.0 + 10.0 + -13.0,0x404f800000000000,
               0x404f800000000000,param_1,param_2);
    if ((int)puVar1 != 0) {
      func_0x00010bf3ab60(param_3);
      puVar1 = (undefined *)0x1;
    }
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 1060ff7a0; end: 1060ff7f3; -[SCCameraDeepLinkView stickerContainsPoint:] */

undefined8 FUN_1060ff7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c254ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c253ba0(param_1,param_2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1060ff7f4; end: 1060ffa9f; -[SCCameraDeepLinkView _resetClearButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ff7f4(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x24;
  long lVar9;
  long unaff_x26;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar9 = (long)_DAT_11273f6a8;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar9));
  uVar2 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = 0;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    uStack_68 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = uStack_68;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x24 == 0) {
      uStack_70 = param_1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = uStack_70;
      func_0x00010bf0d6a0();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x26 == 0) {
        _objc_release(uStack_70);
        _objc_release(uStack_68);
        _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar3);
        return;
      }
      unaff_x24 = 0;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  lVar6 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c096de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  if (bVar1) {
    _objc_release(unaff_x26);
    _objc_release(uStack_70);
  }
  if (lVar5 == 0) {
    _objc_release(unaff_x24);
    _objc_release(uStack_68);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar7 == 0) {
    puVar8 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(0,0x4059000000000000,0x4049000000000000,0x4049000000000000);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar8;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bddfee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar9));
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar2);
    _objc_release(puVar8);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar9));
    func_0x00010befbb60(param_1);
    func_0x00010be941c0(param_1);
    lVar3 = param_1;
    func_0x00010bdd9f80();
    if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c201370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + _DAT_11273f688),
                 PTR_s_setShouldShowStickerTooltip__11265df00,1);
      return;
    }
  }
  return;
}



/* Entry: 1060ffaa0; end: 1060ffb17; -[SCCameraDeepLinkView _canShowStickerTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1060ffaa0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11273f694;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c23c780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6dac0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 1060ffb18; end: 1060ffbab; -[SCCameraDeepLinkView _resetTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ffb18(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273f6a4;
  lVar2 = *(long *)(param_1 + lVar5);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126c8088;
    _objc_alloc();
    func_0x00010c033ec0();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
    lVar2 = *(long *)(param_1 + lVar5);
  }
  iVar1 = (int)lVar2;
  func_0x00010c0d74a0();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  if (iVar1 != 0) {
    func_0x00010c235840();
                    /* WARNING: Could not recover jumptable at 0x00010c0bb370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar5),PTR_s_markCompleted_11260c6f0);
    return;
  }
  *(undefined8 *)(param_1 + lVar5) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1060ffbac; end: 1060ffc27; -[SCCameraDeepLinkView _resetStickerPreviewFrame] */

void FUN_1060ffbac(undefined8 param_1)

{
  func_0x00010c254ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbfe0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  return;
}



/* Entry: 1060ffc28; end: 1060ffe4b;  */

void FUN_1060ffc28(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x8000000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060ffe4c; end: 1060ffedb; -[SCCameraDeepLinkView clearButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ffe4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf47480(*(undefined8 *)(param_1 + _DAT_11273f688),param_2,0,0);
  func_0x00010bfe2c20(param_1);
  lVar2 = param_1 + _DAT_11273f684;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf7c7c0();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_11273f6a8;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010bf84580(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1060ffedc; end: 1060fff0b; -[SCCameraDeepLinkView dismissStickerTooltip] */

void FUN_1060ffedc(undefined8 param_1)

{
  func_0x00010c254ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060fff0c; end: 1060fff1b; -[SCCameraDeepLinkView _clearButtonAccessibilityText] */

void FUN_1060fff0c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e41a58;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e41a58,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1060fff1c; end: 1060fff7b; -[SCCameraDeepLinkView accessibilityElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060fff1c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (*(long *)(param_1 + _DAT_11273f6a8) != 0) {
    func_0x00010befa120(puVar1);
  }
  if (*(long *)(param_1 + _DAT_11273f688) != 0) {
    func_0x00010befa120(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060fff7c; end: 1060fff8b; -[SCCameraDeepLinkView metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060fff7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f68c);
}



/* Entry: 1060fff8c; end: 1060fffcb; -[SCCameraDeepLinkView setMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060fff8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273f68c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060fffcc; end: 1060fffdb; -[SCCameraDeepLinkView stickerPreviewView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060fffcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f688);
}



/* Entry: 1060fffdc; end: 10610001b; -[SCCameraDeepLinkView setStickerPreviewView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060fffdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273f688;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10610001c; end: 10610002b; -[SCCameraDeepLinkView tooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10610001c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f6a4);
}



/* Entry: 10610002c; end: 10610006b; -[SCCameraDeepLinkView setTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610002c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273f6a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10610006c; end: 106100103; -[SCCameraDeepLinkView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610006c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f6a4,0);
  _objc_storeStrong(param_1 + _DAT_11273f688,0);
  _objc_storeStrong(param_1 + _DAT_11273f68c,0);
  _objc_storeStrong(param_1 + _DAT_11273f69c,0);
  _objc_destroyWeak(param_1 + _DAT_11273f694);
  _objc_storeStrong(param_1 + _DAT_11273f690,0);
  _objc_destroyWeak(param_1 + _DAT_11273f684);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273f6a8,0);
  return;
}



/* Entry: 106100104; end: 10610028f; -[SCCameraDeepLinkViewController initWithLegacyCameraTooltipsService:cameraConfiguration:blizzardLogger:renderTarget:itemViewService:temporaryFileWriter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106100104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126efbc0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11273f6ac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273f6b0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273f6b4),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11273f6b8),param_4);
    lVar4 = (long)_DAT_11273f6bc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273f6c0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273f6c4);
    *(undefined **)((long)puVar1 + (long)_DAT_11273f6c4) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106100290; end: 1061003bf; -[SCCameraDeepLinkViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106100290(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c8090;
  _objc_alloc(PTR_PTR_1126c8090);
  lVar2 = param_5;
  func_0x00010c0cc0c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + _DAT_11273f6ac);
  lVar3 = param_5 + _DAT_11273f6b8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c014220(param_1,param_2 + 0.0,param_3,param_4,puVar1,param_6,param_5,lVar2,param_5,
                      uVar4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c222380(param_5,param_6,puVar1);
  func_0x00010bea9420(param_5);
  *(undefined8 *)(param_5 + _DAT_11273f6c8) = 0;
  *(undefined1 *)(param_5 + _DAT_11273f6cc) = 1;
  *(undefined1 *)(param_5 + _DAT_11273f6d0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061003c0; end: 106100507; -[SCCameraDeepLinkViewController _setUpGestureRecognizers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061003c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11273f6d4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11273f6d8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11273f6dc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106100508; end: 10610075b; -[SCCameraDeepLinkViewController setMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106100508(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar6);
  if (lVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lVar6 = *(long *)(param_1 + _DAT_11273f6e0);
    *(undefined **)(param_1 + _DAT_11273f6e0) = puVar4;
  }
  else {
    lVar6 = param_3;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273f6e0);
    *(long *)(param_1 + _DAT_11273f6e0) = lVar3;
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(lVar6);
  *(undefined1 *)(param_1 + _DAT_11273f6d0) = 0;
  lVar6 = (long)_DAT_11273f6e4;
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = param_3;
  _objc_release(uVar5);
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_3;
  func_0x00010c2553e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(lVar6);
  func_0x00010be46100(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(bool *)(param_1 + _DAT_11273f6e8) = param_3 != 0;
  *(bool *)(param_1 + _DAT_11273f6cc) = param_3 != 0;
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 10610075c; end: 1061007cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610075c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    func_0x00010c1c73e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010beaff40(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061007d0; end: 1061008cb; -[SCCameraDeepLinkViewController _setupStickerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061007d0(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_5 + _DAT_11273f6ec) == 0) {
    func_0x00010beab100(param_5);
  }
  *(undefined8 *)(param_5 + _DAT_11273f6f0) = 0x3ff0000000000000;
  lVar4 = (long)_DAT_11273f6f4;
  if (*(double *)(param_5 + lVar4) == 0.0) {
    lVar3 = (long)_DAT_11273f6f8;
    dVar5 = *(double *)(param_5 + lVar3);
    if (dVar5 == 0.0) {
      lVar2 = lVar1;
      func_0x00010c262ca0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar6 = param_4;
      _objc_release(lVar2);
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x00010bfb68e0(lVar1);
      dVar5 = (param_2 + dVar5) / dVar6;
      *(double *)(param_5 + lVar4) = dVar5;
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x00010bfb68e0(lVar1);
      *(double *)(param_5 + lVar3) = (param_4 - dVar5) / dVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061008cc; end: 1061008df; -[SCCameraDeepLinkViewController setPreviewPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061008cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273f6fc,param_3);
  return;
}



/* Entry: 1061008e0; end: 106100967; -[SCCameraDeepLinkViewController shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061008e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c253ba0(param_1,param_2);
  if ((int)lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010c22e5a0(param_1,param_2,lVar1);
  }
  else {
    *(long *)(param_3 + _DAT_11273f6c8) = *(long *)(param_3 + _DAT_11273f6c8) + 1;
    lVar2 = 1;
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 106100968; end: 106100a47; -[SCCameraDeepLinkViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106100968(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (((param_3 == *(long *)(param_1 + _DAT_11273f6d4)) ||
      (param_3 == *(long *)(param_1 + _DAT_11273f6d8))) ||
     (param_3 == *(long *)(param_1 + _DAT_11273f6dc))) {
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09f140(param_3,param_2,0,lVar1);
    lVar2 = param_1;
    func_0x00010bdca200();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      *(long *)(param_1 + _DAT_11273f6c8) = *(long *)(param_1 + _DAT_11273f6c8) + 1;
      uVar3 = 1;
      *(undefined1 *)(param_1 + _DAT_11273f6d0) = 1;
      goto LAB_106100a2c;
    }
  }
  uVar3 = 0;
LAB_106100a2c:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106100a48; end: 106100b0b; -[SCCameraDeepLinkViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106100a48(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((((param_3 == *(long *)(param_1 + _DAT_11273f6d4)) ||
       (param_3 == *(long *)(param_1 + _DAT_11273f6d8))) ||
      (param_3 == *(long *)(param_1 + _DAT_11273f6dc))) &&
     (((param_4 == *(long *)(param_1 + _DAT_11273f6d4) ||
       (param_4 == *(long *)(param_1 + _DAT_11273f6d8))) ||
      (param_4 == *(long *)(param_1 + _DAT_11273f6dc))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106100b0c; end: 106100ef7; -[SCCameraDeepLinkViewController handlePanGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106100b0c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_7);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_7;
  func_0x00010c252440();
  if (lVar2 == 2) {
    dVar8 = 1.0;
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_5 + _DAT_11273f6ec));
    lVar2 = lVar1;
    func_0x00010c262ca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_7,param_6,lVar2);
    dVar9 = dVar8;
    _objc_release(lVar2);
    fVar7 = SUB84(dVar9,0);
    puVar3 = *(undefined **)(param_5 + _DAT_11273f6e4);
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar3 = puVar4;
    if (puVar5 != (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x00010c0d3c80(puVar5);
      _objc_release(puVar4);
    }
    puVar4 = puVar5;
    func_0x00010c0e00e0(puVar5,param_6,&PTR____CFConstantStringClassReference_110e41a78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c1d0640(*(undefined8 *)(param_5 + _DAT_11273f6e0),param_6,
                          &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184600,
                          &PTR____CFConstantStringClassReference_110e41a78);
    }
    puVar4 = puVar5;
    func_0x00010c0e00e0(puVar5,param_6,&PTR____CFConstantStringClassReference_110e41a98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) {
      func_0x00010c1d0640(*(undefined8 *)(param_5 + _DAT_11273f6e0),param_6,
                          &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184600,
                          &PTR____CFConstantStringClassReference_110e41a98);
    }
    puVar4 = puVar5;
    func_0x00010c0e00e0(puVar5,param_6,&PTR____CFConstantStringClassReference_110e41a78);
    _objc_retainAutoreleasedReturnValue();
    dVar9 = 0.5;
    dVar10 = 0.5;
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010c0e00e0(puVar5,param_6,&PTR____CFConstantStringClassReference_110e41a78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar10 = (double)fVar7;
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010c0e00e0(puVar5,param_6,&PTR____CFConstantStringClassReference_110e41a98);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x00010c0e00e0(puVar5,param_6,&PTR____CFConstantStringClassReference_110e41a98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar9 = (double)fVar7;
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
    func_0x00010bfb68e0(lVar1);
    dVar10 = dVar10 * param_3;
    func_0x00010bfb68e0(lVar1);
    dVar9 = dVar9 * param_4;
    func_0x00010bfb68e0(lVar1);
    func_0x00010bfb68e0(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bee7c80((dVar8 + dVar10) / param_3,0,0x3ff0000000000000,param_5);
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_6,puVar4,&PTR____CFConstantStringClassReference_110e41a78);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bee7c80((param_2 + dVar9) / param_4,*(undefined8 *)(param_5 + _DAT_11273f6f4),
                        *(undefined8 *)(param_5 + _DAT_11273f6f8),param_5);
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_6,puVar4,&PTR____CFConstantStringClassReference_110e41a98);
    _objc_release(puVar4);
    func_0x00010bee0c80(param_5,param_6,puVar3);
    lVar2 = param_5 + _DAT_11273f6fc;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0cc0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18a960(lVar2,param_6,param_5);
    _objc_release(param_5);
    _objc_release(lVar2);
    func_0x00010c219ba0(0,0,param_7,param_6,lVar1);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  else {
    lVar2 = param_7;
    func_0x00010c252440();
    if (lVar2 == 3) {
      func_0x00010c1677c0(0,*(undefined8 *)(param_5 + _DAT_11273f6ec));
    }
  }
  func_0x00010bf84580(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106100ef8; end: 1061013fb; -[SCCameraDeepLinkViewController handlePinchGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106100ef8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010c252440();
  if (lVar10 != 2) {
    lVar10 = param_3;
    func_0x00010c252440();
    if (lVar10 == 3) {
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11273f6ec));
    }
    goto LAB_1061013c0;
  }
  dVar12 = 1.0;
  func_0x00010c1677c0(*(undefined8 *)(param_1 + _DAT_11273f6ec));
  func_0x00010c14e120(param_3);
  lVar10 = (long)_DAT_11273f6f0;
  dVar15 = *(double *)(param_1 + lVar10);
  dVar13 = dVar12;
  if (dVar12 * dVar15 < 0.5) {
    dVar13 = 0.5 / dVar15;
  }
  if (2.0 < dVar12 * dVar15) {
    dVar13 = 2.0 / dVar15;
  }
  *(double *)(param_1 + lVar10) = dVar15 * dVar13;
  lVar11 = (long)_DAT_11273f6e4;
  puVar2 = *(undefined **)(param_1 + lVar11);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = puVar3;
  if (puVar4 != (undefined *)0x0) {
    puVar2 = puVar4;
    func_0x00010c0d3c80(puVar4);
    _objc_release(puVar3);
  }
  dVar12 = *(double *)(param_1 + lVar10);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110db1058);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110db1238);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  if (SUB84(dVar12,0) <= 0.0) {
    _objc_release(puVar3);
LAB_1061011a4:
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar6 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c2553e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfe7300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040(puVar5,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c23d0a0(puVar5);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar14 = dVar12;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010b690ad8(dVar12,dVar15,1.0 / dVar14);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar13 * dVar12,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110db1238);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar13 * dVar15,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110db1258);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar13 * dVar12,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11273f6e0;
    func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar10),param_2,puVar3,
                        &PTR____CFConstantStringClassReference_110db1238);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar13 * dVar15,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined **)(param_1 + lVar10);
  }
  else {
    puVar5 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110db1258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar14 = dVar12;
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    fVar16 = SUB84(dVar12,0);
    dVar12 = dVar14;
    if (fVar16 <= 0.0) goto LAB_1061011a4;
    puVar5 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110db1238);
    fVar16 = SUB84(dVar14,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar12 = dVar13 * (double)fVar16;
    func_0x00010c0df720(dVar12,puVar3);
    fVar16 = SUB84(dVar12,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110db1238);
    _objc_release(puVar3);
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar5 = puVar4;
    func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110db1258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    func_0x00010c0df720(dVar13 * (double)fVar16,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
  }
  func_0x00010c1d0640(puVar9,param_2,puVar3,&PTR____CFConstantStringClassReference_110db1258);
  _objc_release(puVar3);
  _objc_release(puVar5);
  func_0x00010bee0c80(param_1,param_2,puVar2);
  lVar10 = param_1 + _DAT_11273f6fc;
  _objc_loadWeakRetained(lVar10);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a960(lVar10,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar10);
  func_0x00010c1f5fe0(0x3ff0000000000000,param_3);
  _objc_release(puVar2);
  _objc_release(puVar4);
LAB_1061013c0:
  func_0x00010bf84580(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061013fc; end: 10610160f; -[SCCameraDeepLinkViewController handleRotationGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061013fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 2) {
    dVar8 = 1.0;
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11273f6ec));
    func_0x00010c141a80(param_3);
    puVar3 = *(undefined **)(param_1 + _DAT_11273f6e4);
    dVar9 = dVar8;
    func_0x00010c2553e0();
    fVar7 = SUB84(dVar9,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar3 = puVar4;
    if (puVar5 != (undefined *)0x0) {
      puVar3 = puVar5;
      func_0x00010c0d3c80(puVar5);
      _objc_release(puVar4);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar6 = puVar5;
    func_0x00010c0e00e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110de1f58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    func_0x00010c0df720(dVar8 + (double)fVar7,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110de1f58);
    _objc_release(puVar4);
    _objc_release(puVar6);
    func_0x00010bee0c80(param_1,param_2,puVar3);
    lVar2 = param_1 + _DAT_11273f6fc;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18a960(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
    func_0x00010c1ee7a0(0,param_3);
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440();
    if (lVar2 == 3) {
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11273f6ec));
    }
  }
  func_0x00010bf84580(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106101610; end: 106101673; -[SCCameraDeepLinkViewController _allowDraggableStickersAtPoint:] */

long FUN_106101610(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c253ba0(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 106101674; end: 10610188f; -[SCCameraDeepLinkViewController _updateStickerPositionWithMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106101674(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                    undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  uVar9 = *(undefined8 *)(param_4 + _DAT_11273f700);
  *(undefined8 *)(param_4 + _DAT_11273f700) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar9);
  puVar1 = PTR_PTR_1126c4968;
  _objc_alloc();
  lVar10 = (long)_DAT_11273f6e4;
  uVar2 = *(undefined8 *)(param_4 + lVar10);
  func_0x00010c2553e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf06320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_4 + lVar10);
  func_0x00010c2553e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff37a0(puVar1,param_5,uVar3,uVar6,param_6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126c3dc8;
  func_0x00010bf29420(PTR_PTR_1126c3dc8,param_5,*(undefined8 *)(param_4 + lVar10));
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba2a0(puVar7,param_5,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_4 + lVar10);
  *(undefined **)(param_4 + lVar10) = puVar8;
  _objc_release(uVar9);
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a420();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  dVar11 = param_1;
  if (param_3 <= param_1) {
    dVar11 = param_3;
  }
  if (param_1 <= param_2) {
    dVar11 = param_2;
  }
  return dVar11;
}



/* Entry: 106101890; end: 1061018a3; -[SCCameraDeepLinkViewController _validateStickerPosition:minPos:maxPos:] */

double FUN_106101890(double param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = param_1;
  if (param_3 <= param_1) {
    dVar1 = param_3;
  }
  if (param_1 <= param_2) {
    dVar1 = param_2;
  }
  return dVar1;
}



/* Entry: 1061018a4; end: 106101aaf; -[SCCameraDeepLinkViewController _setupBorderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061018a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_5 + _DAT_11273f6b4;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c29f120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  func_0x00010bf20c00(lVar3);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_1,param_2,param_3,param_4,lVar3,param_6,lVar1);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(param_1,param_2,param_3,param_4);
  lVar6 = (long)_DAT_11273f6ec;
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar4;
  _objc_release(uVar5);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c21e900(*(undefined8 *)(param_5 + lVar6),param_6,0);
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402a000000000000);
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x34);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar5);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c08c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x4018000000000000);
  _objc_release(uVar5);
  func_0x00010c1677c0(0,*(undefined8 *)(param_5 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106101ab0; end: 106101adf; -[SCCameraDeepLinkViewController hideTooltip] */

void FUN_106101ab0(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106101ae0; end: 106101b3b; -[SCCameraDeepLinkViewController resetMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106101ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1c73c0(param_1,param_2,param_3);
  param_1 = param_1 + _DAT_11273f6fc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18a960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106101b3c; end: 106101b3f; -[SCCameraDeepLinkViewController didCaptureSnap] */

void FUN_106101b3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be590f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logStickerInteraction_112573dd8);
  return;
}



/* Entry: 106101b40; end: 106101d3b; -[SCCameraDeepLinkViewController didTapClearButtonWithMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106101b40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  func_0x00010be590e0(param_1);
  puVar2 = PTR_PTR_1126c3dd0;
  lVar1 = param_3;
  func_0x00010c0b3ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf51e00();
  func_0x00010bf5ad60(puVar2,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c2ac420(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c2ac400(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c2ac3e0(puVar2,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126b5868;
  _objc_alloc(PTR_PTR_1126b5868);
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4d40(puVar3,param_2,0,0,0,0,puVar4,1,0,0,0,0,1);
  _objc_release(puVar4);
  func_0x00010c1c73c0(param_1,param_2,puVar3);
  lVar5 = (long)_DAT_11273f6fc;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c18a960();
  _objc_release(lVar1);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c1eafe0();
  _objc_release(lVar5);
  *(undefined1 *)(param_1 + _DAT_11273f6e8) = 0;
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106101d3c; end: 106101e23; -[SCCameraDeepLinkViewController _logStickerInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106101d3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_11273f6cc;
  if ((*(char *)(param_1 + lVar3) == '\x01') && (*(char *)(param_1 + _DAT_11273f6e8) == '\x01')) {
    lVar1 = *(long *)(param_1 + _DAT_11273f6e4);
    if (lVar1 != 0) {
      func_0x00010c0b3ba0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b5840;
      _objc_alloc(PTR_PTR_1126b5840);
      func_0x00010c048220();
      lVar4 = (long)_DAT_11273f6c8;
      func_0x00010c0a40c0();
      *(undefined8 *)(param_1 + lVar4) = 0;
      *(undefined1 *)(param_1 + lVar3) = 0;
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 106101e24; end: 106102153; -[SCCameraDeepLinkViewController _itemViewFromSticker:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106101e24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
    uStack_a8 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + _DAT_11273f6c0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_5;
    func_0x00010bfe7300();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = lVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar10,param_4,&PTR____CFConstantStringClassReference_110dea4f8);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = 0;
    uVar4 = uVar2;
    func_0x00010c2bda80(uVar2,param_4,lVar1,puVar10,0xc,&uStack_78);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uStack_78;
    _objc_retain();
    _objc_release(puVar10);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    puVar10 = PTR_PTR_1126c4970;
    func_0x00010c09e1c0(PTR_PTR_1126c4970,param_4,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  puVar8 = PTR_PTR_1126b13b0;
  lVar1 = param_5;
  func_0x00010bf06320(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf05ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c254d00(PTR_PTR_1126c4978,param_4,param_5);
  lVar5 = param_5;
  func_0x00010bf06320(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c4978;
  func_0x00010c07f980(PTR_PTR_1126c4978,param_4,param_5);
  func_0x00010bfc0f80(param_1,param_2,puVar8,param_4,puVar10,lVar3,lVar6,puVar7,2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_3 + _DAT_11273f6bc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c29ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c0e0460(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106102154;
  puStack_88 = &UNK_11084d628;
  uStack_80 = param_6;
  _objc_retain(param_6);
  uVar9 = uVar2;
  func_0x00010c25ff60(uVar2,param_4,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(uStack_a8);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106102154; end: 10610220f;  */

void FUN_106102154(long param_1,undefined8 param_2)

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



/* Entry: 106102210; end: 10610222b;  */

void FUN_106102210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106102218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10610222c; end: 10610223b; -[SCCameraDeepLinkViewController isCurrentlyDisplayed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10610222c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273f6e8);
}



/* Entry: 10610223c; end: 10610224b; -[SCCameraDeepLinkViewController setIsCurrentlyDisplayed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10610223c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273f6e8) = param_3;
  return;
}



/* Entry: 10610224c; end: 10610225b; -[SCCameraDeepLinkViewController metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10610224c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273f6e4);
}


