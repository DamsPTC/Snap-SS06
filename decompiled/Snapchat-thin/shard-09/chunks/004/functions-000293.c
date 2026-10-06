/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d4f1b4; end: 106d4f1bb; -[SCMemoriesLastPlayedItemInfo itemId] */

undefined8 FUN_106d4f1b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d4f1bc; end: 106d4f1c3; -[SCMemoriesLastPlayedItemInfo mediaType] */

undefined8 FUN_106d4f1bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d4f1c4; end: 106d4f1cb; -[SCMemoriesLastPlayedItemInfo galleryCollectionId] */

undefined8 FUN_106d4f1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d4f1cc; end: 106d4f1d3; -[SCMemoriesLastPlayedItemInfo galleryCollectionCategory] */

undefined8 FUN_106d4f1cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d4f1d4; end: 106d4f1db; -[SCMemoriesLastPlayedItemInfo clientProcessingType] */

undefined8 FUN_106d4f1d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d4f1dc; end: 106d4f1e3; -[SCMemoriesLastPlayedItemInfo groupName] */

undefined8 FUN_106d4f1dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d4f1e4; end: 106d4f22b; -[SCMemoriesLastPlayedItemInfo .cxx_destruct] */

void FUN_106d4f1e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d4f22c; end: 106d4f277; +[SCCommerceOperaScreenshopShopButtonLayer layerWithPage:] */

void FUN_106d4f22c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2408;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d4f278; end: 106d4f32b; -[SCCommerceOperaScreenshopShopButtonLayer initWithPage:] */

undefined1 * FUN_106d4f278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f69d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c99e0;
    func_0x00010bf2a700(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d4f32c; end: 106d4f333; -[SCCommerceOperaScreenshopShopButtonLayer type] */

undefined8 FUN_106d4f32c(void)

{
  return 0x19;
}



/* Entry: 106d4f334; end: 106d4f33f; -[SCCommerceOperaScreenshopShopButtonLayer layerViewControllerClass] */

void FUN_106d4f334(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d2538);
  return;
}



/* Entry: 106d4f340; end: 106d4f41b; -[SCCommerceOperaScreenshopShopButtonLayer isEqual:] */

bool FUN_106d4f340(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d2408;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126d2408;
  if (puVar2 == puVar4) {
    if (param_1 == param_3) {
      bVar1 = true;
    }
    else {
      _objc_retain(param_3);
      _objc_opt_class(puVar3);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      puVar3 = param_3;
      if (((ulong)puVar2 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(param_3);
      puVar4 = *(undefined **)(param_1 + 8);
      puVar2 = puVar3;
      func_0x00010bf0b260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      bVar1 = puVar4 == puVar2;
      _objc_release(puVar2);
    }
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106d4f41c; end: 106d4f423; -[SCCommerceOperaScreenshopShopButtonLayer assetId] */

undefined8 FUN_106d4f41c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d4f424; end: 106d4f42f; -[SCCommerceOperaScreenshopShopButtonLayer .cxx_destruct] */

void FUN_106d4f424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d4f430; end: 106d4f707; -[SCCommerceOperaScreenshopShopButtonLayerView setupViewWithAssetId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4f430(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar9 = (long)_DAT_11275d2e0;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    *(long *)(param_1 + lVar9) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    func_0x00010c20eaa0(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar2);
    _objc_release(puVar3);
    func_0x000106d57004();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar2);
    _objc_release(puVar3);
    _objc_initWeak(auStack_80,param_1);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c1d3960(puVar2);
    func_0x00010befbb60(param_1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf493c0(0x4059000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf34860(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(lVar9);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be00be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d4f708; end: 106d4f733;  */

void FUN_106d4f708(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d4f734; end: 106d4f7b3; -[SCCommerceOperaScreenshopShopButtonLayerView _didTapButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4f734(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275d2e0);
  _objc_retain(uVar2);
  lVar1 = param_1;
  func_0x00010c22cac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c22cac0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106d4f7b4; end: 106d4f7c3; -[SCCommerceOperaScreenshopShopButtonLayerView assetId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d4f7b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d2e0);
}



/* Entry: 106d4f7c4; end: 106d4f7d3; -[SCCommerceOperaScreenshopShopButtonLayerView shopButtonTapActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d4f7c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275d2e4);
}



/* Entry: 106d4f7d4; end: 106d4f7df; -[SCCommerceOperaScreenshopShopButtonLayerView setShopButtonTapActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4f7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106d4f7e0; end: 106d4f81f; -[SCCommerceOperaScreenshopShopButtonLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4f7e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d2e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d2e0,0);
  return;
}



/* Entry: 106d4f820; end: 106d4f967; -[SCCommerceOperaScreenshopShopButtonLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106d4f820(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f69d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithConfiguration_layerViewC_1125de030);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0308;
    _objc_alloc();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c0ea360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)puVar1;
    func_0x00010c0ea360(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a840();
    lVar10 = (long)_DAT_11275d2e8;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c1e3a80(*(undefined8 *)((long)puVar1 + lVar10));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d4f968; end: 106d4fa57; -[SCCommerceOperaScreenshopShopButtonLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4f968(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126d2540;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11275d2ec;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c222380(param_1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1ff740(*(undefined8 *)(param_1 + lVar3));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106d4fa58; end: 106d4fb3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4fa58(long param_1,undefined **param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be58940(param_1);
    param_3 = &PTR____CFConstantStringClassReference_110e85258;
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = ppuVar1;
    func_0x00010bf04440(param_1);
    _objc_release(ppuVar1);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = PTR_PTR_1126f69d8;
  ppuStack_a0 = param_2;
  _objc_msgSendSuper2(&ppuStack_a0,PTR_s_updateViewWithPreviousLayer_curr_112680a50,param_3,param_4)
  ;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar3 = param_3;
  ppuVar1 = param_4;
  if (param_3 != param_4) {
    if (param_4 == (undefined **)0x0) {
      _objc_release();
    }
    else {
      ppuVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_3);
      if (((ulong)ppuVar1 & 1) != 0) goto LAB_106d4fc50;
    }
    ppuVar1 = param_2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 == (undefined **)0x0) goto LAB_106d4fc50;
    uVar4 = *(undefined8 *)((long)param_2 + (long)_DAT_11275d2ec);
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_2;
    func_0x00010bf0b260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2299c0(uVar4);
    ppuVar3 = param_2;
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar3);
LAB_106d4fc50:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d4fb40; end: 106d4fc77; -[SCCommerceOperaScreenshopShopButtonLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4fb40(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f69d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_updateViewWithPreviousLayer_curr_112680a50,param_3,param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  uVar1 = param_4;
  if (param_3 != param_4) {
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_106d4fc50;
    }
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) goto LAB_106d4fc50;
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11275d2ec);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf0b260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2299c0(uVar3);
    uVar2 = param_1;
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
LAB_106d4fc50:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d4fc78; end: 106d4fc7f; -[SCCommerceOperaScreenshopShopButtonLayerViewController layerViewContainerOption] */

undefined8 FUN_106d4fc78(void)

{
  return 2;
}



/* Entry: 106d4fc80; end: 106d4fccf; -[SCCommerceOperaScreenshopShopButtonLayerViewController _logShopButtonTapWithAssetId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4fc80(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275d2e8;
  if (*(long *)(param_1 + lVar1) != 0) {
    func_0x00010c1e3bc0();
                    /* WARNING: Could not recover jumptable at 0x00010c0a1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_logButtonTap_currentCard_current_112606160,
               0x35,0xffffffffffffffff,0x38,0);
    return;
  }
  return;
}



/* Entry: 106d4fcd0; end: 106d4fd0f; -[SCCommerceOperaScreenshopShopButtonLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4fcd0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d2e8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275d2ec,0);
  return;
}



/* Entry: 106d4fd10; end: 106d4fee3; -[SCCommerceOperaPluginServiceProvider provide] */

void FUN_106d4fd10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106d4fee4;
  puStack_78 = &UNK_110977e88;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106d4ff24;
  puStack_a0 = &UNK_110977eb8;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d2548;
  _objc_alloc(PTR_PTR_1126d2548);
  func_0x00010c031be0();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d4fee4; end: 106d4ffa3;  */

void FUN_106d4fee4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee8120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d4ffa4; end: 106d500c3; -[SCCommerceOperaPluginServiceProvider _vendOperaAttachmentPluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d4ffa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126d2550;
  _objc_alloc(PTR_PTR_1126d2550);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11275d2f0);
  lVar2 = param_1 + _DAT_11275d2f4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11275d2f8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275d2fc;
  _objc_loadWeakRetained(param_1);
  func_0x00010c045da0(puVar1,param_2,uVar8,lVar4,lVar7,param_1);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d500c4; end: 106d50323; -[SCCommerceOperaPluginServiceProvider _vendOperaScreenshopPluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d500c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar1 = param_1 + _DAT_11275d300;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d2558;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11275d304;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11275d308;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11275d30c;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11275d2f4;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11275d2f8;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11275d310;
  lVar13 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar13);
  lVar14 = lVar13;
  func_0x00010c0d0080();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar15 = lVar17;
  func_0x00010c0fa3e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275d314;
  _objc_loadWeakRetained();
  lVar16 = param_1;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0013a0(puVar4,param_2,lVar5,lVar6,lVar8,lVar10,lVar12,lVar14,lVar15,lVar16,lVar3);
  _objc_release(lVar16);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar17);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d50324; end: 106d50353;  */

void FUN_106d50324(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 106d50354; end: 106d5040f; -[SCCommerceOperaPluginServiceProvider _vendOperaShopScreenshopPluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d50354(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d2560;
  _objc_alloc(PTR_PTR_1126d2560);
  lVar2 = param_1 + _DAT_11275d2f4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275d2f8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a980(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d50410; end: 106d504f7; -[SCCommerceOperaPluginServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d50410(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275d300);
  _objc_destroyWeak(param_1 + _DAT_11275d314);
  _objc_destroyWeak(param_1 + _DAT_11275d30c);
  _objc_destroyWeak(param_1 + _DAT_11275d308);
  _objc_destroyWeak(param_1 + _DAT_11275d310);
  _objc_destroyWeak(param_1 + _DAT_11275d304);
  _objc_storeStrong(param_1 + _DAT_11275d2f0,0);
  _objc_destroyWeak(param_1 + _DAT_11275d2fc);
  _objc_destroyWeak(param_1 + _DAT_11275d2f8);
  _objc_destroyWeak(param_1 + _DAT_11275d2f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275d318);
  return;
}



/* Entry: 106d504f8; end: 106d507e3; -[SCCommerceOperaServiceProvider _vendOperaShowcaseLayerVCProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d504f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  
  puVar1 = PTR_PTR_1126d2570;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275d31c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf42360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11275d320;
  lVar5 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c08f620();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar8 = lVar25;
  func_0x00010c23afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11275d324;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11275d328;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11275d32c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf8b8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11275d330;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11275d334;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c0fcb80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + _DAT_11275d338);
  param_1 = param_1 + _DAT_11275d33c;
  _objc_loadWeakRetained();
  lVar24 = param_1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffff20(puVar1,param_2,lVar4,lVar7,lVar9,lVar12,lVar15,lVar18,lVar20,lVar23,uVar26,
                      lVar24);
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar25);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d507e4; end: 106d5088f; -[SCCommerceOperaServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d507e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275d344,0);
  _objc_storeStrong(param_1 + _DAT_11275d338,0);
  _objc_destroyWeak(param_1 + _DAT_11275d33c);
  _objc_destroyWeak(param_1 + _DAT_11275d328);
  _objc_destroyWeak(param_1 + _DAT_11275d334);
  _objc_destroyWeak(param_1 + _DAT_11275d330);
  _objc_destroyWeak(param_1 + _DAT_11275d32c);
  _objc_destroyWeak(param_1 + _DAT_11275d324);
  _objc_destroyWeak(param_1 + _DAT_11275d320);
  _objc_destroyWeak(param_1 + _DAT_11275d31c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275d340);
  return;
}



/* Entry: 106d50890; end: 106d509fb;  */

undefined1 FUN_106d50890(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1320();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106d509fc; end: 106d50a6f;  */

void FUN_106d509fc(long param_1,ulong param_2)

{
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (param_2 & 0xfffffffffffffffe) == 2;
  return;
}



/* Entry: 106d50a70; end: 106d50aa7; -[SCCommerceOperaAttachmentPlugin initWithOriginType:shoppingScopeExposer:userBlizzardLogger:grapheneRegistry:commerceOperaServices:] */

void FUN_106d50a70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x00010c045da0(param_1,param_2,param_4,param_5,param_6,param_7);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
  }
  return;
}



/* Entry: 106d50aa8; end: 106d50bab; -[SCCommerceOperaAttachmentPlugin initWithShoppingScopeExposer:userBlizzardLogger:grapheneRegistry:commerceOperaServices:] */

undefined1 *
FUN_106d50aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f69e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 2;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d50bac; end: 106d50c67; +[SCCommerceOperaAttachmentPlugin commerceOriginTypeForSource:discoverChannelViewContext:scanSource:] */

undefined8
FUN_106d50bac(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 3) {
    if (param_3 == 0) {
      return 9;
    }
  }
  else {
    if (param_4 == 5) {
      if ((param_5 < 10) && ((1L << (param_5 & 0x3f) & 0x301U) != 0)) {
        return 3;
      }
      uVar1 = 0xd;
      if (param_3 != 8) {
        uVar1 = 0x24;
      }
      uVar2 = 8;
      if (param_3 != 0) {
        uVar2 = uVar1;
      }
      return uVar2;
    }
    if (param_4 == 4) {
      if (param_5 == 1) {
        return 0x14;
      }
      if (param_5 == 5) {
        return 2;
      }
      if (param_3 == 0) {
        return 6;
      }
      if (param_3 == 2) {
        return 0xc;
      }
      if (param_3 == 0x3f) {
        return 0x1a;
      }
    }
  }
  return 0x24;
}



/* Entry: 106d50c68; end: 106d50c6f; -[SCCommerceOperaAttachmentPlugin playlistDataSource] */

undefined8 FUN_106d50c68(void)

{
  return 0;
}



/* Entry: 106d50c70; end: 106d50c73; -[SCCommerceOperaAttachmentPlugin setPlaylistItemController:] */

void FUN_106d50c70(void)

{
  return;
}



/* Entry: 106d50c74; end: 106d50e97; -[SCCommerceOperaAttachmentPlugin addEventListenersWithEventAnnouncing:] */

undefined ** FUN_106d50c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
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
  undefined8 uVar12;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar12);
  ppuVar1 = (undefined **)PTR_PTR_1126c9460;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  ppuStack_b8 = ppuVar1;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_b0 = puVar2;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9c10;
  puStack_a8 = puVar3;
  func_0x00010c0e92a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2638;
  puStack_a0 = puVar4;
  func_0x00010c2a5aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2638;
  puStack_98 = puVar5;
  func_0x00010bf0a200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9460;
  puStack_90 = puVar6;
  func_0x00010c29ae40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2330;
  puStack_88 = puVar7;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2330;
  puStack_80 = puVar8;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9400;
  puStack_78 = puVar9;
  func_0x00010c15b3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_b8,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,puVar11);
  _objc_release(param_3);
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
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110df10f8;
}



/* Entry: 106d50e98; end: 106d50ea3; -[SCCommerceOperaAttachmentPlugin type] */

undefined ** FUN_106d50e98(void)

{
  return &PTR____CFConstantStringClassReference_110df10f8;
}



/* Entry: 106d50ea4; end: 106d518ab; -[SCCommerceOperaAttachmentPlugin operaViewDidSendEvent:page:params:] */

void FUN_106d50ea4(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126c9c10;
  func_0x00010c0e92a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    puVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      _objc_release(puVar3);
      if (puVar5 == (undefined *)0x0) goto LAB_106d51378;
    }
    else {
      _objc_release();
      _objc_release(puVar3);
    }
    func_0x00010bebfb40(param_1,param_2,param_4);
    goto LAB_106d51378;
  }
  puVar3 = PTR_PTR_1126c9460;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar4 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0720c0();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR_PTR_1126c9460;
      func_0x00010c29ae40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0720c0();
      if (((ulong)puVar5 & 1) != 0) {
LAB_106d51174:
        _objc_release(puVar4);
        goto LAB_106d5117c;
      }
      puVar5 = PTR_PTR_1126b2330;
      func_0x00010bf17ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0720c0();
      if (((ulong)puVar6 & 1) != 0) {
LAB_106d5116c:
        _objc_release(puVar5);
        goto LAB_106d51174;
      }
      puVar6 = PTR_PTR_1126b2330;
      func_0x00010bf96940();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0720c0();
      if (((ulong)puVar7 & 1) != 0) {
        _objc_release(puVar6);
        goto LAB_106d5116c;
      }
      puVar7 = PTR_PTR_1126c9400;
      func_0x00010c15b3c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      if (((ulong)puVar9 & 1) == 0) {
        puVar3 = PTR_PTR_1126b2638;
        func_0x00010c2a5aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c0720c0();
        if (((ulong)puVar5 & 1) == 0) {
          puVar4 = PTR_PTR_1126b2638;
          func_0x00010bf0a200();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c0720c0();
          if ((int)puVar6 != 0) goto LAB_106d51530;
LAB_106d516d4:
          _objc_release(puVar4);
LAB_106d516dc:
          _objc_release(puVar3);
        }
        else {
LAB_106d51530:
          puVar6 = param_4;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 == (undefined *)0x0) {
            _objc_release();
            _objc_release(puVar6);
            if (((ulong)puVar5 & 1) == 0) goto LAB_106d516d4;
            goto LAB_106d516dc;
          }
          bVar2 = *(byte *)(param_1 + 0x18);
          _objc_release();
          _objc_release(puVar6);
          if (((ulong)puVar5 & 1) == 0) {
            _objc_release(puVar4);
          }
          _objc_release(puVar3);
          if ((bVar2 & 1) == 0) {
            puVar3 = param_4;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar3);
            if (puVar4 == (undefined *)0x0) goto LAB_106d51378;
            if (*(long *)(param_1 + 0x30) == 0) {
              func_0x00010bebfb40(param_1,param_2,param_4);
            }
            lVar10 = *(long *)(param_1 + 0x48);
            func_0x00010c150520();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar10 != 0) {
              func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
              _objc_unsafeClaimAutoreleasedReturnValue();
            }
            puVar4 = PTR_PTR_1126c9310;
            func_0x00010c11b200(PTR_PTR_1126c9310,param_2,param_4);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar4;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            ppuVar11 = (undefined **)PTR_PTR_1126c9310;
            func_0x00010bf8c9a0(PTR_PTR_1126c9310,param_2,param_4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar11 != (undefined **)0x0) {
              ppuVar1 = ppuVar11;
            }
            _objc_retain(ppuVar1);
            _objc_release(ppuVar11);
            puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar5 = PTR_PTR_1126c9310;
            func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c078d80(puVar4,param_2,puVar5);
            if (((ulong)puVar4 & 1) == 0) {
              puVar4 = param_4;
              func_0x00010c118b40(param_4);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
            }
            else {
              puVar6 = PTR_PTR_1126c9310;
              func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_4);
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(puVar5);
            puVar4 = PTR_PTR_1126b0500;
            func_0x00010c11afc0(PTR_PTR_1126b0500,param_2,*(undefined8 *)(param_1 + 0x38),puVar3,
                                ppuVar1,0,puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar1);
            puVar5 = PTR_PTR_1126b0508;
            _objc_alloc(PTR_PTR_1126b0508);
            lVar10 = param_1 + 8;
            _objc_loadWeakRetained(lVar10);
            puVar7 = param_4;
            func_0x00010c118b40(param_4);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c039420(puVar5,param_2,lVar10,puVar9,0,puVar4,1,
                                *(undefined8 *)(param_1 + 0x30));
            _objc_release(puVar9);
            _objc_release(puVar7);
            _objc_release(lVar10);
            func_0x00010c18b5e0(puVar5,param_2,param_1);
            func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,puVar5);
            _objc_release(puVar5);
            _objc_release(puVar4);
            _objc_release(puVar6);
            goto LAB_106d51374;
          }
        }
        puVar3 = PTR_PTR_1126b2330;
        func_0x00010bf3df00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if ((int)puVar4 != 0) {
          puVar3 = param_4;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar3);
          if ((puVar4 != (undefined *)0x0) &&
             (puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0,
             func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                 *(undefined8 *)(param_1 + 0x10)), (int)puVar3 != 0)) {
            func_0x00010c0abb20(*(undefined8 *)(param_1 + 0x30),param_2,0x13,0xffffffffffffffff,
                                param_1);
          }
        }
        goto LAB_106d51378;
      }
    }
    else {
LAB_106d5117c:
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = PTR_PTR_1126c9310;
    func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar3,param_2,puVar4);
    if (((ulong)puVar3 & 1) == 0) {
      puVar5 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar3 = PTR_PTR_1126c9310;
      func_0x00010bf631e0(PTR_PTR_1126c9310,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    uVar8 = *(ulong *)(param_1 + 0x40);
    if ((uVar8 == 0) || (func_0x00010c0720c0(uVar8,param_2,puVar3), (uVar8 & 1) == 0)) {
      _objc_retain(puVar3);
      uVar13 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar3;
      _objc_release(uVar13);
      puVar4 = param_4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = param_4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar5);
        _objc_release(puVar4);
        if (puVar6 == (undefined *)0x0) {
          puVar4 = param_4;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          if ((puVar5 != (undefined *)0x0) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
            *(undefined8 *)(param_1 + 0x38) = 7;
            func_0x00010bebfb40(param_1,param_2,param_4);
            func_0x00010c24f620(*(undefined8 *)(param_1 + 0x30),param_2,1);
            uVar13 = *(undefined8 *)(param_1 + 0x28);
            uStack_98 = *(undefined8 *)(param_1 + 0x30);
            ppuStack_a8 = &PTR____CFConstantStringClassReference_110ebe718;
            ppuStack_a0 = &PTR____CFConstantStringClassReference_110ebe738;
            puStack_90 = PTR____kCFBooleanTrue_11034ab68;
            puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_98,
                                &ppuStack_a8,2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0eb7e0(uVar13,param_2,&PTR____CFConstantStringClassReference_110e84f98,
                                puVar4);
            _objc_release(puVar4);
          }
          goto LAB_106d51374;
        }
      }
      else {
        _objc_release();
        _objc_release(puVar4);
      }
      func_0x00010bebfb40(param_1,param_2,param_4);
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c24f620(uVar13,param_2,0x13);
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar13;
      _objc_release(uVar12);
      func_0x00010c0abc20(*(undefined8 *)(param_1 + 0x30),param_2,0x13,0x13,param_1,0,0);
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
  }
  else {
    puVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar5 != (undefined *)0x0) {
      puVar6 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80(puVar4,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      if ((int)puVar4 != 0) {
        func_0x00010c0b1600(*(undefined8 *)(param_1 + 0x30),param_2,0x13);
        func_0x00010c0abb20(*(undefined8 *)(param_1 + 0x30),param_2,0x13,0xffffffffffffffff,param_1)
        ;
        uVar13 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x10) = 0;
        _objc_release(uVar13);
        func_0x00010c24f620(*(undefined8 *)(param_1 + 0x30),param_2,1);
        uVar13 = *(undefined8 *)(param_1 + 0x28);
        uStack_78 = *(undefined8 *)(param_1 + 0x30);
        ppuStack_88 = &PTR____CFConstantStringClassReference_110ebe718;
        ppuStack_80 = &PTR____CFConstantStringClassReference_110ebe738;
        puStack_70 = PTR____kCFBooleanTrue_11034ab68;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_78,&ppuStack_88
                            ,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7e0(uVar13,param_2,&PTR____CFConstantStringClassReference_110e84f98,puVar3);
        _objc_release(puVar3);
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      goto LAB_106d51378;
    }
  }
LAB_106d51374:
  _objc_release(puVar3);
LAB_106d51378:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    uVar13 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
    return;
  }
  return;
}



/* Entry: 106d518ac; end: 106d518d3; -[SCCommerceOperaAttachmentPlugin displayId] */

void FUN_106d518ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d518d4; end: 106d51d1b; -[SCCommerceOperaAttachmentPlugin _startCommerceSessionWithPage:] */

void FUN_106d518d4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126c9310;
  func_0x00010c11b200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar9;
  func_0x00010c0720c0();
  if ((int)puVar3 != 0) {
    _objc_release(puVar9);
    puVar9 = (undefined *)0x0;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126c9310;
  func_0x00010bf631e0(PTR_PTR_1126c9310);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126c9310;
    func_0x00010bf631e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  puVar3 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar8);
  _objc_release(puVar3);
  puVar3 = *(undefined **)(param_1 + 0x30);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c15fb00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c247800();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126c9310;
      func_0x00010bf8c9a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar4 = puVar3;
      func_0x00010c247800();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c247960();
    if (puVar1 == (undefined *)0x0) {
      func_0x000107af14e8(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
    }
    else {
      func_0x00010c247960(puVar3);
    }
    puVar1 = puVar3;
    func_0x00010bf5b440();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      _objc_retain(puVar9);
      uStack_70 = puVar9;
    }
    else {
      uStack_70 = puVar3;
      func_0x00010bf5b440();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      uStack_80 = puVar3;
      func_0x00010c115e60();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar6 = puVar3;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c08fa60();
    if (puVar5 == (undefined *)0x0) {
      _objc_retain(puVar2);
      puVar5 = puVar2;
    }
    else {
      puVar5 = puVar3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b04c8;
    _objc_alloc(PTR_PTR_1126b04c8);
    puVar7 = puVar3;
    func_0x00010c247b60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07f200(puVar3);
    func_0x00010c04aa40(puVar1);
    func_0x00010c1fd880(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(uStack_80);
    _objc_release(uStack_70);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d51d1c; end: 106d51d7b; -[SCCommerceOperaAttachmentPlugin setOperaControlling:] */

void FUN_106d51d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c27f040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f1880();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 8,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d51d7c; end: 106d51d87; -[SCCommerceOperaAttachmentPlugin didPresentShoppingScope] */

void FUN_106d51d7c(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 106d51d88; end: 106d51de7; -[SCCommerceOperaAttachmentPlugin didDismissShoppingScope] */

void FUN_106d51d88(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c0abb20(*(undefined8 *)(param_1 + 0x30),param_2,0x13,0xffffffffffffffff,param_1);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 106d51de8; end: 106d51e67; -[SCCommerceOperaAttachmentPlugin .cxx_destruct] */

void FUN_106d51de8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d51e68; end: 106d51f63; -[SCCommerceOperaAttachmentPluginFactory initWithShoppingScopeExposer:userBlizzardLogger:grapheneRegistry:commerceOperaServices:] */

undefined1 *
FUN_106d51e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f69e8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d51f64; end: 106d51f9f; -[SCCommerceOperaAttachmentPluginFactory vendCommerceOperaPlugin:] */

void FUN_106d51f64(void)

{
  _objc_alloc(PTR_PTR_1126d2578);
  func_0x00010c032480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d51fa0; end: 106d51fe7; -[SCCommerceOperaAttachmentPluginFactory .cxx_destruct] */

void FUN_106d51fa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d51fe8; end: 106d52307; -[SCCommerceOperaScreenshopPlugin initWithFeatureSettingsService:notificationPool:userBlizzardLogger:grapheneRegistry:modelService:persistenceService:photoPermissionCoordinator:activeScanner:fetchLimit:delegate:] */

undefined8 *
FUN_106d51fe8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,byte param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_80 = PTR_PTR_1126f69f0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uStack_d4 = (uint)param_10;
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    lStack_90 = param_3;
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    uStack_98 = param_4;
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    uStack_a0 = param_5;
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    uStack_b0 = param_6;
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    uStack_b8 = param_7;
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    uStack_c0 = param_8;
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    uStack_c8 = param_9;
    puVar1[8] = param_9;
    _objc_release(uVar2);
    uStack_a8 = param_13;
    _objc_storeWeak(puVar1 + 1,param_13);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    uStack_d0 = param_12;
    puVar1[9] = param_12;
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c0e9cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2330;
    puStack_78 = puVar3;
    func_0x00010bf17ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if (uStack_d4 != 0) {
      puVar3 = PTR_PTR_1126b2ea8;
      func_0x00010c268600(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar6);
    param_3 = lStack_90;
    param_4 = uStack_98;
    param_5 = uStack_a0;
    param_13 = uStack_a8;
    param_6 = uStack_b0;
    param_7 = uStack_b8;
    param_8 = uStack_c0;
    param_9 = uStack_c8;
    param_12 = uStack_d0;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  plVar9 = &lStack_110;
  pcStack_e8 = FUN_106d52308;
  lVar8 = lVar7 + 8;
  uStack_100 = param_4;
  lStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c1517c0();
  _objc_release(lVar8);
  puStack_108 = PTR_PTR_1126f69f0;
  lStack_110 = lVar7;
  _objc_msgSendSuper2(&lStack_110,PTR_s_dealloc_112525b20);
  return plVar9;
}



/* Entry: 106d52308; end: 106d52363; -[SCCommerceOperaScreenshopPlugin dealloc] */

void FUN_106d52308(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1517c0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126f69f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106d52364; end: 106d52367; -[SCCommerceOperaScreenshopPlugin setPlaylistItemController:] */

void FUN_106d52364(void)

{
  return;
}



/* Entry: 106d52368; end: 106d523c3; -[SCCommerceOperaScreenshopPlugin addEventListenersWithEventAnnouncing:] */

void FUN_106d52368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bef99a0(param_3,param_2,param_1,*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d523c4; end: 106d523cb; -[SCCommerceOperaScreenshopPlugin playlistDataSource] */

undefined8 FUN_106d523c4(void)

{
  return 0;
}



/* Entry: 106d523cc; end: 106d523d7; -[SCCommerceOperaScreenshopPlugin type] */

undefined ** FUN_106d523cc(void)

{
  return &PTR____CFConstantStringClassReference_110e84fb8;
}



/* Entry: 106d523d8; end: 106d526bb; -[SCCommerceOperaScreenshopPlugin operaViewDidSendEvent:page:params:] */

void FUN_106d523d8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)uVar4 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf17ae0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)uVar4 == 0) {
      puVar3 = PTR_PTR_1126b2ea8;
      func_0x00010c268600(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)uVar4 != 0) {
        iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
        func_0x00010c151680();
        if (iVar2 == 0) {
          uVar5 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126cbca0;
          _objc_opt_class(PTR_PTR_1126cbca0);
          uVar6 = uVar5;
          _objc_opt_isKindOfClass(uVar5,puVar3);
          uVar1 = uVar5;
          if ((uVar6 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar5);
          uVar7 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR_PTR_1126b5bc0;
          _objc_opt_class(PTR_PTR_1126b5bc0);
          uVar8 = uVar7;
          _objc_opt_isKindOfClass(uVar7,puVar3);
          uVar6 = uVar7;
          if ((uVar8 & 1) == 0) {
            uVar6 = 0;
          }
          _objc_retain(uVar6);
          _objc_release(uVar7);
          uVar9 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar10 = uVar9;
          _objc_opt_isKindOfClass(uVar9,puVar3);
          uVar8 = uVar9;
          if ((uVar10 & 1) == 0) {
            uVar8 = 0;
          }
          _objc_retain(uVar8);
          _objc_release(uVar9);
          puVar3 = PTR_PTR_1126c9a78;
          func_0x00010bef5320(PTR_PTR_1126c9a78);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
          uVar11 = uVar10;
          _objc_opt_isKindOfClass(uVar10,puVar3);
          uVar9 = uVar10;
          if ((uVar11 & 1) == 0) {
            uVar9 = 0;
          }
          _objc_retain(uVar9);
          _objc_release(uVar10);
          if ((((uVar1 != 0) && (func_0x00010c07b720(), (uVar5 & 1) != 0)) ||
              ((uVar6 != 0 && (FUN_106d50890(), (uVar7 & 1) != 0)))) ||
             ((uVar5 = uVar8, func_0x00010c08fa60(), uVar5 != 0 ||
              (uVar5 = uVar9, func_0x00010c08fa60(), uVar5 != 0)))) {
            func_0x00010be857e0(param_1);
          }
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar6);
          _objc_release(uVar1);
        }
        else {
          func_0x00010be857e0(param_1);
        }
      }
    }
    else {
      func_0x00010be09d40(param_1);
    }
  }
  else {
    func_0x00010bdd3ba0(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d526bc; end: 106d52767; -[SCCommerceOperaScreenshopPlugin _beginSessionIfNeeded] */

void FUN_106d526bc(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010be34700();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010be93cc0(param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b0308;
  _objc_alloc();
  func_0x00010c04a840();
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logEntry__112572418,&PTR____CFConstantStringClassReference_110e85018);
  return;
}



/* Entry: 106d52768; end: 106d52adf; -[SCCommerceOperaScreenshopPlugin _endSessionIfNeeded] */

void FUN_106d52768(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x00010bec3420();
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c1517c0();
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010be34700();
  if ((int)lVar2 != 0) {
    uVar3 = *(ulong *)(param_2 + 0x88);
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar3 = uVar4;
    func_0x00010bf529e0(uVar4);
    func_0x00010c0df840(puVar5,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6,param_3,&PTR____CFConstantStringClassReference_110e85038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be529e0(param_2,param_3,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    uVar3 = uVar4;
    func_0x00010bf529e0();
    if (uVar3 != 0) {
      uVar3 = uVar4;
      func_0x00010bf529e0();
      if (uVar3 < 2) {
        func_0x000106d56f8c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000106d56fa4();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar7 = uVar3;
      func_0x000106d56fd4();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x000106d56fec();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,
                          &PTR____CFConstantStringClassReference_110e84fd8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(ulong *)(param_2 + 0x10);
      func_0x00010c151680();
      puVar5 = puVar6;
      if ((int)uVar9 != 0) {
        func_0x000106d56fbc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        puVar10 = PTR_PTR_1126b07e0;
        _objc_alloc(PTR_PTR_1126b07e0);
        func_0x00010bfef440();
        uVar11 = *(undefined8 *)(param_2 + 0x98);
        func_0x00010bf42660(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c207140(puVar10,param_3,uVar11);
        _objc_release(uVar11);
        puVar12 = puVar10;
        func_0x00010bf682c0(puVar10,param_3,0,1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar12;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar12);
        _objc_release(puVar10);
        uVar7 = uVar9;
      }
      puVar6 = PTR_PTR_1126ae558;
      uVar11 = *(undefined8 *)(param_2 + 0x80);
      func_0x00010bf51e00(uVar11);
      func_0x00010bfe9ca0(puVar6,param_3,uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      puVar10 = PTR_PTR_1126b0ae0;
      func_0x00010bf57f20(PTR_PTR_1126b0ae0,param_3,puVar6,2,uVar3,uVar7,uVar8,puVar5,
                          &PTR____CFConstantStringClassReference_110e84ff8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f340(*(undefined8 *)(param_2 + 0x18),param_3,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar3);
    }
    if (*(long *)(param_2 + 0x70) != 0) {
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c26f380();
      _objc_release(puVar6);
      uVar14 = *(undefined8 *)(param_2 + 0x98);
      uVar11 = *(undefined8 *)(param_2 + 0x70);
      uVar1 = *(undefined8 *)(param_2 + 0x78);
      uVar3 = uVar4;
      func_0x00010bf529e0(uVar4);
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c151680(uVar13);
      func_0x00010c0aecc0(param_1,uVar14,param_3,uVar11,uVar1,uVar3,uVar13);
    }
    func_0x00010be93cc0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106d52ae0; end: 106d52b23; -[SCCommerceOperaScreenshopPlugin _hasSession] */

bool FUN_106d52ae0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010bf42660(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 106d52b24; end: 106d52b73; -[SCCommerceOperaScreenshopPlugin _resetState] */

void FUN_106d52b24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d52b74; end: 106d52b7b; -[SCCommerceOperaScreenshopPlugin _hasPermission] */

void FUN_106d52b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c079f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_isPhotoPermissionFullAccess_1125fc1e8);
  return;
}



/* Entry: 106d52b7c; end: 106d52c5b; -[SCCommerceOperaScreenshopPlugin _startObservingLibraryChangesIfNeeded] */

void FUN_106d52b7c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x90) = 1;
    _objc_initWeak(auStack_28,param_1);
    uVar1 = 9;
    _dispatch_get_global_queue(9,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x106d52c30;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010007380c(uVar1,&puStack_50);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106d52c5c; end: 106d52c9b; -[SCCommerceOperaScreenshopPlugin _registerChangeObserver] */

void FUN_106d52c5c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d52c9c; end: 106d52d7b; -[SCCommerceOperaScreenshopPlugin _stopObservingLibraryChangesIfNeeded] */

void FUN_106d52c9c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 0;
    _objc_initWeak(auStack_28,param_1);
    uVar1 = 9;
    _dispatch_get_global_queue(9,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x106d52d50;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010007380c(uVar1,&puStack_50);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106d52d7c; end: 106d52dbb; -[SCCommerceOperaScreenshopPlugin _unregisterChangeObserver] */

void FUN_106d52d7c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d52dbc; end: 106d52dbf; -[SCCommerceOperaScreenshopPlugin _logEntry:] */

void FUN_106d52dbc(void)

{
  return;
}



/* Entry: 106d52dc0; end: 106d52dc3; -[SCCommerceOperaScreenshopPlugin _logWarning:] */

void FUN_106d52dc0(void)

{
  return;
}



/* Entry: 106d52dc4; end: 106d52e93; -[SCCommerceOperaScreenshopPlugin photoLibraryDidChange:] */

void FUN_106d52dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106d52e94;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106d52e94; end: 106d52ec7;  */

void FUN_106d52e94(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebfc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d52ec8; end: 106d52f83; -[SCCommerceOperaScreenshopPlugin _queueNext] */

void FUN_106d52ec8(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  func_0x00010be34700();
  if (((int)lVar1 != 0) && ((*(byte *)(param_1 + 0x91) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x91) = 1;
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bebfea0(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106d52f84; end: 106d52fcb;  */

void FUN_106d52f84(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be171a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d52fcc; end: 106d5303f; -[SCCommerceOperaScreenshopPlugin _finishQueueingNextWithFetchResult:] */

void FUN_106d52fcc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = param_3;
    _objc_release(uVar1);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
    lVar2 = param_1;
    func_0x00010be343e0();
    if ((int)lVar2 != 0) {
      func_0x00010bec0b20(param_1);
      func_0x00010be529e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e85058);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d53040; end: 106d5312b; -[SCCommerceOperaScreenshopPlugin _startDetectingChangesWithChange:] */

void FUN_106d53040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bec3420(param_1);
  lVar1 = param_1;
  func_0x00010be343e0();
  if ((((int)lVar1 != 0) && (lVar1 = param_1, func_0x00010be34700(), (int)lVar1 != 0)) &&
     (*(char *)(param_1 + 0x91) == '\x01')) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bebfea0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d5312c; end: 106d53173;  */

void FUN_106d5312c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16de0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d53174; end: 106d532e7; -[SCCommerceOperaScreenshopPlugin _finishDetectingChangesWithFetchResult:] */

void FUN_106d53174(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x91) = 0;
    lVar1 = param_3;
    func_0x00010bf529e0();
    lVar2 = *(long *)(param_1 + 0x68);
    func_0x00010bf529e0();
    if (lVar1 != lVar2) {
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      *(long *)(param_1 + 0x68) = param_3;
      _objc_release(uVar3);
      lVar4 = *(long *)(param_1 + 0x68);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        _objc_release(lVar4);
      }
      else {
        func_0x00010be529e0(param_1);
        _objc_initWeak(auStack_48,param_1);
        uVar3 = 9;
        _dispatch_get_global_queue(9,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_106d532e8;
        puStack_60 = &UNK_110841fb0;
        _objc_copyWeak(auStack_50,auStack_48);
        lStack_58 = lVar4;
        _objc_retain(lVar4);
        func_0x00010007380c(uVar3,&puStack_78);
        _objc_release(uVar3);
        _objc_release(lStack_58);
        _objc_release(lVar4);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d532e8; end: 106d5333b;  */

void FUN_106d532e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09da80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1faa0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d5333c; end: 106d5359f; -[SCCommerceOperaScreenshopPlugin _getImageFromLocalIdentifier:] */

void FUN_106d5333c(undefined8 param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **unaff_x26;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be343e0();
  puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa50e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      func_0x00010be821c0(param_1);
    }
    else {
      puVar2 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
      _objc_alloc_init();
      func_0x00010c1ec960();
      func_0x00010c18ba80(puVar4);
      func_0x00010c1cc000(puVar4);
      func_0x00010c210f80(puVar4);
      _objc_initWeak(auStack_78,param_1);
      puVar5 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0fce40(puVar2);
      puVar7 = puVar2;
      func_0x00010c0fcaa0(puVar2);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106d535a0;
      puStack_90 = &UNK_110977fd8;
      unaff_x26 = &puStack_a8;
      param_2 = auStack_78;
      _objc_copyWeak(auStack_80,param_2);
      _objc_retain(param_3);
      lStack_88 = param_3;
      func_0x00010c1357a0((double)puVar6,(double)puVar7,puVar5);
      _objc_release(puVar5);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be821c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d535a0; end: 106d535fb;  */

void FUN_106d535a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be821c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d535fc; end: 106d536d3; -[SCCommerceOperaScreenshopPlugin _startFetchResultWithCompletion:] */

void FUN_106d535fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 9;
  _dispatch_get_global_queue(9,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106d536d4;
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



/* Entry: 106d536d4; end: 106d53707;  */

void FUN_106d536d4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d53708; end: 106d539ab; -[SCCommerceOperaScreenshopPlugin _fetchResultWithCompletion:] */

void FUN_106d53708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf64e40(0xc0ac200000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar4;
  puStack_68 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010c19b420(puVar1);
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x00010bfa5100();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106d539ac;
  puStack_88 = &UNK_11084aaa8;
  puStack_80 = puVar3;
  uStack_78 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_a0);
  _objc_release(puStack_80);
  _objc_release(uStack_78);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106d539b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x28) + 0x10))
            (*(long *)(puVar1 + 0x28),*(undefined8 *)(puVar1 + 0x20));
  return;
}



/* Entry: 106d539ac; end: 106d539bb;  */

void FUN_106d539ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106d539b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106d539bc; end: 106d53adb; -[SCCommerceOperaScreenshopPlugin _processScreenshot:success:localIdentifier:] */

void FUN_106d539bc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((param_4 & 1) == 0) {
    func_0x00010be5a8a0(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010bf37f00(uVar1);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106d53adc; end: 106d53b37;  */

void FUN_106d53adc(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained(param_2);
  func_0x00010be81040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d53b38; end: 106d53cff; -[SCCommerceOperaScreenshopPlugin _processFashionForScreenshot:localSimilarityScore:containsFashion:success:localIdentifier:] */

void FUN_106d53b38(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,ulong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  float fStack_98;
  undefined1 uStack_94;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  if ((param_6 & 1) == 0) {
    func_0x00010be5a8a0(param_2);
  }
  else {
    _objc_initWeak(auStack_68,param_2);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106d53d00;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    _objc_copyWeak(auStack_a0,auStack_68);
    _objc_retain(param_4);
    fStack_98 = param_1;
    uStack_94 = param_5;
    _objc_retain(param_7);
    func_0x00010c2574e0((double)param_1,uVar1);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 106d53d00; end: 106d53d2b;  */

void FUN_106d53d00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be38680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d53d2c; end: 106d53d77;  */

void FUN_106d53d2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be72f80(*(undefined4 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d53d78; end: 106d53d87; -[SCCommerceOperaScreenshopPlugin _incrementProcessedScreenshotCount] */

void FUN_106d53d78(long param_1)

{
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
  return;
}



/* Entry: 106d53d88; end: 106d53f4b; -[SCCommerceOperaScreenshopPlugin _peristScreenshot:localSimilarityScore:containsFashion:success:localIdentifier:] */

void FUN_106d53d88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,ulong param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((param_6 & 1) == 0) {
    func_0x00010be5a8a0(param_2);
  }
  else if (param_5 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bfa0c60(*(undefined8 *)(param_2 + 0x30));
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5a8a0(param_2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    _objc_initWeak(auStack_58,param_2);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106d53f4c;
    puStack_78 = &UNK_110848218;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_7);
    uStack_68 = param_7;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 106d53f4c; end: 106d53fa3;  */

void FUN_106d53f4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00(uVar2);
  func_0x00010be72f60(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d53fa4; end: 106d5401b; -[SCCommerceOperaScreenshopPlugin _peristScreenshot:fashionIdentifier:] */

void FUN_106d53fa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be34700();
  if ((int)lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    _objc_release(uVar3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x88),param_2,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d5401c; end: 106d54023; -[SCCommerceOperaScreenshopPlugin session] */

undefined8 FUN_106d5401c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106d54024; end: 106d5402b; -[SCCommerceOperaScreenshopPlugin waitingForLibraryChange] */

undefined1 FUN_106d54024(long param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}


