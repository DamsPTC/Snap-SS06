/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ac41e0; end: 105ac41e7; -[SCSpectaclesPostPairingScope uiContainer] */

undefined8 FUN_105ac41e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105ac41e8; end: 105ac41ef; -[SCSpectaclesPostPairingScope postPairingInfo] */

undefined8 FUN_105ac41e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105ac41f0; end: 105ac4207; -[SCSpectaclesPostPairingScope scopeDelegate] */

void FUN_105ac41f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ac4208; end: 105ac423f; -[SCSpectaclesPostPairingScope .cxx_destruct] */

void FUN_105ac4208(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ac4240; end: 105ac43b3; -[SCPromotedStoryAttachmentActionHandler initWithAttachmentScopeExposer:attachmentScopeServices:discoverFeedDataFetcher:promotedStoryLogger:adConfigProvider:] */

undefined8 *
FUN_105ac4240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ebc30;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar3 = PTR_PTR_1126c2088;
    func_0x00010c0e95e0(PTR_PTR_1126c2088);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ac43b4; end: 105ac479f; -[SCPromotedStoryAttachmentActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105ac43b4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((int)uVar10 != 0) {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2090;
    func_0x00010bf82a20(PTR_PTR_1126c2090);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c2098;
    _objc_opt_class(PTR_PTR_1126c2098);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar2 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c2090;
    func_0x00010bf82140(PTR_PTR_1126c2090);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b1118;
    _objc_opt_class(PTR_PTR_1126b1118);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2090;
    func_0x00010bf5d540(PTR_PTR_1126c2090);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar5 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c2090;
    func_0x00010c1315e0(PTR_PTR_1126c2090);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar6 = uVar7;
    if ((uVar8 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126c2090;
    func_0x00010c068940(PTR_PTR_1126c2090);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar3);
    uVar7 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar8);
    func_0x00010c067fc0(uVar7);
    _objc_release(uVar7);
    func_0x00010bf1f3c0(uVar6);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c2090;
    func_0x00010bf34080(PTR_PTR_1126c2090);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar1 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126c20a0;
    _objc_alloc(PTR_PTR_1126c20a0);
    if (uVar1 != 0) {
      func_0x00010bdc10a0(uVar6);
    }
    func_0x00010c03b5e0(puVar3);
    func_0x00010be0d1a0(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  return uVar10;
}



/* Entry: 105ac47a0; end: 105ac492f; -[SCPromotedStoryAttachmentActionHandler _exposePromotedStoryAttachmentWithStory:sectionKey:loggingMetadata:interactionType:] */

void FUN_105ac47a0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c25b720();
  if (lVar1 == 5) {
    lVar1 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010afef744();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar2 = param_1;
      func_0x00010bdf5260(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c259560(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010afef744();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bf24100(lVar1,param_2,lVar2,lVar3,lVar5,param_5,param_6,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,lVar6);
      func_0x00010be59c20(param_1,param_2,param_3,param_4,param_5);
      _objc_release(lVar6);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ac4930; end: 105ac49ef; -[SCPromotedStoryAttachmentActionHandler _createUiContainer] */

void FUN_105ac4930(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa23e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ec0a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  ppuVar1 = &PTR_PTR_1126c20a8;
  if ((int)uVar4 == 0) {
    ppuVar1 = &PTR_PTR_1126aead8;
  }
  puVar5 = *ppuVar1;
  _objc_alloc(puVar5);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar5,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ac49f0; end: 105ac4b73; -[SCPromotedStoryAttachmentActionHandler _logTileCtaTapped:sectionKey:loggingMetadata:] */

void FUN_105ac49f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010bfa4340(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar2 = uVar1;
  func_0x00010c2827c0(uVar1);
  uVar3 = uVar6;
  func_0x00010bf009e0(uVar6,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar6);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c259560(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bfecde0(uVar3,param_4,param_5);
  _objc_release(param_5);
  func_0x00010c118260(param_7);
  uVar5 = param_7;
  func_0x00010c26ede0(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c0ad240(param_1,param_2,uVar4,param_4,uVar2,uVar6,uVar5,1);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105ac4b74; end: 105ac4b93; -[SCPromotedStoryAttachmentActionHandler promotedTileAttachmentScopeDidFinish] */

void FUN_105ac4b74(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105ac4b94; end: 105ac4bab; -[SCPromotedStoryAttachmentActionHandler presentingViewController] */

void FUN_105ac4b94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ac4bac; end: 105ac4bb7; -[SCPromotedStoryAttachmentActionHandler setPresentingViewController:] */

void FUN_105ac4bac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105ac4bb8; end: 105ac4c1b; -[SCPromotedStoryAttachmentActionHandler .cxx_destruct] */

void FUN_105ac4bb8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ac4c1c; end: 105ac4cbf; -[SCPromotedStoryAttachmentUiContainer initWithPresentingViewController:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105ac4c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ebc38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithPresentingViewController_1125ebdd0,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11272ee58;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    *(char *)((long)puVar1 + (long)_DAT_11272ee5c) = (char)param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ac4cc0; end: 105ac4db7; -[SCPromotedStoryAttachmentUiContainer attachUI:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac4cc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272ee58);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010bf17b00(uVar2);
  puVar1 = PTR_s_attachUI_completion__1125a0c10;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ac4db8;
  puStack_58 = &UNK_11084aaa8;
  puStack_78 = PTR_PTR_1126ebc38;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_80 = param_1;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_80,puVar1,param_3,&puStack_70);
  _objc_release(param_3);
  _objc_release(uStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 105ac4db8; end: 105ac4df3;  */

void FUN_105ac4db8(long param_1)

{
  func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ac4de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ac4df4; end: 105ac4ecb; -[SCPromotedStoryAttachmentUiContainer detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac4df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272ee58);
  _objc_retain(uVar2);
  func_0x00010bf17b00(uVar2);
  puVar1 = PTR_s_detachUI__1125b96b8;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ac4ecc;
  puStack_48 = &UNK_11084aaa8;
  puStack_68 = PTR_PTR_1126ebc38;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_70 = param_1;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_70,puVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105ac4ecc; end: 105ac4f07;  */

void FUN_105ac4ecc(long param_1)

{
  func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ac4ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ac4f08; end: 105ac4f1b; -[SCPromotedStoryAttachmentUiContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac4f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ee58,0);
  return;
}



/* Entry: 105ac4f1c; end: 105ac5273; -[SCBitmojiFriendProfileSharingScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac4f1c(long param_1)

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
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  
  lVar1 = param_1 + _DAT_11272ee60;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e220();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c20b0;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272ee64;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_11272ee68;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11272ee6c;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010bf12e00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272ee70;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11272ee74;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c111b40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272ee78;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_11272ee7c;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf1b5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_11272ee80;
  lVar15 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf418c0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar17 = lVar27;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11272ee84;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_11272ee88;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bfa0c40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11272ee8c;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf50a40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11272ee90;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c110fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015a20();
  lVar28 = (long)_DAT_11272ee94;
  uVar26 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar4;
  _objc_release(uVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar27);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar28),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 105ac5274; end: 105ac533f; -[SCBitmojiFriendProfileSharingScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac5274(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ee78);
  _objc_destroyWeak(param_1 + _DAT_11272ee60);
  _objc_destroyWeak(param_1 + _DAT_11272ee90);
  _objc_destroyWeak(param_1 + _DAT_11272ee8c);
  _objc_destroyWeak(param_1 + _DAT_11272ee74);
  _objc_destroyWeak(param_1 + _DAT_11272ee84);
  _objc_destroyWeak(param_1 + _DAT_11272ee80);
  _objc_destroyWeak(param_1 + _DAT_11272ee7c);
  _objc_destroyWeak(param_1 + _DAT_11272ee70);
  _objc_destroyWeak(param_1 + _DAT_11272ee6c);
  _objc_destroyWeak(param_1 + _DAT_11272ee88);
  _objc_destroyWeak(param_1 + _DAT_11272ee68);
  _objc_destroyWeak(param_1 + _DAT_11272ee64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ee94,0);
  return;
}



/* Entry: 105ac5340; end: 105ac5357;  */

void FUN_105ac5340(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105ac5358; end: 105ac5437;  */

void FUN_105ac5358(long param_1,undefined8 param_2)

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



/* Entry: 105ac5438; end: 105ac5847; -[SCBitmojiFriendProfileSharingWorkflow initWithFriendProfileSharingScope:notificationPool:bitmojiAvatarDataServices:avatarProvider:previewScopeLauncher:previewScopeBuilderServices:bitmojiFlatlandInfoProvider:flatlandCombinedContentFetcher:flatlandConfigProvider:snapDocEditorServices:bitmojiOutfitSharingLogger:conversationUpdaterEventPublisher:previewFilterDataProviderFactory:bitmojiStyle:] */

undefined8 *
FUN_105ac5438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_70 = PTR_PTR_1126ebc40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 6,uVar2);
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar1[0x14] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    _objc_retain(param_15);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_15;
    _objc_release(uVar2);
    puVar1[0x15] = param_16;
    _objc_initWeak(auStack_80,puVar1);
    uVar4 = puVar1[0xd];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c15b920();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ac5848; end: 105ac58af;  */

void FUN_105ac5848(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c252d60();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 0) {
    func_0x00010be2fd60();
  }
  else {
    func_0x00010be02260();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ac58b0; end: 105ac58b3; -[SCBitmojiFriendProfileSharingWorkflow begin] */

void FUN_105ac58b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd3a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginProfileSharingWithMedia_112552840);
  return;
}



/* Entry: 105ac58b4; end: 105ac5a6b; -[SCBitmojiFriendProfileSharingWorkflow _handleSendCompletedWithResult:] */

void FUN_105ac58b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf43e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf43e40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + lVar2;
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf50640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010bf43f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf43f60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c261c60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c15f5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    *(long *)(param_1 + 0x98) = lVar3;
    _objc_release(uVar4);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf43f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf529e0();
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + lVar3;
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  func_0x00010be58880(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ac5a6c; end: 105ac5b7b; -[SCBitmojiFriendProfileSharingWorkflow _presentNotficationForResult:] */

void FUN_105ac5a6c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126afde0;
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1c5f8;
    ppuVar1 = ppuVar2;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
    ppuVar1 = ppuVar2;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ac5b7c; end: 105ac5c03; -[SCBitmojiFriendProfileSharingWorkflow _fetchAvatarDataWithCompletion:] */

void FUN_105ac5b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ac5c04;
  puStack_30 = &UNK_1108d3840;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc2c80(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105ac5c04; end: 105ac5c0f;  */

void FUN_105ac5c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105ac5c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105ac5c10; end: 105ac5cfb; -[SCBitmojiFriendProfileSharingWorkflow _beginProfileSharingWithMedia] */

void FUN_105ac5c10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be13b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010c25ff60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ac5cfc; end: 105ac5db7;  */

void FUN_105ac5cfc(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ac5db8;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105ac5db8; end: 105ac5e93;  */

void FUN_105ac5db8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ac5e94;
  puStack_50 = &UNK_110846320;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  func_0x00010c0c0800(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105ac5e94; end: 105ac5f07;  */

void FUN_105ac5e94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac5f08; end: 105ac655f; -[SCBitmojiFriendProfileSharingWorkflow _showPreviewEditorWithImage:] */

/* WARNING: Possible PIC construction at 0x000105ac6294: Changing call to branch */

void FUN_105ac5f08(double param_1,double param_2,long param_3,undefined *param_4,long param_5)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  double dVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  iVar2 = (int)*(undefined8 *)(param_3 + 0x40);
  func_0x00010c076220();
  if (iVar2 != 0) {
    func_0x00010bf94c20(*(undefined8 *)(param_3 + 0x40));
  }
  puVar3 = PTR_PTR_1126afee0;
  _objc_alloc(PTR_PTR_1126afee0);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180(puVar3);
  _objc_release(puVar12);
  func_0x00010c1c5440(puVar3);
  func_0x00010c23d0a0(param_5);
  dVar17 = param_1;
  func_0x00010c14e120(param_5);
  param_1 = param_1 * dVar17;
  param_2 = param_2 * dVar17;
  func_0x00010c1c5240(puVar3);
  func_0x00010c0c6700(puVar3);
  dVar17 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar17 = INFINITY;
    }
    else {
      dVar17 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar17,puVar3);
  func_0x00010c1a1640(puVar3);
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  puVar12 = PTR_PTR_1126c20c0;
  _objc_alloc(PTR_PTR_1126c20c0);
  func_0x00010c040460(0,0x3ff0000000000000,0,0,dVar17,param_2);
  func_0x00010c186260(puVar3);
  _objc_release(puVar12);
  func_0x00010c2056c0(puVar3);
  func_0x00010c204fa0(puVar3);
  puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1856c0(puVar3);
  _objc_release(puVar12);
  uVar4 = *(undefined8 *)(param_3 + 0xb0);
  func_0x00010bfc58a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(puVar3);
  _objc_release(uVar4);
  iVar2 = (int)*(undefined8 *)(param_3 + 8);
  func_0x00010bfa0be0();
  if (iVar2 == 0) {
    uVar5 = *(undefined8 *)(param_3 + 8);
    func_0x00010c244280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e640(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar4 = *(undefined8 *)(param_3 + 8);
    func_0x00010bf93600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1957c0(puVar3);
    _objc_release(uVar4);
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126c20c8;
    _objc_alloc_init();
    func_0x00010c206c40();
    uVar4 = *(undefined8 *)(param_3 + 8);
    func_0x00010bf12f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + 8);
    func_0x00010bf12f20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar7 = puVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar7 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        lVar16 = *(long *)((long)puVar14 * 8);
        func_0x00010c08fa60();
        if (lVar16 != 0) {
          puVar8 = PTR_PTR_1126c20d0;
          _objc_alloc_init(PTR_PTR_1126c20d0);
          func_0x00010c16da00();
          puVar9 = puVar12;
          func_0x00010bf1b480(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        puVar14 = puVar14 + 1;
      } while (puVar7 != puVar14);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    puVar7 = puVar12;
    func_0x00010bf1b480();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    if (puVar6 != (undefined *)0x0) goto code_r0x00010c170d40;
  }
  func_0x00010c2005e0(puVar3);
  func_0x00010bf42760(puVar3);
  uVar5 = *(undefined8 *)(param_3 + 0x78);
  func_0x00010bf9f4a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126affc0;
  func_0x00010c27eee0(PTR_PTR_1126affc0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bf8cb20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar5);
  puVar7 = puVar12;
  func_0x00010bf1b480();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010bf529e0();
  _objc_release(puVar7);
  if (puVar6 != (undefined *)0x0) {
    _objc_retain(puVar12);
    func_0x00010c2849a0(uVar4);
    _objc_release(puVar12);
  }
  uVar10 = *(undefined8 *)(param_3 + 8);
  func_0x00010c244280(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + 8);
  func_0x00010c244280(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc76e0(param_3);
  _objc_release(uVar15);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(uVar10);
  uVar15 = *(undefined8 *)(param_3 + 0x48);
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22c20(uVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c08b7c0(*(undefined8 *)(param_3 + 0x40));
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  puVar3 = param_4;
  ___stack_chk_fail();
  puVar12 = *(undefined **)(param_5 + 0x20);
code_r0x00010c170d40:
                    /* WARNING: Could not recover jumptable at 0x00010c170d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_setBitmojiFashionContext__112639d70,puVar12);
  return;
}



/* Entry: 105ac6560; end: 105ac656b;  */

void FUN_105ac6560(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c170d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setBitmojiFashionContext__112639d70,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105ac656c; end: 105ac6777; -[SCBitmojiFriendProfileSharingWorkflow _fetchSceneOnBackgroundImage] */

void FUN_105ac656c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1af20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1af20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_initWeak(auStack_58,param_1);
  lVar2 = param_1;
  func_0x00010be9ad80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2360(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105ac6778;
  puStack_68 = &UNK_1108d3870;
  _objc_retain(uVar7);
  lVar3 = lVar2;
  uStack_60 = uVar7;
  func_0x00010bf41860(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  lVar4 = lVar3;
  func_0x00010bfb2660(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar3);
  _objc_release(uStack_60);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105ac6778; end: 105ac69cb;  */

void FUN_105ac6778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105ac5340;
  uStack_80 = 0x105ac5350;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_105ac5340;
  uStack_b0 = 0x105ac5350;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_105ac5340;
  uStack_e0 = 0x105ac5350;
  uStack_d8 = 0;
  func_0x00010c0c0800(param_2);
  func_0x00010c0c0800(param_3);
  puVar2 = PTR_PTR_1126af5d0;
  if (puStack_f8[5] == 0) {
    puVar1 = PTR_PTR_1126c20b8;
    _objc_alloc(PTR_PTR_1126c20b8);
    func_0x00010c041aa0();
    func_0x00010c2619e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ac69cc; end: 105ac6b67;  */

void FUN_105ac69cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105ac5340;
  uStack_40 = 0x105ac5350;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105ac5340;
  uStack_70 = 0x105ac5350;
  uStack_68 = 0;
  func_0x00010c0c0800(param_2);
  puVar2 = PTR_PTR_1126ae6b8;
  if (puStack_88[5] == 0) {
    puVar1 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010be13ba0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ac6b68; end: 105ac6bd7;  */

void FUN_105ac6b68(long param_1,undefined8 param_2)

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



/* Entry: 105ac6bd8; end: 105ac6e37; -[SCBitmojiFriendProfileSharingWorkflow _fetchSceneOnBackgroundWithInfo:] */

void FUN_105ac6bd8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af5d8;
  _objc_alloc(PTR_PTR_1126af5d8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf12f00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf12f20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c14fa80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6000(puVar1,param_2,uVar2,uVar3,puVar5,0,1,0x2d);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = param_3;
  func_0x00010bfc0ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c08fa60();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126afd80;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010bf14060(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5e80(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126afd88;
    _objc_alloc(PTR_PTR_1126afd88);
    func_0x00010bff6380();
    puVar6 = *(undefined **)(param_1 + 0x58);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fa840(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fa860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfa9f40(puVar6,param_2,puVar1,puVar4,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x58);
    func_0x00010c269d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bfc0ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(param_1 + 8);
    func_0x00010c0fa840(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0fa860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bfa9f60(puVar5,param_2,puVar1,puVar4,puVar6,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105ac6e38; end: 105ac6ebf; -[SCBitmojiFriendProfileSharingWorkflow _sceneIdObservable] */

void FUN_105ac6e38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126af5d0;
  puVar3 = PTR_PTR_1126ae6b8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c14fa80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ac6ec0; end: 105ac6fef; -[SCBitmojiFriendProfileSharingWorkflow _backgroundIdObservable] */

void FUN_105ac6ec0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  puVar7 = PTR_PTR_1126ae6b8;
  if (lVar2 == 0) {
    puVar4 = *(undefined **)(param_1 + 0x60);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c244280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf68de0(puVar4,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  else {
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar7,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105ac6ff0; end: 105ac7167; -[SCBitmojiFriendProfileSharingWorkflow _addMentionStickerToSnapDocEditor:username:userId:] */

void FUN_105ac6ff0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b13b0;
  func_0x00010c0ca620(PTR_PTR_1126b13b0,param_6,param_8,param_9,0,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb310;
  _objc_alloc(PTR_PTR_1126bb310);
  func_0x00010c020180();
  func_0x00010bfb68e0();
  dVar5 = 28.0 / param_4;
  func_0x00010bfb68e0(puVar2);
  dVar6 = param_3 * dVar5;
  func_0x00010bfb68e0(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b13b8;
  dVar5 = (dVar5 * param_4) / (param_3 / 0.5625);
  puVar4 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb980(dVar6 / param_3,dVar5,0x3fe0000000000000,
                      8.0 / (param_3 / 0.5625) + dVar5 * 0.5 + 0.825,0x3ff0000000000000,0,puVar3,
                      param_6,puVar1,param_7,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105ac7168; end: 105ac716b; -[SCBitmojiFriendProfileSharingWorkflow didCancelFromPreview:] */

void FUN_105ac7168(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 105ac716c; end: 105ac716f; -[SCBitmojiFriendProfileSharingWorkflow didSendDiscoverSharedMessageWithParameters:] */

void FUN_105ac716c(void)

{
  return;
}



/* Entry: 105ac7170; end: 105ac718b; -[SCBitmojiFriendProfileSharingWorkflow didSendSnapsAndPostToStory:storyTypes:] */

void FUN_105ac7170(long param_1,undefined8 param_2,int param_3)

{
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNotficationForResult__11257ccd0,0);
  return;
}



/* Entry: 105ac718c; end: 105ac7197; -[SCBitmojiFriendProfileSharingWorkflow didPostStoryWithStoryTypes:] */

void FUN_105ac718c(long param_1)

{
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 105ac7198; end: 105ac723f; -[SCBitmojiFriendProfileSharingWorkflow _dismiss] */

void FUN_105ac7198(undefined8 param_1)

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
  pcStack_40 = FUN_105ac7240;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ac7240; end: 105ac7323;  */

void FUN_105ac7240(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27ece0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105ac7324; end: 105ac734b; -[SCBitmojiFriendProfileSharingWorkflow _dismissPreviewWithError] */

void FUN_105ac7324(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be7ccc0(param_1,param_2,0xc);
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 105ac734c; end: 105ac73e7; -[SCBitmojiFriendProfileSharingWorkflow _jsonStringFromDictionary:] */

void FUN_105ac734c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  puVar3 = puVar2;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ac73e8; end: 105ac7503; -[SCBitmojiFriendProfileSharingWorkflow _dictionaryFromAvatarData:] */

void FUN_105ac73e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0ec460(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105ac7494;
  puStack_40 = &UNK_11084dad8;
  puStack_38 = puVar1;
  func_0x00010bf97cc0(uVar2,param_2,&puStack_58);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ac7504; end: 105ac75fb; -[SCBitmojiFriendProfileSharingWorkflow _logShareOutfitSendWithAvatarOptionIds:] */

void FUN_105ac7504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfb9700(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c14fa80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c117240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af620(uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 105ac75fc; end: 105ac76cf; -[SCBitmojiFriendProfileSharingWorkflow _logShareOutfitMediaSendIfPossible] */

void FUN_105ac75fc(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x88);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x98);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      return;
    }
  }
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be0fd40(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ac76d0; end: 105ac7717;  */

void FUN_105ac76d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac7718; end: 105ac777b; -[SCBitmojiFriendProfileSharingWorkflow _finishLoggingShareOutfitMediaSendWithAvatarData:] */

void FUN_105ac7718(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bdfc140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be46640(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be588a0(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ac777c; end: 105ac7867; -[SCBitmojiFriendProfileSharingWorkflow .cxx_destruct] */

void FUN_105ac777c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105ac7868; end: 105ac7c33; -[SCBitmojiOutfitSharingScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac7868(long param_1)

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
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  
  lVar1 = param_1 + _DAT_11272eef0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e220();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c20d8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272eef4;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_11272eef8;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11272eefc;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010bfa0c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272ef00;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf12e00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11272ef04;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11272ef0c;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_11272ef10;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf1b5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_11272ef14;
  lVar16 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf418c0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar18 = lVar31;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11272ef18;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_11272ef1c;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf50a40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11272ef20;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11272ef24;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c110fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11272ef28;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c0d0940();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11272ef2c;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c150160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032700();
  lVar32 = (long)_DAT_11272ef30;
  uVar30 = *(undefined8 *)(param_1 + lVar32);
  *(undefined **)(param_1 + lVar32) = puVar4;
  _objc_release(uVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar31);
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
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar32),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 105ac7c34; end: 105ac7d27; -[SCBitmojiOutfitSharingScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac7c34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ef08,0);
  _objc_destroyWeak(param_1 + _DAT_11272ef0c);
  _objc_destroyWeak(param_1 + _DAT_11272ef2c);
  _objc_destroyWeak(param_1 + _DAT_11272ef28);
  _objc_destroyWeak(param_1 + _DAT_11272eef0);
  _objc_destroyWeak(param_1 + _DAT_11272ef24);
  _objc_destroyWeak(param_1 + _DAT_11272ef20);
  _objc_destroyWeak(param_1 + _DAT_11272ef1c);
  _objc_destroyWeak(param_1 + _DAT_11272ef18);
  _objc_destroyWeak(param_1 + _DAT_11272ef14);
  _objc_destroyWeak(param_1 + _DAT_11272ef10);
  _objc_destroyWeak(param_1 + _DAT_11272ef04);
  _objc_destroyWeak(param_1 + _DAT_11272ef00);
  _objc_destroyWeak(param_1 + _DAT_11272eefc);
  _objc_destroyWeak(param_1 + _DAT_11272eef8);
  _objc_destroyWeak(param_1 + _DAT_11272eef4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ef30,0);
  return;
}



/* Entry: 105ac7d28; end: 105ac7d3f;  */

void FUN_105ac7d28(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105ac7d40; end: 105ac7e1f;  */

void FUN_105ac7d40(long param_1,undefined8 param_2)

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



/* Entry: 105ac7e20; end: 105ac830f; -[SCBitmojiOutfitSharingScopeWorkflow initWithOutfitSharingScope:notificationPool:bitmojiOutfitSharingLogger:bitmojiAvatarDataServices:avatarProvider:previewScopeExposer:previewScopeBuilderServices:bitmojiFlatlandInfoProvider:flatlandCombinedContentFetcher:flatlandConfigProvider:snapDocEditorServices:conversationUpdaterEventPublisher:circumstanceEngine:previewFilterDataProviderFactory:bitmojiStyle:modularCameraPresenter:lensScheduleServiceProvider:] */

undefined8 *
FUN_105ac7e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126ebc48;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(puVar1 + 6,uVar2);
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_19;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x11) = 0;
    *(undefined1 *)(puVar1 + 0x13) = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = param_17;
    uVar2 = param_15;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0x17) = (char)uVar2;
    if ((int)uVar2 != 0) {
      lVar4 = puVar1[1];
      func_0x00010c0ee860();
      if (lVar4 == 0) {
        _objc_initWeak(auStack_80,puVar1);
        uVar5 = puVar1[0xf];
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010c15b920();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_88,auStack_80);
        uVar6 = uVar2;
        func_0x00010c25ff60(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar6);
        _objc_release(uVar2);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_80);
      }
    }
  }
  _objc_release(param_19);
  _objc_release(param_18);
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



/* Entry: 105ac8310; end: 105ac8357;  */

void FUN_105ac8310(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fd60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac8358; end: 105ac83a7; -[SCBitmojiOutfitSharingScopeWorkflow begin] */

void FUN_105ac8358(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0ee860();
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd3950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginOutfitSharingWithMedia_1125527f0);
    return;
  }
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd3710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginMyProfileLensCarousel_112552760);
    return;
  }
  return;
}



/* Entry: 105ac83a8; end: 105ac84b7; -[SCBitmojiOutfitSharingScopeWorkflow _presentNotficationForResult:] */

void FUN_105ac83a8(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126afde0;
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1c5f8;
    ppuVar1 = ppuVar2;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c5f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
    ppuVar1 = ppuVar2;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ac84b8; end: 105ac853f; -[SCBitmojiOutfitSharingScopeWorkflow _fetchAvatarDataWithCompletion:] */

void FUN_105ac84b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ac8540;
  puStack_30 = &UNK_1108d3840;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc2c80(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105ac8540; end: 105ac854b;  */

void FUN_105ac8540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105ac8548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105ac854c; end: 105ac85e7; -[SCBitmojiOutfitSharingScopeWorkflow _jsonStringFromDictionary:] */

void FUN_105ac854c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  puVar3 = puVar2;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ac85e8; end: 105ac8703; -[SCBitmojiOutfitSharingScopeWorkflow _dictionaryFromAvatarData:] */

void FUN_105ac85e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0ec460(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105ac8694;
  puStack_40 = &UNK_11084dad8;
  puStack_38 = puVar1;
  func_0x00010bf97cc0(uVar2,param_2,&puStack_58);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ac8704; end: 105ac8853; -[SCBitmojiOutfitSharingScopeWorkflow _logShareOutfitSendWithAvatarOptionIds:totalUniqueUserRecipientCount:] */

void FUN_105ac8704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c247520();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c247520(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c117240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af620(uVar3);
  _objc_release(param_3);
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c0ee860();
    if (lVar2 == 0) {
      if (*(char *)(param_1 + 0x70) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be03250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__dismissPreviewWithShouldRemoveS_11255e630);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010be03030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__dismissOutfitSharingWithShouldR_11255e5a8,1);
      return;
    }
  }
  return;
}



/* Entry: 105ac8854; end: 105ac8d73; -[SCBitmojiOutfitSharingScopeWorkflow _beginMyProfileLensCarousel] */

void FUN_105ac8854(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [136];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = &PTR_PTR_1126b6000;
  puVar1 = PTR_PTR_1126b6868;
  _objc_alloc();
  func_0x00010c02dd60();
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c15f740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xf0) = uVar4;
  _objc_release(uVar14);
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c0898a0(*(undefined8 *)(param_2 + 8));
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar19 = param_1;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  _objc_initWeak(auStack_110,param_2);
  if (param_1 <= 0.0 || (86400.0 <= dVar19 - param_1 || dVar19 - param_1 < 0.0)) {
    puVar13 = auStack_110;
    _objc_copyWeak(auStack_1b0,puVar13);
    func_0x00010bdd3620(param_2);
    _objc_destroyWeak(auStack_1b0);
  }
  else {
    puVar3 = PTR_PTR_1126b6868;
    _objc_alloc();
    func_0x00010c02de60();
    uVar2 = *(undefined8 *)(param_2 + 0xd0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c15f740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined8 *)(param_2 + 0xe8);
    uVar14 = *puVar16;
    *puVar16 = uVar4;
    _objc_release(uVar14);
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(uVar2);
    func_0x00010c251660(*puVar16);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    lVar6 = *(long *)(param_2 + 0xe8);
    func_0x00010bf273a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar17 = *plStack_140;
      do {
        lVar18 = 0;
        do {
          if (*plStack_140 != lVar17) {
            _objc_enumerationMutation(lVar6);
          }
          uVar8 = *(undefined8 *)(lStack_148 + lVar18 * 8);
          func_0x00010bef0bc0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar5);
          _objc_release(uVar8);
          lVar18 = lVar18 + 1;
        } while (lVar7 != lVar18);
        lVar7 = lVar6;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar6);
    puVar9 = puVar5;
    func_0x00010bf529e0();
    if (puVar9 == (undefined *)0x0) {
      ppuVar10 = *(undefined ***)(param_2 + 0xe8);
      func_0x00010c0cae20(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar10;
      func_0x00010bfad7a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar11;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a0 = 0xc2000000;
      pcStack_198 = FUN_105ac8e20;
      puStack_190 = &UNK_110871268;
      puVar13 = auStack_110;
      _objc_copyWeak(auStack_188,puVar13);
      ppuVar12 = ppuVar15;
      func_0x00010c25ff60(ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(ppuVar12);
      _objc_release(ppuVar15);
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_destroyWeak(auStack_188);
    }
    else {
      puVar9 = puVar5;
      func_0x00010bf51e00();
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_105ac8d74;
      puStack_168 = &UNK_1108d3900;
      ppuVar15 = &puStack_180;
      puVar13 = auStack_110;
      _objc_copyWeak(auStack_158,puVar13);
      _objc_retain(puVar9);
      puStack_160 = puVar9;
      func_0x00010bdd3620(param_2);
      _objc_release(puStack_160);
      _objc_destroyWeak(auStack_158);
      _objc_release(puVar9);
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_destroyWeak(auStack_110);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar15 + 5);
  _objc_destroyWeak(auStack_110);
  __Unwind_Resume();
  _objc_retain(puVar13);
  puVar1 = puVar1 + 0x28;
  _objc_loadWeakRetained(puVar1);
  puVar3 = puVar1;
  func_0x00010bdcf080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ac8d74; end: 105ac8ddb;  */

void FUN_105ac8d74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdcf080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ac8ddc; end: 105ac8e1f;  */

bool FUN_105ac8ddc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bef0bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 105ac8e20; end: 105ac8f1b;  */

void FUN_105ac8e20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bef0bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010bdd3620(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105ac8f1c; end: 105ac8fef;  */

void FUN_105ac8f1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdcf080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ac8ff0; end: 105ac92ef; -[SCBitmojiOutfitSharingScopeWorkflow _beginLensCarouselWithNamespaceService:lensDataBuilder:] */

void FUN_105ac8ff0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [136];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c251660(param_3);
  _objc_initWeak(auStack_f0,param_1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = param_3;
  func_0x00010bf273a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = param_4;
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(lStack_128 + lVar5 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_158 = 0xc2000000;
          pcStack_150 = FUN_105ac92f0;
          puStack_148 = &UNK_110841fb0;
          _objc_copyWeak(auStack_138,auStack_f0);
          _objc_retain(lVar3);
          lStack_140 = lVar3;
          func_0x0001000d76cc("APPSTORE",&puStack_160);
          _objc_release(lStack_140);
          _objc_destroyWeak(auStack_138);
          _objc_release(lVar3);
          goto LAB_105ac9248;
        }
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0cae20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_168,auStack_f0);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_168);
  lVar1 = param_4;
LAB_105ac9248:
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_f0);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f0);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be7c220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ac92f0; end: 105ac9367;  */

void FUN_105ac92f0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac9368; end: 105ac9443;  */

void FUN_105ac9368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ac9444;
  puStack_48 = &UNK_110841fb0;
  _objc_retain();
  lStack_40 = lVar1;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(lStack_40);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105ac9444; end: 105ac9483;  */

void FUN_105ac9444(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7c220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ac9484; end: 105ac950b; +[SCBitmojiOutfitSharingScopeWorkflow selectedLensForSkipToLensFeed:profileLens:lensFeed:] */

void FUN_105ac9484(undefined8 param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 == 0) || (lVar1 = param_5, func_0x00010bf529e0(), lVar1 == 0)) {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  else {
    lVar1 = param_5;
    func_0x00010c0dfd40(param_5,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ac950c; end: 105ac96c3; -[SCBitmojiOutfitSharingScopeWorkflow _arBarFriendsLensDataFromNamespaceData:fashionLenses:] */

void FUN_105ac950c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_3;
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126b0820;
    _objc_alloc(PTR_PTR_1126b0820);
    puVar2 = puVar7;
    func_0x00010c2b2880();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bef0bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2,param_2,lVar5);
    _objc_release(lVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010bfecf00(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = PTR_PTR_1126c20d8;
    func_0x00010c159a60(PTR_PTR_1126c20d8,param_2,lVar5 != 0,puVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae6b0;
    _objc_alloc(PTR_PTR_1126ae6b0);
    func_0x00010c025e20();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105ac96c4; end: 105ac9727; -[SCBitmojiOutfitSharingScopeWorkflow _preselectedReplyDestination] */

void FUN_105ac96c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c122e80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ae6c0;
    func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ac9728; end: 105ac99c7; -[SCBitmojiOutfitSharingScopeWorkflow _presentLensCarouselWithLensData:] */

void FUN_105ac9728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xe0));
  }
  else {
    *(undefined1 *)(param_1 + 0xd8) = 1;
    puVar1 = PTR_PTR_1126c0e38;
    _objc_alloc();
    func_0x00010c019f00();
    puVar2 = PTR_PTR_1126c20e0;
    _objc_alloc(PTR_PTR_1126c20e0);
    func_0x00010c054660();
    puVar3 = PTR_PTR_1126ae6d0;
    _objc_alloc(PTR_PTR_1126ae6d0);
    lVar4 = param_1;
    func_0x00010be79c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e5a0(puVar3);
    _objc_release(lVar4);
    puVar5 = PTR_PTR_1126ae6d8;
    _objc_alloc(PTR_PTR_1126ae6d8);
    func_0x00010c0460c0();
    puVar6 = PTR_PTR_1126b0100;
    _objc_alloc(PTR_PTR_1126b0100);
    func_0x00010bff7380();
    puVar7 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar10 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined **)(param_1 + 0xe0) = puVar7;
    _objc_release(uVar10);
    _objc_initWeak(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c10fd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c10b5e0(uVar8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ac99c8; end: 105ac99fb;  */

void FUN_105ac99c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac99fc; end: 105ac9a9f; -[SCBitmojiOutfitSharingScopeWorkflow _dismissLensCarouselWithDidSendSnap:] */

void FUN_105ac99fc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010be2d860();
  if (param_3 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105ac9aa0;
    puStack_40 = &UNK_110842e18;
    uStack_38 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    func_0x00010be0fd40(param_1);
  }
  return;
}



/* Entry: 105ac9aa0; end: 105ac9aab;  */

void FUN_105ac9aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ccd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentNotficationForResult__11257ccd0,0);
  return;
}



/* Entry: 105ac9aac; end: 105ac9b6f;  */

void FUN_105ac9aac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010bdfc140(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ac9b70;
  puStack_48 = &UNK_110841f80;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 105ac9b70; end: 105ac9b7f;  */

void FUN_105ac9b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be588d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logShareOutfitSendWithAvatarOpt_112573bd0,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105ac9b80; end: 105ac9bc3; -[SCBitmojiOutfitSharingScopeWorkflow _handleOutfitSharingScopeDismissedWithLensCarousel] */

void FUN_105ac9b80(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xd8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1be00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac9bc4; end: 105ac9caf; -[SCBitmojiOutfitSharingScopeWorkflow _beginOutfitSharingWithMedia] */

void FUN_105ac9bc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be13b60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010c25ff60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ac9cb0; end: 105ac9d6b;  */

void FUN_105ac9cb0(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ac9d6c;
  puStack_48 = &UNK_110841fb0;
  _objc_retain(param_2);
  uStack_40 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105ac9d6c; end: 105ac9e47;  */

void FUN_105ac9d6c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ac9e48;
  puStack_50 = &UNK_110846320;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  func_0x00010c0c0800(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105ac9e48; end: 105ac9ebb;  */

void FUN_105ac9e48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac9ebc; end: 105aca30f; -[SCBitmojiOutfitSharingScopeWorkflow _showPreviewEditorWithImage:] */

void FUN_105ac9ebc(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126afee0;
  _objc_alloc(PTR_PTR_1126afee0);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,&UNK_10f327996);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004180(puVar1,param_4,puVar2,0);
  _objc_release(puVar2);
  func_0x00010c1c5440(puVar1,param_4,0);
  func_0x00010c23d0a0(param_5);
  dVar11 = param_1;
  func_0x00010c14e120(param_5);
  param_1 = param_1 * dVar11;
  param_2 = param_2 * dVar11;
  func_0x00010c1c5240(puVar1);
  func_0x00010c0c6700(puVar1);
  dVar11 = 0.0;
  if (param_1 != 0.0) {
    if (param_2 == 0.0) {
      dVar11 = INFINITY;
    }
    else {
      dVar11 = param_1 / param_2;
    }
  }
  func_0x00010c1c40c0(dVar11,puVar1);
  func_0x00010c1a1640(puVar1,param_4,param_5);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105aca310;
  puStack_90 = &UNK_110853e70;
  _objc_retain(param_5);
  uStack_88 = param_5;
  func_0x00010c205400(puVar1,param_4,&puStack_a8);
  func_0x00010c0c2640(PTR_PTR_1126bf720);
  puVar9 = PTR_PTR_1126c20c0;
  _objc_alloc(PTR_PTR_1126c20c0);
  func_0x00010c040460(0,0x3ff0000000000000,0,0,dVar11,param_2);
  func_0x00010c186260(puVar1,param_4,puVar9);
  _objc_release(puVar9);
  func_0x00010c2056c0(puVar1,param_4,0x19);
  func_0x00010c204fa0(puVar1,param_4,0x5d);
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1856c0(puVar1,param_4,puVar9);
  _objc_release(puVar9);
  uVar3 = *(undefined8 *)(param_3 + 0xc0);
  func_0x00010bfc58a0(uVar3,param_4,0x19,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bee0(puVar1,param_4,uVar3);
  _objc_release(uVar3);
  lVar4 = *(long *)(param_3 + 8);
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c20c8;
    _objc_alloc_init();
    func_0x00010c206c40();
    puVar6 = PTR_PTR_1126c20d0;
    _objc_alloc_init(PTR_PTR_1126c20d0);
    func_0x00010c16da00();
    puVar7 = puVar9;
    func_0x00010bf1b480(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar7);
    func_0x00010c170d40(puVar1,param_4,puVar9);
    _objc_release(puVar6);
  }
  func_0x00010c2005e0(puVar1,param_4,1);
  func_0x00010bf42760(puVar1);
  uVar8 = *(undefined8 *)(param_3 + 0x80);
  func_0x00010bf9f4a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_c0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_b0 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar6 = PTR_PTR_1126affc0;
  func_0x00010c27eee0(PTR_PTR_1126affc0,param_4,param_5,&uStack_c0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf8cb20(uVar8,param_4,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar8);
  puVar6 = puVar9;
  func_0x00010bf1b480();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  if (puVar7 != (undefined *)0x0) {
    puStack_e8 = puVar2;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105aca338;
    puStack_d0 = &UNK_110853ea0;
    _objc_retain(puVar9);
    puStack_c8 = puVar9;
    func_0x00010c2849a0(uVar3,param_4,&puStack_e8);
    _objc_release(puStack_c8);
  }
  uVar10 = *(undefined8 *)(param_3 + 0x48);
  uVar8 = *(undefined8 *)(param_3 + 8);
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22c20(uVar10,param_4,0,puVar1,uVar3,8,param_3,0,uVar8,0,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x40),param_4,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(lVar4);
  _objc_release(puVar9);
  _objc_release(uStack_88);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 105aca310; end: 105aca337;  */

void FUN_105aca310(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aca338; end: 105aca343;  */

void FUN_105aca338(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c170d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setBitmojiFashionContext__112639d70,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105aca344; end: 105aca4ef; -[SCBitmojiOutfitSharingScopeWorkflow _fetchSceneOnBackgroundImage] */

void FUN_105aca344(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf14660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  lVar4 = param_1;
  func_0x00010be9ad80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2360(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105aca4f0;
  puStack_68 = &UNK_1108d3870;
  _objc_retain(uVar3);
  lVar5 = lVar4;
  uStack_60 = uVar3;
  func_0x00010bf41860(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  lVar6 = lVar5;
  func_0x00010bfb2660(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar5);
  _objc_release(uStack_60);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105aca4f0; end: 105aca743;  */

void FUN_105aca4f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105ac7d28;
  uStack_80 = 0x105ac7d38;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_105ac7d28;
  uStack_b0 = 0x105ac7d38;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_105ac7d28;
  uStack_e0 = 0x105ac7d38;
  uStack_d8 = 0;
  func_0x00010c0c0800(param_2);
  func_0x00010c0c0800(param_3);
  puVar2 = PTR_PTR_1126af5d0;
  if (puStack_f8[5] == 0) {
    puVar1 = PTR_PTR_1126c20b8;
    _objc_alloc(PTR_PTR_1126c20b8);
    func_0x00010c041aa0();
    func_0x00010c2619e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105aca744; end: 105aca8df;  */

void FUN_105aca744(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105ac7d28;
  uStack_40 = 0x105ac7d38;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105ac7d28;
  uStack_70 = 0x105ac7d38;
  uStack_68 = 0;
  func_0x00010c0c0800(param_2);
  puVar2 = PTR_PTR_1126ae6b8;
  if (puStack_88[5] == 0) {
    puVar1 = (undefined *)(param_1 + 0x20);
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1;
    func_0x00010be13ba0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


