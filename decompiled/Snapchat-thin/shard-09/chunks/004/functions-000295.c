/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d58b24; end: 106d58b2b; -[SCCommerceDeepLinkProcessor priority] */

undefined8 FUN_106d58b24(void)

{
  return 1000;
}



/* Entry: 106d58b2c; end: 106d58b93; -[SCCommerceDeepLinkProcessor canProvideProcessorForFeature:] */

ulong FUN_106d58b2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb2a18);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e85278);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106d58b94; end: 106d58c47; -[SCCommerceDeepLinkProcessor isValidDeepLink:] */

undefined4 FUN_106d58b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010beb21e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = param_3;
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,uVar3);
  if ((int)param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_106d5c450();
    uVar1 = (undefined4)uVar5;
    if (lVar2 != 0) {
      uVar1 = 1;
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106d58c48; end: 106d58c4b; -[SCCommerceDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_106d58c48(void)

{
  return;
}



/* Entry: 106d58c4c; end: 106d58da3; -[SCCommerceDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_106d58c4c(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf2d020();
  if ((int)lVar2 == 0) {
    uVar3 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f83958);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    _objc_release(lVar1);
    if ((uVar4 & 1) == 0) {
      func_0x00010bf94720(param_5,param_2,0);
      goto LAB_106d58d78;
    }
  }
  else {
    _objc_release(lVar1);
  }
  uVar5 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2d4e0(param_1,param_2,param_3,uVar5,param_4);
  _objc_release(uVar5);
  if ((param_1 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e853f8,
                        &PTR____CFConstantStringClassReference_110daafd8,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  func_0x00010bf94720(param_5,param_2,puVar6);
  _objc_release(puVar6);
LAB_106d58d78:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d58da4; end: 106d58dab; -[SCCommerceDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_106d58da4(void)

{
  return 1;
}



/* Entry: 106d58dac; end: 106d58daf; -[SCCommerceDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106d58dac(void)

{
  return;
}



/* Entry: 106d58db0; end: 106d58dbb; -[SCCommerceDeepLinkProcessor _shoppingDeeplinkFromDeeplinkURL:] */

void FUN_106d58db0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf423b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b07e0,PTR_s_commerceDeepLinkFromDeepLinkURL__1125ae290);
  return;
}



/* Entry: 106d58dbc; end: 106d58e07; -[SCCommerceDeepLinkProcessor _deeplinkURLIsLegacyDeeplink:] */

undefined8 FUN_106d58dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106d58e08; end: 106d58fc7; -[SCCommerceDeepLinkProcessor _handleOpenURL:sourceApplication:additionalInfo:] */

long FUN_106d58e08(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010beb21e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010be30080(param_1,param_2,param_3,param_4,param_5);
    goto LAB_106d58ea4;
  }
  lVar1 = param_1;
  func_0x00010bdf9100(param_1,param_2,param_3);
  if ((int)lVar1 != 0) {
    func_0x00010be2b280(param_1,param_2,param_3,param_5);
    goto LAB_106d58ea4;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x4f;
  func_0x000100c6f294(0x4f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,uVar3,&PTR____CFConstantStringClassReference_110f838f8);
  _objc_release(uVar3);
  if (param_4 == 0) {
    uVar3 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110f83a98);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) goto LAB_106d58f6c;
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10d420();
  }
  else {
LAB_106d58f6c:
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10d100();
  }
  _objc_release(param_1);
  _objc_release(puVar2);
  param_1 = 1;
LAB_106d58ea4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106d58fc8; end: 106d5905f; -[SCCommerceDeepLinkProcessor _handleLegacyCommerceDeeplinkURL:additionalInfo:] */

undefined8 FUN_106d58fc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf423e0();
  if (lVar1 - 1U < 3) {
    func_0x00010be47a20(param_1,param_2,param_3,param_4);
  }
  else {
    if (lVar1 != 4) {
      uVar2 = 0;
      goto LAB_106d59034;
    }
    func_0x00010be47a40(param_1,param_2,param_3);
  }
  uVar2 = 1;
LAB_106d59034:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106d59060; end: 106d59247; -[SCCommerceDeepLinkProcessor _launchLegacyCommerceDeeplinkURL:additionalInfo:] */

void FUN_106d59060(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010be7f9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    puVar3 = PTR_PTR_1126d25b8;
    _objc_opt_new(PTR_PTR_1126d25b8);
    lVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bc92e28();
    _objc_release(lVar5);
    puVar7 = PTR_PTR_1126b0500;
    if (lVar6 + 1U < 2) {
      func_0x00010c22cca0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf68aa0(PTR_PTR_1126b0500);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR_PTR_1126b0508;
    _objc_alloc(PTR_PTR_1126b0508);
    uVar9 = param_3;
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039400(puVar8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    func_0x00010c18b5e0(puVar8);
    func_0x00010c1ba6a0(puVar3);
    func_0x00010c1ba6c0(puVar3);
    func_0x00010c1c8ba0(uVar2);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x38));
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d59248; end: 106d5941f; -[SCCommerceDeepLinkProcessor _launchLegacyPDPDeeplinkURL:] */

void FUN_106d59248(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010be7f9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    puVar5 = PTR_PTR_1126d25b8;
    _objc_opt_new(PTR_PTR_1126d25b8);
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b0518;
    uVar7 = param_3;
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c08f2a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126b0520;
    _objc_alloc(PTR_PTR_1126b0520);
    puVar9 = PTR_PTR_1126b0528;
    func_0x00010bf35d60(PTR_PTR_1126b0528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021b80(puVar8);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b0530;
    _objc_alloc(PTR_PTR_1126b0530);
    func_0x00010c001f40();
    func_0x00010c1e3aa0(puVar5);
    func_0x00010c1e3ac0(puVar5);
    func_0x00010c1c8ba0(uVar2);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d59420; end: 106d594db; -[SCCommerceDeepLinkProcessor _handleShoppingDeeplinkURL:sourceApplication:additionalInfo:] */

undefined8
FUN_106d59420(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010beb21e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27dd80();
  if (lVar2 - 1U < 5) {
    uVar3 = param_3;
    func_0x00010c074a80(param_3);
    func_0x00010be48520(param_1,param_2,lVar1,param_4,param_5,(uint)uVar3 ^ 1);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 106d594dc; end: 106d5968b; -[SCCommerceDeepLinkProcessor _launchShoppingDeeplink:sourceApplication:additionalInfo:external:] */

void FUN_106d594dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c247520();
  if (lVar1 == -1) {
    lVar2 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110f838f8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bc92e28();
    _objc_release(lVar2);
  }
  uVar3 = param_1;
  func_0x00010be7f9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d25b8;
  _objc_opt_new(PTR_PTR_1126d25b8);
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  lVar2 = param_3;
  func_0x00010c27dd80();
  if (lVar2 < 4) {
    if (lVar2 - 1U < 2) {
      func_0x00010be48060(param_1,param_2,param_3,param_6,lVar1,uVar3,puVar4,puVar5);
    }
    else if (lVar2 == 3) {
      func_0x00010be483a0(param_1,param_2,param_3,lVar1,uVar3,puVar4,puVar5);
    }
  }
  else {
    if (lVar2 == 4) {
      func_0x00010be487a0(param_1,param_2,param_3,param_6,lVar1,uVar3,puVar4,puVar5);
    }
    else if (lVar2 != 5) goto LAB_106d59650;
    func_0x00010be48860(param_1,param_2,param_3,lVar1,uVar3,puVar4,puVar5);
  }
LAB_106d59650:
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d5968c; end: 106d59bb7; -[SCCommerceDeepLinkProcessor _launchProductCatalogFromDeeplink:external:sourceType:presentingVC:modalPresenter:uiContainer:] */

void FUN_106d5968c(long param_1,undefined8 param_2,undefined **param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar1 = param_3;
  func_0x00010c27dd80();
  ppuVar3 = param_3;
  ppuVar4 = param_3;
  uVar5 = param_5;
  ppuVar6 = param_3;
  if (ppuVar1 == (undefined **)0x2) {
    ppuVar1 = param_3;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    _objc_release(ppuVar1);
    puVar7 = PTR_PTR_1126b0840;
    if (ppuVar2 == (undefined **)0x0) goto LAB_106d597a0;
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c6f294(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2576a0(puVar7,param_2,ppuVar3,ppuVar4,uVar5,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_106d597a0:
    ppuVar1 = param_3;
    func_0x00010c27dd80();
    if (ppuVar1 != (undefined **)0x1) goto LAB_106d59b7c;
    ppuVar1 = param_3;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    _objc_release(ppuVar1);
    puVar7 = PTR_PTR_1126b0840;
    if (ppuVar2 == (undefined **)0x0) goto LAB_106d59b7c;
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c6f294(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22ce00(puVar7,param_2,ppuVar3,ppuVar4,uVar5,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar6);
  _objc_release(uVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  if (puVar7 == (undefined *)0x0) goto LAB_106d59b7c;
  puVar8 = PTR_PTR_1126b04c8;
  _objc_alloc(PTR_PTR_1126b04c8);
  ppuVar3 = param_3;
  func_0x00010c247800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  ppuVar4 = param_3;
  func_0x00010c247b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 9;
  if (param_4 != 0) {
    uVar5 = 10;
  }
  ppuVar6 = param_3;
  func_0x00010c115e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04aa40(puVar8,param_2,ppuVar1,ppuVar4,uVar5,0,0,ppuVar6,ppuVar2,0);
  _objc_release(ppuVar2);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  puVar9 = PTR_PTR_1126b0528;
  uVar5 = param_5;
  func_0x000100c6f294(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ce20(puVar9,param_2,uVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  ppuVar1 = param_3;
  func_0x00010c27dd80();
  puVar10 = PTR_PTR_1126b0518;
  ppuVar3 = param_3;
  ppuVar4 = param_3;
  if (ppuVar1 == (undefined **)0x2) {
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100c6f294(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_3;
    func_0x00010c247800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257ea0(puVar10,param_2,ppuVar3,ppuVar4,param_5,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(param_5);
LAB_106d59aac:
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    if (puVar10 != (undefined *)0x0) {
      puVar11 = PTR_PTR_1126b0520;
      _objc_alloc(PTR_PTR_1126b0520);
      func_0x00010c021b80();
      puVar12 = PTR_PTR_1126b0530;
      _objc_alloc(PTR_PTR_1126b0530);
      func_0x00010c001f40();
      func_0x00010c1e3aa0(param_7,param_2,*(undefined8 *)(param_1 + 0x10));
      func_0x00010c1e3ac0(param_7,param_2,puVar12);
      func_0x00010c1c8ba0(param_6,param_2,param_7);
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,puVar12,param_7);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
  }
  else if (ppuVar1 == (undefined **)0x1) {
    func_0x00010c115e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar3;
    func_0x00010c0b4ca0();
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23cc80(puVar10,param_2,ppuVar1,puVar7,ppuVar4,0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106d59aac;
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
LAB_106d59b7c:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d59bb8; end: 106d59d2b; -[SCCommerceDeepLinkProcessor _launchScreenshopCatalogFromDeeplink:sourceType:presentingVC:modalPresenter:uiContainer:] */

void FUN_106d59bb8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar4 = param_3;
  func_0x00010c27dd80();
  if (lVar4 == 3) {
    lVar4 = param_3;
    func_0x00010bf0b2e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = 0;
  }
  lVar1 = lVar4;
  func_0x00010bf529e0();
  puVar2 = PTR_PTR_1126b5b88;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c247b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf68a80(puVar2,param_2,param_4,lVar1,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b5b90;
    _objc_alloc(PTR_PTR_1126b5b90);
    func_0x00010c010580();
    func_0x00010c1f76c0(param_6,param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c1f76e0(param_6,param_2,puVar3);
    func_0x00010c1c8ba0(param_5,param_2,param_6);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x18),param_2,puVar3,param_6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d59d2c; end: 106d59ecb; -[SCCommerceDeepLinkProcessor _launchTryStickerFromDeeplink:sourceType:presentingVC:modalPresenter:uiContainer:] */

void FUN_106d59d2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if (lVar1 == 5) {
    lVar1 = param_3;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      _objc_release(lVar1);
    }
    else {
      lVar2 = param_3;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        _objc_initWeak(auStack_58,param_1);
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_106d59ecc;
        puStack_78 = &UNK_110848218;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_5);
        uStack_70 = param_5;
        _objc_retain(param_6);
        uStack_68 = param_6;
        func_0x0001000d76cc("APPSTORE",&puStack_90);
        _objc_release(uStack_68);
        _objc_release(uStack_70);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106d59ecc; end: 106d59f9f;  */

void FUN_106d59ecc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1;
    FUN_106d5a244();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23680(uVar3,param_2,uVar4,lVar2,*(undefined8 *)(param_1 + 0x28),2,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c17af40(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(lVar1 + 0x28));
    func_0x00010c17af60(*(undefined8 *)(param_1 + 0x28),param_2,uVar3);
    func_0x00010c1c8ba0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c08b7c0(*(undefined8 *)(lVar1 + 0x28),param_2,uVar3,*(undefined8 *)(param_1 + 0x28))
    ;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d59fa0; end: 106d5a06f; -[SCCommerceDeepLinkProcessor _presentingViewController] */

void FUN_106d59fa0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  while (uVar1 != 0) {
    uVar3 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06d1a0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) break;
    uVar3 = uVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar1 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d5a070; end: 106d5a1db; -[SCCommerceDeepLinkProcessor _launchTopicPageFromDeeplink:external:sourceType:presentingVC:modalPresenter:uiContainer:] */

void FUN_106d5a070(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c2751c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126b5b78;
    _objc_alloc(PTR_PTR_1126b5b78);
    func_0x00010c054480();
    puVar2 = PTR_PTR_1126b0528;
    func_0x000100c6f294(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22ce20(puVar2,param_2,param_5,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar3 = PTR_PTR_1126b5b80;
    _objc_alloc(PTR_PTR_1126b5b80);
    func_0x00010c0543c0();
    func_0x00010c217880(param_7,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c2178e0(param_7,param_2,puVar3);
    func_0x00010c1c8ba0(param_6,param_2,param_7);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,puVar3,param_7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106d5a1dc; end: 106d5a243; -[SCCommerceDeepLinkProcessor .cxx_destruct] */

void FUN_106d5a1dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d5a244; end: 106d5a333;  */

void FUN_106d5a244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae6c0;
  func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar3 = PTR_PTR_1126b5b50;
  _objc_alloc(PTR_PTR_1126b5b50);
  func_0x00010c01f080();
  puVar4 = PTR_PTR_1126b1bb0;
  func_0x00010bf4efa0(PTR_PTR_1126b1bb0,param_2,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d5a334; end: 106d5a34f;  */

void FUN_106d5a334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,&PTR_PTR_113185ea8,param_3,1);
  return;
}



/* Entry: 106d5a350; end: 106d5a353; -[SCCommerceDeeplinkModalPresenter commerceBrowserWillPresent] */

void FUN_106d5a350(void)

{
  return;
}



/* Entry: 106d5a354; end: 106d5a3bf; -[SCCommerceDeeplinkModalPresenter commerceBrowserWillDismiss] */

void FUN_106d5a354(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf94c80(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d5a3c0; end: 106d5a42b; -[SCCommerceDeeplinkModalPresenter screenshopPageShouldDismiss] */

void FUN_106d5a3c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf94c80(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,0);
  return;
}



/* Entry: 106d5a42c; end: 106d5a497; -[SCCommerceDeeplinkModalPresenter topicPageShouldDismiss] */

void FUN_106d5a42c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf94c80(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,0);
  return;
}



/* Entry: 106d5a498; end: 106d5a503; -[SCCommerceDeeplinkModalPresenter dismissCameraScope:] */

void FUN_106d5a498(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf94c80(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,0);
  return;
}



/* Entry: 106d5a504; end: 106d5a507; -[SCCommerceDeeplinkModalPresenter didPresentShoppingScope] */

void FUN_106d5a504(void)

{
  return;
}



/* Entry: 106d5a508; end: 106d5a573; -[SCCommerceDeeplinkModalPresenter didDismissShoppingScope] */

void FUN_106d5a508(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf94c80(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,0);
  return;
}



/* Entry: 106d5a574; end: 106d5a58b; -[SCCommerceDeeplinkModalPresenter productCatalogScope] */

void FUN_106d5a574(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a58c; end: 106d5a597; -[SCCommerceDeeplinkModalPresenter setProductCatalogScope:] */

void FUN_106d5a58c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106d5a598; end: 106d5a5af; -[SCCommerceDeeplinkModalPresenter productCatalogFeatureLauncher] */

void FUN_106d5a598(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a5b0; end: 106d5a5bb; -[SCCommerceDeeplinkModalPresenter setProductCatalogFeatureLauncher:] */

void FUN_106d5a5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106d5a5bc; end: 106d5a5d3; -[SCCommerceDeeplinkModalPresenter screenshopComposerScope] */

void FUN_106d5a5bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a5d4; end: 106d5a5df; -[SCCommerceDeeplinkModalPresenter setScreenshopComposerScope:] */

void FUN_106d5a5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106d5a5e0; end: 106d5a5f7; -[SCCommerceDeeplinkModalPresenter screenshopComposerFeatureLauncher] */

void FUN_106d5a5e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a5f8; end: 106d5a603; -[SCCommerceDeeplinkModalPresenter setScreenshopComposerFeatureLauncher:] */

void FUN_106d5a5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106d5a604; end: 106d5a61b; -[SCCommerceDeeplinkModalPresenter topicPageScope] */

void FUN_106d5a604(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a61c; end: 106d5a627; -[SCCommerceDeeplinkModalPresenter setTopicPageScope:] */

void FUN_106d5a61c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106d5a628; end: 106d5a63f; -[SCCommerceDeeplinkModalPresenter topicPageFeatureLauncher] */

void FUN_106d5a628(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a640; end: 106d5a64b; -[SCCommerceDeeplinkModalPresenter setTopicPageFeatureLauncher:] */

void FUN_106d5a640(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106d5a64c; end: 106d5a663; -[SCCommerceDeeplinkModalPresenter chatCameraScope] */

void FUN_106d5a64c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a664; end: 106d5a66f; -[SCCommerceDeeplinkModalPresenter setChatCameraScope:] */

void FUN_106d5a664(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 106d5a670; end: 106d5a687; -[SCCommerceDeeplinkModalPresenter chatCameraFeatureLauncher] */

void FUN_106d5a670(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a688; end: 106d5a693; -[SCCommerceDeeplinkModalPresenter setChatCameraFeatureLauncher:] */

void FUN_106d5a688(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106d5a694; end: 106d5a6ab; -[SCCommerceDeeplinkModalPresenter legacyShoppingScope] */

void FUN_106d5a694(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a6ac; end: 106d5a6b7; -[SCCommerceDeeplinkModalPresenter setLegacyShoppingScope:] */

void FUN_106d5a6ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106d5a6b8; end: 106d5a6cf; -[SCCommerceDeeplinkModalPresenter legacyShoppingFeatureLauncher] */

void FUN_106d5a6b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a6d0; end: 106d5a6db; -[SCCommerceDeeplinkModalPresenter setLegacyShoppingFeatureLauncher:] */

void FUN_106d5a6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 106d5a6dc; end: 106d5a743; -[SCCommerceDeeplinkModalPresenter .cxx_destruct] */

void FUN_106d5a6dc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d5a744; end: 106d5a74b; -[SCCommerceImmediateLaunchServices commerceBrowserScopeLauncher] */

undefined8 FUN_106d5a744(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d5a74c; end: 106d5a753; -[SCCommerceImmediateLaunchServices shoppingLensScopeLauncher] */

undefined8 FUN_106d5a74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d5a754; end: 106d5a75b; -[SCCommerceImmediateLaunchServices favoritesCatalogScopeLauncher] */

undefined8 FUN_106d5a754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d5a75c; end: 106d5a763; -[SCCommerceImmediateLaunchServices screenshopComposerScopeLauncher] */

undefined8 FUN_106d5a75c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d5a764; end: 106d5a76b; -[SCCommerceImmediateLaunchServices topicPageScopeLauncher] */

undefined8 FUN_106d5a764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d5a76c; end: 106d5a773; -[SCCommerceImmediateLaunchServices chatCameraScopeLauncher] */

undefined8 FUN_106d5a76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d5a774; end: 106d5a77b; -[SCCommerceImmediateLaunchServices shoppingScopeLauncher] */

undefined8 FUN_106d5a774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d5a77c; end: 106d5a7e7; -[SCCommerceImmediateLaunchServices .cxx_destruct] */

void FUN_106d5a77c(long param_1)

{
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



/* Entry: 106d5a7e8; end: 106d5a8ff; -[SCCommerceShoppingScope initWithPresentingViewController:storeId:productId:entrySource:presentationStyle:] */

undefined1 *
FUN_106d5a7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f6a40;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d5a900; end: 106d5a98f; -[SCCommerceShoppingScope initWithPresentingViewController:storeId:productId:entrySource:presentationStyle:eventLogger:] */

long FUN_106d5a900(long param_1)

{
  undefined8 in_x7;
  
  _objc_retain(in_x7);
  func_0x00010c039400();
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + 0x38,in_x7);
  }
  _objc_release(in_x7);
  return param_1;
}



/* Entry: 106d5a990; end: 106d5a997; -[SCCommerceShoppingScope presentationStyle] */

undefined8 FUN_106d5a990(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d5a998; end: 106d5a99f; -[SCCommerceShoppingScope storeId] */

undefined8 FUN_106d5a998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d5a9a0; end: 106d5a9a7; -[SCCommerceShoppingScope productId] */

undefined8 FUN_106d5a9a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d5a9a8; end: 106d5a9af; -[SCCommerceShoppingScope entrySource] */

undefined8 FUN_106d5a9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106d5a9b0; end: 106d5a9b7; -[SCCommerceShoppingScope presentingContainer] */

undefined8 FUN_106d5a9b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d5a9b8; end: 106d5a9cf; -[SCCommerceShoppingScope delegate] */

void FUN_106d5a9b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a9d0; end: 106d5a9db; -[SCCommerceShoppingScope setDelegate:] */

void FUN_106d5a9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106d5a9dc; end: 106d5a9f3; -[SCCommerceShoppingScope eventLogger] */

void FUN_106d5a9dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5a9f4; end: 106d5aa4b; -[SCCommerceShoppingScope .cxx_destruct] */

void FUN_106d5a9f4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d5aa4c; end: 106d5aacb; +[SCCommerceShoppingEntryType adDeeplinkWithAdId:adSourceType:originType:] */

void FUN_106d5aa4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xd;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  *(undefined8 *)(puVar2 + 0x60) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5aacc; end: 106d5abb7; +[SCCommerceShoppingEntryType cameraLensWithLensId:lensSessionId:isFrontCamera:cameraSourceType:lensPosition:isSponsored:] */

void FUN_106d5aacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xe;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  puVar2[0x78] = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_6;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x88) = param_7;
  puVar2[0x90] = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5abb8; end: 106d5ac03; +[SCCommerceShoppingEntryType contextCard] */

void FUN_106d5abb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5ac04; end: 106d5ac5f; +[SCCommerceShoppingEntryType deeplinkWithSourceType:] */

void FUN_106d5ac04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xc;
  *(undefined8 *)(puVar2 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5ac60; end: 106d5acab; +[SCCommerceShoppingEntryType myProfileBitmojiShopCell] */

void FUN_106d5ac60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5acac; end: 106d5acf7; +[SCCommerceShoppingEntryType profileActionSheet] */

void FUN_106d5acac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5acf8; end: 106d5ad43; +[SCCommerceShoppingEntryType profilePublicPage] */

void FUN_106d5acf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5ad44; end: 106d5ae0f; +[SCCommerceShoppingEntryType profilePublisherPageWithProfileId:sourceId:sourceSessionId:] */

void FUN_106d5ad44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5ae10; end: 106d5af13; +[SCCommerceShoppingEntryType publisherAttachmentWithOriginType:profileId:sourceId:sourceSessionId:snapId:] */

void FUN_106d5ae10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xf;
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0x98) = param_3;
  *(undefined8 *)(puVar2 + 0xa0) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb8);
  *(undefined8 *)(puVar2 + 0xb8) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5af14; end: 106d5af5f; +[SCCommerceShoppingEntryType reviewOrder] */

void FUN_106d5af14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5af60; end: 106d5b003; +[SCCommerceShoppingEntryType scanCardWithOriginType:scannableId:scanData:] */

void FUN_106d5af60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x11;
  uVar3 = *(undefined8 *)(puVar2 + 200);
  *(undefined8 *)(puVar2 + 0xc0) = param_3;
  *(undefined8 *)(puVar2 + 200) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 0xd0) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5b004; end: 106d5b04f; +[SCCommerceShoppingEntryType scanDeeplink] */

void FUN_106d5b004(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5b050; end: 106d5b09b; +[SCCommerceShoppingEntryType searchResults] */

void FUN_106d5b050(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5b09c; end: 106d5b0e7; +[SCCommerceShoppingEntryType settingsSnapStoreCell] */

void FUN_106d5b09c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5b0e8; end: 106d5b133; +[SCCommerceShoppingEntryType settingsSpectaclesShop] */

void FUN_106d5b0e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5b134; end: 106d5b17f; +[SCCommerceShoppingEntryType shoppableChatDeeplink] */

void FUN_106d5b134(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5b180; end: 106d5b203; +[SCCommerceShoppingEntryType snapAttachmentWithActionType:contextMetricsModel:originType:currentPage:] */

void FUN_106d5b180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5b204; end: 106d5b24b; +[SCCommerceShoppingEntryType unknown] */

void FUN_106d5b204(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0500;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d5b24c; end: 106d5b26f; -[SCCommerceShoppingEntryType copyWithZone:] */

undefined8 FUN_106d5b24c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106d5b270; end: 106d5b2b3; -[SCCommerceShoppingEntryType internalInit] */

void FUN_106d5b270(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f6a48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5b2b4; end: 106d5b62f; -[SCCommerceShoppingEntryType matchUnknown:contextCard:myProfileBitmojiShopCell:reviewOrder:searchResults:settingsSnapStoreCell:shoppableChatDeeplink:settingsSpectaclesShop:snapAttachment:profilePublicPage:profilePublisherPage:profileActionSheet:deeplink:adDeeplink:cameraLens:publisherAttachment:scanDeeplink:scanCard:] */

void FUN_106d5b2b4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16,
                  long param_17,long param_18,long param_19,long param_20)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    lVar1 = param_3;
    break;
  case 1:
    lVar1 = param_4;
    break;
  case 2:
    lVar1 = param_5;
    break;
  case 3:
    lVar1 = param_6;
    break;
  case 4:
    lVar1 = param_7;
    break;
  case 5:
    lVar1 = param_8;
    break;
  case 6:
    if (param_9 == 0) goto LAB_106d5b584;
    pcVar5 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    goto code_r0x000106d5b520;
  case 7:
    if (param_10 == 0) goto LAB_106d5b584;
    pcVar5 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    goto code_r0x000106d5b520;
  case 8:
    if (param_11 != 0) {
      (**(code **)(param_11 + 0x10))
                (param_11,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    }
    goto LAB_106d5b584;
  case 9:
    if (param_12 == 0) goto LAB_106d5b584;
    pcVar5 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
    goto code_r0x000106d5b520;
  case 10:
    if (param_13 == 0) goto LAB_106d5b584;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    pcVar5 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
    goto code_r0x000106d5b564;
  case 0xb:
    if (param_14 == 0) goto LAB_106d5b584;
    pcVar5 = *(code **)(param_14 + 0x10);
    lVar1 = param_14;
    goto code_r0x000106d5b520;
  case 0xc:
    if (param_15 != 0) {
      (**(code **)(param_15 + 0x10))(param_15,*(undefined8 *)(param_1 + 0x48));
    }
    goto LAB_106d5b584;
  case 0xd:
    if (param_16 == 0) goto LAB_106d5b584;
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    pcVar5 = *(code **)(param_16 + 0x10);
    lVar1 = param_16;
    goto code_r0x000106d5b564;
  case 0xe:
    if (param_17 != 0) {
      (**(code **)(param_17 + 0x10))
                (param_17,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                 *(undefined1 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                 *(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x90));
    }
    goto LAB_106d5b584;
  case 0xf:
    if (param_18 != 0) {
      (**(code **)(param_18 + 0x10))
                (param_18,*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                 *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                 *(undefined8 *)(param_1 + 0xb8));
    }
    goto LAB_106d5b584;
  case 0x10:
    if (param_19 == 0) goto LAB_106d5b584;
    pcVar5 = *(code **)(param_19 + 0x10);
    lVar1 = param_19;
    goto code_r0x000106d5b520;
  case 0x11:
    if (param_20 == 0) goto LAB_106d5b584;
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = *(undefined8 *)(param_1 + 200);
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    pcVar5 = *(code **)(param_20 + 0x10);
    lVar1 = param_20;
code_r0x000106d5b564:
    (*pcVar5)(lVar1,uVar2,uVar3,uVar4);
  default:
    goto LAB_106d5b584;
  }
  if (lVar1 != 0) {
    pcVar5 = *(code **)(lVar1 + 0x10);
code_r0x000106d5b520:
    (*pcVar5)(lVar1);
  }
LAB_106d5b584:
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d5b630; end: 106d5b6ef; -[SCCommerceShoppingEntryType .cxx_destruct] */

void FUN_106d5b630(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106d5b6f0; end: 106d5b7db; -[SCFavoritesCatalogScope initWithContainer:entrySource:delegate:eventLogger:] */

undefined1 *
FUN_106d5b6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f6a50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d5b7dc; end: 106d5b7e3; -[SCFavoritesCatalogScope entrySource] */

undefined8 FUN_106d5b7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d5b7e4; end: 106d5b7eb; -[SCFavoritesCatalogScope container] */

undefined8 FUN_106d5b7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106d5b7ec; end: 106d5b803; -[SCFavoritesCatalogScope delegate] */

void FUN_106d5b7ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5b804; end: 106d5b81b; -[SCFavoritesCatalogScope eventLogger] */

void FUN_106d5b804(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5b81c; end: 106d5b85b; -[SCFavoritesCatalogScope .cxx_destruct] */

void FUN_106d5b81c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d5b85c; end: 106d5b8c3; +[SCFavoritesCatalogSourceType pDPWithLogger:] */

void FUN_106d5b85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b07a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


