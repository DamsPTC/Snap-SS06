/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105117028; end: 10511708f; +[SCAppealPbAppealData descriptor] */

void FUN_105117028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9410 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a192c0,
                        &PTR____CFConstantStringClassReference_110dc6518,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_appealId_1130c42d8,8,0x40,
                        0x1c);
    puRam00000001136b9410 = puVar1;
  }
  return;
}



/* Entry: 105117090; end: 1051170f7; +[SCAppealPbGetAppealStatusRequest descriptor] */

void FUN_105117090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a19310,
                        &PTR____CFConstantStringClassReference_110dc6538,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_appealId_1130c41b8,3,0x18,
                        0x1c);
    puRam00000001136b9418 = puVar1;
  }
  return;
}



/* Entry: 1051170f8; end: 10511715f; +[SCAppealPbGetAppealStatusResponse descriptor] */

void FUN_1051170f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9420 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a19360,
                        &PTR____CFConstantStringClassReference_110dc6558,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_appealData_1130c4138,1,0x10,
                        0x1c);
    puRam00000001136b9420 = puVar1;
  }
  return;
}



/* Entry: 105117160; end: 1051171c7; +[SCAppealPbCheckExistingOpenAppealRequest descriptor] */

void FUN_105117160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9428 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a193b0,
                        &PTR____CFConstantStringClassReference_110dc6578,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_referenceId_1130c4178,2,0x10,
                        0x1c);
    puRam00000001136b9428 = puVar1;
  }
  return;
}



/* Entry: 1051171c8; end: 10511722f; +[SCAppealPbCheckExistingOpenAppealResponse descriptor] */

void FUN_1051171c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9430 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a19400,
                        &PTR____CFConstantStringClassReference_110dc6598,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_appealData_1130c4158,1,0x10,
                        0x1c);
    puRam00000001136b9430 = puVar1;
  }
  return;
}



/* Entry: 105117230; end: 105117297; +[SCAppealPbUpdateAppealRequest descriptor] */

void FUN_105117230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9438 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a19450,
                        &PTR____CFConstantStringClassReference_110dc65b8,
                        &PTR_s_snapchat_abuse_support_1130c40a0,&PTR_s_appealId_1130c4218,6,0x30,
                        0x1c);
    puRam00000001136b9438 = puVar1;
  }
  return;
}



/* Entry: 105117298; end: 1051172ff; +[SCAppealPbUpdateAppealResponse descriptor] */

void FUN_105117298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a194a0,
                        &PTR____CFConstantStringClassReference_110dc65d8,
                        &PTR_s_snapchat_abuse_support_1130c40a0,0,0,4,0x1c);
    puRam00000001136b9440 = puVar1;
  }
  return;
}



/* Entry: 105117300; end: 105117307; -[SCInAppSupportComposerContainerViewController modalPresentationStyle] */

undefined8 FUN_105117300(void)

{
  return 5;
}



/* Entry: 105117308; end: 1051174d3; -[SCInAppSupportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105117308(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_68;
  
  lVar2 = param_1 + _DAT_11271c9e4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c295140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b4f38;
  _objc_alloc(PTR_PTR_1126b4f38);
  lVar2 = param_1 + _DAT_11271c9e8;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000106b7ffb4();
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = 0;
  func_0x00010c008360(puVar4,param_2,lVar6,&uStack_68);
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b4f40;
  _objc_alloc(PTR_PTR_1126b4f40);
  lVar8 = (long)_DAT_11271c9ec;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar5 = param_1 + _DAT_11271c9f0;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f920(puVar7,param_2,lVar2,lVar6,*(undefined8 *)(param_1 + _DAT_11271c9f4),lVar3,
                      puVar4);
  _objc_release(uVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  func_0x00010c1c8b80(puVar7,param_2,5);
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 1051174d4; end: 10511755f; -[SCInAppSupportEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051174d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11271c9ec;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e63e0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105117560; end: 1051175bf; -[SCInAppSupportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105117560(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c9f4,0);
  _objc_destroyWeak(param_1 + _DAT_11271c9e8);
  _objc_destroyWeak(param_1 + _DAT_11271c9e4);
  _objc_destroyWeak(param_1 + _DAT_11271c9f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c9ec);
  return;
}



/* Entry: 1051175c0; end: 105117707; -[SCInAppSupportViewController initWithSupportScope:composerRuntime:webScopeExposer:blizzardLogger:supportUrls:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1051175c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e63e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271c9f8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271c9fc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271ca00;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271ca04;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11271ca08;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105117708; end: 10511774f; -[SCInAppSupportViewController viewDidAppear:] */

void FUN_105117708(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e63e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c10e6e0(param_1);
  return;
}



/* Entry: 105117750; end: 1051177f7; -[SCInAppSupportViewController presentSupportPageUi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105117750(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010bdeeb20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4f48;
  _objc_alloc(PTR_PTR_1126b4f48);
  func_0x00010c0601e0();
  func_0x00010c1c1bc0(*(undefined8 *)(param_1 + _DAT_11271ca0c),param_2,puVar2);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  func_0x00010c1c8b80();
  func_0x00010c10eda0(param_1,param_2,puVar3,1,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051177f8; end: 105117b1f; -[SCInAppSupportViewController _createInAppSupportView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051177f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar10 = (long)_DAT_11271c9fc;
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b4f50;
  _objc_alloc_init(PTR_PTR_1126b4f50);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105117b20;
  puStack_88 = &UNK_110868d10;
  lStack_80 = param_1;
  _objc_opt_class(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  uVar1 = uVar2;
  func_0x00010c0b7ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afe50;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80();
  lVar10 = (long)_DAT_11271ca0c;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar4;
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_opt_class(PTR_PTR_1126b4f48);
  func_0x00010c181960(*(undefined8 *)(param_1 + lVar10));
  puVar4 = PTR_PTR_1126b4f68;
  _objc_alloc(PTR_PTR_1126b4f68);
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar10 = (long)_DAT_11271ca08;
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bfe4f20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010beed400(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c0b4160(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c1391c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02ef00(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar6);
  func_0x00010c224fa0(puVar4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11271ca04);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar4);
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126b4f70;
  _objc_alloc(PTR_PTR_1126b4f70);
  func_0x00010c061d40();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105117b20; end: 105117b73;  */

void FUN_105117b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4f58;
  func_0x00010bdc3620(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),PTR_PTR_1126b4f58,param_2,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105117b74; end: 105117b97;  */

void FUN_105117b74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_bindAttribute_invalidateLayoutOn_1125a41f8,
             &PTR____CFConstantStringClassReference_110dc65f8,0,
             &PTR___NSConcreteGlobalBlock_110868d80,&PTR___NSConcreteGlobalBlock_110868dc0);
  return;
}



/* Entry: 105117b98; end: 105117e5f;  */

undefined * FUN_105117b98(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = param_2;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2a46c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe4ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010af82634();
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
      func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09c060(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_2);
      _objc_retain(puVar2);
      func_0x00010c183f80(puVar5);
      _objc_release(puVar2);
      puVar3 = param_2;
    }
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return (undefined *)0x1;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return puVar2;
}



/* Entry: 105117e60; end: 105117eaf;  */

void FUN_105117e60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060(uVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105117eb0; end: 105117eb3;  */

void FUN_105117eb0(void)

{
  return;
}



/* Entry: 105117eb4; end: 105117edf;  */

void FUN_105117eb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105117ee0; end: 105117f1b; -[SCInAppSupportViewController _onClickBackButtonDismissSupportScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105117ee0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271c9f8);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c262fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105117f1c; end: 105117f27; -[SCInAppSupportViewController defaultProjectNameV2] */

undefined ** FUN_105117f1c(void)

{
  return &PTR____CFConstantStringClassReference_110dc6638;
}



/* Entry: 105117f28; end: 105117f33; -[SCInAppSupportViewController defaultSubProjectName] */

undefined ** FUN_105117f28(void)

{
  return &PTR____CFConstantStringClassReference_110dc6658;
}



/* Entry: 105117f34; end: 105117fb3; -[SCInAppSupportViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105117f34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ca00,0);
  _objc_storeStrong(param_1 + _DAT_11271ca0c,0);
  _objc_storeStrong(param_1 + _DAT_11271c9fc,0);
  _objc_storeStrong(param_1 + _DAT_11271ca08,0);
  _objc_storeStrong(param_1 + _DAT_11271ca04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c9f8,0);
  return;
}



/* Entry: 105117fb4; end: 105117fbf; +[SCCInAppSupportNavigationPage componentPath] */

undefined ** FUN_105117fb4(void)

{
  return &PTR____CFConstantStringClassReference_110dc6678;
}



/* Entry: 105117fc0; end: 105117ff3; -[SCCInAppSupportNavigationPage initWithViewModel:componentContext:runtime:] */

void FUN_105117fc0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e63f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105117ff4; end: 105118043; -[SCCInAppSupportNavigationPage setViewModel:] */

void FUN_105117ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105118044; end: 105118087; -[SCCInAppSupportNavigationPage viewModel] */

void FUN_105118044(undefined8 param_1)

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



/* Entry: 105118088; end: 10511817b; -[SCCInAppSupportRootPageContext initWithNavigator:onClickBackDismiss:iNeedHelpUrl:accountCompromisedFormUrl:loginAndPasswordUrl:passwordResetViaEmailUrl:] */

undefined8 *
FUN_105118088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_58 = PTR_PTR_1126e63f8;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10511817c; end: 10511819b; +[SCCInAppSupportRootPageContext valdiMarshallableObjectDescriptor] */

void FUN_10511817c(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110868de0;
  param_1[1] = &PTR_s_SCValdiINavigator_110868ed0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511819c; end: 1051181cf; -[SCCInAppSupportRootPageViewModel init] */

void FUN_10511819c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6400;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1051181d0; end: 1051181e7; +[SCCInAppSupportRootPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_1051181d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dd90108;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1051181e8; end: 105118263; +[SCInAppSupportPbInAppSupportUrls descriptor] */

undefined * FUN_1051181e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9448 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a19720,
                        &PTR____CFConstantStringClassReference_110dc6698,
                        &PTR_s_snapchat_abuse_support_1130c4558,&PTR_s_iNeedHelpURL_1130c4570,5,0x30
                        ,0x1c);
    func_0x00010c2289e0();
    puRam00000001136b9448 = puVar1;
  }
  return puRam00000001136b9448;
}



/* Entry: 105118264; end: 10511837f; -[SCInAppWarningTakeoverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105118264(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11271ca18;
    _objc_loadWeakRetained(lVar6);
  }
  lVar1 = lVar6;
  func_0x00010c1018e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4f78;
  _objc_alloc(PTR_PTR_1126b4f78);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271ca10);
  lVar3 = param_1 + _DAT_11271ca14;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271ca18;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062a20(puVar2,param_2,uVar7,lVar4,lVar5);
  func_0x00010c125b60(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 105118380; end: 1051183c7; -[SCInAppWarningTakeoverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105118380(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ca10,0);
  _objc_destroyWeak(param_1 + _DAT_11271ca14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271ca18);
  return;
}



/* Entry: 1051183c8; end: 105118493; -[SCInAppWarningTakeoverProvider initWithWarningV4ScopeExposer:fstCampaignDataProvider:additionalMetricsData:] */

undefined1 *
FUN_1051183c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6408;
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



/* Entry: 105118494; end: 1051184db; -[SCInAppWarningTakeoverProvider canShowCampaign:] */

undefined8 FUN_105118494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1051184dc; end: 1051184eb; -[SCInAppWarningTakeoverProvider showCampaign:uiContainer:onComplete:] */

void FUN_1051184dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be489d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__launchWarningV4_campaign_onComp_11256fc10,param_4,param_3);
  return;
}



/* Entry: 1051184ec; end: 1051185a7; -[SCInAppWarningTakeoverProvider _launchWarningV4:campaign:onComplete:] */

void FUN_1051184ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(param_4);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b4f80;
  _objc_alloc(PTR_PTR_1126b4f80);
  func_0x00010c0582c0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051185a8; end: 1051185eb; -[SCInAppWarningTakeoverProvider warningsV4Completed] */

void FUN_1051185a8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051185ec; end: 105118633; -[SCInAppWarningTakeoverProvider .cxx_destruct] */

void FUN_1051185ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105118634; end: 105118783; -[SCInAppWarningV4EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105118634(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271ca2c);
  *(undefined **)(param_1 + _DAT_11271ca2c) = puVar1;
  _objc_release(uVar5);
  lVar2 = param_1;
  func_0x00010be5b8a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271ca30;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfc69a0(lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105118784; end: 1051187d7;  */

void FUN_105118784(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec21c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051187d8; end: 10511887f; -[SCInAppWarningV4EntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051187d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  *(undefined1 *)(param_1 + _DAT_11271ca34) = 1;
  lVar1 = param_1 + _DAT_11271ca38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11271ca2c));
  puStack_38 = PTR_PTR_1126e6410;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105118880; end: 105118ab3; -[SCInAppWarningV4EntryPoint _startWarningManagerWithJSRuntime:dependencies:] */

void FUN_105118880(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010be68620(param_1);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    puVar1 = PTR_PTR_1126b4f88;
    func_0x00010bfbc0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf57040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c08bfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c272180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105118ab4;
    puStack_88 = &UNK_11084a018;
    _objc_copyWeak(auStack_80,auStack_78);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x105118c14;
    puStack_b0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_a8,auStack_78);
    puVar4 = puVar3;
    func_0x00010c25ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_105118c40;
    puStack_f0 = &UNK_110850cf8;
    _objc_copyWeak(auStack_d0,auStack_78);
    puStack_e8 = puVar4;
    puStack_e0 = puVar2;
    puStack_d8 = puVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_108);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105118ab4; end: 105118b9f;  */

void FUN_105118ab4(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105118ba0;
  puStack_50 = &UNK_110868ef0;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105118ba0; end: 105118c3f;  */

void FUN_105118ba0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105118c40; end: 105118cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105118c40(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + _DAT_11271ca34) == '\x01') {
      func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      lVar4 = (long)_DAT_11271ca3c;
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(lVar1 + lVar4);
      *(undefined8 *)(lVar1 + lVar4) = uVar3;
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      lVar4 = (long)_DAT_11271ca40;
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(lVar1 + lVar4);
      *(undefined8 *)(lVar1 + lVar4) = uVar3;
      _objc_release(uVar2);
      func_0x00010bf1a3e0(*(undefined8 *)(param_1 + 0x20),param_2,
                          *(undefined8 *)(lVar1 + _DAT_11271ca2c));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105118cf0; end: 10511911f; -[SCInAppWarningV4EntryPoint _makeDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105118cf0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar2 = param_1 + _DAT_11271ca44;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_11271ca48;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0dc680();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126b4f90;
  _objc_alloc(PTR_PTR_1126b4f90);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105119120;
  puStack_88 = &UNK_110868f20;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar2 = param_1 + _DAT_11271ca4c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8980(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b4f98;
  _objc_opt_new(PTR_PTR_1126b4f98);
  func_0x00010c21ab00(puVar7);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c27d8a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8a00();
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x000106b7ff50();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c27d8a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeaa0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x000106b7ff5c();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c27d8a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf460();
  _objc_release(puVar9);
  _objc_release(puVar8);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105119194;
  puStack_b0 = &UNK_110868f50;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c1d4c80(puVar7);
  _objc_copyWeak(auStack_d0,auStack_78);
  func_0x00010c1d4e20(puVar7);
  lVar2 = param_1 + _DAT_11271ca50;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df40(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be5b860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a240(puVar7);
  _objc_release(lVar2);
  func_0x00010be5c800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224e20(puVar7);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105119120; end: 1051191fb;  */

long FUN_105119120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be6d8c0();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1051191fc; end: 105119243;  */

void FUN_1051191fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105119244; end: 105119373; -[SCInAppWarningV4EntryPoint _openInAppLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105119244(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) {
      param_1 = param_1 + _DAT_11271ca54;
      _objc_loadWeakRetained();
      lVar4 = param_1;
      func_0x00010bf67f80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(param_1);
      if (lVar5 != 0) {
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        pcStack_50 = FUN_105119374;
        puStack_48 = &UNK_110841f80;
        lStack_40 = lVar5;
        _objc_retain(puVar1);
        puStack_38 = puVar1;
        func_0x0001000d76cc("APPSTORE",&puStack_60);
        _objc_release(puStack_38);
      }
      _objc_release(lVar5);
    }
    else {
      func_0x00010be6cd20(param_1);
    }
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 105119374; end: 10511938f;  */

void FUN_105119374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleOpenURL_additionalInfo_sou_1125d2098,
             *(undefined8 *)(param_1 + 0x28),PTR____NSDictionary0__struct_11034ab58,0x4f,0);
  return;
}



/* Entry: 105119390; end: 105119437; -[SCInAppWarningV4EntryPoint _openAccountStatus] */

void FUN_105119390(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105119438;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105119438; end: 1051194eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105119438(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11271ca58);
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1 + _DAT_11271ca5c;
      _objc_loadWeakRetained();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x00010bf22ec0(lVar2,param_2,lVar1,param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271ca60),param_2,lVar3);
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051194ec; end: 105119543; -[SCInAppWarningV4EntryPoint myEnforcementsDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051194ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271ca60;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105119544; end: 10511970b; -[SCInAppWarningV4EntryPoint _makeDeckHierarchy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105119544(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = param_1 + _DAT_11271ca64;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11271ca68;
    _objc_loadWeakRetained();
    lVar7 = lVar1;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c275b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar7);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      lVar1 = lVar3;
      func_0x00010bf55bc0(lVar3,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        lVar7 = (long)_DAT_11271ca58;
        _objc_retain(lVar1);
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        *(long *)(param_1 + lVar7) = lVar1;
        _objc_release(uVar5);
        lVar7 = param_1 + _DAT_11271ca30;
        _objc_loadWeakRetained(lVar7);
        lVar2 = lVar7;
        func_0x00010c295440();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar1;
        func_0x00010bf553a0(lVar1,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = (long)_DAT_11271ca6c;
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        *(long *)(param_1 + lVar8) = lVar6;
        _objc_release(uVar5);
        _objc_release(lVar2);
        _objc_release(lVar7);
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        _objc_retain(uVar5);
      }
      _objc_release(lVar1);
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10511970c; end: 1051197fb; -[SCInAppWarningV4EntryPoint _makeWebLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511970c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126afe88;
  _objc_alloc(PTR_PTR_1126afe88);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271ca70);
  param_1 = param_1 + _DAT_11271ca64;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf44a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062da0(puVar1,param_2,uVar5,puVar2,0,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051197fc; end: 105119a97; -[SCInAppWarningV4EntryPoint _openUrl:onDismissed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051197fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar10 = param_3;
  func_0x00010bfda7c0();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if ((int)uVar10 == 0) {
    uVar10 = param_4;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)(param_1 + _DAT_11271ca74);
    *(undefined8 *)(param_1 + _DAT_11271ca74) = uVar10;
    _objc_release(uVar9);
    puVar2 = PTR_PTR_1126ae630;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new();
    func_0x00010bfee200();
    puVar5 = puVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105119ae4;
    puStack_b0 = &UNK_110842308;
    puStack_a8 = puVar1;
    func_0x00010c297260();
    _objc_release(puVar5);
    lVar6 = param_1 + _DAT_11271ca68;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    puVar5 = PTR_PTR_1126ae638;
    uVar10 = *(undefined8 *)(param_1 + _DAT_11271ca70);
    _objc_retain(uVar10);
    _objc_opt_new();
    puStack_118 = puVar2;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_105119afc;
    puStack_100 = &UNK_110868f80;
    lStack_f8 = lVar8;
    puStack_f0 = puVar5;
    puStack_e8 = puVar3;
    puStack_e0 = puVar4;
    lStack_d8 = param_1;
    uStack_d0 = uVar10;
    _objc_retain(puVar4);
    func_0x0001000d76cc("APPSTORE",&puStack_118);
    _objc_release(puStack_e0);
    _objc_release(puVar5);
    _objc_release(uVar10);
    _objc_release(lVar8);
    _objc_release(puVar4);
  }
  else {
    if (puVar1 == (undefined *)0x0) goto LAB_105119a60;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105119a98;
    puStack_88 = &UNK_110842e18;
    _objc_retain(puVar1);
    puStack_80 = puVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_a0);
    puVar3 = puStack_80;
  }
  _objc_release(puVar3);
LAB_105119a60:
  _objc_release(puVar1);
  _objc_release(param_4);
  return 1;
}



/* Entry: 105119a98; end: 105119ae3;  */

void FUN_105119a98(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105119ae4; end: 105119afb;  */

void FUN_105119ae4(long param_1,long param_2,long param_3)

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



/* Entry: 105119afc; end: 105119b83;  */

void FUN_105119afc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cf9a0(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf22ba0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      uVar1,*(undefined8 *)(param_1 + 0x40),0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105119b84; end: 105119cc3; -[SCInAppWarningV4EntryPoint _acknowledgeWarning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105119b84(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = (long)_DAT_11271ca78;
  _objc_retain(param_4);
  param_2 = param_2 + lVar5;
  _objc_loadWeakRetained(param_2);
  lVar5 = param_2;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c2a21e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a2280(param_4);
  iVar6 = (int)param_1;
  func_0x00010beedbc0(param_4);
  lVar7 = (long)param_1;
  func_0x00010bf5a500(param_4);
  lVar8 = (long)param_1;
  func_0x00010c0896c0(param_4);
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x000106053c5c(uVar2,iVar6,lVar7,lVar8,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000106053b10();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105119cc4; end: 105119e8b; -[SCInAppWarningV4EntryPoint _launchAgeCompliance:onAgeComplianceCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105119cc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = param_4;
  _objc_retainBlock();
  lVar5 = (long)_DAT_11271ca7c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar6;
  _objc_release(uVar3);
  lStack_58 = 0;
  puVar2 = PTR_PTR_1126b4fa0;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  if ((lVar1 == 0) && (puVar2 != (undefined *)0x0)) {
    lVar4 = param_1 + _DAT_11271ca68;
    _objc_loadWeakRetained();
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271ca80);
    _objc_retain(uVar6);
    _objc_initWeak(auStack_60,param_1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105119e8c;
    puStack_90 = &UNK_11085ae98;
    lStack_88 = param_1;
    lStack_80 = lVar4;
    _objc_retain(puVar2);
    puStack_78 = puVar2;
    _objc_copyWeak(auStack_68,auStack_60);
    uStack_70 = uVar6;
    func_0x0001000d76cc("APPSTORE",&puStack_a8);
    _objc_destroyWeak(auStack_68);
    _objc_release(puStack_78);
    _objc_destroyWeak(auStack_60);
    _objc_release(uVar6);
  }
  else {
    if (*(long *)(param_1 + lVar5) == 0) {
      lVar4 = 0;
    }
    else {
      (**(code **)(*(long *)(param_1 + lVar5) + 0x10))();
      lVar4 = *(long *)(param_1 + lVar5);
    }
    *(undefined8 *)(param_1 + lVar5) = 0;
  }
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105119e8c; end: 105119f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105119e8c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11271ca38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  func_0x00010bf6f440(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar3);
  return;
}



/* Entry: 105119f7c; end: 10511a103;  */

void FUN_105119f7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010befe880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b4f20;
    _objc_alloc(PTR_PTR_1126b4f20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010befe880(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2800(puVar4,param_2,uVar5);
    _objc_release(uVar5);
  }
  puVar6 = PTR_PTR_1126b4f28;
  _objc_alloc(PTR_PTR_1126b4f28);
  func_0x00010bff3820();
  puVar7 = PTR_PTR_1126b4f30;
  _objc_alloc(PTR_PTR_1126b4f30);
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf10d20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058320(puVar7,param_2,puVar1,lVar3,puVar4,uVar5,puVar6);
  _objc_release(uVar5);
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10511a104; end: 10511a1ab; -[SCInAppWarningV4EntryPoint _onComplete] */

void FUN_10511a104(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10511a1ac;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10511a1ac; end: 10511a217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511a1ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271ca38;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a22c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10511a218; end: 10511a29f; -[SCInAppWarningV4EntryPoint webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511a218(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271ca70;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = (long)_DAT_11271ca74;
    uVar2 = 0;
    if (*(long *)(param_1 + lVar1) != 0) {
      (**(code **)(*(long *)(param_1 + lVar1) + 0x10))();
      uVar2 = *(undefined8 *)(param_1 + lVar1);
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10511a2a0; end: 10511a327; -[SCInAppWarningV4EntryPoint ageVerificationScopeDidCompleteWithResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511a2a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271ca80;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = (long)_DAT_11271ca7c;
    uVar2 = 0;
    if (*(long *)(param_1 + lVar1) != 0) {
      (**(code **)(*(long *)(param_1 + lVar1) + 0x10))();
      uVar2 = *(undefined8 *)(param_1 + lVar1);
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10511a328; end: 10511a477; -[SCInAppWarningV4EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511a328(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ca60,0);
  _objc_storeStrong(param_1 + _DAT_11271ca80,0);
  _objc_storeStrong(param_1 + _DAT_11271ca70,0);
  _objc_destroyWeak(param_1 + _DAT_11271ca5c);
  _objc_destroyWeak(param_1 + _DAT_11271ca50);
  _objc_destroyWeak(param_1 + _DAT_11271ca54);
  _objc_destroyWeak(param_1 + _DAT_11271ca64);
  _objc_destroyWeak(param_1 + _DAT_11271ca84);
  _objc_destroyWeak(param_1 + _DAT_11271ca4c);
  _objc_destroyWeak(param_1 + _DAT_11271ca78);
  _objc_destroyWeak(param_1 + _DAT_11271ca48);
  _objc_destroyWeak(param_1 + _DAT_11271ca44);
  _objc_destroyWeak(param_1 + _DAT_11271ca30);
  _objc_destroyWeak(param_1 + _DAT_11271ca68);
  _objc_destroyWeak(param_1 + _DAT_11271ca38);
  _objc_storeStrong(param_1 + _DAT_11271ca58,0);
  _objc_storeStrong(param_1 + _DAT_11271ca6c,0);
  _objc_storeStrong(param_1 + _DAT_11271ca7c,0);
  _objc_storeStrong(param_1 + _DAT_11271ca74,0);
  _objc_storeStrong(param_1 + _DAT_11271ca2c,0);
  _objc_storeStrong(param_1 + _DAT_11271ca40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ca3c,0);
  return;
}



/* Entry: 10511a478; end: 10511a513; -[SCInAppWarningV4Scope initWithUiContainer:delegate:] */

undefined1 *
FUN_10511a478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6418;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10511a514; end: 10511a51b; -[SCInAppWarningV4Scope uiContainer] */

undefined8 FUN_10511a514(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10511a51c; end: 10511a533; -[SCInAppWarningV4Scope delegate] */

void FUN_10511a51c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10511a534; end: 10511a6a7; -[SCInAppWarningV4Scope .cxx_destruct] */

void FUN_10511a534(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10511a6a8; end: 10511a713;  */

void FUN_10511a6a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4fb0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c004be0();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10511a714; end: 10511a85f; -[SCReportedChatMessageFetcherImpl initWithConversationIdResolver:chatMessageActionHandler:conversationDataFetcher:messageReportingPluginManager:circumstanceEngine:] */

undefined1 *
FUN_10511a714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e6420;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10511a860; end: 10511a9cf; -[SCReportedChatMessageFetcherImpl fetchChatMessagesWithClientMessageId:conversationId:numMessages:] */

void FUN_10511a860(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10511a9d0;
  puStack_70 = &UNK_110850cc8;
  ppuVar3 = &puStack_88;
  puStack_68 = puVar2;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0b4ca0(param_4);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10511a9dc;
  puStack_b8 = &UNK_110869310;
  lStack_b0 = param_2;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  ppuStack_98 = ppuVar3;
  uStack_90 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(ppuVar3);
  func_0x00010bfa8a00(uVar4,param_3,uVar5,param_5,&puStack_d0);
  _objc_release(uVar4);
  uVar5 = uStack_a0;
  _objc_retain(puVar2);
  _objc_release(uVar5);
  _objc_release(uStack_a8);
  _objc_release(ppuStack_98);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10511a9d0; end: 10511a9db;  */

void FUN_10511a9d0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_fulfillWithSuccessValue__1125cc768,param_2);
  return;
}



/* Entry: 10511a9dc; end: 10511aa67;  */

void FUN_10511a9dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1fdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be10540(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be12880();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10511aa68; end: 10511acb7; -[SCReportedChatMessageFetcherImpl fetchRecentMessagesWithParticipantId:numMessages:] */

void FUN_10511aa68(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar12);
  _objc_initWeak(auStack_88,param_2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_80 = param_4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107e327a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x00010bf50400();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10511acb8;
  puStack_b0 = &UNK_110869370;
  puVar11 = auStack_88;
  uStack_a8 = uVar12;
  puStack_a0 = puVar1;
  _objc_copyWeak(auStack_98,puVar11);
  uVar8 = uVar7;
  uStack_90 = param_1;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_retain(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar12);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_88);
  lVar9 = param_4;
  __Unwind_Resume();
  pcStack_d8 = FUN_10511acb8;
  uStack_110 = uVar5;
  lStack_108 = param_2;
  puStack_100 = puVar4;
  uStack_f8 = uVar12;
  puStack_f0 = puVar1;
  lStack_e8 = param_4;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  uVar13 = *(undefined8 *)(lVar9 + 0x20);
  puVar10 = puVar11;
  func_0x00010c0ec5e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_120,lVar9 + 0x30);
  uStack_118 = *(undefined8 *)(lVar9 + 0x38);
  func_0x00010bfa5f20(uVar13);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_120);
  _objc_release(puVar11);
  return;
}



/* Entry: 10511acb8; end: 10511ad97;  */

void FUN_10511acb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfa5f20(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 10511ad98; end: 10511af13;  */

void FUN_10511ad98(long param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  if ((param_2 != (undefined **)0x0) && (param_3 != 1)) {
    ppuVar1 = param_2;
    func_0x00010c0886e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 != (undefined **)0x0) {
      lVar2 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar2);
      ppuVar1 = param_2;
      func_0x00010c0886e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_2;
      func_0x00010bfe5d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(param_2);
      func_0x00010be10540(uVar5,lVar2);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(ppuVar1);
      _objc_release(lVar2);
      ppuVar1 = param_2;
      goto LAB_10511aeec;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  FUN_10511a6a8(&PTR____CFConstantStringClassReference_110daafd8,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700(uVar5);
LAB_10511aeec:
  _objc_release(ppuVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10511af14; end: 10511af8b;  */

void FUN_10511af14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bfe5d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10511a6a8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfbb700(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10511af8c; end: 10511b123; -[SCReportedChatMessageFetcherImpl _fetchMerlinRequestWithResponseMessage:completion:] */

void FUN_10511af8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf1fdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137360(uVar2);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  func_0x00010bfa8a20(uVar3);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10511b124; end: 10511b1a7;  */

void FUN_10511b124(long param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010befa120();
  if (param_2 != 0) {
    func_0x00010befa120(puVar1);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1ba80();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10511b1a8; end: 10511b32f; -[SCReportedChatMessageFetcherImpl _fetchChatMessagesWithClientMessageId:conversationId:numMessages:completion:] */

void FUN_10511b1a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067ec0(param_3);
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  func_0x00010bfa8aa0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10511b330; end: 10511b383;  */

void FUN_10511b330(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1ba80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10511b384; end: 10511b483; -[SCReportedChatMessageFetcherImpl _generateReportedChatWithMessages:completion:] */

void FUN_10511b384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
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



/* Entry: 10511b484; end: 10511b4b7;  */

void FUN_10511b484(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf2680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10511b4b8; end: 10511bb5b; -[SCReportedChatMessageFetcherImpl _createReportedChatMessagesFromMessages:completion:] */

void FUN_10511b4b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_140 = &uStack_148;
  uStack_148 = 0;
  uStack_138 = 0x3032000000;
  pcStack_130 = FUN_10511bb5c;
  uStack_128 = 0x10511bb6c;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar2;
  _dispatch_group_create();
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  _objc_retain(param_3);
  lVar10 = param_3;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar10 != 0) {
    lVar11 = *plStack_180;
    do {
      lVar12 = 0;
      do {
        if (*plStack_180 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lStack_188 + lVar12 * 8);
        puVar3 = puVar2;
        _dispatch_group_enter();
        _dispatch_group_create();
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        puStack_1a8 = &uStack_1b0;
        uStack_1a0 = 0x2020000000;
        uStack_198 = 0;
        puStack_1d8 = &uStack_1e0;
        uStack_1e0 = 0;
        uStack_1d0 = 0x3032000000;
        pcStack_1c8 = FUN_10511bb5c;
        uStack_1c0 = 0x10511bb6c;
        puStack_208 = &uStack_210;
        uStack_210 = 0;
        uStack_200 = 0x3032000000;
        pcStack_1f8 = FUN_10511bb5c;
        uStack_1f0 = 0x10511bb6c;
        uStack_1e8 = 0;
        puStack_238 = &uStack_240;
        uStack_240 = 0;
        uStack_230 = 0x3032000000;
        pcStack_228 = FUN_10511bb5c;
        uStack_220 = 0x10511bb6c;
        uStack_218 = 0;
        lVar4 = lVar13;
        func_0x00010c0cb340();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar4;
        func_0x00010c11ec40();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar9;
        func_0x00010c0cb5a0();
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar4);
        _dispatch_group_enter(puVar3);
        uVar14 = *(undefined8 *)(param_1 + 0x10);
        lVar4 = lVar13;
        func_0x00010bf490e0(lVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar13;
        func_0x00010bf50280(lVar13);
        _objc_retainAutoreleasedReturnValue();
        puStack_270 = puVar1;
        uStack_268 = 0xc2000000;
        pcStack_260 = FUN_10511bb74;
        puStack_258 = &UNK_110869400;
        puStack_248 = &uStack_1b0;
        _objc_retain(puVar3);
        puStack_250 = puVar3;
        func_0x00010bfaa1a0(uVar14);
        _objc_release(lVar8);
        _objc_release(lVar4);
        if (lVar5 != 0) {
          _dispatch_group_enter(puVar3);
          uVar14 = *(undefined8 *)(param_1 + 0x10);
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar13;
          func_0x00010bf50280(lVar13);
          _objc_retainAutoreleasedReturnValue();
          puStack_2a0 = puVar1;
          uStack_298 = 0xc2000000;
          uStack_290 = 0x10511bba8;
          puStack_288 = &UNK_110869400;
          puStack_278 = &uStack_1e0;
          _objc_retain(puVar3);
          puStack_280 = puVar3;
          func_0x00010bfaa1a0(uVar14);
          _objc_release(lVar4);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puStack_280);
        }
        lVar8 = *(long *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar8;
        func_0x00010c134140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        if (lVar4 != 0) {
          _dispatch_group_enter(puVar3);
          puStack_2d0 = puVar1;
          uStack_2c8 = 0xc2000000;
          pcStack_2c0 = FUN_10511bc04;
          puStack_2b8 = &UNK_110869430;
          puStack_2a8 = &uStack_210;
          _objc_retain(puVar3);
          puStack_2b0 = puVar3;
          func_0x00010c297280(lVar4);
          _objc_release(puStack_2b0);
        }
        lVar9 = *(long *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar9;
        func_0x00010c134160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar9);
        if (lVar8 != 0) {
          _dispatch_group_enter(puVar3);
          puStack_300 = puVar1;
          uStack_2f8 = 0xc2000000;
          uStack_2f0 = 0x10511bc60;
          puStack_2e8 = &UNK_110869460;
          puStack_2d8 = &uStack_240;
          _objc_retain(puVar3);
          puStack_2e0 = puVar3;
          func_0x00010c297280(lVar8);
          _objc_release(puStack_2e0);
        }
        uVar14 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c11de00(uVar14);
        _objc_retainAutoreleasedReturnValue();
        puStack_358 = puVar1;
        uStack_350 = 0xc2000000;
        pcStack_348 = FUN_10511bcbc;
        puStack_340 = &UNK_110869490;
        puStack_328 = &uStack_1b0;
        puStack_320 = &uStack_1e0;
        puStack_318 = &uStack_210;
        puStack_310 = &uStack_240;
        puStack_308 = &uStack_148;
        lStack_338 = lVar13;
        _objc_retain(puVar2);
        puStack_330 = puVar2;
        func_0x000100bc0718(puVar3,uVar14,&puStack_358);
        _objc_release(uVar14);
        _objc_release(puStack_330);
        _objc_release(lVar8);
        _objc_release(lVar4);
        _objc_release(puStack_250);
        __Block_object_dispose(&uStack_240,8);
        _objc_release(uStack_218);
        __Block_object_dispose(&uStack_210,8);
        _objc_release(uStack_1e8);
        __Block_object_dispose(&uStack_1e0,8);
        _objc_release(uStack_1b8);
        __Block_object_dispose(&uStack_1b0,8);
        _objc_release(puVar3);
        lVar12 = lVar12 + 1;
      } while (lVar10 != lVar12);
      lVar10 = param_3;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(param_3);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  puStack_388 = puVar1;
  uStack_380 = 0xc2000000;
  pcStack_378 = FUN_10511bf90;
  puStack_370 = &UNK_1108647e8;
  puStack_360 = &uStack_148;
  uStack_368 = param_4;
  _objc_retain();
  func_0x000100bc0718(puVar2,uVar14,&puStack_388);
  _objc_release(uVar14);
  _objc_release(uStack_368);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_148,8);
  _objc_release(puStack_120);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = 8;
  __Block_object_dispose(&uStack_148);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = 0;
  return;
}



/* Entry: 10511bb5c; end: 10511bb73;  */

void FUN_10511bb5c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10511bb74; end: 10511bc03;  */

void FUN_10511bb74(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0b4ca0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10511bc04; end: 10511bcbb;  */

void FUN_10511bc04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10511bcbc; end: 10511beaf;  */

void FUN_10511bcbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  puVar8 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  _objc_retain(uVar5);
  _objc_retain(puVar8);
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  uVar1 = uVar5;
  func_0x00010c0cb8c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0cb9a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(uVar2);
  if (puVar8 == (undefined *)0x0) {
    uVar2 = uVar5;
    func_0x00010bf4df40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107d60b58();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b4fb8;
    _objc_alloc(PTR_PTR_1126b4fb8);
    func_0x00010c0595e0();
    puVar8 = PTR_PTR_1126b2b98;
    _objc_opt_new(PTR_PTR_1126b2b98);
    func_0x00010c21ba00();
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  puVar4 = PTR_PTR_1126b4fc0;
  _objc_alloc(PTR_PTR_1126b4fc0);
  func_0x00010c044ca0();
  uVar2 = uVar5;
  func_0x00010bf490e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cda0(puVar4,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1e6d00(puVar4,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010c1eb2a0(puVar4,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(puVar8);
  _objc_release(uVar5);
  func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28),param_2,
                      puVar4);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10511beb0; end: 10511bf8f;  */

void FUN_10511beb0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 10511bf90; end: 10511bfa7;  */

void FUN_10511bf90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010511bfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 10511bfa8; end: 10511c007; -[SCReportedChatMessageFetcherImpl .cxx_destruct] */

void FUN_10511bfa8(long param_1)

{
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



/* Entry: 10511c008; end: 10511c013; -[SCSafetyReportContainerViewController defaultProjectNameV2] */

undefined ** FUN_10511c008(void)

{
  return &PTR____CFConstantStringClassReference_110dc6638;
}


