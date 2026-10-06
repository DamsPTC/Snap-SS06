/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f78d78; end: 105f78deb; -[SCTextAdMessagePlugin webBrowserDidDismiss:] */

void FUN_105f78d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010bfb0160(*(undefined8 *)(param_1 + 0x20));
  }
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f78dec; end: 105f78e33; -[SCTextAdMessagePlugin dismissPresentedView] */

void FUN_105f78dec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105f78e34; end: 105f78ed3; -[SCTextAdMessagePlugin _handleTapOpenExternalBrowserWithURLString:] */

void FUN_105f78e34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf2cf00();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e9b80();
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f78ed4; end: 105f7909b; -[SCTextAdMessagePlugin _handleTapOpenInAppBrowserWithURLString:] */

void FUN_105f78ed4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ad780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c2b9b80(puVar4,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ae560;
    _objc_alloc_init(PTR_PTR_1126ae560);
    puVar5 = puVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    lVar2 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar2);
    puVar6 = puVar5;
    func_0x00010bf22ba0(puVar5,param_2,puVar3,puVar4,lVar2,param_1,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 105f7909c; end: 105f790b3;  */

void FUN_105f7909c(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105f790b4; end: 105f790bb; -[SCTextAdMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105f790b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f790bc; end: 105f790eb; -[SCTextAdMessagePlugin setActiveConversationIdObservable:] */

void FUN_105f790bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105f790ec; end: 105f790f3; -[SCTextAdMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105f790ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105f790f4; end: 105f79123; -[SCTextAdMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105f790f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f79124; end: 105f7913b; -[SCTextAdMessagePlugin uiContainer] */

void FUN_105f79124(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7913c; end: 105f79147; -[SCTextAdMessagePlugin setUiContainer:] */

void FUN_105f7913c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105f79148; end: 105f7914f; -[SCTextAdMessagePlugin messageViewEvents] */

undefined8 FUN_105f79148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f79150; end: 105f7917f; -[SCTextAdMessagePlugin setMessageViewEvents:] */

void FUN_105f79150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f79180; end: 105f791ff; -[SCTextAdMessagePlugin .cxx_destruct] */

void FUN_105f79180(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f79200; end: 105f7920b; +[SCCChatProductAdView componentPath] */

undefined ** FUN_105f79200(void)

{
  return &PTR____CFConstantStringClassReference_110e34178;
}



/* Entry: 105f7920c; end: 105f7923f; -[SCCChatProductAdView initWithViewModel:componentContext:runtime:] */

void FUN_105f7920c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee538;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f79240; end: 105f7928f; -[SCCChatProductAdView setViewModel:] */

void FUN_105f79240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f79290; end: 105f792d3; -[SCCChatProductAdView viewModel] */

void FUN_105f79290(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f792d4; end: 105f7937b; -[SCCChatProductAdBrowserType__Enum init] */

undefined ** FUN_105f792d4(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = PTR_PTR_113133a68;
  puStack_38 = PTR_PTR_113133a70;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e341d8;
  uVar4 = 3;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0105e0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retainBlock();
  puStack_78 = PTR_PTR_1126ee540;
  ppuVar2 = &puStack_80;
  puStack_80 = puVar1;
  func_0x000105f79600(ppuVar2,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(puVar3);
  _objc_release(uVar4);
  return ppuVar2;
}



/* Entry: 105f7937c; end: 105f7940b; -[SCCChatProductAdContext initWithBlizzardLogger:onTap:] */

undefined8 *
FUN_105f7937c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ee540;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000105f79600(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105f7940c; end: 105f7942f; +[SCCChatProductAdContext valdiMarshallableObjectDescriptor] */

void FUN_105f7940c(undefined8 *param_1)

{
  *param_1 = &PTR_s_blizzardLogger_1108fe7d8;
  param_1[1] = &PTR_s_SCCBlizzardLogging_1108fe880;
  param_1[2] = &PTR_s_od_v_1108fe7a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79430; end: 105f79453;  */

undefined8 FUN_105f79430(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 105f79454; end: 105f794d3;  */

void FUN_105f79454(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105f795cc;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105f794d4; end: 105f7951f; -[SCCChatProductAdItem initWithBrandName:productName:attachmentUrl:productImageUrl:adId:impressionId:rank:] */

void FUN_105f794d4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f79608(PTR_PTR_1126ee548);
  func_0x000105f79600(auStack_20);
  return;
}



/* Entry: 105f79520; end: 105f7953b; +[SCCChatProductAdItem valdiMarshallableObjectDescriptor] */

void FUN_105f79520(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fe8a8;
  param_1[1] = &PTR_DAT_1108fe9f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f7953c; end: 105f7956b; -[SCCChatProductAdItemInstallmentInfo initWithInstallmentPayment:installmentDescription:] */

void FUN_105f7953c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f79608(PTR_PTR_1126ee550);
  func_0x000105f79600(auStack_20);
  return;
}



/* Entry: 105f7956c; end: 105f7957f; +[SCCChatProductAdItemInstallmentInfo valdiMarshallableObjectDescriptor] */

void FUN_105f7956c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108fea10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79580; end: 105f795af; -[SCCChatProductAdViewModel initWithProductAdItems:] */

void FUN_105f79580(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105f79608(PTR_PTR_1126ee558);
  func_0x000105f79600(auStack_20);
  return;
}



/* Entry: 105f795b0; end: 105f795cb; +[SCCChatProductAdViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f795b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fea70;
  param_1[1] = &PTR_DAT_1108feae8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f795cc; end: 105f795f7;  */

void FUN_105f795cc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105f795f8; end: 105f7961f;  */

void FUN_105f795f8(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 105f79620; end: 105f7962b; +[SCCChatSponsoredSnapAiProductAdView componentPath] */

undefined ** FUN_105f79620(void)

{
  return &PTR____CFConstantStringClassReference_110e341f8;
}



/* Entry: 105f7962c; end: 105f7965f; -[SCCChatSponsoredSnapAiProductAdView initWithViewModel:componentContext:runtime:] */

void FUN_105f7962c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee560;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f79660; end: 105f796af; -[SCCChatSponsoredSnapAiProductAdView setViewModel:] */

void FUN_105f79660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f796b0; end: 105f796f3; -[SCCChatSponsoredSnapAiProductAdView viewModel] */

void FUN_105f796b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f796f4; end: 105f79787; -[SCCChatSponsoredSnapAiProductAdContext initWithBlizzardLogger:messageVisibilityObservable:onTap:] */

undefined8 *
FUN_105f796f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ee568;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000105f79940(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105f79788; end: 105f797ab; +[SCCChatSponsoredSnapAiProductAdContext valdiMarshallableObjectDescriptor] */

void FUN_105f79788(undefined8 *param_1)

{
  *param_1 = &PTR_s_blizzardLogger_1108feb30;
  param_1[1] = &PTR_s_SCCBlizzardLogging_1108feb90;
  param_1[2] = &PTR_s_od_v_1108feb00;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f797ac; end: 105f797cf;  */

undefined8 FUN_105f797ac(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 105f797d0; end: 105f7984f;  */

void FUN_105f797d0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105f79904;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105f79850; end: 105f7988f; -[SCCChatSponsoredSnapAiProductAdItem initWithProductName:attachmentUrl:productImageUrl:price:] */

void FUN_105f79850(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee570;
  uStack_20 = param_1;
  func_0x000105f79940(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f79890; end: 105f798a3; +[SCCChatSponsoredSnapAiProductAdItem valdiMarshallableObjectDescriptor] */

void FUN_105f79890(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_productName_1108feba8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f798a4; end: 105f798e7; -[SCCChatSponsoredSnapAiProductAdViewModel initWithProductAdItems:conversationId:messageId:] */

void FUN_105f798a4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee578;
  uStack_20 = param_1;
  func_0x000105f79940(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f798e8; end: 105f79903; +[SCCChatSponsoredSnapAiProductAdViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f798e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fec80;
  param_1[1] = &PTR_DAT_1108fed40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79904; end: 105f7992f;  */

void FUN_105f79904(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105f79930; end: 105f79947;  */

void FUN_105f79930(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 105f79948; end: 105f79953; +[SCCChatSuggestedSearchView componentPath] */

undefined ** FUN_105f79948(void)

{
  return &PTR____CFConstantStringClassReference_110e34218;
}



/* Entry: 105f79954; end: 105f79987; -[SCCChatSuggestedSearchView initWithViewModel:componentContext:runtime:] */

void FUN_105f79954(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee580;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f79988; end: 105f799d7; -[SCCChatSuggestedSearchView setViewModel:] */

void FUN_105f79988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f799d8; end: 105f79a1b; -[SCCChatSuggestedSearchView viewModel] */

void FUN_105f799d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f79a1c; end: 105f79a4f; -[SCCChatSuggestedSearchContext init] */

void FUN_105f79a1c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee588;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105f79a50; end: 105f79a6f; +[SCCChatSuggestedSearchContext valdiMarshallableObjectDescriptor] */

void FUN_105f79a50(undefined8 *param_1)

{
  *param_1 = &PTR_s_blizzardLogger_1108fed50;
  param_1[1] = &PTR_s_SCCBlizzardLogging_1108fedb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79a70; end: 105f79aaf; -[SCCChatSuggestedSearchViewModel initWithUrl:] */

void FUN_105f79a70(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee590;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f79ab0; end: 105f79ac7; +[SCCChatSuggestedSearchViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f79ab0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_url_1108fedc8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79ac8; end: 105f79ad3; +[SCCChatTextAdView componentPath] */

undefined ** FUN_105f79ac8(void)

{
  return &PTR____CFConstantStringClassReference_110e34238;
}



/* Entry: 105f79ad4; end: 105f79b07; -[SCCChatTextAdView initWithViewModel:componentContext:runtime:] */

void FUN_105f79ad4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee598;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105f79b08; end: 105f79b57; -[SCCChatTextAdView setViewModel:] */

void FUN_105f79b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f79b58; end: 105f79b9b; -[SCCChatTextAdView viewModel] */

void FUN_105f79b58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f79b9c; end: 105f79bcf; -[SCCChatTextAdContext init] */

void FUN_105f79b9c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee5a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105f79bd0; end: 105f79be3; +[SCCChatTextAdContext valdiMarshallableObjectDescriptor] */

void FUN_105f79bd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fee40;
  param_1[1] = &PTR_s_SCBridgeObservable_1108feee8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79be4; end: 105f79c2f; -[SCCChatTextAdItem initWithTitle:displayDomain:displayUrl:abstract:destinationUrl:adId:impressionId:] */

void FUN_105f79be4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee5a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f79c30; end: 105f79c43; +[SCCChatTextAdItem valdiMarshallableObjectDescriptor] */

void FUN_105f79c30(undefined8 *param_1)

{
  *param_1 = &PTR_s_title_1108fef10;
  param_1[1] = &PTR_DAT_1108fefe8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79c44; end: 105f79c8f; -[SCCChatTextAdViewModel initWithItems:] */

void FUN_105f79c44(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee5b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105f79c90; end: 105f79cb3; +[SCCChatTextAdViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f79c90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108feff8;
  param_1[1] = &PTR_DAT_1108ff0a0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79cb4; end: 105f79ce7; -[SCCChatAdItemPostbackInfoContext initWithImpressionToken:urlPingSuffix:] */

void FUN_105f79cb4(undefined8 param_1)

{
  func_0x000105f79d3c(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f79ce8; end: 105f79cf7; +[SCCChatAdItemPostbackInfoContext valdiMarshallableObjectDescriptor] */

void FUN_105f79ce8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ff0b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79cf8; end: 105f79d2b; -[SCCChatAdSharePostbackInfoContext initWithVisibilityFeedbackURL:pageLoadPingURL:pingURLBase:] */

void FUN_105f79cf8(undefined8 param_1)

{
  func_0x000105f79d3c(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105f79d2c; end: 105f79d57; +[SCCChatAdSharePostbackInfoContext valdiMarshallableObjectDescriptor] */

void FUN_105f79d2c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ff110;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105f79d58; end: 105f79e07; -[SCAdMessagePostbackInfoEventHandler initWithConversationEventObservable:] */

undefined1 * FUN_105f79d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee5c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f79e08; end: 105f79f03; -[SCAdMessagePostbackInfoEventHandler listenToConversationEvents] */

void FUN_105f79e08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105f79f04; end: 105f79ff7;  */

void FUN_105f79f04(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f79ff8;
  puStack_60 = &UNK_110843540;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd100(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 105f79ff8; end: 105f7a04f;  */

void FUN_105f79ff8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddf3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f7a050; end: 105f7a09f; -[SCAdMessagePostbackInfoEventHandler dwellRequestBridgeObservableIfNeeded] */

void FUN_105f7a050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfad7a0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108ff170);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f7a0a0; end: 105f7a0a7;  */

void FUN_105f7a0a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 105f7a0a8; end: 105f7a0b7; -[SCAdMessagePostbackInfoEventHandler fireDwellRequest] */

void FUN_105f7a0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 105f7a0b8; end: 105f7a0df; -[SCAdMessagePostbackInfoEventHandler _cleanup] */

void FUN_105f7a0b8(long param_1)

{
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 105f7a0e0; end: 105f7a11b; -[SCAdMessagePostbackInfoEventHandler .cxx_destruct] */

void FUN_105f7a0e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f7a11c; end: 105f7a127; +[SCCChatAdAttachmentView componentPath] */

undefined ** FUN_105f7a11c(void)

{
  return &PTR____CFConstantStringClassReference_110e34258;
}



/* Entry: 105f7a128; end: 105f7a147; -[SCCChatAdAttachmentView initWithViewModel:componentContext:runtime:] */

void FUN_105f7a128(void)

{
  FUN_105f7a37c(PTR_PTR_1126ee5d0);
  return;
}



/* Entry: 105f7a148; end: 105f7a17b; -[SCCChatAdAttachmentView setViewModel:] */

void FUN_105f7a148(void)

{
  func_0x000105f7a390();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7a3a0();
  func_0x000105f7a3b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f7a17c; end: 105f7a1b3; -[SCCChatAdAttachmentView viewModel] */

void FUN_105f7a17c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7a3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7a1b4; end: 105f7a1bf; +[SCCChatSponsoredSnapBannerView componentPath] */

undefined ** FUN_105f7a1b4(void)

{
  return &PTR____CFConstantStringClassReference_110e34278;
}



/* Entry: 105f7a1c0; end: 105f7a1df; -[SCCChatSponsoredSnapBannerView initWithViewModel:componentContext:runtime:] */

void FUN_105f7a1c0(void)

{
  FUN_105f7a37c(PTR_PTR_1126ee5d8);
  return;
}



/* Entry: 105f7a1e0; end: 105f7a213; -[SCCChatSponsoredSnapBannerView setViewModel:] */

void FUN_105f7a1e0(void)

{
  func_0x000105f7a390();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7a3a0();
  func_0x000105f7a3b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f7a214; end: 105f7a24b; -[SCCChatSponsoredSnapBannerView viewModel] */

void FUN_105f7a214(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7a3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7a24c; end: 105f7a257; +[SCCChatSponsoredSnapView componentPath] */

undefined ** FUN_105f7a24c(void)

{
  return &PTR____CFConstantStringClassReference_110e34298;
}



/* Entry: 105f7a258; end: 105f7a277; -[SCCChatSponsoredSnapView initWithViewModel:componentContext:runtime:] */

void FUN_105f7a258(void)

{
  FUN_105f7a37c(PTR_PTR_1126ee5e0);
  return;
}



/* Entry: 105f7a278; end: 105f7a2ab; -[SCCChatSponsoredSnapView setViewModel:] */

void FUN_105f7a278(void)

{
  func_0x000105f7a390();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7a3a0();
  func_0x000105f7a3b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f7a2ac; end: 105f7a2e3; -[SCCChatSponsoredSnapView viewModel] */

void FUN_105f7a2ac(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7a3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7a2e4; end: 105f7a2ef; +[SCCSponsoredSnapModalComponent componentPath] */

undefined ** FUN_105f7a2e4(void)

{
  return &PTR____CFConstantStringClassReference_110e342b8;
}



/* Entry: 105f7a2f0; end: 105f7a30f; -[SCCSponsoredSnapModalComponent initWithViewModel:componentContext:runtime:] */

void FUN_105f7a2f0(void)

{
  FUN_105f7a37c(PTR_PTR_1126ee5e8);
  return;
}



/* Entry: 105f7a310; end: 105f7a343; -[SCCSponsoredSnapModalComponent setViewModel:] */

void FUN_105f7a310(void)

{
  func_0x000105f7a390();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7a3a0();
  func_0x000105f7a3b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f7a344; end: 105f7a37b; -[SCCSponsoredSnapModalComponent viewModel] */

void FUN_105f7a344(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f7a3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f7a37c; end: 105f7a3d7;  */

void FUN_105f7a37c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105f7a3d8; end: 105f7a44b; -[SCGrapheneSponsoredSnapDisclaimerMetric2 init] */

undefined1 * FUN_105f7a3d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee5f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f7a44c; end: 105f7a5bf;  */

void FUN_105f7a44c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  long *plVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_1108ff190,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105f7a5c0; end: 105f7a5c7; -[SCCChatSponsoredSnapBannerAccessoryViewType__Enum init] */

void FUN_105f7a5c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105f7a5c8; end: 105f7a5cf; -[SCCChatSponsoredSnapBannerColorTheme__Enum init] */

void FUN_105f7a5c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 105f7a5d0; end: 105f7a5d7; -[SCCChatSponsoredSnapBannerEnvelopeStyle__Enum init] */

void FUN_105f7a5d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105f7a5d8; end: 105f7a5f7; -[SCCAppInstallAttachmentViewModel init] */

void FUN_105f7a5d8(void)

{
  FUN_105f7ac58(PTR_PTR_1126ee5f8);
  return;
}



/* Entry: 105f7a5f8; end: 105f7a60b; +[SCCAppInstallAttachmentViewModel valdiMarshallableObjectDescriptor] */

void FUN_105f7a5f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ff1f0;
  param_1[1] = &PTR_DAT_1108ff268;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


