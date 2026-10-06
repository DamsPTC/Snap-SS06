/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107fc91e0; end: 107fc9243; -[SCStoryQuickPostView _spotlightHintSubtext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc91e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073920();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000108f5836c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f583e4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fc9244; end: 107fc926b; -[SCStoryQuickPostView _snapMapHintSubtext:] */

void FUN_107fc9244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107fc926c; end: 107fc928b; -[SCStoryQuickPostView _enableQuickPostPrivacyModal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc926c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772c2c),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ecb2b8,1,0);
  return;
}



/* Entry: 107fc928c; end: 107fc92ab; -[SCStoryQuickPostView _enablePreselectOnlyVisibleCustomStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc928c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772c2c),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ecb2d8,1,0);
  return;
}



/* Entry: 107fc92ac; end: 107fc92cb; -[SCStoryQuickPostView _enableSafeCopyOnSelectedCustomStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc92ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772c2c),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ecb2f8,1,0);
  return;
}



/* Entry: 107fc92cc; end: 107fc9317; -[SCStoryQuickPostView _didAcceptSendForOurStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc92cc(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + _DAT_112772cd8) = 1;
  lVar1 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9ef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendDidUpdateRecipients_112585580);
  return;
}



/* Entry: 107fc9318; end: 107fc931f; -[SCStoryQuickPostView _didSelectBusinessProfileHandler:withTapOnCell:] */

void FUN_107fc9318(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__selectBusinessProfileHandler_is_112584fa0,param_3,param_4 ^ 1);
  return;
}



/* Entry: 107fc9320; end: 107fc956b; -[SCStoryQuickPostView _selectBusinessProfileHandler:isPreselect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9320(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112772c90;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c0d3c80();
  uVar2 = param_3;
  func_0x00010c1164a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c1164a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar5 == 0) {
    func_0x00010befa120(uVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c074e40();
    if (param_4 != 0) {
      lVar9 = (long)_DAT_112772c98;
      uVar6 = *(undefined8 *)(param_1 + lVar9);
      uVar3 = param_3;
      func_0x00010c1164a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174bc0(uVar6,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar9);
      *(undefined8 *)(param_1 + lVar9) = uVar6;
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    uVar3 = uVar1;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar3;
    _objc_release(uVar5);
    if (((int)uVar2 != 0) && (lVar8 = param_1, func_0x00010befc200(), (int)lVar8 != 0)) {
      lVar7 = (long)_DAT_112772ca0;
      lVar9 = *(long *)(param_1 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar9;
      func_0x00010c25aac0();
      if (lVar8 == 1) {
        _objc_release(lVar9);
      }
      else {
        lVar7 = *(long *)(param_1 + lVar7);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c25aac0();
        _objc_release(lVar7);
        _objc_release(lVar9);
        if (lVar8 != 2) goto LAB_107fc952c;
      }
      func_0x00010c165620(param_1,param_2,0);
    }
  }
  else {
    func_0x00010c12d360();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar2;
    _objc_release(uVar3);
  }
LAB_107fc952c:
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112772c5c));
  func_0x00010be9ef60(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fc956c; end: 107fc95a3; -[SCStoryQuickPostView _updateOurStoriesWithTopics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc956c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c54);
  *(undefined8 *)(param_1 + _DAT_112772c54) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fc95a4; end: 107fc95cb; -[SCStoryQuickPostView _generateShareAnonymouslyMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc95a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cc8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c4ea8,PTR_s_metadataWithProfileIdProvider_fe_112610c40,
             *(undefined8 *)(param_1 + _DAT_112772c80),*(undefined8 *)(param_1 + _DAT_112772cc4));
  return;
}



/* Entry: 107fc95cc; end: 107fc973f; -[SCStoryQuickPostView _selectedMyPublicProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc95cc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar5 = *(long *)(param_1 + _DAT_112772c90);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar5);
        }
        uVar2 = *(ulong *)(param_1 + _DAT_112772c8c);
        func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(lStack_118 + lVar8 * 8));
        _objc_retainAutoreleasedReturnValue();
        if ((uVar2 != 0) && (uVar3 = uVar2, func_0x00010c074e40(), (uVar3 & 1) != 0)) {
          uVar3 = uVar2;
          func_0x00010c1164a0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(uVar2);
          goto LAB_107fc96fc;
        }
        _objc_release(uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar6 = 0;
LAB_107fc96fc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c1c8340(0x3fd3333333333333);
  func_0x00010c18b5e0(puVar4,param_2,lVar5);
  func_0x00010bef9040(*(undefined8 *)(lVar5 + _DAT_112772c5c),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107fc9740; end: 107fc97ab; -[SCStoryQuickPostView _initGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c1c8340(0x3fd3333333333333);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010bef9040(*(undefined8 *)(param_1 + _DAT_112772c5c),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fc97ac; end: 107fc9893; -[SCStoryQuickPostView _longPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc97ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c252440();
  if (lVar3 == 1) {
    lVar3 = (long)_DAT_112772c5c;
    func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010bfed080();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar3 != 0) &&
       (lVar1 = param_1, func_0x00010c25aee0(param_1,param_2,lVar3,&uStack_48), lVar1 == 4)) {
      lVar1 = param_1;
      func_0x00010bdf7940(param_1,param_2,uStack_48);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7ae00(param_1,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107fc9894; end: 107fc99a7; -[SCStoryQuickPostView _presentCustomStoryMenuWithPublicationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = (long)_DAT_112772c78;
  lVar2 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  lVar4 = (long)_DAT_112772c6c;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar3 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar3);
    lVar2 = lVar4;
    func_0x00010bf24480(lVar4,param_2,puVar1,lVar3,param_3,0x2f,5,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar4);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + _DAT_112772c68),param_2,lVar2,param_1);
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fc99a8; end: 107fc99b7; -[SCStoryQuickPostView didCompleteCustomStoryMenuScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc99a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112772c68),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 107fc99b8; end: 107fc9a3f; -[SCStoryQuickPostView didRemoveCustomStoryWithPublicationId:] */

void FUN_107fc99b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107fc9a40;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107fc9a40; end: 107fc9b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9a40(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = (long)_DAT_112772c28;
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + lVar7);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar5);
        }
        puVar6 = *(undefined8 **)(lStack_128 + lVar9 * 8);
        puVar1 = (undefined1 *)puVar6;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)puVar2 != 0) {
          func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7),param_2,puVar6);
          goto LAB_107fc9b48;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar5;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(lVar5,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
LAB_107fc9b48:
  _objc_release(lVar5);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010be9ef60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112772c28);
    func_0x00010bf529e0(uVar4);
    func_0x00010c2aefc0(puVar6,param_2,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112772ce4);
    func_0x00010bf529e0(uVar4);
    func_0x00010c2a8de0(puVar6,param_2,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b8660(puVar6,param_2,
                        (ulong)*(byte *)(lVar3 + _DAT_112772cdc) +
                        (ulong)*(byte *)(lVar3 + _DAT_112772cd8));
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 107fc9b94; end: 107fc9c2f; -[SCStoryQuickPostView logStoriesSelectionWithLoggingParamsBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772c28);
  func_0x00010bf529e0(uVar1);
  func_0x00010c2aefc0(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112772ce4);
  func_0x00010bf529e0(uVar1);
  func_0x00010c2a8de0(param_3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8660(param_3,param_2,
                      (ulong)*(byte *)(param_1 + _DAT_112772cdc) +
                      (ulong)*(byte *)(param_1 + _DAT_112772cd8));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107fc9c30; end: 107fc9d73; -[SCStoryQuickPostView logPublicStoryMetricsWithIsSending:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9c30(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(char *)(param_1 + _DAT_112772ccc) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112772cb8);
    func_0x0001008cc2b4(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112772cb4;
    func_0x000108f37aa4(*(undefined8 *)(param_1 + lVar6),uVar2,1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    uVar1 = *(undefined1 *)(param_1 + _DAT_112772c58);
    lVar3 = *(long *)(param_1 + _DAT_112772cc8);
    func_0x00010bf529e0(lVar3);
    func_0x000108f36ae0(uVar4,&PTR____CFConstantStringClassReference_110f09738,uVar1,lVar3 != 0,
                        *(undefined1 *)(param_1 + _DAT_112772cf0),1);
    func_0x00010bf529e0(*(undefined8 *)(param_1 + _DAT_112772c94));
    func_0x00010be57640(param_1);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112772c98);
    func_0x00010bf529e0(uVar4);
    func_0x000108f36d20(uVar5,uVar2,uVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    lVar3 = (long)_DAT_112772c90;
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf529e0(uVar4);
    func_0x000108f36e94(uVar5,uVar2,uVar4);
    if (param_3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      uVar4 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010bf529e0(uVar4);
      func_0x000108f37008(uVar5,uVar2,uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107fc9d74; end: 107fc9e47; -[SCStoryQuickPostView _logPublicStoryAvailableWithCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9d74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112772cb8);
  func_0x0001008cc2b4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lRam00000001137289f8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107fc9e48;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain();
  uVar3 = uVar2;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1137289f8,&puStack_68);
    uVar3 = uStack_40;
  }
  func_0x000108f367f8(*(undefined8 *)(param_1 + _DAT_112772cb4),uVar2,param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107fc9e48; end: 107fc9e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9e48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 *unaff_x24;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 auStack_368 [2];
  char cStack_351;
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  long *plStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 ***pppuStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  long *plStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 ***pppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = *(undefined **)(param_1 + 0x28);
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112772cb4);
  puVar7 = *(undefined8 **)(param_1 + 0x30);
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  puVar8 = puVar7;
  _objc_retain(puVar3);
  if (lVar10 != 0) {
    plVar11 = *(long **)(lVar10 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110acc3e8;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar8 = puVar5;
    param_4 = puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar5;
      param_4 = puVar7;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  puStack_88 = &SUB_108f36ae0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar5 = puVar8;
  puVar7 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  puVar12 = (undefined1 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_148,puVar3);
    puVar3 = &UNK_10f534b63;
    if ((int)puVar8 == 0) {
      puVar3 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_130,puVar3);
    puVar3 = &UNK_10f534b63;
    if ((int)param_4 == 0) {
      puVar3 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_118,puVar3);
    unaff_x24 = auStack_100;
    puVar3 = &UNK_10f534b63;
    if ((int)param_5 == 0) {
      puVar3 = &UNK_10f534b68;
    }
    func_0x000107c278b8(unaff_x24,puVar3);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    func_0x000107c27984(&uStack_168,auStack_148,&lStack_e8,4);
    puVar3 = &UNK_110acc438;
    param_5 = &uStack_168;
    puVar5 = &uStack_168;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc438,puVar5,param_6);
    puStack_150 = param_5;
    func_0x000107c278ac(&puStack_150);
    lVar10 = 0;
    puVar12 = auStack_148;
    puVar7 = param_6;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x60);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1f0;
  puStack_178 = &SUB_108f36d20;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar8 = puVar5;
  puStack_1b0 = unaff_x24;
  puStack_1a8 = param_4;
  puStack_1a0 = param_5;
  puStack_198 = puVar12;
  puStack_190 = puVar2;
  puStack_188 = puVar1;
  ppuStack_180 = &puStack_90;
  _objc_retain(puVar3);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    param_4 = auStack_1d0;
    func_0x000107c278b8(auStack_1d0,puVar1);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x000107c27984(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    puVar6 = &UNK_110acc488;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc488,&uStack_1f0,puVar5);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x000107c278ac(&puStack_1d8);
    puVar8 = puVar9;
    puVar7 = puVar5;
    param_5 = &uStack_1f0;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar8 = puVar9;
      puVar7 = puVar5;
      param_5 = &uStack_1f0;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_270;
  puStack_1f8 = &SUB_108f36e94;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar5 = puVar8;
  puStack_230 = unaff_x24;
  puStack_228 = param_4;
  puStack_220 = param_5;
  plStack_218 = plVar11;
  puStack_210 = puVar1;
  puStack_208 = puVar3;
  pppuStack_200 = &ppuStack_180;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    param_4 = auStack_250;
    func_0x000107c278b8(auStack_250,puVar1);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x000107c27984(&uStack_270,auStack_250,&lStack_238,1);
    puVar2 = &UNK_110acc4d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc4d8,&uStack_270,puVar8);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x000107c278ac(&puStack_258);
    puVar5 = puVar9;
    puVar7 = puVar8;
    param_5 = &uStack_270;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar5 = puVar9;
      puVar7 = puVar8;
      param_5 = &uStack_270;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_2f0;
  puStack_278 = &SUB_108f37008;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar2;
  puVar8 = puVar5;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = param_4;
  puStack_2a0 = param_5;
  plStack_298 = plVar11;
  puStack_290 = puVar1;
  puStack_288 = puVar6;
  pppuStack_280 = &pppuStack_200;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    param_4 = auStack_2d0;
    func_0x000107c278b8(auStack_2d0,puVar1);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x000107c27984(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
    puVar3 = &UNK_110acc528;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc528,&uStack_2f0,puVar5);
    puStack_2d8 = (undefined1 *)&uStack_2f0;
    func_0x000107c278ac(&puStack_2d8);
    puVar8 = puVar9;
    puVar7 = puVar5;
    param_5 = &uStack_2f0;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      puVar8 = puVar9;
      puVar7 = puVar5;
      param_5 = &uStack_2f0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puStack_2f8 = &UNK_108f3717c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puStack_330 = unaff_x24;
  puStack_328 = param_4;
  puStack_320 = param_5;
  plStack_318 = plVar11;
  puStack_310 = puVar1;
  puStack_308 = puVar2;
  pppuStack_300 = &pppuStack_280;
  _objc_retain(puVar3);
  _objc_retain(puVar8);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f53482e;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_368,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_350,puVar5);
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    func_0x000107c27984(&uStack_388,auStack_368,&lStack_338,2);
    puVar6 = &UNK_110acc578;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110acc578,&uStack_388,puVar7);
    puStack_370 = &uStack_388;
    func_0x000107c278ac(&puStack_370);
    lVar10 = 0;
    do {
      if ((&cStack_339)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_351 < '\0') {
    __ZdlPv(auStack_368[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar3);
  __Unwind_Resume();
  puStack_3b8 = (undefined1 *)&uStack_3d0;
  puStack_398 = &UNK_108f373ac;
  if (puVar1 != (undefined *)0x0) {
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    puStack_3b0 = puVar8;
    puStack_3a8 = puVar3;
    pppuStack_3a0 = &pppuStack_300;
    (**(code **)(**(long **)(puVar1 + 8) + 0x18))
              (*(long **)(puVar1 + 8),&UNK_110acc5c8,&uStack_3d0,puVar6);
    func_0x000107c278ac(&puStack_3b8);
  }
  return;
}



/* Entry: 107fc9e64; end: 107fc9ebb; -[SCStoryQuickPostView webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9e64(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772c34;
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



/* Entry: 107fc9ebc; end: 107fc9ecb; -[SCStoryQuickPostView addToMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fc9ebc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772cbc);
}



/* Entry: 107fc9ecc; end: 107fc9edb; -[SCStoryQuickPostView setAddToMyStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9ecc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112772cbc) = param_3;
  return;
}



/* Entry: 107fc9edc; end: 107fc9eeb; -[SCStoryQuickPostView topicsCollection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fc9edc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772cd0);
}



/* Entry: 107fc9eec; end: 107fc9efb; -[SCStoryQuickPostView tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fc9eec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772c5c);
}



/* Entry: 107fc9efc; end: 107fc9f1b; -[SCStoryQuickPostView storyQuickPostDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9efc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112772cec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fc9f1c; end: 107fc9f2f; -[SCStoryQuickPostView setStoryQuickPostDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112772cec,param_3);
  return;
}



/* Entry: 107fc9f30; end: 107fc9f4f; -[SCStoryQuickPostView presenterViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9f30(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112772cf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107fc9f50; end: 107fc9f63; -[SCStoryQuickPostView setPresenterViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9f50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112772cf8,param_3);
  return;
}



/* Entry: 107fc9f64; end: 107fc9f73; -[SCStoryQuickPostView hideSnapMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fc9f64(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772ce0);
}



/* Entry: 107fc9f74; end: 107fc9f83; -[SCStoryQuickPostView mediaSupportsSpotlightSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fc9f74(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772c48);
}



/* Entry: 107fc9f84; end: 107fca233; -[SCStoryQuickPostView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fc9f84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112772cf8);
  _objc_destroyWeak(param_1 + _DAT_112772cec);
  _objc_storeStrong(param_1 + _DAT_112772c5c,0);
  _objc_storeStrong(param_1 + _DAT_112772cd0,0);
  _objc_storeStrong(param_1 + _DAT_112772cb4,0);
  _objc_storeStrong(param_1 + _DAT_112772cc4,0);
  _objc_storeStrong(param_1 + _DAT_112772cb0,0);
  _objc_storeStrong(param_1 + _DAT_112772cc0,0);
  _objc_storeStrong(param_1 + _DAT_112772cac,0);
  _objc_storeStrong(param_1 + _DAT_112772ca8,0);
  _objc_storeStrong(param_1 + _DAT_112772ca4,0);
  _objc_storeStrong(param_1 + _DAT_112772ca0,0);
  _objc_storeStrong(param_1 + _DAT_112772c3c,0);
  _objc_storeStrong(param_1 + _DAT_112772c38,0);
  _objc_storeStrong(param_1 + _DAT_112772c34,0);
  _objc_storeStrong(param_1 + _DAT_112772c30,0);
  _objc_storeStrong(param_1 + _DAT_112772c2c,0);
  _objc_storeStrong(param_1 + _DAT_112772c7c,0);
  _objc_storeStrong(param_1 + _DAT_112772c88,0);
  _objc_storeStrong(param_1 + _DAT_112772c74,0);
  _objc_storeStrong(param_1 + _DAT_112772c70,0);
  _objc_destroyWeak(param_1 + _DAT_112772c6c);
  _objc_storeStrong(param_1 + _DAT_112772c68,0);
  _objc_storeStrong(param_1 + _DAT_112772c64,0);
  _objc_storeStrong(param_1 + _DAT_112772c60,0);
  _objc_storeStrong(param_1 + _DAT_112772c40,0);
  _objc_storeStrong(param_1 + _DAT_112772c44,0);
  _objc_storeStrong(param_1 + _DAT_112772cd4,0);
  _objc_storeStrong(param_1 + _DAT_112772c9c,0);
  _objc_storeStrong(param_1 + _DAT_112772c98,0);
  _objc_storeStrong(param_1 + _DAT_112772c90,0);
  _objc_storeStrong(param_1 + _DAT_112772c94,0);
  _objc_storeStrong(param_1 + _DAT_112772c8c,0);
  _objc_storeStrong(param_1 + _DAT_112772cc8,0);
  _objc_storeStrong(param_1 + _DAT_112772c80,0);
  _objc_destroyWeak(param_1 + _DAT_112772c78);
  _objc_storeStrong(param_1 + _DAT_112772c54,0);
  _objc_storeStrong(param_1 + _DAT_112772c84,0);
  _objc_storeStrong(param_1 + _DAT_112772c50,0);
  _objc_storeStrong(param_1 + _DAT_112772c28,0);
  _objc_storeStrong(param_1 + _DAT_112772ce4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772c24,0);
  return;
}



/* Entry: 107fca234; end: 107fca683; -[SCStoryQuickPostViewOptionCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107fca234(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  puStack_88 = PTR_PTR_1126fbff0;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c16e9a0(puVar1);
    func_0x00010c160fc0(puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112772d00) = 1;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar7 = (long)_DAT_112772d04;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar7 = (long)_DAT_112772d08;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112772d0c);
    *(undefined **)((long)puVar1 + (long)_DAT_112772d0c) = puVar3;
    _objc_release(uVar6);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar8 = (long)_DAT_112772d10;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar6);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar7 = (long)_DAT_112772d14;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    lVar7 = (long)_DAT_112772d18;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar3);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar5);
    func_0x00010c1faee0(puVar1);
    func_0x00010c17a440(puVar1);
    func_0x00010c17c5a0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107fca684; end: 107fca70b; -[SCStoryQuickPostViewOptionCell _getLabelSize:width:] */

undefined1  [16] FUN_107fca684(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0def20();
  dVar3 = 1.79769313486232e+308;
  dVar2 = 1.79769313486232e+308;
  if (lVar1 != 1) {
    dVar2 = param_1;
  }
  func_0x00010c23d5a0(param_4);
  _objc_release(param_4);
  if (param_1 <= dVar2) {
    dVar2 = param_1;
  }
  auVar4._0_8_ = (double)(float)(int)dVar2;
  auVar4._8_8_ = (double)(float)(int)dVar3;
  return auVar4;
}



/* Entry: 107fca70c; end: 107fcac97; -[SCStoryQuickPostViewOptionCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fca70c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fbff0;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar5 = (long)_DAT_112772d04;
  if (*(long *)(param_5 + lVar5) != 0) {
    lVar7 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    param_2 = param_1;
    _objc_release(lVar7);
    lVar7 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fec0();
    param_2 = param_2 + -0.5;
    _objc_release(lVar7);
    lVar7 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    param_4 = 0.5;
    func_0x00010c19f0e0(param_1,param_2,*(undefined8 *)(param_5 + lVar5));
    _objc_release(lVar7);
  }
  plVar6 = (long *)(param_5 + _DAT_112772d08);
  if (*plVar6 != 0) {
    lVar5 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140820();
    _objc_release(lVar5);
    param_2 = -20.0;
    if (((*(byte *)(param_5 + _DAT_112772d1c) & 1) == 0) &&
       (param_2 = -16.0, *(char *)(param_5 + _DAT_112772d20) == '\0')) {
      param_2 = -28.0;
    }
    param_1 = param_1 + -25.0 + param_2;
    lVar5 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274140();
    lVar7 = param_5;
    dVar9 = param_2;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    param_2 = param_2 + (dVar9 + -25.0) * 0.5;
    _objc_release(lVar7);
    _objc_release(lVar5);
    lVar5 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    param_3 = 25.0;
    param_4 = 25.0;
    func_0x00010b8166f8(param_1,param_2,0x4039000000000000,0x4039000000000000);
    func_0x00010c19f0e0(*plVar6);
    _objc_release(lVar5);
  }
  plVar1 = (long *)(param_5 + _DAT_112772d24);
  if (*plVar1 != 0) {
    func_0x00010c23d620();
    func_0x00010bfb68e0(*plVar1);
    iVar2 = (int)*plVar6;
    func_0x00010c074c20();
    if (iVar2 == 0) {
      func_0x00010c08e360(*plVar6);
      param_2 = param_1 + -8.0;
      param_1 = param_2 - param_3;
      func_0x00010c274140(*plVar6);
      dVar9 = param_2;
      func_0x00010bfe0640(*plVar6);
      param_2 = param_2 + (dVar9 - param_4) * 0.5;
    }
    else {
      lVar5 = param_5;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c140820();
      param_2 = param_1 - param_3;
      param_1 = param_2 + -28.0;
      _objc_release(lVar5);
      lVar5 = param_5;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274140();
      lVar7 = param_5;
      dVar9 = param_2;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      param_2 = param_2 + (dVar9 - param_4) * 0.5;
      _objc_release(lVar7);
      _objc_release(lVar5);
    }
    lVar5 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b8166f8(param_1,param_2,param_3,param_4);
    func_0x00010c19f0e0(*plVar1);
    _objc_release(lVar5);
  }
  lVar5 = (long)_DAT_112772d10;
  if (*(long *)(param_5 + lVar5) != 0) {
    lVar7 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e360();
    param_2 = param_1;
    _objc_release(lVar7);
    lVar7 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c274140();
    dVar9 = param_2;
    _objc_release(lVar7);
    func_0x00010c2a5040(*plVar1);
    if ((dVar9 != 0.0) && (func_0x00010bfe0640(*plVar1), dVar9 != 0.0)) {
      plVar6 = plVar1;
    }
    param_1 = param_1 + 8.0;
    func_0x00010c08e360(*plVar6);
    dVar13 = dVar9;
    func_0x00010c08e360(*(undefined8 *)(param_5 + lVar5));
    lVar7 = param_5;
    dVar10 = dVar13;
    func_0x00010b8166c0();
    if ((int)lVar7 == 0) {
      dVar10 = dVar9 + -12.0;
      dVar13 = dVar10 - dVar13;
    }
    else {
      lVar7 = param_5;
      func_0x00010bf4dce0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c140820();
      dVar10 = dVar10 + -8.0;
      dVar13 = dVar10 - param_1;
      _objc_release(lVar7);
    }
    lVar7 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    _objc_release(lVar7);
    lVar7 = param_5;
    func_0x00010bf4dce0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b8166f8(param_1,param_2,dVar13,dVar10);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
    _objc_release(lVar7);
  }
  lVar7 = (long)_DAT_112772d14;
  if (*(long *)(param_5 + lVar7) != 0) {
    func_0x00010c2a5040(*(undefined8 *)(param_5 + lVar5));
    dVar9 = param_1;
    func_0x00010be1fe60(param_5);
    lVar8 = (long)_DAT_112772d18;
    lVar3 = *(long *)(param_5 + lVar8);
    dVar13 = dVar9;
    dVar10 = param_2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      param_1 = 0.0;
      dVar10 = 0.0;
    }
    else {
      func_0x00010be1fe60(param_1,param_5);
      dVar13 = param_1;
    }
    func_0x00010c08e360(*(undefined8 *)(param_5 + lVar5));
    dVar11 = dVar13;
    func_0x00010c274140(*(undefined8 *)(param_5 + lVar5));
    dVar12 = dVar11;
    func_0x00010bfe0640(*(undefined8 *)(param_5 + lVar5));
    func_0x00010b8166f8(dVar13,dVar11 + ((dVar12 - param_2) - dVar10) * 0.5,dVar9,param_2,
                        *(undefined8 *)(param_5 + lVar5));
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
    lVar3 = *(long *)(param_5 + lVar8);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      func_0x00010c08e360(*(undefined8 *)(param_5 + lVar5));
      dVar9 = dVar13;
      func_0x00010bf1fec0(*(undefined8 *)(param_5 + lVar7));
      func_0x00010b8166f8(dVar13,dVar9,param_1,dVar10,*(undefined8 *)(param_5 + lVar5));
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar8));
    }
  }
  return;
}



/* Entry: 107fcac98; end: 107fcaeef; -[SCStoryQuickPostViewOptionCell setSelectionAllowed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcac98(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112772d00;
  if (*(byte *)(param_1 + lVar3) != param_3) {
    if (param_3 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c520(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0d5040(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(lVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c520(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0d5040(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a89a0();
      _objc_release(lVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c520(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c25e6c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(lVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c520(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3fc999999999999a,0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0d5040(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(lVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3fc999999999999a,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70)
      ;
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0d5040(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a89a0();
      _objc_release(lVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3fe0101010101010,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70)
      ;
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c25e6c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(lVar2);
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3fe0101010101010,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70)
      ;
      _objc_retainAutoreleasedReturnValue();
    }
    lVar2 = param_1;
    func_0x00010c25e6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a89a0();
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  *(char *)(param_1 + lVar3) = (char)param_3;
  return;
}



/* Entry: 107fcaef0; end: 107fcaef7; -[SCStoryQuickPostViewOptionCell setCellSelected:] */

void FUN_107fcaef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setCellSelected_shouldSetFontSel_11263c338,param_3,0);
  return;
}



/* Entry: 107fcaef8; end: 107fcaf43; -[SCStoryQuickPostViewOptionCell setCellSelected:shouldSetFontSelected:] */

void FUN_107fcaef8(undefined8 param_1)

{
  func_0x00010c16e8a0();
  func_0x00010c17c580(param_1);
  func_0x00010c19e5a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107fcaf44; end: 107fcaf57; -[SCStoryQuickPostViewOptionCell showSeparator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcaf44(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_3,*(undefined8 *)(param_1 + _DAT_112772d04),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107fcaf58; end: 107fcaf63; -[SCStoryQuickPostViewOptionCell setBackgroundSelected:] */

void FUN_107fcaf58(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelectedBackground_11265c5c8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c21bfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUnselectedBackground_112664a10);
  return;
}



/* Entry: 107fcaf64; end: 107fcb067; -[SCStoryQuickPostViewOptionCell setCircleSelected:] */

void FUN_107fcaf64(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  lVar1 = param_1;
  func_0x00010bf39880();
  if (lVar1 == 0) {
    func_0x00010bf397e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ecb378;
      goto LAB_107fcb034;
    }
  }
  else {
    if (lVar1 == 2) {
      func_0x00010bf397e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      if (param_3 == 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110ecb398;
      }
      else {
        ppuVar3 = &PTR____CFConstantStringClassReference_110e2c338;
      }
      goto LAB_107fcb034;
    }
    if (lVar1 != 1) {
      return;
    }
    func_0x00010bf397e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110ecb338;
      goto LAB_107fcb034;
    }
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110ecb358;
LAB_107fcb034:
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fcb068; end: 107fcb0db; -[SCStoryQuickPostViewOptionCell setFontSelected:] */

void FUN_107fcb068(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if (param_3 == 0) {
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c26c280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fcb0dc; end: 107fcb10f; -[SCStoryQuickPostViewOptionCell toggleRightOffsetIsSearching:isFastStoryPost:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb0dc(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112772d1c;
  if ((*(byte *)(param_1 + _DAT_112772d20) == param_3) && (*(byte *)(param_1 + lVar1) == param_4)) {
    return;
  }
  *(char *)(param_1 + _DAT_112772d20) = (char)param_3;
  *(char *)(param_1 + lVar1) = (char)param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107fcb110; end: 107fcb16f; -[SCStoryQuickPostViewOptionCell setSelectedBackground] */

void FUN_107fcb110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fcb170; end: 107fcb1cb; -[SCStoryQuickPostViewOptionCell setUnselectedBackground] */

void FUN_107fcb170(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107fcb1cc; end: 107fcb1db; -[SCStoryQuickPostViewOptionCell setCircleType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112772cfc) = param_3;
  return;
}



/* Entry: 107fcb1dc; end: 107fcb287; -[SCStoryQuickPostViewOptionCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb1dc(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fbff0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c160fc0(param_1);
  func_0x00010c17c5a0(param_1);
  func_0x00010c239d20(param_1);
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_112772d24));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010bef8860(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 107fcb288; end: 107fcb30b; -[SCStoryQuickPostViewOptionCell addFriendMojiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112772d24;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  lVar3 = (long)_DAT_112772d28;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112772d0c));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107fcb30c; end: 107fcb30f; -[SCStoryQuickPostViewOptionCell textLabel] */

void FUN_107fcb30c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_nameLabel_112612e28);
  return;
}



/* Entry: 107fcb310; end: 107fcb313; -[SCStoryQuickPostViewOptionCell detailTextLabel] */

void FUN_107fcb310(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_subNameLabel_1126753d8);
  return;
}



/* Entry: 107fcb314; end: 107fcb347; -[SCStoryQuickPostViewOptionCell hideCircleViewAndUpdateEmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb314(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112772d08),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107fcb348; end: 107fcb357; -[SCStoryQuickPostViewOptionCell selectionAllowed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107fcb348(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112772d00);
}



/* Entry: 107fcb358; end: 107fcb367; -[SCStoryQuickPostViewOptionCell circle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fcb358(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772d08);
}



/* Entry: 107fcb368; end: 107fcb3a7; -[SCStoryQuickPostViewOptionCell setCircle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772d08;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fcb3a8; end: 107fcb3b7; -[SCStoryQuickPostViewOptionCell circleRightConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fcb3a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772d2c);
}



/* Entry: 107fcb3b8; end: 107fcb3f7; -[SCStoryQuickPostViewOptionCell setCircleRightConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb3b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772d2c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fcb3f8; end: 107fcb407; -[SCStoryQuickPostViewOptionCell circleType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fcb3f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772cfc);
}



/* Entry: 107fcb408; end: 107fcb417; -[SCStoryQuickPostViewOptionCell nameLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fcb408(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772d14);
}



/* Entry: 107fcb418; end: 107fcb457; -[SCStoryQuickPostViewOptionCell setNameLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772d14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fcb458; end: 107fcb467; -[SCStoryQuickPostViewOptionCell subNameLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fcb458(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772d18);
}



/* Entry: 107fcb468; end: 107fcb4a7; -[SCStoryQuickPostViewOptionCell setSubNameLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772d18;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fcb4a8; end: 107fcb4b7; -[SCStoryQuickPostViewOptionCell friendMojiContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107fcb4a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112772d0c);
}



/* Entry: 107fcb4b8; end: 107fcb4f7; -[SCStoryQuickPostViewOptionCell setFriendMojiContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb4b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112772d0c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fcb4f8; end: 107fcb5a7; -[SCStoryQuickPostViewOptionCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107fcb4f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112772d0c,0);
  _objc_storeStrong(param_1 + _DAT_112772d18,0);
  _objc_storeStrong(param_1 + _DAT_112772d14,0);
  _objc_storeStrong(param_1 + _DAT_112772d2c,0);
  _objc_storeStrong(param_1 + _DAT_112772d08,0);
  _objc_storeStrong(param_1 + _DAT_112772d28,0);
  _objc_storeStrong(param_1 + _DAT_112772d10,0);
  _objc_storeStrong(param_1 + _DAT_112772d24,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112772d04,0);
  return;
}



/* Entry: 107fcb5a8; end: 107fcb8d7; -[SCAppNotification initAsChatSentToUserId:withTitle:successBlock:customDisclosureView:customNotificationImage:] */

undefined *
FUN_107fcb5a8(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             long param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_6;
  lVar10 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = 3;
  FUN_107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)0x2;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (param_3 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar3);
  }
  if (param_6 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  if (param_5 == 0) {
    puVar2 = PTR_PTR_1126b1370;
    func_0x00010c25d500(PTR_PTR_1126b1370);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e56bd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e56bd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(ppuVar5);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e4d098;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e4d098,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(ppuVar5);
  }
  else {
    puVar2 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    lVar4 = param_5;
    _objc_retainBlock(param_5);
    func_0x00010c1d0640(puVar3);
    _objc_release(lVar4);
    func_0x00010c1d0640(puVar3);
  }
  func_0x00010c1d0640(puVar3);
  if (param_7 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  puVar2 = puVar3;
  func_0x00010bf51e00();
  uVar1 = 2;
  puVar7 = puVar2;
  func_0x00010c030320();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(uVar1);
  _objc_retain(ppuVar8);
  _objc_retain(lVar9);
  _objc_retain(lVar10);
  uVar6 = 3;
  FUN_107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(uVar6);
  if (lVar9 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  if (ppuVar8 == (undefined **)0x0) {
    puVar2 = PTR_PTR_1126b1370;
    func_0x00010c25d500(PTR_PTR_1126b1370);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e4d098;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e4d098,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    ppuVar5 = ppuVar8;
    _objc_retainBlock(ppuVar8);
  }
  func_0x00010c1d0640(puVar3);
  _objc_release(ppuVar5);
  func_0x00010c1d0640(puVar3);
  if (lVar10 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  puVar2 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c030320(param_3);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(ppuVar8);
  _objc_release(uVar1);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 107fcb8d8; end: 107fcbba3; -[SCAppNotification initAsChatSentToGroup:withTitle:successBlock:customDisclosureView:customNotificationImage:] */

undefined8
FUN_107fcb8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined **param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = 3;
  FUN_107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (param_6 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  if (param_5 == (undefined **)0x0) {
    puVar2 = PTR_PTR_1126b1370;
    func_0x00010c25d500(PTR_PTR_1126b1370);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e4d098;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e4d098,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    ppuVar4 = param_5;
    _objc_retainBlock(param_5);
  }
  func_0x00010c1d0640(puVar3);
  _objc_release(ppuVar4);
  func_0x00010c1d0640(puVar3);
  if (param_7 != 0) {
    func_0x00010c1d0640(puVar3);
  }
  puVar2 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c030320(param_1);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return uVar1;
}



/* Entry: 107fcbba4; end: 107fcbbf3; -[SCAppNotification chatMessageId] */

void FUN_107fcbba4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcbbf4; end: 107fcbc43; -[SCAppNotification rawSnapId] */

void FUN_107fcbbf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcbc44; end: 107fcbc93; -[SCAppNotification communityId] */

void FUN_107fcbc44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcbc94; end: 107fcbce3; -[SCAppNotification inventoryType] */

void FUN_107fcbc94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcbce4; end: 107fcbd33; -[SCAppNotification compositeStoryId] */

void FUN_107fcbce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcbd34; end: 107fcbdc3; -[SCAppNotification snapId] */

void FUN_107fcbd34(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c120340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdcf80();
  _objc_release(uVar1);
  func_0x00010c120340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  if ((uVar2 & 1) == 0) {
    func_0x00010c25ce40(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf858);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcbdc4; end: 107fcbe0f; -[SCAppNotification displayTrackingToken] */

void FUN_107fcbdc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcbe10; end: 107fcbe77; -[SCAppNotification isForMessaging] */

undefined8 FUN_107fcbe10(ulong param_1)

{
  undefined8 uVar1;
  
  func_0x00010c11c420();
  uVar1 = 1;
  if (((0x36 < param_1) || ((1L << (param_1 & 0x3f) & 0x7fff8048263d3eU) == 0)) &&
     ((10 < param_1 - 0x76 || ((1L << (param_1 - 0x76 & 0x3f) & 0x761U) == 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107fcbe78; end: 107fcbeaf; -[SCAppNotification isForTyping] */

void FUN_107fcbe78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c11c420();
  if (lVar1 != 1) {
    func_0x00010c11c420(param_1);
  }
  return;
}



/* Entry: 107fcbeb0; end: 107fcbf1b;  */

undefined ** FUN_107fcbeb0(ulong param_1)

{
  if (param_1 < 0x17) {
    return (undefined **)(&PTR_PTR_110a168c8)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110de39b8;
}



/* Entry: 107fcbf1c; end: 107fcbf6f;  */

void FUN_107fcbf1c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113728a08 != -1) {
    func_0x00010002a2fc(0x113728a08,&PTR___NSConcreteGlobalBlock_110a167c8);
  }
  uVar1 = uRam0000000113728a00;
  _objc_retain(uRam0000000113728a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcbf70; end: 107fcbfd7;  */

void FUN_107fcbf70(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111182cf0;
  func_0x000100817178(&PTR__OBJC_CLASS___NSConstantArray_111182cf0,
                      &PTR___NSConcreteGlobalBlock_110a167e8);
  uVar1 = ppuRam0000000113728a00;
  ppuRam0000000113728a00 = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fcbfd8; end: 107fcc02b;  */

void FUN_107fcbfd8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113728a18 != -1) {
    func_0x00010002a2fc(0x113728a18,&PTR___NSConcreteGlobalBlock_110a16808);
  }
  uVar1 = uRam0000000113728a10;
  _objc_retain(uRam0000000113728a10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcc02c; end: 107fcc1eb;  */

void FUN_107fcc02c(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantArray_111182d08;
  func_0x000100817178(&PTR__OBJC_CLASS___NSConstantArray_111182d08,
                      &PTR___NSConcreteGlobalBlock_110a16828);
  uVar1 = ppuRam0000000113728a10;
  ppuRam0000000113728a10 = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fcc1ec; end: 107fcc23f;  */

void FUN_107fcc1ec(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113728a48 != -1) {
    func_0x00010002a2fc(0x113728a48,&PTR___NSConcreteGlobalBlock_110a16888);
  }
  uVar1 = uRam0000000113728a40;
  _objc_retain(uRam0000000113728a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107fcc240; end: 107fcc457;  */

void FUN_107fcc240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_107fcbf1c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  FUN_107fcbfd8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c174c00(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c174be0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113728a40;
  uRam0000000113728a40 = uVar4;
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107fcc458; end: 107fcc5eb;  */

void FUN_107fcc458(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd648);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113728a50;
  puRam0000000113728a50 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107fcc5ec; end: 107fcc687;  */

undefined8 FUN_107fcc5ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (lRam0000000113728a58 != -1) {
    func_0x00010002a2fc(0x113728a58,&PTR___NSConcreteGlobalBlock_110a168a8);
  }
  uVar1 = uRam0000000113728a50;
  _objc_retain(uRam0000000113728a50);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf4b900(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 107fcc688; end: 107fcc6db;  */

undefined8 FUN_107fcc688(ulong param_1)

{
  if (((10 < param_1 - 0xd6) || ((1L << (param_1 - 0xd6 & 0x3f) & 0x6b1U) == 0)) &&
     ((0x36 < param_1 || ((1L << (param_1 & 0x3f) & 0x60000040000000U) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 107fcc6dc; end: 107fcc7a7; +[SCAppNotification stringWithDirectionMarkupForString:] */

void FUN_107fcc6dc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
LAB_107fcc754:
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c292ae0();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e523d8;
    }
    else {
      if (puVar2 != (undefined *)0x0) goto LAB_107fcc754;
      ppuVar3 = &PTR____CFConstantStringClassReference_110ecba58;
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107fcc7a8; end: 107fcc7af; +[SCAppNotification stringFromPushType:] */

void FUN_107fcc7a8(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  if (lRam0000000113728aa8 != -1) {
    func_0x00010002a2fc(0x113728aa8,&PTR___NSConcreteGlobalBlock_110a16a68);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  ppuVar3 = ppuRam0000000113728aa0;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db54d8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  func_0x000107c61174(ppuVar1);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 107fcc7b0; end: 107fccdff; -[SCAppNotification initWithNotificationUserInfo:source:] */

undefined1 * FUN_107fcc7b0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126fbff8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) {
      uVar3 = param_3;
      func_0x00010c0d3c80();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)((long)puVar2 + 0x58);
      *(undefined **)((long)puVar2 + 0x58) = puVar4;
      _objc_release(uVar9);
      uVar5 = uVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(uVar3);
        _objc_release(puVar4);
      }
      uVar5 = uVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (uVar5 == 0) {
        _CACurrentMediaTime();
        func_0x00010c0df720(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(uVar3);
        _objc_release(puVar4);
      }
      uVar11 = *(undefined8 *)((long)puVar2 + 0x58);
      _objc_retain(uVar11);
      uVar9 = *(undefined8 *)((long)puVar2 + 0x20);
      *(undefined8 *)((long)puVar2 + 0x20) = uVar11;
      _objc_release(uVar9);
      uVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (param_4 == 0) {
        uVar6 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        uVar12 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar4);
        _objc_release(uVar6);
        if ((uVar12 & 1) == 0) goto LAB_107fccaa4;
        uVar6 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar7 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar4);
        _objc_release(uVar12);
        uVar12 = uVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((uVar7 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          uVar7 = uVar12;
          _objc_opt_isKindOfClass(uVar12,puVar4);
          _objc_release(uVar12);
          if ((uVar7 & 1) == 0) {
            uVar12 = 0;
          }
          else {
            uVar7 = uVar6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar7;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
          }
        }
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar7 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar4);
        if ((uVar7 & 1) == 0) {
          bVar1 = false;
        }
        else {
          uVar7 = uVar12;
          func_0x00010c08fa60();
          bVar1 = uVar7 != 0;
        }
        _objc_release(uVar12);
        _objc_release(uVar6);
      }
      else {
LAB_107fccaa4:
        bVar1 = false;
      }
      *(bool *)((long)puVar2 + 0x41) = bVar1;
      puVar4 = PTR_PTR_1126b1370;
      func_0x00010be3e1c0();
      if ((bVar1) && (((ulong)puVar4 & 1) == 0)) {
        func_0x00010c1d0640(uVar3);
      }
      func_0x00010c21e7c0(puVar2);
      *(long *)((long)puVar2 + 0x68) = param_4;
      uVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)((long)puVar2 + 0x10);
      *(ulong *)((long)puVar2 + 0x10) = uVar12;
      _objc_release(uVar9);
      _objc_release(uVar6);
      if (uVar5 != 0) {
        uVar6 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar6;
        func_0x00010bf51e00();
        uVar9 = *(undefined8 *)((long)puVar2 + 0x60);
        *(ulong *)((long)puVar2 + 0x60) = uVar12;
        _objc_release(uVar9);
        _objc_release(uVar6);
      }
      puVar4 = PTR_PTR_1126d3fb8;
      _objc_alloc(PTR_PTR_1126d3fb8);
      uVar6 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0447c0(puVar4);
      _objc_release(uVar7);
      _objc_release(uVar12);
      _objc_release(uVar6);
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)((long)puVar2 + 0x18);
      *(undefined **)((long)puVar2 + 0x18) = puVar8;
      _objc_release(uVar9);
      uVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x000107fd3b4c();
      *(ulong *)((long)puVar2 + 8) = uVar12;
      _objc_release(uVar6);
      if ((*(long *)((long)puVar2 + 8) - 0x71U < 0x2a) &&
         ((1L << (*(long *)((long)puVar2 + 8) - 0x71U & 0x3f) & 0x28004000005U) != 0)) {
        uVar12 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar7 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar8);
        uVar6 = uVar12;
        if ((uVar7 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar12);
        uVar9 = *(undefined8 *)((long)puVar2 + 0x98);
        *(ulong *)((long)puVar2 + 0x98) = uVar6;
        _objc_release(uVar9);
      }
      uVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      FUN_107fd3660();
      *(ulong *)((long)puVar2 + 0x28) = uVar12;
      _objc_release(uVar6);
      *(undefined1 *)((long)puVar2 + 0x42) = 0;
      puVar8 = PTR_PTR_1126d3fb0;
      func_0x00010c124c00(PTR_PTR_1126d3fb0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010c067fc0();
      *(ulong *)((long)puVar2 + 0x90) = uVar12;
      _objc_release(uVar6);
      _objc_release(puVar8);
      _objc_retain(puVar2);
      _objc_release(puVar4);
      _objc_release(uVar5);
      _objc_release(uVar3);
      puVar10 = (undefined1 *)puVar2;
      goto LAB_107fccd80;
    }
  }
  puVar10 = (undefined1 *)0x0;
LAB_107fccd80:
  _objc_release(param_3);
  _objc_release(puVar2);
  return puVar10;
}



/* Entry: 107fcce00; end: 107fccf77; -[SCAppNotification initWithUserNotificationResponse:] */

undefined8 FUN_107fcce00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0dbb80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c980(param_1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010beee7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162040(param_1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UNTextInputNotificationResponse_1126d8b78;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c293f20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213660(param_1);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0dbb80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c134680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf334a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a140(param_1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107fccf78; end: 107fccfff; -[SCAppNotification initWithUserNotification:] */

undefined8 FUN_107fccf78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c134680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030320(param_1,param_2,uVar2,2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107fcd000; end: 107fcd0d3; -[SCAppNotification initWithPostedAppNotification:mergeUserInfo:] */

undefined *
FUN_107fcd000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  func_0x00010c2203a0(uVar2,param_2,param_4);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b1370;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010c247520(param_3);
  _objc_release(param_3);
  func_0x00010c030320(puVar3,param_2,uVar2,uVar1);
  _objc_release(param_1);
  if (puVar3 != (undefined *)0x0) {
    puVar3[0x44] = 1;
  }
  _objc_release(uVar2);
  return puVar3;
}



/* Entry: 107fcd0d4; end: 107fcd427; -[SCAppNotification initWithPushType:] */

undefined8 FUN_107fcd0d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 < 0x8a) {
    if (param_3 - 0x4dU < 3) {
      func_0x0001008fcbdc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110e53418;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53418,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != 0x3a) goto LAB_107fcd3e8;
      param_3 = 0x3a;
      func_0x0001008fcbdc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110ecbab8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ecbab8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110ecbad8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ecbad8,0);
      _objc_retainAutoreleasedReturnValue();
LAB_107fcd39c:
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
    }
    _objc_release(ppuVar2);
  }
  else {
    if (param_3 == 0x8a) {
      param_3 = 0x8a;
      func_0x0001008fcbdc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110ecbaf8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ecbaf8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110ecbb18;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ecbb18,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107fcd39c;
    }
    if (param_3 != 0xbd) goto LAB_107fcd3e8;
    param_3 = 0xbd;
    func_0x0001008fcbdc();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  func_0x00010c030320(param_1);
  _objc_retain();
  _objc_release(puVar1);
  uVar5 = param_1;
LAB_107fcd3e8:
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return uVar5;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf59e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_1;
}



/* Entry: 107fcd428; end: 107fcd43b; -[SCAppNotification createUserNotificationRequestWithAttachments:experimental:] */

void FUN_107fcd428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf59e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_createUserNotificationRequestWit_1125b4138,param_3,0,0,0,param_4);
  return;
}



/* Entry: 107fcd43c; end: 107fcd913; -[SCAppNotification createUserNotificationRequestWithAttachments:rankedBestFriendsUserIds:bestFriendSoundEnabled:customSoundEnabled:experimental:] */

void FUN_107fcd43c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388;
  _objc_alloc_init(PTR__OBJC_CLASS___UNMutableNotificationContent_1126bc388);
  uVar2 = param_1;
  func_0x00010c235220();
  uVar4 = param_1;
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010beff740(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1370;
    uVar2 = param_1;
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1d560(puVar3,param_2,uVar2,&PTR____CFConstantStringClassReference_110f9ef78);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c073d60();
    if (((uVar2 & 1) != 0) || ((int)puVar3 != 0)) {
      uVar2 = param_1;
      func_0x00010beff720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 != 0) {
        uVar2 = param_1;
        func_0x00010beff720(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20f6c0(puVar1,param_2,uVar2);
        _objc_release(uVar2);
      }
    }
    func_0x00010beff3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_1;
    func_0x00010bf41a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf41a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f6c0(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010bf41a40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c172cc0(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  uVar2 = param_1;
  func_0x00010be22ca0(param_1,param_2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    func_0x00010c206940(puVar1,param_2,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UNNotificationSound_1126d8b80;
    func_0x00010c2471a0(PTR__OBJC_CLASS___UNNotificationSound_1126d8b80,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206940(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  if (param_3 != 0) {
    func_0x00010c16b420(puVar1,param_2,param_3);
  }
  uVar4 = param_1;
  func_0x00010c292820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  if (uVar6 != 0) {
    func_0x00010c12d3e0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f9eb58);
  }
  uVar4 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  if (uVar6 != 0) {
    func_0x00010c12d3e0(uVar5,param_2,&PTR____CFConstantStringClassReference_110f9eaf8);
  }
  uVar4 = uVar5;
  func_0x00010bf51e00(uVar5);
  uVar6 = param_1;
  func_0x00010be16140(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  if (uVar5 == 0) {
    uVar4 = param_1;
    func_0x00010c0dc140(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110e12538);
    _objc_release(uVar4);
  }
  uVar4 = uVar6;
  func_0x00010bf51e00(uVar6);
  func_0x00010c21e7c0(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bf33260(param_1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a140(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b1370;
  uVar4 = param_1;
  func_0x00010c292820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcf000(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar7 = puVar3;
  func_0x00010c08fa60();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c213c80(puVar1,param_2,puVar3);
  }
  uVar4 = param_1;
  func_0x00010be449e0(param_1,param_2,param_4);
  if ((int)uVar4 != 0) {
    func_0x00010c1ae660(puVar1,param_2,2);
  }
  puVar7 = PTR__OBJC_CLASS___UNNotificationRequest_1126bc390;
  func_0x00010c0dc200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1370a0(puVar7,param_2,param_1,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107fcd914; end: 107fcdacb; -[SCAppNotification _filterItemsNotConformingToSecureCoding:] */

undefined1 * FUN_107fcd914(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 unaff_x21;
  undefined8 uVar7;
  long unaff_x22;
  undefined1 *unaff_x23;
  long lVar8;
  undefined1 *unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  undefined1 *puVar9;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined **ppuStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = param_3;
  func_0x00010c0d3c80();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x25 = *plStack_120;
    unaff_x26 = &PTR_DAT_1126a5000;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(long *)(lStack_128 + (long)puVar9 * 8);
        unaff_x23 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_DAT_1126a5ab8;
        _objc_retain(unaff_x22);
        lVar2 = unaff_x22;
        func_0x00010010fab4(unaff_x22,puVar4);
        lVar8 = unaff_x22;
        if ((int)lVar2 == 0) {
          lVar8 = 0;
        }
        _objc_retain(lVar8);
        _objc_release(unaff_x22);
        puVar4 = PTR_DAT_1126a5ab8;
        unaff_x24 = (undefined1 *)0x0;
        if (lVar8 == 0) {
LAB_107fcda40:
          func_0x00010c12d3e0(puVar6);
        }
        else {
          _objc_retain(unaff_x23);
          unaff_x24 = unaff_x23;
          func_0x00010010fab4(unaff_x23,puVar4);
          _objc_release(unaff_x23);
          _objc_release(unaff_x22);
          if ((int)unaff_x24 == 0 || unaff_x23 == (undefined1 *)0x0) goto LAB_107fcda40;
        }
        _objc_release(unaff_x23);
        puVar9 = puVar9 + 1;
      } while (puVar1 != puVar9);
      puVar1 = param_3;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_250;
  pcStack_138 = FUN_107fcdacc;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  ppuStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  puStack_150 = puVar6;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar1 = puVar6;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar8 = *plStack_240;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar8) {
          _objc_enumerationMutation(puVar6);
        }
        uVar7 = *(undefined8 *)(lStack_248 + (long)puVar9 * 8);
        puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc60(puVar4);
        _objc_release(uVar7);
        _objc_release(puVar4);
        puVar9 = puVar9 + 1;
      } while (puVar1 != puVar9);
      puVar1 = puVar6;
      puVar5 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar1 = (undefined1 *)puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar4);
  if (((ulong)puVar1 & 1) == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar1 = puVar6;
    func_0x00010be1d560(puVar6);
    func_0x00010be1d560(puVar6);
    puVar6 = (undefined1 *)(ulong)((uint)puVar1 & ((uint)puVar6 ^ 1));
  }
  _objc_release(puVar5);
  return puVar6;
}



/* Entry: 107fcdacc; end: 107fcdc2b; -[SCAppNotification releaseUserNotificationRequest:] */

ulong FUN_107fcdacc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar5;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      uVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = *(undefined8 *)(lStack_118 + uVar8 * 8);
        puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc60(puVar2);
        _objc_release(uVar6);
        _objc_release(puVar2);
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
      uVar1 = uVar5;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
  }
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar4 = (undefined1 *)puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = uVar5;
    func_0x00010be1d560(uVar5);
    func_0x00010be1d560(uVar5);
    uVar5 = (ulong)((uint)uVar1 & ((uint)uVar5 ^ 1));
  }
  _objc_release(puVar3);
  return uVar5;
}



/* Entry: 107fcdc2c; end: 107fcdcdf; +[SCAppNotification _isApnsSimpleNotification:] */

uint FUN_107fcdc2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ecba78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010be1d560(param_1);
    func_0x00010be1d560(param_1);
    uVar4 = (uint)uVar3 & ((uint)param_1 ^ 1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107fcdce0; end: 107fcddb7; +[SCAppNotification _getBoolFromDict:key:] */

ulong FUN_107fcdce0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar4;
  undefined **ppuVar3;
  
  func_0x00010c0e00e0(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar4 & 1) == 0) {
    ppuVar3 = &PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      goto LAB_107fcdd9c;
    }
  }
  puVar2 = *ppuVar3;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
LAB_107fcdd9c:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107fcddb8; end: 107fcde27; +[SCAppNotification _apsThreadId:] */

void FUN_107fcddb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ecba78);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f9ec38);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


