/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106473a64; end: 106473c4f; -[SCContextV2ChatLogger _logChatCreateOneOnOneWithRecipientUsername:recipientUserId:source:] */

void FUN_106473a64(long param_1,undefined1 *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined **unaff_x26;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0 || param_4 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b01c0;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106473c50;
    puStack_90 = &UNK_110858fb0;
    unaff_x26 = &puStack_a8;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_78,param_2);
    _objc_retain(param_3);
    lStack_88 = param_3;
    _objc_retain(param_4);
    lStack_80 = param_4;
    uStack_70 = param_5;
    func_0x00010bf504e0(uVar1);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_release(lStack_80);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 6);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  puVar5 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be51840(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106473c50; end: 106473cd7;  */

void FUN_106473c50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be51840(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106473cd8; end: 106473dcb; -[SCContextV2ChatLogger _logChatCreateOneOnOneWithRecipientUsername:recipientUserId:conversationId:source:] */

void FUN_106473cd8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    if (param_3 == 0) goto LAB_106473da0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae940();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae920();
  }
  _objc_release(uVar1);
LAB_106473da0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106473dcc; end: 106473dfb; -[SCContextV2ChatLogger .cxx_destruct] */

void FUN_106473dcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106473dfc; end: 1064742a3; -[SCContextV2DeepLinkHandler initWithNavigationDelegate:lensUnlockFlow:featureSettingsService:deepLinkHandling:businessProfileScopeExposer:commerceShoppingScopeExposer:topicViewerScopeExposer:topicViewerScopeServices:mainCameraDeepLinkScopeExposer:groupsDataFetcher:safeBrowsingAPI:circumstanceEngine:urlInterceptorProvider:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:contextExperimentService:fanPassSubscriptionScopeFactoryServices:snapchatterServices:] */

undefined8 *
FUN_106473dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f14c0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    puVar2 = PTR_PTR_1126caca8;
    _objc_alloc();
    func_0x00010c0258a0();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar1[9];
    puVar1[9] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar1[10];
    puVar1[10] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar3);
    _objc_initWeak(auStack_80,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_13);
    _objc_retain(param_5);
    _objc_retain(param_15);
    _objc_retain(param_16);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_16);
    _objc_release(param_15);
    _objc_release(param_5);
    _objc_release(param_13);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_21);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1064742a4; end: 106474317;  */

void FUN_1064742a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bdeb780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18b5e0(lVar2,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106474318; end: 1064746ef; -[SCContextV2DeepLinkHandler tryToOpenURL:options:baseViewController:metrics:legacyDeepLinkParams:snapParams:operaPage:delegate:completion:] */

void FUN_106474318(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_storeWeak(param_1 + 0x10,param_10);
  _objc_storeWeak(param_1 + 0x18,param_5);
  uVar1 = param_6;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c082da0();
  if ((int)uVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar8);
    if ((int)uVar3 == 0) {
      if ((param_4 & 1) == 0) {
        lVar4 = param_1;
        func_0x00010bdcce40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 != 0) {
          func_0x00010be7a280(param_1);
        }
      }
      uVar2 = param_3;
      func_0x00010c1504a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) == 0) {
        uVar3 = param_3;
        func_0x00010c1504a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0720c0();
        uVar9 = (uint)uVar5 ^ 1;
        _objc_release(uVar3);
      }
      else {
        uVar9 = 0;
      }
      _objc_release(uVar2);
      if (((param_4 & 1) == 0) && (uVar9 == 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_6;
        func_0x00010c0cce20(param_6);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_6;
        func_0x00010c247520(param_6);
        _objc_retainAutoreleasedReturnValue();
        param_1 = param_1 + 0x18;
        _objc_loadWeakRetained(param_1);
        _objc_retain(param_11);
        func_0x00010c10ebe0(uVar6);
        _objc_release(param_1);
        _objc_release(uVar8);
        _objc_release(uVar1);
        _objc_release(uVar6);
        _objc_release(param_11);
      }
      else {
        func_0x00010bf67f40(param_10);
        puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_10);
        _objc_retain(param_11);
        func_0x00010c0e9b80(puVar7);
        _objc_release(puVar7);
        _objc_release(param_11);
        _objc_release(param_10);
      }
      goto LAB_106474690;
    }
  }
  else {
    _objc_release(uVar8);
  }
  func_0x00010be62280(param_1);
LAB_106474690:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1064746f0; end: 10647473b;  */

void FUN_1064746f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bf67f00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_2);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010647472c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 10647473c; end: 106474753;  */

void FUN_10647473c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010647474c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 106474754; end: 10647485f; -[SCContextV2DeepLinkHandler _createBrowserPresenterWithSafeBrowsingAPI:featureSettingsService:urlInterceptorProvider:webBrowsingScopeExposer:] */

void FUN_106474754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e50778,0,0);
  if ((int)uVar1 == 0) {
    puVar2 = PTR_PTR_1126cacb8;
    _objc_alloc(PTR_PTR_1126cacb8);
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c02e800(puVar2,param_2,lVar3,param_3,param_4,param_5,param_6,
                        *(undefined8 *)(param_1 + 0x80));
    _objc_release(lVar3);
  }
  else {
    puVar2 = PTR_PTR_1126cacb0;
    _objc_alloc(PTR_PTR_1126cacb0);
    func_0x00010c062be0();
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106474860; end: 10647574f; -[SCContextV2DeepLinkHandler _navigateToDeeplink:baseViewController:options:actionMetrics:legacyDeepLinkParams:snapParams:operaPage:completion:] */

void FUN_106474860(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined **param_8,
                  undefined **param_9,undefined8 param_10)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuStack_250;
  long lStack_248;
  undefined **ppuStack_240;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_106475750;
  puStack_150 = &UNK_110842508;
  _objc_retain(param_10);
  uStack_148 = param_10;
  ppuVar1 = &puStack_168;
  _objc_retainBlock();
  lVar2 = param_6;
  func_0x00010c0cce20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR_PTR_1126b1068;
  _objc_alloc();
  func_0x00010c057c40();
  ppuVar4 = ppuVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar4;
  func_0x00010c0720c0();
  _objc_release(ppuVar4);
  if ((int)ppuVar19 != 0) {
    func_0x00010be7ab00(param_1);
    (*(code *)ppuVar1[2])(ppuVar1,1);
    goto LAB_106475670;
  }
  ppuVar4 = ppuVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar4;
  func_0x00010c0720c0();
  if ((int)ppuVar19 == 0) {
LAB_106474b40:
    _objc_release(ppuVar4);
  }
  else {
    ppuVar19 = ppuVar3;
    func_0x00010c0f5820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar19;
    func_0x00010c0720c0();
    _objc_release(ppuVar19);
    _objc_release(ppuVar4);
    if ((int)ppuVar5 != 0) {
      ppuVar19 = ppuVar3;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar19;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar19);
      ppuVar19 = ppuVar3;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar19;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar19);
      if ((ppuVar4 != (undefined **)0x0) && (ppuVar5 == (undefined **)0x0)) {
        ppuVar19 = (undefined **)PTR_PTR_1126b4158;
        _objc_alloc(PTR_PTR_1126b4158);
        uVar6 = 8;
        func_0x00010bc9107c(8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 0;
        func_0x00010bb0584c(0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03c160(ppuVar19);
        _objc_release(uVar7);
        _objc_release(uVar6);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40));
        (*(code *)ppuVar1[2])(ppuVar1,1);
        _objc_release(ppuVar19);
        _objc_release(ppuVar4);
        goto LAB_106475670;
      }
      _objc_release(ppuVar5);
      goto LAB_106474b40;
    }
  }
  ppuVar4 = ppuVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar4;
  func_0x00010c0720c0();
  if ((int)ppuVar19 == 0) {
    ppuVar19 = ppuVar4;
    func_0x00010c0720c0();
    if (((((ulong)ppuVar19 & 1) == 0) &&
        (ppuVar19 = ppuVar4, func_0x00010c0720c0(), ((ulong)ppuVar19 & 1) == 0)) &&
       (ppuVar19 = ppuVar4, func_0x00010c0720c0(), (int)ppuVar19 == 0)) {
      ppuVar19 = ppuVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar19;
      func_0x00010c0720c0();
      _objc_release(ppuVar19);
      ppuVar19 = ppuVar1;
      if ((int)ppuVar5 != 0) {
        puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_188 = 0xc2000000;
        pcStack_180 = FUN_1064759bc;
        puStack_178 = &UNK_110842508;
        _objc_retain(ppuVar1);
        ppuStack_170 = ppuVar1;
        func_0x00010be7f060(param_1);
        _objc_release(ppuStack_170);
        goto LAB_106475668;
      }
      ppuStack_250 = ppuVar3;
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuStack_250;
      func_0x00010c0720c0();
      if ((int)ppuVar5 == 0) goto LAB_1064755bc;
      ppuStack_240 = ppuVar3;
      func_0x00010c0f5820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuStack_240;
      func_0x00010c0720c0();
      if ((int)ppuVar5 == 0) goto LAB_1064755b4;
      ppuVar5 = ppuVar3;
      func_0x00010c11d6e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar14 = ppuVar12;
      _objc_opt_isKindOfClass(ppuVar12,puVar13);
      ppuVar5 = ppuVar12;
      if (((ulong)ppuVar14 & 1) == 0) {
        ppuVar5 = (undefined **)0x0;
      }
      _objc_retain(ppuVar5);
      _objc_release(ppuVar12);
      ppuVar12 = ppuVar5;
      func_0x00010c08fa60();
      _objc_release(ppuVar5);
      _objc_release(ppuStack_240);
      _objc_release(ppuStack_250);
      if (ppuVar12 != (undefined **)0x0) {
        puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1b0 = 0xc2000000;
        uStack_1a8 = 0x1064759c8;
        puStack_1a0 = &UNK_110842508;
        _objc_retain(ppuVar1);
        ppuStack_198 = ppuVar1;
        func_0x00010be7ede0(param_1);
        _objc_release(ppuStack_198);
        goto LAB_106475668;
      }
    }
    else {
      ppuStack_250 = param_9;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_240 = param_8;
      func_0x00010c131ec0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar3;
      func_0x00010c11d6e0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar19;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar5;
      func_0x00010c067ec0();
      _objc_release(ppuVar5);
      _objc_release(ppuVar19);
      lVar8 = *(long *)(param_1 + 0x38);
      func_0x00010bf4eb00();
      ppuVar19 = ppuStack_240;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar19;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010c0954a0();
      ppuVar14 = ppuVar5;
      func_0x000108437fb4();
      lStack_248 = param_6;
      if ((int)ppuVar14 == 0) {
        _objc_release(ppuVar5);
        _objc_release(ppuVar19);
        if (lVar8 != 9 && (int)lVar9 != 1) goto LAB_106474fa8;
        lVar8 = *(long *)(param_1 + 0x78);
        _objc_retain(param_6);
        _objc_retain(ppuStack_240);
        _objc_retain(lVar8);
        _objc_retain(ppuStack_250);
        FUN_106475764(param_6,ppuStack_240,ppuStack_250,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c200780(lStack_248);
        func_0x00010c1eb220(lStack_248);
        func_0x00010c0748c0(ppuStack_240);
        func_0x00010c1b2900(lStack_248);
        puStack_b8 = &uStack_c0;
        uStack_c0 = 0;
        uStack_b0 = 0x3032000000;
        pcStack_a8 = FUN_106477030;
        uStack_a0 = 0x106477040;
        ppuVar19 = ppuStack_240;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar19;
        func_0x00010c294420();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_98 = ppuVar5;
        _objc_release(ppuVar19);
        puStack_e8 = &uStack_f0;
        uStack_f0 = 0;
        uStack_e0 = 0x3032000000;
        pcStack_d8 = FUN_106477030;
        uStack_d0 = 0x106477040;
        uStack_c8 = 0;
        ppuVar19 = ppuStack_240;
        func_0x00010c290fa0(ppuStack_240);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar19;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uStack_110 = 0xc2000000;
        pcStack_108 = FUN_106477048;
        puStack_100 = &UNK_110842b58;
        puStack_f8 = &uStack_f0;
        puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_138 = 0xc2000000;
        uStack_130 = 0x106477080;
        puStack_128 = &UNK_110842b58;
        puStack_120 = &uStack_c0;
        puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
        func_0x00010c0c12a0();
        _objc_release(ppuVar5);
        _objc_release(ppuVar19);
        lVar9 = lStack_248;
        func_0x00010c077de0();
        if ((int)lVar9 == 0) {
          func_0x00010c1eb2e0(lStack_248);
          ppuVar19 = ppuStack_240;
          func_0x00010c290fa0(ppuStack_240);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar19;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1eb080(lStack_248);
          _objc_release(ppuVar5);
          _objc_release(ppuVar19);
          func_0x00010c1eb300(lStack_248);
        }
        else {
          ppuVar19 = ppuStack_240;
          func_0x00010bf50280(ppuStack_240);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1eb300(lStack_248);
          _objc_release(ppuVar19);
          lVar9 = lVar8;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = ppuStack_240;
          func_0x00010bf50280(ppuStack_240);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bfc61a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar19);
          _objc_release(lVar9);
          lVar9 = lVar10;
          func_0x00010bfcef60();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar9;
          func_0x00010c08fa60();
          _objc_release(lVar9);
          lVar9 = lVar10;
          if (lVar11 == 0) {
            func_0x00010c0ecc20(lVar10);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar9;
            func_0x000100504554();
            lVar15 = lVar11;
            func_0x00010bf446e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1eb080(lStack_248);
            _objc_release(lVar15);
            _objc_release(lVar11);
          }
          else {
            func_0x00010bfcef60(lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1eb080(lStack_248);
          }
          _objc_release(lVar9);
          _objc_release(lVar10);
        }
        __Block_object_dispose(&uStack_f0,8);
        _objc_release(uStack_c8);
        __Block_object_dispose(&uStack_c0,8);
        _objc_release(ppuStack_98);
        _objc_release(ppuStack_250);
        _objc_release(lVar8);
        _objc_release(ppuStack_240);
        _objc_release(param_6);
LAB_1064752a4:
        if (lStack_248 != 0) {
          func_0x00010beb4d60();
          ppuVar19 = ppuVar3;
          func_0x00010c11d6e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar19;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(ppuVar19);
          if (ppuVar5 != (undefined **)0x0) {
            ppuVar19 = ppuVar3;
            func_0x00010c11d6e0(ppuVar3);
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar19;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            _objc_release(ppuVar5);
            _objc_release(ppuVar19);
          }
          ppuVar19 = ppuVar3;
          func_0x00010c11d6e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar19;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(ppuVar19);
          if (ppuVar5 != (undefined **)0x0) {
            ppuVar19 = ppuVar3;
            func_0x00010c11d6e0(ppuVar3);
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar19;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            _objc_release(ppuVar5);
            _objc_release(ppuVar19);
          }
          ppuVar19 = ppuVar3;
          func_0x00010c11d6e0(ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar19;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          _objc_release(ppuVar5);
          _objc_release(ppuVar19);
          func_0x00010c131ee0(PTR_PTR_1126cacc8);
          puVar13 = PTR_PTR_1126cacd0;
          _objc_opt_new();
          puVar16 = PTR_PTR_1126cacd8;
          _objc_alloc();
          func_0x00010be4c060(param_1);
          func_0x00010bff0c80();
          ppuVar19 = *(undefined ***)(param_1 + 0x20);
          uVar6 = param_7;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = param_8;
          func_0x00010c281320();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = param_8;
          func_0x00010c241400();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar12;
          func_0x00010bf36f80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = param_8;
          func_0x00010c241400();
          _objc_retainAutoreleasedReturnValue();
          ppuVar18 = ppuVar17;
          func_0x00010c259cc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c251500();
          _objc_release(ppuVar18);
          _objc_release(ppuVar17);
          _objc_release(ppuVar14);
          _objc_release(ppuVar12);
          _objc_release(ppuVar5);
          _objc_release(uVar6);
          if ((int)ppuVar19 != 0) {
            (*(code *)ppuVar1[2])(ppuVar1,1);
            _objc_release(puVar16);
            _objc_release(puVar13);
            _objc_release(lStack_248);
            _objc_release(ppuStack_240);
            _objc_release(ppuStack_250);
            goto LAB_106475668;
          }
          _objc_release(puVar16);
          _objc_release(puVar13);
          _objc_release(lStack_248);
        }
      }
      else {
        _objc_release(ppuVar5);
        _objc_release(ppuVar19);
LAB_106474fa8:
        lVar9 = lVar2;
        func_0x00010c0954a0();
        if ((int)lVar9 != 3) {
          FUN_106475764(param_6,ppuStack_240,ppuStack_250,(int)ppuVar12 != 0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1064752a4;
        }
      }
LAB_1064755b4:
      _objc_release(ppuStack_240);
LAB_1064755bc:
      _objc_release(ppuStack_250);
    }
    _objc_initWeak(&uStack_c0,param_1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_1064759d4;
    puStack_1e0 = &UNK_110857fd0;
    _objc_copyWeak(auStack_1c0,&uStack_c0);
    _objc_retain(param_3);
    lStack_1d8 = param_3;
    lStack_1d0 = lVar2;
    _objc_retain(ppuVar1);
    ppuStack_1c8 = ppuVar1;
    func_0x00010bf67ec0(param_1);
    _objc_release(param_1);
    _objc_release(ppuStack_1c8);
    _objc_release(lStack_1d8);
    _objc_destroyWeak(auStack_1c0);
    _objc_destroyWeak(&uStack_c0);
    ppuVar19 = &puStack_1f8;
  }
  else {
    puVar13 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar16 = PTR_PTR_1126cacc0;
    _objc_alloc(PTR_PTR_1126cacc0);
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f83d78;
    puStack_88 = PTR____kCFBooleanFalse_11034ab60;
    ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0099e0(puVar16);
    _objc_release(ppuVar19);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x70));
    (*(code *)ppuVar1[2])(ppuVar1,1);
    _objc_release(puVar16);
    _objc_release(puVar13);
  }
LAB_106475668:
  _objc_release(ppuVar4);
LAB_106475670:
  _objc_release(ppuVar3);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_148);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar19 + 7);
  _objc_destroyWeak(&uStack_c0);
  __Unwind_Resume();
  if (*(long *)(param_3 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010647575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106475750; end: 106475763;  */

void FUN_106475750(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010647575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106475764; end: 1064759bb;  */

void FUN_106475764(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c068440();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0cce20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  uVar3 = uVar1;
  func_0x00010c15ffa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar2);
  _objc_release(uVar3);
  func_0x00010c08bda0();
  func_0x000108435ff0();
  func_0x00010c1d86a0(puVar2);
  func_0x00010c200780(puVar2);
  lVar4 = param_2;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_106477030;
    uStack_60 = 0x106477040;
    uStack_58 = 0;
    lVar4 = param_2;
    func_0x00010c290fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c12a0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (puStack_78[5] != 0) {
      func_0x00010c185d60(puVar2);
    }
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064759bc; end: 1064759d3;  */

void FUN_1064759bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001064759c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1064759d4; end: 106475b6b;  */

void FUN_1064759d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    unaff_x20 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f83958;
    puStack_50 = PTR____kCFBooleanTrue_11034ab68;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    func_0x00010c1d0640(puVar3);
    lVar4 = lVar1;
    func_0x00010be08ee0();
    if ((int)lVar4 != 0) {
      func_0x00010c1d0640(puVar3);
    }
    func_0x00010bf4e160(*(undefined8 *)(param_1 + 0x28));
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106475b6c;
    puStack_68 = &UNK_110923ff0;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uStack_60 = uVar5;
    func_0x00010bfd1bc0(unaff_x20);
    _objc_release(uStack_60);
    _objc_release(puVar3);
    _objc_release(unaff_x20);
  }
  lVar4 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106475b6c;
  uStack_a0 = unaff_x20;
  lStack_98 = lVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  func_0x00010c0be280(param_2);
  (**(code **)(*(long *)(lVar4 + 0x20) + 0x10))
            (*(long *)(lVar4 + 0x20),*(undefined1 *)(puStack_b8 + 3));
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(param_2);
  return;
}



/* Entry: 106475b6c; end: 106475c3b;  */

void FUN_106475b6c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be280(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(puStack_38 + 3));
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return;
}



/* Entry: 106475c3c; end: 106475c4f;  */

void FUN_106475c3c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106475c50; end: 106475ca7; -[SCContextV2DeepLinkHandler _shouldPreselectLensWithSource:] */

bool FUN_106475c50(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010beef1e0();
  if (lVar2 == 8) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf4eb00(param_3);
    bVar1 = lVar2 != 0x10;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106475ca8; end: 106475ccb; -[SCContextV2DeepLinkHandler _lensTypeWithSource:] */

undefined8 FUN_106475ca8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf4eb20();
  uVar1 = 0x14;
  if (param_3 != 7) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106475ccc; end: 106475ce3; -[SCContextV2DeepLinkHandler _enablePoppingToRootDuringDeepLinkHandling] */

void FUN_106475ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e50758,0,0);
  return;
}



/* Entry: 106475ce4; end: 106475e17; -[SCContextV2DeepLinkHandler _presentTopicDeepLink:metricParams:completion:] */

void FUN_106475ce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x00010c11d6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c038f40(puVar2,param_2,lVar3,1);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = param_4;
  func_0x00010c15ffa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf231a0(uVar5,param_2,uVar1,uVar4,8,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,uVar5);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf67f20();
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106475e18; end: 10647608f; -[SCContextV2DeepLinkHandler _presentSubscriptionsDeepLink:metricParams:completion:] */

void FUN_106475e18(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined **unaff_x27;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    puVar9 = (undefined1 *)0x0;
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    uVar2 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      puVar9 = (undefined1 *)0x0;
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
    else {
      _objc_initWeak(auStack_78,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x98);
      func_0x00010c244620(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_70 = uVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106476090;
      puStack_90 = &UNK_11084e340;
      unaff_x27 = &puStack_a8;
      puVar9 = auStack_78;
      _objc_copyWeak(auStack_80,puVar9);
      _objc_retain(param_5);
      lStack_88 = param_5;
      func_0x00010c09d7c0(uVar5);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(puVar9);
  lVar7 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar7);
  puVar8 = puVar9;
  func_0x00010bfb1920(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010be7d2e0(lVar7);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 106476090; end: 106476103;  */

void FUN_106476090(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be7d2e0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476104; end: 10647631b; -[SCContextV2DeepLinkHandler _presentPaywallWithSnapchatter:completion:] */

void FUN_106476104(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_3;
  if (lVar2 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if ((param_3 == 0) || (lVar1 == 0)) {
LAB_1064762d4:
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      _objc_release(lVar2);
      goto LAB_1064762d4;
    }
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126c2268;
      _objc_alloc(PTR_PTR_1126c2268);
      func_0x00010c04ac00();
      puVar6 = PTR_PTR_1126cace0;
      _objc_alloc(PTR_PTR_1126cace0);
      lVar1 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c058500(puVar6);
      _objc_release(lVar1);
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      func_0x00010bf21f80(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + 0x18;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c10eda0();
      _objc_release(lVar1);
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf67f20();
      _objc_release(param_1);
      (**(code **)(param_4 + 0x10))(param_4,1);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      goto LAB_1064762ec;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,0);
LAB_1064762ec:
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10647631c; end: 106476363; -[SCContextV2DeepLinkHandler didCompleteTopicViewerScope:] */

void FUN_10647631c(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x60));
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf67ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476364; end: 106476383; -[SCContextV2DeepLinkHandler mainCameraDeepLinkScopeDidHandleDeepLink:isHandled:] */

void FUN_106476364(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106476384; end: 1064763b7; -[SCContextV2DeepLinkHandler didPresentShoppingScope] */

void FUN_106476384(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf67f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064763b8; end: 1064763ff; -[SCContextV2DeepLinkHandler didDismissShoppingScope] */

void FUN_1064763b8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf67ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476400; end: 1064766b3; -[SCContextV2DeepLinkHandler _presentCommerce:baseView:metricParams:legacyDeepLinkParams:] */

void FUN_106476400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
    ppuVar9 = (undefined **)0x0;
  }
  else {
    ppuVar8 = param_6;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_6;
    func_0x00010c25b720();
    ppuVar9 = param_6;
    func_0x00010c0c6c20(param_6);
    if (ppuVar1 != (undefined **)0xffffffffffffffff) {
      func_0x00010bb15538(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064764b8;
    }
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e10b58;
LAB_1064764b8:
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126cace8;
  _objc_alloc(PTR_PTR_1126cace8);
  uVar4 = param_5;
  func_0x00010c15ffa0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cacf0;
  func_0x00010c0c6d60(PTR_PTR_1126cacf0,param_2,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0046a0(puVar3,param_2,uVar4,ppuVar8,ppuVar1,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b0500;
  uVar4 = param_5;
  func_0x00010beef1e0(param_5);
  puVar7 = PTR_PTR_1126cacf0;
  uVar6 = param_5;
  func_0x00010c08bda0(param_5);
  func_0x00010c0ed2e0(puVar7,param_2,uVar6);
  uVar6 = param_5;
  func_0x00010bf425a0(param_5);
  func_0x00010c23f460(puVar5,param_2,uVar4,puVar3,puVar7,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b0508;
  _objc_alloc(PTR_PTR_1126b0508);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  uVar4 = param_3;
  func_0x00010c257800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c115e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c039400(puVar7,param_2,lVar2,uVar4,uVar6,puVar5,1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(lVar2);
  func_0x00010c18b5e0(puVar7,param_2,param_1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x58),param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(ppuVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064766b4; end: 106476867; -[SCContextV2DeepLinkHandler _appStoreAppIDFromURL:] */

void FUN_1064766b4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar1 = param_3;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf529e0();
    if (uVar5 < 4) {
      uVar5 = 0;
LAB_106476840:
      _objc_release(uVar1);
      goto LAB_106476848;
    }
    uVar5 = param_3;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = param_3;
      func_0x00010c0f5860();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010bfda7c0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        uVar5 = param_3;
        func_0x00010c0f5860();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110dbf6f8;
        func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110dbf6f8);
        uVar1 = uVar2;
        func_0x00010c260c00(uVar2,param_2,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar5);
        uVar2 = uVar1;
        func_0x00010c08fa60();
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar1;
        }
        _objc_retain(uVar5);
        goto LAB_106476840;
      }
    }
  }
  uVar5 = 0;
LAB_106476848:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106476868; end: 106476c23; -[SCContextV2DeepLinkHandler _presentAppStoreModalWithURL:] */

void FUN_106476868(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdcce40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c067fc0();
  if (lVar9 != 0) {
    uStack_90 = *(undefined8 *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    uStack_a0 = *(undefined8 *)PTR__SKStoreProductParameterAffiliateToken_110347e68;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110e50878;
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110e50898;
    uStack_98 = *(undefined8 *)PTR__SKStoreProductParameterCampaignToken_110347e70;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    puVar5 = puVar3;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar9 = *plStack_160;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_160 != lVar9) {
            _objc_enumerationMutation(puVar5);
          }
          uVar11 = *(undefined8 *)(lStack_168 + (long)puVar10 * 8);
          uVar7 = uVar11;
          func_0x00010c0d4f60(uVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          if (puVar8 != (undefined *)0x0) {
            func_0x00010c296d80(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(uVar11);
          }
          _objc_release(puVar8);
          puVar10 = puVar10 + 1;
        } while (puVar6 != puVar10);
        puVar6 = puVar5;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
    _objc_alloc_init(PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778);
    func_0x00010c18b5e0();
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_106476c24;
    puStack_180 = &UNK_110858d00;
    _objc_retain(param_3);
    uStack_178 = param_3;
    func_0x00010c09bf80(puVar5);
    _objc_initWeak(auStack_1a0,param_1);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_1a8,auStack_1a0);
    func_0x00010c10eda0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_1a8);
    _objc_destroyWeak(auStack_1a0);
    _objc_release(uStack_178);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar1 + 0x20);
  _objc_destroyWeak(auStack_1a0);
  __Unwind_Resume(param_3);
  return;
}



/* Entry: 106476c24; end: 106476c27;  */

void FUN_106476c24(void)

{
  return;
}



/* Entry: 106476c28; end: 106476c6f;  */

void FUN_106476c28(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf67f20();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476c70; end: 106476d2b; -[SCContextV2DeepLinkHandler productViewControllerDidFinish:] */

void FUN_106476c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf84b00(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106476d2c; end: 106476d77;  */

void FUN_106476d2c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf67ee0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476d78; end: 106476dab; -[SCContextV2DeepLinkHandler browserPresenterWillPresent] */

void FUN_106476d78(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf67f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476dac; end: 106476de3; -[SCContextV2DeepLinkHandler browserPresenterDidDismiss] */

void FUN_106476dac(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf67ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476de4; end: 106476e17; -[SCContextV2DeepLinkHandler socialUnlockFlowWillPresentModalContent:] */

void FUN_106476de4(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf67f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476e18; end: 106476e6b; -[SCContextV2DeepLinkHandler socialUnlockFlowDidDismissModalContent:error:] */

void FUN_106476e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf67ee0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476e6c; end: 106476ee7; -[SCContextV2DeepLinkHandler socialUnlockFlow:willDismissContextCardsWithCompletion:] */

void FUN_106476e6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf67ec0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106476ee8; end: 106476f07; -[SCContextV2DeepLinkHandler businessProfilesPresenterScopeWillDismiss:] */

void FUN_106476ee8(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106476f08; end: 106476f3f; -[SCContextV2DeepLinkHandler didDismissFanPassSubscriptionScopeWithError:] */

void FUN_106476f08(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf67ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106476f40; end: 10647702f; -[SCContextV2DeepLinkHandler .cxx_destruct] */

void FUN_106476f40(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106477030; end: 106477047;  */

void FUN_106477030(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106477048; end: 1064770b7;  */

void FUN_106477048(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064770b8; end: 1064770bf;  */

void FUN_1064770b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_displayName_1125bf108);
  return;
}



/* Entry: 1064770c0; end: 1064770f7;  */

void FUN_1064770c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064770f8; end: 10647724b; -[SCContextV2ScopedBrowserPresenter initWithNavigationDelegate:safeBrowsingAPI:featureSettingsService:urlInterceptorProvider:webBrowsingScopeExposer:circumstanceEngine:] */

undefined1 *
FUN_1064770f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f14c8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
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



/* Entry: 10647724c; end: 10647767f; -[SCContextV2ScopedBrowserPresenter presentURL:preferExternal:metricParams:actionSource:snapParams:fromViewController:completion:] */

void FUN_10647724c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c099960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cacf8;
  _objc_alloc();
  uVar14 = param_7;
  func_0x00010bf5b3e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a5e0();
  _objc_release(uVar14);
  puVar4 = PTR_PTR_1126c5b30;
  _objc_alloc();
  func_0x00010bffe1e0();
  func_0x00010c1ae3c0();
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar2;
  puStack_78 = puVar3;
  puStack_70 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf45540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1d5e0(param_1);
  puVar7 = puVar6;
  func_0x00010c2b9b80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar7;
  func_0x00010c2a8280(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_initWeak(auStack_88,param_1);
  puVar6 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar7 = puVar6;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = auStack_88;
  _objc_copyWeak(auStack_90);
  lVar8 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar7);
  _objc_release(lVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126cad00;
  _objc_alloc(PTR_PTR_1126cad00);
  func_0x00010c038f40();
  puVar9 = PTR_PTR_1126b5a68;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000e00();
  _objc_release(uVar10);
  func_0x00010c18eb00(puVar9);
  lVar8 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf217c0();
  _objc_release(lVar8);
  puVar13 = puVar9;
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar5);
  _objc_release(uVar14);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume();
  _objc_retain(puVar12);
  if ((puVar12 != (undefined1 *)0x0) && (puVar13 == (undefined *)0x0)) {
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained();
    puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
    if (param_3 != 0) {
      _objc_retain(puVar12);
      _objc_opt_class(puVar3);
      puVar11 = puVar12;
      _objc_opt_isKindOfClass(puVar12,puVar3);
      puVar1 = puVar12;
      if (((ulong)puVar11 & 1) == 0) {
        puVar1 = (undefined1 *)0x0;
      }
      _objc_retain(puVar1);
      _objc_release(puVar12);
      uVar14 = *(undefined8 *)(param_3 + 0x30);
      *(undefined1 **)(param_3 + 0x30) = puVar1;
      _objc_release(uVar14);
      func_0x00010c09c520(puVar12);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 106477680; end: 10647772b;  */

void FUN_106477680(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    if (param_1 != 0) {
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
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(ulong *)(param_1 + 0x30) = uVar1;
      _objc_release(uVar4);
      func_0x00010c09c520(param_2);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10647772c; end: 10647775b; -[SCContextV2ScopedBrowserPresenter browserPresenterDidDismiss] */

void FUN_10647772c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf217a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10647775c; end: 1064777cb; -[SCContextV2ScopedBrowserPresenter webBrowserDidDismiss:] */

void FUN_10647775c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf217a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064777cc; end: 1064777f3; -[SCContextV2ScopedBrowserPresenter linkfireURLInterceptor:baseViewControllerForAlertDialog:] */

void FUN_1064777cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064777f4; end: 1064777f7; -[SCContextV2ScopedBrowserPresenter linkfireURLInterceptor:willPresentDisclaimerForURL:] */

void FUN_1064777f4(void)

{
  return;
}



/* Entry: 1064777f8; end: 10647780b; -[SCContextV2ScopedBrowserPresenter linkfireURLInterceptor:didAcceptAgreement:forURL:] */

void FUN_1064777f8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_loadURL__112604b58,param_5);
    return;
  }
  return;
}



/* Entry: 10647780c; end: 10647785b; -[SCContextV2ScopedBrowserPresenter webBrowsingURLInterceptor:didClickCancelForLeavingAppForURL:] */

void FUN_10647780c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf80180(param_3,param_2,param_4);
  func_0x00010c09c520(*(undefined8 *)(param_1 + 0x30),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10647785c; end: 1064778e3; -[SCContextV2ScopedBrowserPresenter _getBrowserSourceFromActionSource:] */

undefined8 FUN_10647785c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf4eb00();
  if (lVar1 == 3) {
    uVar2 = 0x1f;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf4eb00();
    if ((lVar1 == 4) || (lVar1 = param_3, func_0x00010bf4eb00(), lVar1 == 5)) {
      uVar2 = 0x1e;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf4eae0();
      uVar2 = 0x20;
      if (lVar1 != 5) {
        uVar2 = 7;
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1064778e4; end: 1064778fb; -[SCContextV2ScopedBrowserPresenter delegate] */

void FUN_1064778e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064778fc; end: 106477907; -[SCContextV2ScopedBrowserPresenter setDelegate:] */

void FUN_1064778fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106477908; end: 10647797b; -[SCContextV2ScopedBrowserPresenter .cxx_destruct] */

void FUN_106477908(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 10647797c; end: 106477a47; -[SCContextWebBrowserPresenter initWithWebBrowserScopeExposer:webBrowserScopeServices:circumstanceEngine:] */

undefined1 *
FUN_10647797c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f14d0;
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



/* Entry: 106477a48; end: 106477c5b; -[SCContextWebBrowserPresenter presentURL:preferExternal:metricParams:actionSource:snapParams:fromViewController:completion:] */

void FUN_106477a48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_7;
  func_0x00010bf5b3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071360();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126cacf8;
    _objc_alloc();
    uVar1 = param_7;
    func_0x00010bf5b3e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0068c0(puVar3,param_2,uVar1,*(undefined8 *)(param_1 + 0x18));
    _objc_release(uVar1);
    puVar7 = puVar3;
    func_0x00010bf51540(puVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf2cf00();
      _objc_release(puVar4);
      if ((int)puVar5 != 0) {
        puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e9b80();
        _objc_release(puVar4);
        goto LAB_106477c14;
      }
    }
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126cad00;
  _objc_alloc(PTR_PTR_1126cad00);
  func_0x00010c038f40();
  puVar7 = *(undefined **)(param_1 + 0x10);
  lVar6 = param_1;
  func_0x00010be1d5e0(param_1,param_2,param_6);
  func_0x00010bf24620(puVar7,param_2,param_3,puVar3,lVar6,param_1,
                      &PTR___NSConcreteGlobalBlock_110924040);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf217c0();
  _objc_release(lVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar7);
LAB_106477c14:
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106477c5c; end: 106477c67;  */

void FUN_106477c5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setEnableSafeBrowsingChecking__112642e68,1);
  return;
}



/* Entry: 106477c68; end: 106477c97; -[SCContextWebBrowserPresenter browserPresenterDidDismiss] */

void FUN_106477c68(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf217a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106477c98; end: 106477cfb; -[SCContextWebBrowserPresenter webBrowserScopeDidComplete] */

void FUN_106477c98(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf217a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106477cfc; end: 106477d83; -[SCContextWebBrowserPresenter _getBrowserSourceFromActionSource:] */

undefined8 FUN_106477cfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf4eb00();
  if (lVar1 == 3) {
    uVar2 = 0x1f;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf4eb00();
    if ((lVar1 == 4) || (lVar1 = param_3, func_0x00010bf4eb00(), lVar1 == 5)) {
      uVar2 = 0x1e;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf4eae0();
      uVar2 = 0x20;
      if (lVar1 != 5) {
        uVar2 = 7;
      }
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106477d84; end: 106477d9b; -[SCContextWebBrowserPresenter delegate] */

void FUN_106477d84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106477d9c; end: 106477da7; -[SCContextWebBrowserPresenter setDelegate:] */

void FUN_106477d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106477da8; end: 106477deb; -[SCContextWebBrowserPresenter .cxx_destruct] */

void FUN_106477da8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106477dec; end: 106477e5f; -[SCLensSocialUnlockV2DeepLinkUnlockPolicyAdapter initWithContextV2DeepLinkUnlockPolicy:] */

undefined1 * FUN_106477dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f14d8;
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



/* Entry: 106477e60; end: 106477e67; -[SCLensSocialUnlockV2DeepLinkUnlockPolicyAdapter canUnlockDeepLinkURL:] */

void FUN_106477e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_canUnlockDeepLinkURL__1125a9050);
  return;
}



/* Entry: 106477e68; end: 106477e73; -[SCLensSocialUnlockV2DeepLinkUnlockPolicyAdapter .cxx_destruct] */

void FUN_106477e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106477e74; end: 10647804f; +[SCLensesModularCameraScopeActivationSourceProvider replyParams:contextActionSource:isPlayGamesCTA:] */

undefined8
FUN_106477e74(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf4eb00();
  if (lVar1 == 9) {
    uVar2 = param_3;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108437fb4();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar5 = 1;
    if ((int)uVar4 != 0) {
      uVar5 = 2;
    }
    goto LAB_106477efc;
  }
  lVar1 = param_4;
  func_0x00010bf4eae0();
  if ((lVar1 == 3) && (lVar1 = param_4, func_0x00010bf4eb20(), lVar1 == 4)) {
    uVar2 = param_3;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000108437fb4();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar5 = 2;
      goto LAB_106477efc;
    }
  }
  lVar1 = param_4;
  func_0x00010bf4eae0();
  if ((lVar1 == 3) && (lVar1 = param_4, func_0x00010bf4eb20(), lVar1 == 7)) {
    uVar5 = 10;
    goto LAB_106477efc;
  }
  lVar1 = param_4;
  func_0x00010bf4eb20();
  if ((lVar1 == 0xd) || (lVar1 = param_4, func_0x00010bf4eb20(), lVar1 == 0xe)) {
    lVar1 = param_4;
    func_0x00010bf4eae0();
    if (lVar1 == 1) {
      uVar5 = 7;
      goto LAB_106477efc;
    }
    if (lVar1 != 2) {
      if (lVar1 == 3) {
        uVar5 = 8;
        goto LAB_106477efc;
      }
      goto LAB_106477ffc;
    }
  }
  else {
LAB_106477ffc:
    lVar1 = param_4;
    func_0x00010bf4eae0();
    if ((lVar1 != 2) ||
       ((lVar1 = param_4, func_0x00010bf4eb20(), lVar1 != 8 &&
        (lVar1 = param_4, func_0x00010bf4eb20(), lVar1 != 6)))) {
      uVar5 = 0;
      goto LAB_106477efc;
    }
  }
  uVar5 = 0xf;
  if (param_5 == 0) {
    uVar5 = 9;
  }
LAB_106477efc:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106478050; end: 1064780c3; -[SCLensesSocialUnlockFlowV2Adapter initWithLensSocialUnlockV2Flow:] */

undefined1 * FUN_106478050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f14e0;
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



/* Entry: 1064780c4; end: 106478297; -[SCLensesSocialUnlockFlowV2Adapter startUnlockFlowForURL:deepLinkUnlockPolicy:baseViewController:replyParameters:delegate:snapId:unlockableSnapInfo:chatMessageId:storyServerId:lensOptions:] */

undefined8
FUN_1064780c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar2 = PTR_PTR_1126cad08;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c0047c0();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  func_0x00010c057c40();
  _objc_release(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c234be0();
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    _objc_storeWeak(param_1 + 0x10,param_7);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c251520(uVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 106478298; end: 1064782cb; -[SCLensesSocialUnlockFlowV2Adapter socialUnlockFlowWillPresentModalContent:] */

void FUN_106478298(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2460e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064782cc; end: 10647831f; -[SCLensesSocialUnlockFlowV2Adapter socialUnlockFlowDidDismissModalContent:error:] */

void FUN_1064782cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2460c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106478320; end: 106478373; -[SCLensesSocialUnlockFlowV2Adapter socialUnlockFlow:willDismissContextCardsWithCompletion:] */

void FUN_106478320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2460a0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106478374; end: 1064783ab; -[SCLensesSocialUnlockFlowV2Adapter .cxx_destruct] */

void FUN_106478374(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064783ac; end: 10647844f; -[SCModalTransitionContainer initWithPresentingViewController:animated:] */

undefined1 *
FUN_1064783ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f14e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106478450; end: 1064784c7; -[SCModalTransitionContainer attachUI:] */

void FUN_106478450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf17b00();
  _objc_release(lVar1);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_release(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf941a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064784c8; end: 106478577; -[SCModalTransitionContainer detachUI:] */

void FUN_1064784c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf17b00();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106478578;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar2,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106478578; end: 1064785c7;  */

void FUN_106478578(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf941a0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064785b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1064785c8; end: 1064785f3; -[SCModalTransitionContainer .cxx_destruct] */

void FUN_1064785c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064785f4; end: 106478747; -[SCContextV2ValdiActionHandler initWithBaseViewController:actionHandlerProvider:actionParams:actionHandler:appStartExperimentReader:contextMenuType:contextSessionParams:] */

undefined1 *
FUN_1064785f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f14f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106478748; end: 10647874f; -[SCContextV2ValdiActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106478748(void)

{
  return 0;
}



/* Entry: 106478750; end: 10647875b; -[SCContextV2ValdiActionHandler pushToValdiMarshaller:] */

undefined8 FUN_106478750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc530;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x000108ea4d48();
  func_0x000108ea4ce4();
  return param_3;
}



/* Entry: 10647875c; end: 1064788fb; -[SCContextV2ValdiActionHandler handleActionWithBase64Action:] */

void FUN_10647875c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4e140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4eb20();
    *(long *)(param_1 + 0x28) = lVar3;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010bff6b20();
  lStack_48 = 0;
  puVar5 = PTR_PTR_1126b5b00;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_50,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1064788fc;
    puStack_68 = &UNK_110841fb0;
    _objc_copyWeak(auStack_58,auStack_50);
    _objc_retain(puVar5);
    puStack_60 = puVar5;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_release(puStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1064788fc; end: 106478a1b;  */

void FUN_1064788fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c08bda0(uVar2);
    func_0x0001064bcdf4();
    puVar3 = PTR_PTR_1126b6038;
    _objc_alloc(PTR_PTR_1126b6038);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    uVar6 = *(undefined8 *)(lVar1 + 0x30);
    FUN_1064bce14(uVar6);
    func_0x00010bff0a60(puVar3,param_2,5,uVar5,uVar2,uVar6,0xffffffffffffffff);
    uVar6 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = lVar1 + 0x40;
    _objc_loadWeakRetained(lVar4);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106478a1c;
    puStack_50 = &UNK_1108450c8;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uStack_48 = uVar5;
    func_0x00010bfd0040(uVar6,param_2,uVar2,puVar3,lVar4,0,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uStack_48);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106478a1c; end: 106478a1f;  */

void FUN_106478a1c(void)

{
  return;
}



/* Entry: 106478a20; end: 106478a37; -[SCContextV2ValdiActionHandler baseViewController] */

void FUN_106478a20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106478a38; end: 106478a43; -[SCContextV2ValdiActionHandler setBaseViewController:] */

void FUN_106478a38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106478a44; end: 106478a5b; -[SCContextV2ValdiActionHandler delegate] */

void FUN_106478a44(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106478a5c; end: 106478a67; -[SCContextV2ValdiActionHandler setDelegate:] */

void FUN_106478a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106478a68; end: 106478ad7; -[SCContextV2ValdiActionHandler .cxx_destruct] */

void FUN_106478a68(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106478ad8; end: 106479127; -[SCContextV2ActionsHandler initWithSessionParams:logger:baseViewController:v3ActionHandlerProvider:actionParams:v3ActionHandler:appStartExperimentReader:contextStoryPlaybackScopeExposer:contextMenuType:birthdayProvider:bitmojiAvatarProvider:musicServices:musicFavoritesComposerServices:alertPresenterFactory:circumstanceEngine:placesContextCardContextCreator:composerRuntime:ctpItemViewService:] */

undefined8 *
FUN_106478ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126f14f8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    puVar1[7] = param_11;
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[10];
    puVar1[10] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x00010c0d2cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[0x16];
    puVar1[0x16] = uVar3;
    _objc_release(uVar11);
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x00010c0dc660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[0x17];
    puVar1[0x17] = uVar3;
    _objc_release(uVar11);
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x00010c0d2f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[0x19];
    puVar1[0x19] = uVar3;
    _objc_release(uVar11);
    _objc_release(uVar2);
    uVar2 = param_20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c15ffa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010bf578e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = puVar1[0x1a];
    puVar1[0x1a] = uVar11;
    _objc_release(uVar12);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[0x18];
    puVar1[0x18] = uVar3;
    _objc_release(uVar11);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar5;
    _objc_release(uVar2);
    func_0x00010c16f480(puVar1);
    puVar5 = PTR_PTR_1126cad10;
    _objc_alloc();
    func_0x00010bff72c0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar5;
    _objc_release(uVar2);
    lVar6 = puVar1[0x11];
    func_0x0001084365e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf0bfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      puVar5 = PTR_PTR_1126cad18;
      _objc_opt_new();
      uVar2 = puVar1[0x15];
      puVar1[0x15] = puVar5;
      _objc_release(uVar2);
      lVar8 = puVar1[9];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      lVar8 = lVar7;
      func_0x00010c08fa60();
      if (lVar8 != 0) {
        func_0x00010c1caa20(puVar1[0x15]);
      }
      lVar9 = puVar1[8];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar9;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      if (lVar8 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
        func_0x00010bf5e300(PTR__OBJC_CLASS___NSCalendar_1126aeec8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        func_0x00010bf44640();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0d0e40(puVar10);
        func_0x00010c0df780(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ca9e0(puVar1[0x15]);
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf65700(puVar10);
        func_0x00010c0df780(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ca9c0(puVar1[0x15]);
        _objc_release(puVar5);
        _objc_release(puVar10);
      }
      _objc_release(lVar8);
      _objc_release(lVar7);
    }
    _objc_release(lVar6);
    _objc_release(puVar4);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106479128; end: 10647916b; -[SCContextV2ActionsHandler setDelegate:] */

void FUN_106479128(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x70,param_3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10647916c; end: 1064791af; -[SCContextV2ActionsHandler setBaseViewController:] */

void FUN_10647916c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x80,param_3);
  func_0x00010c16f480(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064791b0; end: 106479243; -[SCContextV2ActionsHandler logMusicFavoriteWithTrackId:favorited:] */

void FUN_1064791b0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e508b8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e508d8;
  }
  _objc_retain(ppuVar1);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be1e120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0480(*(undefined8 *)(param_1 + 0x90),param_2,ppuVar1,
                      &PTR____CFConstantStringClassReference_110e09c38,param_3,lVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106479244; end: 106479373; -[SCContextV2ActionsHandler performActionWithAction:] */

void FUN_106479244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4e140();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4eb20();
    *(long *)(param_1 + 0x38) = lVar3;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106479374;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}


