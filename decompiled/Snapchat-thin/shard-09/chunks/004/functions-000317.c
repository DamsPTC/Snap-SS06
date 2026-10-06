/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106dcacec; end: 106dcae73;  */

void FUN_106dcacec(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar6;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x21 = *(long *)(param_1 + 0x20);
    lStack_138 = lVar1;
    _objc_retain(unaff_x21);
    param_3 = &uStack_130;
    param_4 = auStack_f0;
    lVar1 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar6 = *plStack_120;
      do {
        unaff_x19 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(unaff_x21);
          }
          unaff_x23 = *(undefined8 *)(lStack_128 + unaff_x19 * 8);
          unaff_x24 = *(undefined8 *)(param_1 + 0x28);
          uVar4 = *(undefined8 *)(param_1 + 0x30);
          uVar2 = unaff_x23;
          func_0x00010c241220(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = unaff_x23;
          func_0x00010c241220(unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c251460(unaff_x24);
          _objc_release(uVar3);
          _objc_release(uVar4);
          _objc_release(uVar2);
          unaff_x19 = unaff_x19 + 1;
        } while (lVar1 != unaff_x19);
        param_3 = &uStack_130;
        param_4 = auStack_f0;
        lVar1 = unaff_x21;
        func_0x00010bf52a60();
        unaff_x22 = 0;
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x21);
    lVar1 = lStack_138;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_106dcae74;
  uStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  lStack_160 = param_1;
  lStack_158 = unaff_x19;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(lVar1 + 0x228) & 1) == 0) {
    func_0x00010bf2dc80(*(undefined8 *)(lVar1 + 0x220));
    uVar4 = *(undefined8 *)(lVar1 + 0x220);
    *(undefined8 *)(lVar1 + 0x220) = 0;
    _objc_release(uVar4);
  }
  _objc_initWeak(auStack_188,lVar1);
  lVar6 = lVar1 + 0x138;
  _objc_loadWeakRetained(lVar6);
  lVar5 = lVar6;
  func_0x00010c12e1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_190,auStack_188);
  func_0x00010c2a4ae0(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar6);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcae74; end: 106dcafab; -[SCGallerySendController legacySendToScopeDidDismiss:selectedItems:] */

void FUN_106dcae74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x228) & 1) == 0) {
    func_0x00010bf2dc80(*(undefined8 *)(param_1 + 0x220));
    uVar1 = *(undefined8 *)(param_1 + 0x220);
    *(undefined8 *)(param_1 + 0x220) = 0;
    _objc_release(uVar1);
  }
  _objc_initWeak(auStack_48,param_1);
  lVar2 = param_1 + 0x138;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c12e1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2a4ae0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcafac; end: 106dcafd7;  */

void FUN_106dcafac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dcafd8; end: 106dcb0df; -[SCGallerySendController legacySendToScopeWillSend:sendToSelection:] */

void FUN_106dcafd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x228) = 1;
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcb0e0; end: 106dcb113;  */

void FUN_106dcb0e0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dcb114; end: 106dcb21b; -[SCGallerySendController _didEndLaunchedFeatureWithSelection:] */

void FUN_106dcb114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x138;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c12e1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2a4ae0(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcb21c; end: 106dcb25f;  */

void FUN_106dcb21c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdfd560(lVar1);
    func_0x00010be4a140(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dcb260; end: 106dcb393; -[SCGallerySendController _legacySendToScopeWillSendWithSelection:] */

void FUN_106dcb260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c122f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0bc3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2584a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf24f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = uVar7;
  _objc_release(uVar8);
  func_0x00010bea0940(param_1,param_2,uVar1,uVar3,uVar4,uVar5,uVar2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dcb394; end: 106dcb3a7; -[SCGallerySendController _willSendToChatOrStoryWithIsPostingStory:hasRecipientUsernames:hasRecipientUserIds:hasBusinessIds:hasGroups:] */

uint FUN_106dcb394(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,uint param_7)

{
  return param_3 | param_4 | param_5 | param_6 | param_7;
}



/* Entry: 106dcb3a8; end: 106dcb427; -[SCGallerySendController _didDismissSendViewController] */

void FUN_106dcb3a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c24fc40(*(undefined8 *)(param_1 + 0xd8));
  }
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010010fab4();
  _objc_release(lVar1);
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0cfa60();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,0);
  return;
}



/* Entry: 106dcb428; end: 106dcb483; -[SCGallerySendController _createPerformerWithPerformerProvider:] */

void FUN_106dcb428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dcb484; end: 106dcb487; -[SCGallerySendController didPresentStoryQuickPost] */

void FUN_106dcb484(void)

{
  return;
}



/* Entry: 106dcb488; end: 106dcb593; -[SCGallerySendController didPressSendFromQuickPost:postToMyStory:withBusinessProfiles:withOurStory:withMobStories:withBusinessStoryVariants:] */

void FUN_106dcb488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5cc0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c037e40();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  uVar2 = param_5;
  func_0x00010c0b8600(param_5,param_2,&PTR___NSConcreteGlobalBlock_11097c490);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be859c0(param_1,param_2,puVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dcb594; end: 106dcb59b;  */

void FUN_106dcb594(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c116a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_profileId_1126234a8);
  return;
}



/* Entry: 106dcb59c; end: 106dcb633; -[SCGallerySendController postDirectlyToMyStoryAfterInterceptorCheck:withBusinessProfiles:withOurStory:withMobStories:withBusinessStoryVariants:] */

void FUN_106dcb59c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 in_x6;
  
  puVar1 = PTR_PTR_1126b5cc0;
  _objc_retain(in_x6);
  _objc_alloc(puVar1);
  func_0x00010c037e40();
  _objc_release(in_x6);
  func_0x00010be859c0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dcb634; end: 106dcb67b; -[SCGallerySendController _quickPostWithConfig:businessIds:] */

void FUN_106dcb634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bea0940(param_1,param_2,0,0,param_3,param_4,0,0);
  func_0x00010bf83180(*(undefined8 *)(param_1 + 0x2b8));
                    /* WARNING: Could not recover jumptable at 0x00010bddf9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupQuickPost_112555808);
  return;
}



/* Entry: 106dcb67c; end: 106dcb683; -[SCGallerySendController quickPostShowHintLabel] */

undefined8 FUN_106dcb67c(void)

{
  return 0;
}



/* Entry: 106dcb684; end: 106dcb68b; -[SCGallerySendController quickPostSendToDTTRCTAEnabled] */

undefined8 FUN_106dcb684(void)

{
  return 0;
}



/* Entry: 106dcb68c; end: 106dcb693; -[SCGallerySendController quickPostUserId] */

void FUN_106dcb68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_userId_112682320);
  return;
}



/* Entry: 106dcb694; end: 106dcb73f; -[SCGallerySendController _cleanupQuickPost] */

void FUN_106dcb694(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x2a0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x2a0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x2b0);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x2e0,0);
    return;
  }
  return;
}



/* Entry: 106dcb740; end: 106dcb92b; -[SCGallerySendController _exposeQuickPostFromViewController:] */

void FUN_106dcb740(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x2a0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bddf9a0(param_1);
  }
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c0311a0();
  uVar5 = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined **)(param_1 + 0x2b0) = puVar3;
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined **)(param_1 + 0x2a8) = puVar3;
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126c3410;
  _objc_alloc(PTR_PTR_1126c3410);
  func_0x00010c057260();
  lVar1 = param_1 + 0x2a0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf9d620();
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x2a8);
  puVar4 = PTR_PTR_1126c3418;
  func_0x00010bf78a00(PTR_PTR_1126c3418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcb92c; end: 106dcba07;  */

void FUN_106dcb92c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_d3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    uVar2 = *(undefined8 *)(param_1 + 0x2b8);
    *(undefined **)(param_1 + 0x2b8) = puVar1;
    _objc_release(uVar2);
    func_0x00010c219c20(*(undefined8 *)(param_1 + 0x2b8));
    func_0x00010c16d3e0(*(undefined8 *)(param_1 + 0x2b8));
    func_0x00010c167420(*(undefined8 *)(param_1 + 0x2b8));
    func_0x00010c219e20(*(undefined8 *)(param_1 + 0x2b8));
    uVar2 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    *(undefined8 *)(param_1 + 0x2c0) = in_d3;
    _objc_release(uVar2);
    func_0x00010c10c5c0(0,*(undefined8 *)(param_1 + 0x2b8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dcba08; end: 106dcba1b;  */

void FUN_106dcba08(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106dcba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 106dcba1c; end: 106dcba2b; -[SCGallerySendController _exposeCreatePostScopeFromViewController:gallerySnaps:] */

void FUN_106dcba1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__generateThumbnailsAndExposeCrea_112564a50,param_4,param_3);
  return;
}



/* Entry: 106dcba2c; end: 106dcba3b; -[SCGallerySendController _exposeCreatePostScopeFromViewController:phAssets:] */

void FUN_106dcba2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__generateThumbnailsAndExposeCrea_112564a58,param_4,param_3);
  return;
}



/* Entry: 106dcba3c; end: 106dcbb57; -[SCGallerySendController _generateThumbnailsForGallerySnaps:] */

void FUN_106dcba3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106dcbb58;
  puStack_50 = &UNK_11097c4d0;
  uVar1 = param_3;
  lStack_48 = param_1;
  func_0x000100504554(param_3,&puStack_68);
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x398) = uVar2;
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar4 = puVar3;
  func_0x00010c0b8600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dcbb58; end: 106dcbcbf;  */

void FUN_106dcbb58(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x328);
  puVar4 = param_2;
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfbffc0(0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar5);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar5 = PTR_PTR_1126ae558;
  if (puVar1 == (undefined *)0x0) {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110e86c98;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar5 = puVar1;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_58 = FUN_106dcbcc0;
    puStack_70 = puVar5;
    puStack_68 = puVar1;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puVar1 = puVar4;
    func_0x00010bf529e0();
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (puVar1 != (undefined *)0x0) {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106dcbd68;
      puStack_80 = &UNK_1108eaf30;
      uVar6 = *(undefined8 *)(puVar3 + 0x20);
      _objc_retain(uVar6);
      puVar5 = puVar4;
      uStack_78 = uVar6;
      func_0x00010bd86420(puVar4,&puStack_98);
      _objc_release(uStack_78);
    }
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106dcbcc0; end: 106dcbd67;  */

void FUN_106dcbcc0(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106dcbd68;
    puStack_30 = &UNK_1108eaf30;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    puVar2 = param_2;
    uStack_28 = uVar3;
    func_0x00010bd86420(param_2,&puStack_48);
    _objc_release(uStack_28);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dcbd68; end: 106dcbe7f;  */

void FUN_106dcbd68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_4);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b27a8;
  func_0x00010bfe9800(PTR_PTR_1126b27a8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010b971468();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c5018;
  _objc_alloc(PTR_PTR_1126c5018);
  func_0x00010b5fa088();
  func_0x00010c23d0a0(param_4);
  func_0x00010c23d0a0(param_4);
  _objc_release(param_4);
  func_0x00010bff4300(param_1,param_2,puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dcbe80; end: 106dcbf9b; -[SCGallerySendController _generateThumbnailsForPHAssets:] */

void FUN_106dcbe80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106dcbf9c;
  puStack_50 = &UNK_11097c500;
  uVar1 = param_3;
  lStack_48 = param_1;
  func_0x000100504554(param_3,&puStack_68);
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x398) = uVar2;
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar4 = puVar3;
  func_0x00010c0b8600(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106dcbf9c; end: 106dcc133;  */

void FUN_106dcbf9c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126c4650;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010bff41e0();
  _objc_release(param_2);
  puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x328);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfbffc0(0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR_PTR_1126ae558;
  if (puVar3 == (undefined *)0x0) {
    uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e86c98;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar2 = puVar3;
    func_0x00010c26d760(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_106dcc134;
    puStack_80 = puVar3;
    puStack_78 = puVar1;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    puVar1 = puVar6;
    func_0x00010bf529e0();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar1 != (undefined *)0x0) {
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106dcc1dc;
      puStack_90 = &UNK_1108eaf30;
      uVar7 = *(undefined8 *)(puVar5 + 0x20);
      _objc_retain(uVar7);
      puVar2 = puVar6;
      uStack_88 = uVar7;
      func_0x00010bd86420(puVar6,&puStack_a8);
      _objc_release(uStack_88);
    }
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dcc134; end: 106dcc1db;  */

void FUN_106dcc134(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106dcc1dc;
    puStack_30 = &UNK_1108eaf30;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    puVar2 = param_2;
    uStack_28 = uVar3;
    func_0x00010bd86420(param_2,&puStack_48);
    _objc_release(uStack_28);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dcc1dc; end: 106dcc2db;  */

void FUN_106dcc1dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_4);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b27a8;
  func_0x00010bfe9800(PTR_PTR_1126b27a8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010b971468();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c5018;
  _objc_alloc(PTR_PTR_1126c5018);
  func_0x00010c0c6c20(uVar3);
  func_0x00010c23d0a0(param_4);
  func_0x00010c23d0a0(param_4);
  _objc_release(param_4);
  func_0x00010bff4300(param_1,param_2,puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dcc2dc; end: 106dcc417; -[SCGallerySendController _captionDescriptionForGallerySnap:] */

void FUN_106dcc2dc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  ppuVar2 = (undefined **)PTR_PTR_1126bc7b8;
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    goto LAB_106dcc400;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  ppuVar3 = ppuVar2;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c23ff80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar5 = ppuVar3;
  func_0x000106deeb8c(ppuVar3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar5;
  func_0x00010bf529e0();
  if (ppuVar3 == (undefined **)0x0) {
LAB_106dcc3dc:
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
    func_0x000108f48804();
    if (iVar1 == 0) goto LAB_106dcc3dc;
    ppuVar3 = ppuVar5;
    func_0x00010bf446e0(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar2);
LAB_106dcc400:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106dcc418; end: 106dcc563; -[SCGallerySendController _generateThumbnailsAndExposeCreatePostScope:fromViewController:] */

void FUN_106dcc418(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1;
  func_0x00010be1c320(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcc564; end: 106dcc7a3;  */

void FUN_106dcc564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf529e0(param_2);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106dc6cf0;
    uStack_70 = 0x106dc6d00;
    uStack_68 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfd89e0();
    if ((int)uVar6 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x70);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c241220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135bc0(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar3);
    }
    lVar4 = lVar1;
    func_0x00010bddb220();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    _objc_retain(lVar4);
    func_0x00010c0f7fc0(lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar6);
    _objc_release(param_2);
    _objc_release(lVar4);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106dcc7a4; end: 106dcc7db;  */

void FUN_106dcc7a4(long param_1,undefined8 param_2)

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



/* Entry: 106dcc7dc; end: 106dcc807;  */

void FUN_106dcc7dc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exposeCreatePostScopeWithPrevie_112560ce0,puVar1
             ,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106dcc808; end: 106dcc953; -[SCGallerySendController _generateThumbnailsAndExposeCreatePostScopeFromPHAssets:fromViewController:] */

void FUN_106dcc808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1;
  func_0x00010be1c340(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcc954; end: 106dccadb;  */

void FUN_106dcc954(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf529e0(param_2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106dccadc; end: 106dcce43; -[SCGallerySendController _exposeCreatePostScopeWithPreviewAssets:fromViewController:snapCaptureLocation:captionDescription:] */

void FUN_106dccadc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b5bb8;
  _objc_alloc();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c038ee0(0x3feccccccccccccd);
  uVar9 = *(undefined8 *)(param_1 + 0x390);
  *(undefined **)(param_1 + 0x390) = puVar1;
  _objc_release(uVar9);
  lVar2 = param_1;
  func_0x00010bdf1b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x260);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf91ce0();
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + 0x260);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf91e80();
  _objc_release(uVar9);
  puVar1 = PTR_PTR_1126c5028;
  _objc_alloc();
  func_0x00010c037de0();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c0c7580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126c5030;
  _objc_alloc(PTR_PTR_1126c5030);
  lVar6 = param_1;
  func_0x00010bdf7120();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002640(puVar4);
  _objc_release(lVar5);
  _objc_release(lVar6);
  lVar6 = *(long *)(param_1 + 0x388);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x388));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  *(undefined1 *)(param_1 + 0x3a0) = 1;
  lVar6 = *(long *)(param_1 + 0x260);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c0f5ec0();
  if ((int)lVar5 != 0) {
    uVar7 = param_1 + 0x2e0;
    _objc_loadWeakRetained();
    uVar8 = uVar7;
    _objc_opt_respondsToSelector();
    _objc_release(uVar7);
    _objc_release(lVar6);
    if ((uVar8 & 1) == 0) goto LAB_106dccd90;
    lVar6 = param_1 + 0x2e0;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bfbd6a0();
  }
  _objc_release(lVar6);
LAB_106dccd90:
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x388));
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcce44; end: 106dcce6f;  */

void FUN_106dcce44(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be028c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dcce70; end: 106dccfa3; -[SCGallerySendController _createPostConfigurationWithCaptionDescription:] */

void FUN_106dcce70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x180);
  _objc_retain(param_3);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x260);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c24ade0();
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126c5048;
  _objc_alloc(PTR_PTR_1126c5048);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ba40(puVar3,param_2,param_3,PTR____NSArray0__struct_11034ab48,0,0,0,1,0);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dccfa4; end: 106dcd007; -[SCGallerySendController tray:positionDidChange:] */

void FUN_106dccfa4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_4 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x2a8);
    puVar1 = PTR_PTR_1126c3418;
    func_0x00010bf75060(PTR_PTR_1126c3418);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bddf9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupQuickPost_112555808);
    return;
  }
  return;
}



/* Entry: 106dcd008; end: 106dcd00f; -[SCGallerySendController tray:heightForPosition:] */

undefined8 FUN_106dcd008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c0);
}



/* Entry: 106dcd010; end: 106dcd017; -[SCGallerySendController handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_106dcd010(void)

{
  return 0;
}



/* Entry: 106dcd018; end: 106dcd05f; -[SCGallerySendController shareSheetDismissedWithShareDestination:] */

void FUN_106dcd018(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x310);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x310));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106dcd060; end: 106dcd19f; -[SCGallerySendController createPostScope:didCreatePostWithConfig:] */

void FUN_106dcd060(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  func_0x00010bf57ca0(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa0);
  func_0x000108faa2c4();
  if (iVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c24c700();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_4);
      func_0x00010c297260(lVar2);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      _objc_release(lVar2);
      goto LAB_106dcd160;
    }
  }
  func_0x00010be16da0(param_1);
LAB_106dcd160:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcd1a0; end: 106dcd1f3;  */

void FUN_106dcd1a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16da0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dcd1f4; end: 106dcd793; -[SCGallerySendController _finishCreatePostWithConfig:spotlightTile:] */

void FUN_106dcd1f4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain();
  if (param_4 != 0) {
    lVar1 = *(long *)(param_1 + 0x370);
    func_0x00010c28ec40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c23fe00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28eb80(lVar1);
    _objc_release(lVar2);
    _objc_release();
  }
  func_0x00010853f454();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108f5833c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010853fb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar3;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar17;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    lVar5 = param_3;
    func_0x00010c159e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074e60();
    _objc_release(lVar5);
  }
  _objc_release(lVar17);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126c4ea8;
  func_0x00010c285e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar17 = param_3;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar17;
    func_0x00010853f8ac();
    _objc_release(lVar17);
    _objc_release(lVar3);
    if ((int)lVar5 != 0) {
      lVar3 = param_3;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar3;
      func_0x00010853f90c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      goto LAB_106dcd3dc;
    }
  }
  lVar17 = 0;
LAB_106dcd3dc:
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00();
  func_0x00010c18b5e0();
  func_0x00010c200a00(uVar7);
  func_0x00010c1b0300(uVar7);
  func_0x00010c1fc880(uVar7);
  puVar8 = PTR_PTR_1126cc7d0;
  _objc_alloc();
  lVar3 = lVar1;
  func_0x00010c259cc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c159e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x000108f58174();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3;
  func_0x00010bf6e620(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &PTR__OBJC_CLASS___NSConstantArray_111181298;
  func_0x00010bf51e00();
  func_0x00010c22eae0();
  lVar13 = lVar17;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d720(puVar8);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(ppuVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c134420();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf1f3c0();
  _objc_release(lVar3);
  if ((int)lVar5 == 0) {
    puVar15 = PTR_PTR_1126b5cc0;
    _objc_alloc(PTR_PTR_1126b5cc0);
    func_0x00010c07c240();
    func_0x00010c037e40(puVar15);
    lVar3 = param_3;
    func_0x00010bf6e620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebf0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15d440(uVar7);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(puVar15);
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    lVar3 = param_3;
    func_0x00010c07c240(param_3);
    uVar16 = *(undefined8 *)(param_1 + 0xe0);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106dcd794;
    puStack_90 = &UNK_11097c530;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(uVar7);
    uStack_88 = uVar7;
    _objc_retain(param_3);
    lStack_80 = param_3;
    func_0x00010853fcb4(param_3,puVar8,lVar3,uVar16,&puStack_a8);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar17);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dcd794; end: 106dcd8ef;  */

void FUN_106dcd794(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar3 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6e620();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bebf0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15d440(uVar1);
    _objc_release(lVar5);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126afca8;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e1f218;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238780(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dcd8f0; end: 106dcd903; -[SCGallerySendController createPostScope:didDismissWithConfig:] */

void FUN_106dcd8f0(long param_1)

{
  if (*(long *)(param_1 + 0x390) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 0x390),PTR_s_detachUI__1125b96b8,0);
    return;
  }
  return;
}



/* Entry: 106dcd904; end: 106dcd907; -[SCGallerySendController createPostScope:didSelectMusic:] */

void FUN_106dcd904(void)

{
  return;
}



/* Entry: 106dcd908; end: 106dcd963; -[SCGallerySendController _dismissCreatePostTray] */

void FUN_106dcd908(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x388);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x3a0) == '\x01') {
      func_0x00010be650c0(param_1);
    }
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x388));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106dcd964; end: 106dcda03; -[SCGallerySendController _notifySpotlightQuickPostFlowDismissedIfNeeded] */

void FUN_106dcd964(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x260);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5ec0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = param_1 + 0x2e0;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      param_1 = param_1 + 0x2e0;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfbd680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106dcda04; end: 106dcdf43; -[SCGallerySendController .cxx_destruct] */

void FUN_106dcda04(long param_1)

{
  _objc_storeStrong(param_1 + 0x398,0);
  _objc_storeStrong(param_1 + 0x390,0);
  _objc_storeStrong(param_1 + 0x388,0);
  _objc_storeStrong(param_1 + 0x380,0);
  _objc_storeStrong(param_1 + 0x378,0);
  _objc_storeStrong(param_1 + 0x370,0);
  _objc_storeStrong(param_1 + 0x368,0);
  _objc_storeStrong(param_1 + 0x360,0);
  _objc_storeStrong(param_1 + 0x358,0);
  _objc_storeStrong(param_1 + 0x350,0);
  _objc_storeStrong(param_1 + 0x348,0);
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_destroyWeak(param_1 + 0x2e0);
  _objc_destroyWeak(param_1 + 0x2d8);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_destroyWeak(param_1 + 0x2a0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_destroyWeak(param_1 + 0x210);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
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
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dcdf44; end: 106dcdf4b; -[SCGalleryMediaEphemerals galleryMedia] */

undefined8 FUN_106dcdf44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106dcdf4c; end: 106dcdf7b; -[SCGalleryMediaEphemerals setGalleryMedia:] */

void FUN_106dcdf4c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106dcdf7c; end: 106dcdf83; -[SCGalleryMediaEphemerals ephemerals] */

undefined8 FUN_106dcdf7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106dcdf84; end: 106dcdfb3; -[SCGalleryMediaEphemerals setEphemerals:] */

void FUN_106dcdf84(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106dcdfb4; end: 106dcdfbb; -[SCGalleryMediaEphemerals lensAssetsUploadOperation] */

undefined8 FUN_106dcdfb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106dcdfbc; end: 106dcdfeb; -[SCGalleryMediaEphemerals setLensAssetsUploadOperation:] */

void FUN_106dcdfbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106dcdfec; end: 106dce027; -[SCGalleryMediaEphemerals .cxx_destruct] */

void FUN_106dcdfec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dce028; end: 106dce02f; -[SCGalleryMediaSendTask taskId] */

undefined8 FUN_106dce028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106dce030; end: 106dce05f; -[SCGalleryMediaSendTask setTaskId:] */

void FUN_106dce030(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106dce060; end: 106dce067; -[SCGalleryMediaSendTask isStorySend] */

undefined1 FUN_106dce060(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106dce068; end: 106dce06f; -[SCGalleryMediaSendTask setIsStorySend:] */

void FUN_106dce068(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106dce070; end: 106dce077; -[SCGalleryMediaSendTask storySendCount] */

undefined8 FUN_106dce070(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106dce078; end: 106dce07f; -[SCGalleryMediaSendTask setStorySendCount:] */

void FUN_106dce078(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106dce080; end: 106dce08b; -[SCGalleryMediaSendTask .cxx_destruct] */

void FUN_106dce080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106dce08c; end: 106dcee2b; +[SCGallerySendItemsTask sendableMediaGroupsWithGalleryItems:gallerySnaps:orderedGallerySnaps:memoriesTweaksServices:sendableMediaGroupsRef:createStatusRef:dataObjectContext:circumstanceEngine:galleryLogger:mergedDataSource:assetIdToCRFeaturedStory:] */

ulong FUN_106dce08c(undefined8 param_1,undefined *param_2,ulong param_3,long param_4,long param_5,
                   undefined8 param_6,undefined8 *param_7,undefined8 *param_8,undefined8 param_9,
                   ulong param_10,undefined8 param_11,undefined *param_12,long param_13)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  ulong uVar23;
  undefined *puVar24;
  ulong uVar25;
  long lVar26;
  bool bVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  long lStack_3e8;
  undefined *puStack_3a0;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_3a0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_4;
  func_0x00010c14ccc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar8 = param_5;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
LAB_106dce218:
    lStack_3e8 = 0;
  }
  else {
    uVar19 = param_6;
    func_0x00010bf3f7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar19;
    func_0x00010c15c480();
    _objc_release(uVar19);
    if ((int)uVar9 == 0) goto LAB_106dce218;
    lStack_3e8 = param_5;
    func_0x00010c14cca0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lStack_3e8;
    func_0x00010bf529e0();
    lVar26 = lVar7;
    func_0x00010bf529e0();
    if (lVar8 != lVar26) {
      _objc_release(lStack_3e8);
      goto LAB_106dce218;
    }
  }
  lVar8 = lVar7;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    if (lStack_3e8 == 0) {
      lVar8 = lVar7;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      lVar26 = lVar8;
      func_0x00010b5f8ce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
    }
    else {
      lVar26 = lStack_3e8;
      func_0x00010b5f90b8();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(lVar26);
    lVar8 = lVar26;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lVar26);
        }
        uVar23 = *(ulong *)(lVar22 * 8);
        func_0x00010bf529e0();
        if (uVar23 < 2) {
          func_0x00010befa160(puStack_3a0);
        }
        else {
          puVar10 = PTR_PTR_1126c4658;
          _objc_alloc(PTR_PTR_1126c4658);
          func_0x00010c02cb00();
          func_0x00010befa120(puVar5);
          _objc_release(puVar10);
        }
        lVar22 = lVar22 + 1;
      } while (lVar8 != lVar22);
      lVar8 = lVar26;
      func_0x00010bf52a60();
    }
    _objc_release(lVar26);
    _objc_release(lVar26);
  }
  uVar28 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  _objc_retain(uVar6);
  uVar23 = uVar6;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  bVar27 = false;
  while (uVar23 != 0) {
    uVar25 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(uVar6);
      }
      puVar24 = *(undefined **)(uVar25 * 8);
      puVar21 = puVar24;
      func_0x00010bfbd100();
      puVar10 = puVar24;
      if (puVar21 == (undefined *)0x1) {
        _objc_retain(puVar24);
        puVar13 = puVar24;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        puVar14 = param_12;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar14;
        func_0x00010bf529e0();
        puVar12 = PTR_PTR_1126af4c0;
        puVar21 = param_2;
        if (puVar11 == (undefined *)0x0) {
          func_0x00010bf97200(puVar24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa70a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar24);
          _objc_release(puVar10);
          puVar24 = param_12;
          func_0x00010bfa7340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar14);
          puVar21 = param_2;
          puVar10 = puVar12;
          puVar14 = puVar24;
        }
        puVar12 = puVar14;
        func_0x00010c14cca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        puVar14 = puVar10;
        func_0x00010c245800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar24 = puVar12;
        if (puVar14 != (undefined *)0x0) {
          puVar14 = puVar10;
          func_0x00010c245800();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar14;
          puVar21 = puVar12;
          func_0x00010b5fca54();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(puVar14);
        }
        bVar27 = (bool)(puVar13 == (undefined *)0x5 | bVar27);
        puVar12 = puVar24;
        func_0x00010bf529e0();
        if (puVar12 != (undefined *)0x0) {
          puVar12 = puVar10;
          func_0x00010bfbdda0();
          func_0x00010b5fa33c();
          if (4 < (long)puVar12) {
            if (puVar12 + -5 < (undefined *)0x2) goto LAB_106dce6e8;
            if (puVar12 == (undefined *)0x8) {
              puVar21 = puStack_3a0;
              func_0x00010bf529e0();
              if ((puVar21 != (undefined *)0x0) &&
                 (uVar15 = param_10, func_0x00010bf1f440(), (uVar15 & 1) == 0)) {
                puVar21 = PTR_PTR_1126c4658;
                _objc_alloc(PTR_PTR_1126c4658);
                func_0x00010bff7480();
                func_0x00010befa120(puVar5);
                puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puStack_3a0);
                _objc_release(puVar21);
                puStack_3a0 = puVar12;
              }
              puVar12 = puVar10;
              puVar21 = puVar24;
              func_0x000107da0750(puVar10,puVar24);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar12 != (undefined *)0x0) {
                puVar12 = PTR_PTR_1126d29a8;
                _objc_alloc();
                func_0x00010c0172e0();
                puVar13 = PTR_PTR_1126c4658;
                _objc_alloc(PTR_PTR_1126c4658);
                puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bff7480(puVar13);
                _objc_release(puVar14);
                func_0x00010befa120(puVar5);
                _objc_release(puVar13);
                goto LAB_106dce9c0;
              }
            }
            else if (puVar12 != (undefined *)0x7) goto LAB_106dce9c8;
LAB_106dce9a0:
            puVar12 = puVar24;
            func_0x00010bfb1920(puVar24);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puStack_3a0;
            goto LAB_106dce9b8;
          }
          if ((undefined *)0x2 < puVar12 + -1) {
            if (puVar12 == (undefined *)0x0) goto LAB_106dce9a0;
            if (puVar12 != (undefined *)0x4) goto LAB_106dce9c8;
            puVar12 = puVar24;
            FUN_106df0ca4();
            if ((int)puVar12 != 0) {
              puVar12 = puStack_3a0;
              func_0x00010bf529e0();
              if (puVar12 != (undefined *)0x0) {
                puVar12 = PTR_PTR_1126c4658;
                _objc_alloc(PTR_PTR_1126c4658);
                func_0x00010bff7480();
                func_0x00010befa120(puVar5);
                puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puStack_3a0);
                _objc_release(puVar12);
                puStack_3a0 = puVar13;
              }
              puVar12 = PTR_PTR_1126c4658;
              _objc_alloc(PTR_PTR_1126c4658);
              func_0x00010c07b240(puVar10);
              func_0x00010c04ca60(puVar12);
              puVar14 = puVar5;
              goto LAB_106dce9b8;
            }
          }
LAB_106dce6e8:
          puVar12 = puVar10;
          func_0x00010bfbdda0();
          func_0x00010b5fa33c();
          if ((puVar12 == (undefined *)0x5) &&
             (puVar12 = puVar24, func_0x00010bf529e0(), puVar12 == (undefined *)0x1))
          goto LAB_106dce9a0;
          puVar12 = puStack_3a0;
          func_0x00010bf529e0();
          if (puVar12 != (undefined *)0x0) {
            puVar12 = PTR_PTR_1126c4658;
            _objc_alloc(PTR_PTR_1126c4658);
            func_0x00010bff7480();
            func_0x00010befa120(puVar5);
            puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puStack_3a0);
            _objc_release(puVar12);
            puStack_3a0 = puVar13;
          }
          puVar12 = PTR_PTR_1126c4658;
          _objc_alloc(PTR_PTR_1126c4658);
          func_0x00010c04d740();
          func_0x00010befa120(puVar5);
LAB_106dce9c0:
          _objc_release(puVar12);
        }
LAB_106dce9c8:
        _objc_release(puVar24);
        _objc_release(puVar10);
        param_2 = puVar21;
      }
      else {
        puVar12 = puVar24;
        func_0x00010bfbd100();
        puVar21 = PTR__OBJC_CLASS___PHAsset_1126bd898;
        if (puVar12 == (undefined *)0x2) {
          _objc_retain(puVar24);
          _objc_opt_class(puVar21);
          puVar12 = puVar24;
          _objc_opt_isKindOfClass(puVar24,puVar21);
          if (((ulong)puVar12 & 1) == 0) {
            puVar10 = (undefined *)0x0;
          }
          _objc_retain(puVar10);
          _objc_release(puVar24);
          puVar24 = puVar10;
          func_0x00010c09da80(puVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar26 = param_13;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar24);
          puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (lVar26 == 0) {
            puVar24 = (undefined *)0x0;
          }
          else {
            puVar12 = puVar10;
            func_0x00010bf5a700(puVar10);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfb5960(puVar24);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar13);
            _objc_release(puVar12);
          }
          puVar12 = PTR_PTR_1126c4650;
          _objc_alloc();
          func_0x00010bff41e0();
          puVar13 = puVar10;
          func_0x00010c0c6c20();
          puVar14 = puStack_3a0;
          if (puVar13 == (undefined *)0x2) {
            func_0x00010bf8b160(puVar10);
            bVar3 = false;
            bVar4 = false;
            bVar1 = NAN((double)CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,
                                                  CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,
                                                  uVar28))))))));
            if (!bVar1) {
              bVar3 = (double)CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,
                                                  CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,
                                                  uVar28))))))) < 10.0;
              bVar4 = (double)CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(uVar32,
                                                  CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,
                                                  uVar28))))))) == 10.0;
            }
            if (!bVar4 && bVar3 == bVar1) {
              puVar13 = puStack_3a0;
              func_0x00010bf529e0();
              if (puVar13 != (undefined *)0x0) {
                puVar13 = PTR_PTR_1126c4658;
                _objc_alloc(PTR_PTR_1126c4658);
                func_0x00010bff7480();
                func_0x00010befa120(puVar5);
                puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x00010bf09f00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puStack_3a0);
                _objc_release(puVar13);
                puStack_3a0 = puVar14;
              }
              puVar13 = PTR_PTR_1126c4658;
              _objc_alloc(PTR_PTR_1126c4658);
              puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff7480(puVar13);
              _objc_release(puVar14);
              func_0x00010befa120(puVar5);
              _objc_release(puVar13);
              goto LAB_106dce9c0;
            }
          }
LAB_106dce9b8:
          func_0x00010befa120(puVar14);
          goto LAB_106dce9c0;
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar23 != uVar25);
    uVar23 = uVar6;
    func_0x00010bf52a60();
  }
  _objc_release(uVar6);
  puVar10 = puStack_3a0;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    puVar10 = PTR_PTR_1126c4658;
    _objc_alloc(PTR_PTR_1126c4658);
    func_0x00010bff7480();
    func_0x00010befa120(puVar5);
    _objc_release(puVar10);
  }
  _objc_retain(puVar5);
  puVar10 = puVar5;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  else {
    lVar26 = 0;
    do {
      puVar21 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(puVar5);
        }
        lVar22 = *(long *)((long)puVar21 * 8);
        lVar16 = lVar22;
        func_0x00010bfcf460();
        if (lVar16 == 3) {
          lVar26 = lVar26 + 1;
        }
        else {
          func_0x00010bfbd240();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar22;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar16 != 0) {
            lVar20 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar22);
              }
              uVar25 = *(ulong *)(lVar20 * 8);
              uVar23 = uVar25;
              func_0x000107ade96c();
              puVar24 = PTR_PTR_1126c4650;
              if (uVar23 - 3 < 2) {
                lVar26 = lVar26 + 1;
              }
              else if (uVar23 == 2) {
                _objc_retain(uVar25);
                _objc_opt_class(puVar24);
                uVar15 = uVar25;
                _objc_opt_isKindOfClass(uVar25,puVar24);
                uVar23 = uVar25;
                if ((uVar15 & 1) == 0) {
                  uVar23 = 0;
                }
                _objc_retain(uVar23);
                _objc_release(uVar25);
                uVar25 = uVar23;
                func_0x00010bf0af00();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar23);
                uVar23 = uVar25;
                func_0x00010c0c6c20();
                if (uVar23 == 2) {
                  lVar26 = lVar26 + 1;
                }
                _objc_release(uVar25);
                param_2 = puVar24;
              }
              else if (uVar23 == 1) {
                func_0x00010b5fa088();
                if (uVar25 - 1 < 0xc) {
                  lVar18 = *(long *)(&UNK_10ddee228 + (uVar25 - 1) * 8);
                }
                else {
                  lVar18 = 0;
                }
                lVar26 = lVar18 + lVar26;
              }
              lVar20 = lVar20 + 1;
            } while (lVar16 != lVar20);
            lVar16 = lVar22;
            func_0x00010bf52a60();
          }
          _objc_release(lVar22);
        }
        puVar21 = puVar21 + 1;
      } while (puVar21 != puVar10);
      puVar10 = puVar5;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
    _objc_release(puVar5);
    if (!bVar27 && 0x14 < lVar26) {
      uVar19 = 1;
      puVar10 = (undefined *)0x0;
      goto LAB_106dced68;
    }
  }
  _objc_retainAutorelease(puVar5);
  uVar19 = 0;
  puVar10 = puVar5;
LAB_106dced68:
  *param_7 = puVar10;
  *param_8 = uVar19;
  _objc_release(lStack_3e8);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puStack_3a0);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar7);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c0e0160(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (ulong)(param_2 != (undefined *)0x0);
}



/* Entry: 106dcee2c; end: 106dceef3;  */

bool FUN_106dcee2c(undefined8 param_1,long param_2)

{
  func_0x00010c0e0160(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 106dceef4; end: 106dd014b; -[SCGallerySendItemsTask initWithSendableMediaGroups:cloudFiles:assetCloudFiles:entryLevelSnapDocMap:snapLevelSnapDocMap:legacyEagerSendTranscoder:musicMediaLoader:sendItemsCounter:shouldShowToast:userContext:userSession:cachingMediaManager:cloudFS:dataObjectContext:encryptedContentManager:galleryEncryptedDatabase:galleryLogger:mergedDataSource:networker:autoSaveMutating:cameraActiveVideoPaths:circumstanceEngine:conversationDestinationParser:customStoriesDataFetcher:customStoriesDataMutator:ephemeralMediaFactory:spotlightNavigationService:memoriesAutosaveMigrator:galleryStorySaver:galleryMediaSender:imageProcessCommandProvider:legacyEphemeralMediaFactory:snapchattersSynchronousDataFetcher:legacyGalleryStorySaver:lensAssetsDeliveryServices:myStoriesDataCoordinator:memoriesStoryMessageSender:previewCameraSourceOverlayService:previewAssetVideoProviderFactory:previewURLVideoProviderFactory:reverseAudioCache:snapchatterPublicInfoFetcher:userTrackedLogger:videoImporter:imageImporter:targetTrajectoryFactory:inviteService:shareYoursClient:snapDocManager:snapVideoFilterScopeExposer:memoriesMediaRetriever:memoriesTranscodingHelper:memoriesCachingMediaHelper:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:memoriesSnapDocTranscodingManager:memoriesSnapDocParser:assetIdToCRFeaturedStory:usernameToSnapchatterFetcher:creativeToolsMemoriesResources:snapDocEditorServices:previewSnapSenderFactory:grapheneRegistry:genAIDreamsService:docObjectContext:dreamsSessionManager:genAiAnalyticsService:previewABProvider:spotlightAutoShareService:sendToMassSnapNotificationService:valdiRuntimeProvider:memoriesTweaksServices:] */

undefined8 *
FUN_106dceef4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined1 param_11,undefined4 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19,undefined **param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
             undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
             undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
             undefined8 param_34,undefined8 param_35,undefined8 param_36,undefined8 param_37,
             undefined8 param_38,undefined8 param_39,undefined8 param_40,undefined8 param_41,
             undefined8 param_42,undefined8 param_43,undefined8 param_44,undefined8 param_45,
             undefined8 param_46,undefined8 param_47,undefined8 param_48,undefined8 param_49,
             undefined8 param_50,undefined8 param_51,undefined8 param_52,undefined8 param_53,
             undefined8 param_54,undefined8 param_55,undefined8 param_56,undefined8 param_57,
             undefined8 param_58,undefined8 param_59,undefined8 param_60,undefined8 param_61,
             undefined8 param_62,undefined8 param_63,undefined8 param_64,undefined8 param_65,
             undefined8 param_66,undefined8 param_67,undefined8 param_68,undefined8 param_69,
             undefined8 param_70,undefined8 param_71)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(param_71);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  puStack_1f8 = PTR_PTR_1126f6ef8;
  puVar11 = &uStack_200;
  uStack_200 = param_1;
  _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
  ppuVar10 = param_20;
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar11 + 8) = param_11;
    _objc_retain(param_14);
    uVar1 = puVar11[7];
    puVar11[7] = param_14;
    _objc_release(uVar1);
    _objc_retain(param_15);
    uVar1 = puVar11[0x65];
    puVar11[0x65] = param_15;
    _objc_release(uVar1);
    _objc_retain(param_16);
    uVar1 = puVar11[0x66];
    puVar11[0x66] = param_16;
    _objc_release(uVar1);
    _objc_retain(param_17);
    uVar1 = puVar11[0x67];
    puVar11[0x67] = param_17;
    _objc_release(uVar1);
    _objc_retain(param_18);
    uVar1 = puVar11[0x68];
    puVar11[0x68] = param_18;
    _objc_release(uVar1);
    _objc_retain(param_19);
    uVar1 = puVar11[0x69];
    puVar11[0x69] = param_19;
    _objc_release(uVar1);
    _objc_retain(param_20);
    uVar1 = puVar11[0x6a];
    puVar11[0x6a] = param_20;
    _objc_release(uVar1);
    _objc_retain(param_21);
    uVar1 = puVar11[0x6b];
    puVar11[0x6b] = param_21;
    _objc_release(uVar1);
    _objc_retain(param_9);
    uVar1 = puVar11[0x51];
    puVar11[0x51] = param_9;
    _objc_release(uVar1);
    _objc_retain(param_55);
    uVar1 = puVar11[0x70];
    puVar11[0x70] = param_55;
    _objc_release(uVar1);
    _objc_retain(param_56);
    uVar1 = puVar11[0x52];
    puVar11[0x52] = param_56;
    _objc_release(uVar1);
    _objc_retain(param_23);
    uVar1 = puVar11[0x37];
    puVar11[0x37] = param_23;
    _objc_release(uVar1);
    _objc_retain(param_24);
    uVar1 = puVar11[0x4c];
    puVar11[0x4c] = param_24;
    _objc_release(uVar1);
    _objc_retain(param_25);
    uVar1 = puVar11[0x39];
    puVar11[0x39] = param_25;
    _objc_release(uVar1);
    _objc_retain(param_26);
    uVar1 = puVar11[0x38];
    puVar11[0x38] = param_26;
    _objc_release(uVar1);
    _objc_retain(param_27);
    uVar1 = puVar11[0x48];
    puVar11[0x48] = param_27;
    _objc_release(uVar1);
    _objc_retain(param_28);
    uVar1 = puVar11[0x49];
    puVar11[0x49] = param_28;
    _objc_release(uVar1);
    _objc_retain(param_31);
    uVar1 = puVar11[0x3c];
    puVar11[0x3c] = param_31;
    _objc_release(uVar1);
    _objc_retain(param_29);
    uVar1 = puVar11[0x3a];
    puVar11[0x3a] = param_29;
    _objc_release(uVar1);
    _objc_retain(param_30);
    uVar1 = puVar11[0x3b];
    puVar11[0x3b] = param_30;
    _objc_release(uVar1);
    _objc_retain(param_32);
    uVar1 = puVar11[0x45];
    puVar11[0x45] = param_32;
    _objc_release(uVar1);
    _objc_retain(param_33);
    uVar1 = puVar11[0x4a];
    puVar11[0x4a] = param_33;
    _objc_release(uVar1);
    _objc_retain(param_34);
    uVar1 = puVar11[0x4d];
    puVar11[0x4d] = param_34;
    _objc_release(uVar1);
    _objc_retain(param_35);
    uVar1 = puVar11[0x44];
    puVar11[0x44] = param_35;
    _objc_release(uVar1);
    _objc_retain(param_36);
    uVar1 = puVar11[0x3e];
    puVar11[0x3e] = param_36;
    _objc_release(uVar1);
    _objc_retain(param_37);
    uVar1 = puVar11[0x3f];
    puVar11[0x3f] = param_37;
    _objc_release(uVar1);
    _objc_retain(param_38);
    uVar1 = puVar11[0x5f];
    puVar11[0x5f] = param_38;
    _objc_release(uVar1);
    uVar1 = param_38;
    func_0x00010c129f60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar11[0x3d];
    puVar11[0x3d] = uVar1;
    _objc_release(uVar8);
    _objc_retain(param_40);
    uVar1 = puVar11[0x4b];
    puVar11[0x4b] = param_40;
    _objc_release(uVar1);
    _objc_retain(param_39);
    uVar1 = puVar11[0x47];
    puVar11[0x47] = param_39;
    _objc_release(uVar1);
    _objc_retain(param_42);
    uVar1 = puVar11[0x35];
    puVar11[0x35] = param_42;
    _objc_release(uVar1);
    _objc_retain(param_43);
    uVar1 = puVar11[0x36];
    puVar11[0x36] = param_43;
    _objc_release(uVar1);
    _objc_retain(param_44);
    uVar1 = puVar11[0x6c];
    puVar11[0x6c] = param_44;
    _objc_release(uVar1);
    _objc_retain(param_45);
    uVar1 = puVar11[0x42];
    puVar11[0x42] = param_45;
    _objc_release(uVar1);
    _objc_retain(param_63);
    uVar1 = puVar11[0x43];
    puVar11[0x43] = param_63;
    _objc_release(uVar1);
    _objc_retain(param_46);
    uVar1 = puVar11[0x4e];
    puVar11[0x4e] = param_46;
    _objc_release(uVar1);
    _objc_retain(param_47);
    uVar1 = puVar11[0x40];
    puVar11[0x40] = param_47;
    _objc_release(uVar1);
    _objc_retain(param_48);
    uVar1 = puVar11[0x41];
    puVar11[0x41] = param_48;
    _objc_release(uVar1);
    _objc_retain(param_41);
    uVar1 = puVar11[0x4f];
    puVar11[0x4f] = param_41;
    _objc_release(uVar1);
    _objc_retain(param_49);
    uVar1 = puVar11[0x50];
    puVar11[0x50] = param_49;
    _objc_release(uVar1);
    _objc_retain(param_50);
    uVar1 = puVar11[0x61];
    puVar11[0x61] = param_50;
    _objc_release(uVar1);
    _objc_retain(param_51);
    uVar1 = puVar11[0x62];
    puVar11[0x62] = param_51;
    _objc_release(uVar1);
    _objc_retain(param_52);
    uVar1 = puVar11[6];
    puVar11[6] = param_52;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar1 = puVar11[0x33];
    puVar11[0x33] = puVar2;
    _objc_release(uVar1);
    _objc_storeWeak(puVar11 + 0x6d,param_53);
    _objc_retain(param_54);
    uVar1 = puVar11[0x6f];
    puVar11[0x6f] = param_54;
    _objc_release(uVar1);
    _objc_retain(param_57);
    uVar1 = puVar11[0x53];
    puVar11[0x53] = param_57;
    _objc_release(uVar1);
    _objc_retain(param_58);
    uVar1 = puVar11[0x54];
    puVar11[0x54] = param_58;
    _objc_release(uVar1);
    _objc_retain(param_59);
    uVar1 = puVar11[0x55];
    puVar11[0x55] = param_59;
    _objc_release(uVar1);
    _objc_retain(param_60);
    uVar1 = puVar11[0x56];
    puVar11[0x56] = param_60;
    _objc_release(uVar1);
    _objc_retain(param_61);
    uVar1 = puVar11[0x57];
    puVar11[0x57] = param_61;
    _objc_release(uVar1);
    _objc_retain(param_64);
    uVar1 = puVar11[0x71];
    puVar11[0x71] = param_64;
    _objc_release(uVar1);
    _objc_retain(param_65);
    uVar1 = puVar11[0x5e];
    puVar11[0x5e] = param_65;
    _objc_release(uVar1);
    _objc_retain(param_22);
    uVar1 = puVar11[99];
    puVar11[99] = param_22;
    _objc_release(uVar1);
    _objc_retain(param_66);
    uVar1 = puVar11[100];
    puVar11[100] = param_66;
    _objc_release(uVar1);
    _objc_retain(param_67);
    uVar1 = puVar11[0x58];
    puVar11[0x58] = param_67;
    _objc_release(uVar1);
    _objc_retain(param_68);
    uVar1 = puVar11[0x59];
    puVar11[0x59] = param_68;
    _objc_release(uVar1);
    _objc_retain(param_69);
    uVar1 = puVar11[0x5c];
    puVar11[0x5c] = param_69;
    _objc_release(uVar1);
    uVar1 = puVar11[0x6a];
    func_0x00010c0c7580();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar11[0x27];
    puVar11[0x27] = uVar1;
    _objc_release(uVar8);
    _objc_retain(param_71);
    uVar1 = puVar11[0x5a];
    puVar11[0x5a] = param_71;
    _objc_release(uVar1);
    _objc_retain(in_stack_000001f8);
    uVar1 = puVar11[0x75];
    puVar11[0x75] = in_stack_000001f8;
    _objc_release(uVar1);
    _objc_retain(param_70);
    uVar1 = puVar11[0x5b];
    puVar11[0x5b] = param_70;
    _objc_release(uVar1);
    _objc_retain(in_stack_000001f0);
    uVar1 = puVar11[0x5d];
    puVar11[0x5d] = in_stack_000001f0;
    _objc_release(uVar1);
    _objc_retain(in_stack_00000200);
    uVar1 = puVar11[0x73];
    puVar11[0x73] = in_stack_00000200;
    _objc_release(uVar1);
    _objc_retain(in_stack_00000208);
    uVar1 = puVar11[0x77];
    puVar11[0x77] = in_stack_00000208;
    _objc_release(uVar1);
    _objc_retain(in_stack_00000210);
    uVar1 = puVar11[0x78];
    puVar11[0x78] = in_stack_00000210;
    _objc_release(uVar1);
    uVar1 = puVar11[0x6a];
    func_0x00010c0c75a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar11[0x28];
    puVar11[0x28] = uVar1;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar11[0x2b];
    puVar11[0x2b] = puVar2;
    _objc_release(uVar1);
    *(undefined4 *)(puVar11 + 0x2c) = 0;
    lVar3 = param_3;
    func_0x000107adcb3c();
    _objc_retainAutoreleasedReturnValue();
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    _objc_retain();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar9 = *plStack_230;
      do {
        lVar12 = 0;
        do {
          if (*plStack_230 != lVar9) {
            _objc_enumerationMutation(lVar3);
          }
          puVar5 = puVar11;
          func_0x00010be1a3a0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar5 == (undefined8 *)0x0) {
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
          }
          _objc_release(puVar5);
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    lVar4 = param_4;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      plStack_270 = (long *)0x0;
      _objc_retain(param_3);
      lVar4 = param_3;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar9 = *plStack_270;
        do {
          lVar12 = 0;
          do {
            if (*plStack_270 != lVar9) {
              _objc_enumerationMutation(param_3);
            }
            lVar6 = *(long *)(lStack_278 + lVar12 * 8);
            uStack_2b8 = 0;
            uStack_2c0 = 0;
            uStack_2a8 = 0;
            plStack_2b0 = (long *)0x0;
            uStack_298 = 0;
            uStack_2a0 = 0;
            uStack_288 = 0;
            uStack_290 = 0;
            func_0x00010bfbd240();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010bf52a60();
            if (lVar7 != 0) {
              lVar13 = *plStack_2b0;
              do {
                if (*plStack_2b0 != lVar13) {
                  _objc_enumerationMutation(lVar6);
                }
                lVar7 = lVar7 + -1;
              } while ((lVar7 != 0) || (lVar7 = lVar6, func_0x00010bf52a60(), lVar7 != 0));
            }
            _objc_release(lVar6);
            lVar12 = lVar12 + 1;
          } while (lVar12 != lVar4);
          lVar4 = param_3;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(param_3);
    }
    lVar4 = param_3;
    func_0x00010bf51e00();
    uVar1 = puVar11[0x7c];
    puVar11[0x7c] = lVar4;
    _objc_release(uVar1);
    _objc_retain(param_62);
    uVar1 = puVar11[5];
    puVar11[5] = param_62;
    _objc_release(uVar1);
    lVar4 = param_4;
    func_0x00010bf51e00();
    uVar1 = puVar11[1];
    puVar11[1] = lVar4;
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010bf51e00();
    uVar8 = puVar11[2];
    puVar11[2] = uVar1;
    _objc_release(uVar8);
    _objc_retain(param_6);
    uVar1 = puVar11[3];
    puVar11[3] = param_6;
    _objc_release(uVar1);
    _objc_retain(param_7);
    uVar1 = puVar11[4];
    puVar11[4] = param_7;
    _objc_release(uVar1);
    _objc_retain(param_8);
    uVar1 = puVar11[0x6e];
    puVar11[0x6e] = param_8;
    _objc_release(uVar1);
    _objc_retain(param_10);
    uVar1 = puVar11[0x1b];
    puVar11[0x1b] = param_10;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar11[0x1d];
    puVar11[0x1d] = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar11[0x1e];
    puVar11[0x1e] = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar11[0x1f];
    puVar11[0x1f] = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar11[0x1c];
    puVar11[0x1c] = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar11[0x20];
    puVar11[0x20] = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126d29e8;
    _objc_alloc();
    func_0x00010c060ee0();
    uVar1 = puVar11[0x24];
    puVar11[0x24] = puVar2;
    _objc_release(uVar1);
    puVar11[0x25] = param_13;
    *(undefined1 *)(puVar11 + 0x29) = 1;
    puVar11[0x2a] = 0x3ff0000000000000;
    uVar1 = puVar11[0x72];
    puVar11[0x72] = 0;
    _objc_release(uVar1);
    _objc_initWeak(auStack_2c8,puVar11);
    puVar2 = PTR_PTR_1126ae720;
    puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e8 = 0xc2000000;
    pcStack_2e0 = FUN_106dd014c;
    puStack_2d8 = &UNK_11097c5c0;
    ppuVar10 = &puStack_2f0;
    _objc_copyWeak(auStack_2d0,auStack_2c8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = puVar11[0x46];
    puVar11[0x46] = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar1 = puVar11[0x60];
    puVar11[0x60] = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126d29f8;
    _objc_opt_new();
    uVar1 = puVar11[0x74];
    puVar11[0x74] = puVar2;
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_2d0);
    _objc_destroyWeak(auStack_2c8);
    _objc_release(lVar3);
  }
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_71);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar10 + 4);
  _objc_destroyWeak(auStack_2c8);
  __Unwind_Resume();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)PTR_PTR_1126d29f0;
    _objc_alloc();
    lVar4 = param_3;
    func_0x00010becea60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aeea8;
    _objc_opt_new(PTR_PTR_1126aeea8);
    lVar3 = param_3 + 0x368;
    _objc_loadWeakRetained();
    func_0x00010bfff300(puVar11);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 106dd014c; end: 106dd0263;  */

void FUN_106dd014c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126d29f0;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar8 = *(undefined8 *)(param_1 + 0x340);
    lVar1 = param_1;
    func_0x00010becea60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x360);
    puVar2 = PTR_PTR_1126aeea8;
    _objc_opt_new(PTR_PTR_1126aeea8);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    uVar13 = *(undefined8 *)(param_1 + 0x268);
    uVar12 = *(undefined8 *)(param_1 + 0x260);
    uVar11 = *(undefined8 *)(param_1 + 0x278);
    uVar5 = *(undefined8 *)(param_1 + 0x1a8);
    uVar7 = *(undefined8 *)(param_1 + 0x280);
    lVar3 = param_1 + 0x368;
    _objc_loadWeakRetained();
    func_0x00010bfff300(puVar6,param_2,uVar4,uVar8,lVar1,uVar9,puVar2,uVar10,uVar12,uVar13,uVar11,
                        uVar5,uVar7,lVar3,*(undefined8 *)(param_1 + 0x388));
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106dd0264; end: 106dd032f; +[SCGallerySendItemsTask sharedPerformer] */

void FUN_106dd0264(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c7de8 != -1) {
    func_0x00010002a2fc(0x1136c7de8,&PTR___NSConcreteGlobalBlock_11097c5f0);
  }
  uVar1 = uRam00000001136c7de0;
  _objc_retain(uRam00000001136c7de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dd0330; end: 106dd05f3; -[SCGallerySendItemsTask sendToRecipientUsernames:recipientUserIds:massSnapRecipients:storiesPostingConfig:businessIds:mischiefs:additionalText:shouldAutoShareSpotlight:isEligibleForCrossPostingSpotlightToStories:spotlightThumbnailFuture:] */

void FUN_106dd0330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  func_0x00010be39ae0(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + 0x58) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + 0x3b0) = (undefined1)param_10;
  uVar4 = *(undefined8 *)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c8) = param_12;
  _objc_retain(param_12);
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + 0x3d0) = param_10._1_1_;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x000107e3271c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x000107e327a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f80(uVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106dd05f4;
  puStack_70 = &UNK_1109197f8;
  uVar1 = uVar4;
  lStack_68 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar4,param_2,&puStack_88,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(uVar2);
  return;
}



/* Entry: 106dd05f4; end: 106dd067f;  */

void FUN_106dd05f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf50b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x168) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010bf026a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bea0e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendToSortedRecipients_112585d48);
  return;
}



/* Entry: 106dd0680; end: 106dd0eb3; -[SCGallerySendItemsTask _sendToSortedRecipients] */

void FUN_106dd0680(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  double dVar19;
  long lStack_5e8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = param_1;
  func_0x00010bdc91c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x1a0);
  *(long *)(param_1 + 0x1a0) = lVar13;
  _objc_release(uVar7);
  func_0x00010be15cc0(param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x3e0);
  func_0x00010c0d3c80();
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar7;
  _objc_release(uVar8);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar17;
  _objc_release(uVar7);
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x170);
  *(undefined **)(param_1 + 0x170) = puVar17;
  _objc_release(uVar7);
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x178);
  *(undefined **)(param_1 + 0x178) = puVar17;
  _objc_release(uVar7);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x180);
  *(undefined **)(param_1 + 0x180) = puVar17;
  _objc_release(uVar7);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x188);
  *(undefined **)(param_1 + 0x188) = puVar17;
  _objc_release(uVar7);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 400);
  *(undefined **)(param_1 + 400) = puVar17;
  _objc_release(uVar7);
  uVar1 = *(ulong *)(param_1 + 0x3c0);
  func_0x00010bf3f7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c15c480();
  _objc_release(uVar1);
  dVar19 = 0.0;
  lVar18 = *(long *)(param_1 + 0x3e0);
  _objc_retain(lVar18);
  lVar13 = lVar18;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar18);
      }
      puVar17 = *(undefined **)(lVar15 * 8);
      lVar2 = param_1;
      func_0x00010beeb0e0();
      if ((int)lVar2 != 0) {
        puVar3 = puVar17;
        func_0x00010c071aa0();
        if ((int)puVar3 == 0) {
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar3;
          func_0x000107adcb3c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          puVar3 = puVar17;
          if ((uVar5 & 1) == 0) {
            func_0x00010b5f8ce0();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010b5f90b8();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_retain();
          puVar9 = puVar3;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (puVar9 != (undefined *)0x0) {
            puVar10 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar3);
              }
              func_0x00010befa120(*(undefined8 *)(param_1 + 0xa8));
              puVar10 = puVar10 + 1;
            } while (puVar9 != puVar10);
            puVar9 = puVar3;
            func_0x00010bf52a60();
          }
          _objc_release(puVar3);
          dVar19 = 0.0;
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x000107adcfb4();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          puVar9 = puVar10;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (puVar9 != (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar10);
              }
              uVar7 = *(undefined8 *)(param_1 + 0xa8);
              puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(uVar7);
              _objc_release(puVar4);
              puVar11 = puVar11 + 1;
            } while (puVar9 != puVar11);
            puVar9 = puVar10;
            func_0x00010bf52a60();
          }
          _objc_release(puVar10);
          _objc_release(puVar3);
        }
        else {
          dVar19 = 0.0;
          func_0x00010bfbd240();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar17;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (puVar3 != (undefined *)0x0) {
            puVar9 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(puVar17);
              }
              uVar7 = *(undefined8 *)(param_1 + 0xa8);
              puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(uVar7);
              _objc_release(puVar10);
              puVar9 = puVar9 + 1;
            } while (puVar3 != puVar9);
            puVar3 = puVar17;
            func_0x00010bf52a60();
          }
        }
        _objc_release(puVar17);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar13);
    lVar13 = lVar18;
    func_0x00010bf52a60();
  }
  _objc_release(lVar18);
  if ((int)uVar5 != 0) {
    uVar5 = *(ulong *)(param_1 + 0xa8);
    func_0x00010bf529e0();
    if (1 < uVar5) {
      puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x108);
      *(undefined **)(param_1 + 0x108) = puVar17;
      _objc_release(uVar7);
      puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar17);
      lVar12 = *(long *)(param_1 + 0xa8);
      _objc_retain(lVar12);
      lStack_5e8 = lVar12;
      func_0x00010bf52a60();
      lVar13 = lRam0000000000000000;
      if (lStack_5e8 != 0) {
        uVar5 = 0;
        do {
          lVar18 = 0;
          do {
            if (lRam0000000000000000 != lVar13) {
              _objc_enumerationMutation(lVar12);
            }
            lVar16 = *(long *)(lVar18 * 8);
            _objc_retain(lVar16);
            lVar2 = lVar16;
            func_0x00010bf52a60();
            lVar15 = lRam0000000000000000;
            if (lVar2 != 0) {
              do {
                lVar14 = 0;
                do {
                  if (lRam0000000000000000 != lVar15) {
                    _objc_enumerationMutation(lVar16);
                  }
                  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df720(dVar19 + (double)uVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x108));
                  _objc_release(puVar17);
                  lVar14 = lVar14 + 1;
                } while (lVar2 != lVar14);
                lVar2 = lVar16;
                func_0x00010bf52a60();
              } while (lVar2 != 0);
            }
            _objc_release(lVar16);
            uVar5 = uVar5 + 1;
            lVar18 = lVar18 + 1;
          } while (lVar18 != lStack_5e8);
          lStack_5e8 = lVar12;
          func_0x00010bf52a60();
        } while (lStack_5e8 != 0);
      }
      _objc_release(lVar12);
    }
  }
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar17;
  _objc_release(uVar7);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar17;
  _objc_release(uVar7);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 200);
  *(undefined **)(param_1 + 200) = puVar17;
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be81ae0(param_1);
  _objc_release(uVar7);
  lVar13 = param_1;
  func_0x00010beeb0e0();
  if ((int)lVar13 != 0) {
    lVar13 = *(long *)(param_1 + 0x3e0);
    _objc_retain(lVar13);
    lVar12 = lVar13;
    func_0x00010bf52a60();
    lVar18 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar18) {
          _objc_enumerationMutation(lVar13);
        }
        func_0x00010bf0db00(*(undefined8 *)(param_1 + 0x350));
        lVar15 = lVar15 + 1;
      } while (lVar12 != lVar15);
      lVar12 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar13 + 0xd8) == 0) {
    puVar17 = PTR_PTR_1126d2990;
    _objc_alloc();
    func_0x00010c0294e0();
    uVar7 = *(undefined8 *)(lVar13 + 0xd8);
    *(undefined **)(lVar13 + 0xd8) = puVar17;
    _objc_release(uVar7);
  }
  func_0x00010bec4c60(lVar13);
  func_0x00010c20d640(*(undefined8 *)(lVar13 + 0xd8));
  lVar12 = lVar13;
  func_0x00010bddcf20(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010c17b8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar13 + 0xd8),PTR_s_setChatMessageCount__11263c858,lVar12);
  return;
}



/* Entry: 106dd0eb4; end: 106dd0f1f; -[SCGallerySendItemsTask _fillInCounterForInitialCounts] */

void FUN_106dd0eb4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    puVar1 = PTR_PTR_1126d2990;
    _objc_alloc();
    func_0x00010c0294e0();
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined **)(param_1 + 0xd8) = puVar1;
    _objc_release(uVar3);
  }
  func_0x00010bec4c60(param_1);
  func_0x00010c20d640(*(undefined8 *)(param_1 + 0xd8));
  lVar2 = param_1;
  func_0x00010bddcf20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c17b8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd8),PTR_s_setChatMessageCount__11263c858,lVar2);
  return;
}



/* Entry: 106dd0f20; end: 106dd1047; -[SCGallerySendItemsTask _processOneMessageForChatOrStoryWithClientMessageId:] */

void FUN_106dd0f20(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106dd1048;
  puStack_48 = &UNK_1108420a0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retainBlock(&puStack_60);
  lVar2 = *(long *)(param_1 + 0xa0);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0xa8);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa8) = 0;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0xc0) = 0;
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 200);
      *(undefined8 *)(param_1 + 200) = 0;
      _objc_release(uVar3);
      uVar4 = param_1;
      func_0x00010beeb2a0();
      if (((uVar4 & 1) != 0) || (uVar4 = param_1, func_0x00010beeb300(), (int)uVar4 != 0)) {
        func_0x00010be9e820(param_1,param_2,param_3);
      }
    }
    else {
      func_0x00010be804c0(param_1,param_2,ppuVar1);
    }
  }
  else {
    func_0x00010be81b00(param_1,param_2,param_3,ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd1048; end: 106dd10a7;  */

void FUN_106dd1048(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e53418;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e53418,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebad20(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be81af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,PTR_s__processOneMessageForChatOrStory_11257e058,*(undefined8 *)(param_1 + 0x28))
  ;
  return;
}



/* Entry: 106dd10a8; end: 106dd128f; -[SCGallerySendItemsTask _processOnePendingMediaGroupForGroupChatOrAttachmentWithClientMessageId:completionBlock:] */

void FUN_106dd10a8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106dd1290;
  puStack_88 = &UNK_110859728;
  _objc_retain(uVar1);
  uStack_80 = uVar1;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  ppuVar2 = &puStack_a0;
  uStack_78 = param_4;
  _objc_retainBlock();
  uVar3 = param_1;
  func_0x00010beeb2e0();
  if (((((uVar3 & 1) == 0) && (uVar3 = param_1, func_0x00010beeb2a0(), (uVar3 & 1) == 0)) &&
      (uVar3 = param_1, func_0x00010beeb2c0(), (uVar3 & 1) == 0)) &&
     (uVar3 = param_1, func_0x00010beeb300(), (uVar3 & 1) == 0)) {
    (*(code *)ppuVar2[2])(ppuVar2,0);
  }
  else {
    _objc_retain(ppuVar2);
    _objc_retain(uVar1);
    _objc_retain(param_4);
    func_0x00010bdeff00(param_1);
    _objc_release(param_4);
    _objc_release(uVar1);
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd1290; end: 106dd12db;  */

void FUN_106dd1290(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d3c0(*(undefined8 *)(lVar1 + 0xa0));
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dd12dc; end: 106dd1427;  */

void FUN_106dd12dc(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = param_2;
  func_0x00010c26a800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = 0x30;
  }
  else {
    func_0x00010bfcf460(*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xe8);
    lVar3 = param_2;
    func_0x00010c26a800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4);
    _objc_release(lVar3);
    func_0x00010c12d3c0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xa0));
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar2 = uVar1;
    func_0x00010010fab4(uVar1,PTR_DAT_1126a5228);
    uVar4 = uVar1;
    if ((int)uVar2 == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
    func_0x00010bdd1860(*(undefined8 *)(param_1 + 0x28));
    func_0x00010be9f300(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar4);
    lVar3 = 0x38;
  }
  (**(code **)(*(long *)(param_1 + lVar3) + 0x10))(*(long *)(param_1 + lVar3),param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dd1428; end: 106dd148f; -[SCGallerySendItemsTask _notifyPublicStoryStateIfAbleWith:] */

void FUN_106dd1428(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x238);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106dd1490; end: 106dd14ff; -[SCGallerySendItemsTask _storeCaptureSessionId:forMediaId:] */

void FUN_106dd1490(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _os_unfair_lock_lock(param_1 + 0x160);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x158),param_2,param_3,param_4);
    _objc_release(param_4);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x160);
    return;
  }
  return;
}



/* Entry: 106dd1500; end: 106dd1663; -[SCGallerySendItemsTask _prepareUploadableChatMediasForGalleryMedias:index:clientMessageId:preparedUploadableChatMedias:completionBlock:] */

void FUN_106dd1500(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    puVar2 = PTR_PTR_1126d2988;
    func_0x00010c22bde0(PTR_PTR_1126d2988);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd1664; end: 106dd176b;  */

void FUN_106dd1664(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dfd40(uVar2,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106dd176c;
  puStack_78 = &UNK_11097c640;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar4;
  _objc_retain(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar5;
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar6;
  uStack_60 = uVar7;
  _objc_retain(uVar4);
  uStack_58 = uVar4;
  func_0x00010be79720(uVar1,param_2,uVar2,uVar3,&puStack_90);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_50);
  return;
}



/* Entry: 106dd176c; end: 106dd17ef;  */

void FUN_106dd176c(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
    }
    func_0x00010be79760(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dd17f0; end: 106dd1b33; -[SCGallerySendItemsTask _createUploadableChatMediaWithGallerySnap:] */

void FUN_106dd17f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010b5fa088();
  puVar6 = PTR_PTR_1126bfb98;
  switch(uVar2) {
  case 0:
    uVar3 = param_1;
    func_0x00010c0ef4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b580();
    if (((ulong)puVar6 & 1) != 0) {
      _objc_release(uVar3);
      goto code_r0x000106dd1a08;
    }
    uVar2 = param_3;
    func_0x00010b697ae8(param_3,2);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126cfd18;
    if ((uVar2 & 1) != 0) goto code_r0x000106dd1a08;
    break;
  case 1:
code_r0x000106dd1a08:
    puVar6 = PTR_PTR_1126d2a00;
    break;
  case 2:
  case 5:
  case 6:
  case 8:
  case 10:
  case 0xc:
    puVar6 = PTR_PTR_1126d2a08;
    goto code_r0x000106dd18e4;
  case 3:
  case 4:
  case 7:
  case 9:
  case 0xb:
    uVar3 = param_1;
    func_0x00010c0ef4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b580();
    if (((ulong)puVar6 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010b697ae8(param_3,2);
      _objc_release(uVar3);
      ppuVar5 = &PTR_PTR_1126d2a08;
      if ((int)uVar2 == 0) {
        ppuVar5 = &PTR_PTR_1126d2a10;
      }
    }
    else {
      _objc_release(uVar3);
      ppuVar5 = &PTR_PTR_1126d2a08;
    }
    puVar6 = *ppuVar5;
code_r0x000106dd18e4:
    _objc_alloc(puVar6);
    func_0x00010b5fa088(param_3);
    func_0x00010b5f9ff0();
    func_0x00010c01adc0(puVar6);
    uVar3 = param_1;
    func_0x00010c0ef4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5c920();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106dd1a30();
    func_0x00010c1ee860(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    goto LAB_106dd1950;
  default:
    puVar6 = (undefined *)0x0;
    goto LAB_106dd1950;
  }
  _objc_alloc(puVar6);
  func_0x00010c01ad60();
LAB_106dd1950:
  uVar3 = param_1;
  func_0x00010c0ef4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_106def594(puVar6,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106dd1b34; end: 106dd1b93; -[SCGallerySendItemsTask _createUploadableChatMediaWithSnapDocWrapper:] */

void FUN_106dd1b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2a00;
  _objc_alloc(PTR_PTR_1126d2a00);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ad60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1a6de0(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dd1b94; end: 106dd1d83; -[SCGallerySendItemsTask _createUploadableChatMediaWithPhotoAsset:] */

void FUN_106dd1b94(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c0fce40();
  dVar6 = (double)uVar1;
  uVar1 = param_7;
  func_0x00010c0fcaa0();
  dVar4 = (double)uVar1;
  dVar5 = dVar6;
  if (dVar6 <= dVar4) {
    dVar5 = dVar4;
    dVar4 = dVar6;
  }
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar3);
  if (dVar4 == 0.0) {
LAB_106dd1c10:
    dVar5 = 0.0;
  }
  else {
    if (dVar5 != 0.0) {
      dVar4 = dVar4 / dVar5;
      if (dVar4 == 0.0) goto LAB_106dd1c10;
      if (dVar4 != INFINITY) {
        dVar5 = dVar4 * param_4;
        if (param_3 <= dVar5) {
          param_4 = param_3 / dVar4;
          dVar5 = param_3;
        }
        goto LAB_106dd1c24;
      }
    }
    param_4 = 0.0;
    dVar5 = param_3;
  }
LAB_106dd1c24:
  uVar1 = param_7;
  func_0x00010c0c6c20();
  if (uVar1 == 1) {
    puVar3 = PTR_PTR_1126cfd18;
    _objc_alloc(PTR_PTR_1126cfd18);
    puVar2 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ad60(puVar3,param_6,puVar2);
    _objc_release(puVar2);
    func_0x00010bf2a7e0(PTR_PTR_1126b6600);
    func_0x00010c1c4580(puVar3);
    func_0x00010c1c56e0(puVar3,param_6,(long)(double)(long)dVar5);
    func_0x00010c1c4860(puVar3,param_6,(long)(double)(long)param_4);
  }
  else {
    uVar1 = param_7;
    func_0x00010c0c6c20();
    if (uVar1 == 2) {
      puVar3 = PTR_PTR_1126d2a00;
      _objc_alloc(PTR_PTR_1126d2a00);
      puVar2 = puVar3;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ad60(puVar3,param_6,puVar2);
      _objc_release(puVar2);
      func_0x00010bf8b160(param_7);
      func_0x00010c1c4580(puVar3);
      func_0x00010c1c56e0(puVar3,param_6,(long)(double)(long)dVar5);
      func_0x00010c1c4860(puVar3,param_6,(long)(double)(long)param_4);
      func_0x00010c1a6de0(puVar3,param_6,1);
    }
    else {
      puVar3 = (undefined *)0x0;
    }
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dd1d84; end: 106dd24ab; -[SCGallerySendItemsTask _prepareUploadableChatMediaForGalleryMedia:clientMessageId:completionBlock:] */

void FUN_106dd1d84(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x000107ade96c();
  puVar2 = PTR_DAT_1126a5228;
  if ((long)uVar1 < 3) {
    uVar9 = param_1;
    if (uVar1 == 1) {
      func_0x00010bdf5460();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010be1a3a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0ef4a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(uVar4);
      _objc_retain(uVar9);
      func_0x00010be1dbc0(param_1);
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(param_5);
      _objc_release(uVar4);
      _objc_release(param_3);
      uVar1 = uVar9;
    }
    else {
      if (uVar1 != 2) goto LAB_106dd2474;
      uVar1 = param_1;
      func_0x00010be5efe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126c4650;
      _objc_retain(param_3);
      _objc_opt_class(puVar2);
      uVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      uVar3 = param_3;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_3);
      uVar4 = uVar3;
      func_0x00010bf0af00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010bdf5480();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_5);
      _objc_retain(uVar9);
      func_0x00010be79700(param_1);
      _objc_release(uVar9);
      uVar3 = param_5;
LAB_106dd232c:
      _objc_release(uVar3);
    }
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 != 4) goto LAB_106dd2474;
      _objc_retain(param_3);
      uVar1 = param_3;
      func_0x00010010fab4(param_3,puVar2);
      uVar3 = param_3;
      if ((int)uVar1 == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_3);
      uVar1 = uVar3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(ulong *)(param_1 + 0x20);
        uVar4 = uVar3;
        func_0x00010c241220(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
      _objc_release(uVar1);
      uVar1 = uVar9;
      func_0x000107e63e44();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x000107e63ed0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bf51e00();
      _objc_release(uVar5);
      uVar5 = uVar3;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010be24180();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar9;
      func_0x000107e639a4(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x000107e63da0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        _objc_retain(param_5);
        _objc_retain(uVar3);
        _objc_retain(uVar9);
        func_0x00010be1dbc0(param_1);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(param_5);
        _objc_release(uVar3);
      }
      else {
        _objc_retain(param_5);
        _objc_retain(uVar3);
        _objc_retain(uVar9);
        func_0x00010be1dbe0(param_1);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(param_5);
        _objc_release(uVar3);
      }
      _objc_release(uVar9);
      goto LAB_106dd232c;
    }
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bfbd940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bfbcca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x18);
      uVar5 = param_3;
      func_0x00010bfbcca0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
    _objc_release(uVar1);
    uVar1 = uVar9;
    func_0x000107e63ed0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bfbcca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010be24120(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(uVar3);
    _objc_retain(uVar9);
    func_0x00010be1dbc0(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar3);
    uVar1 = param_3;
  }
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar1);
LAB_106dd2474:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd24ac; end: 106dd2597;  */

void FUN_106dd24ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c204e80(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  func_0x00010be796e0(uVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd2598; end: 106dd25fb;  */

void FUN_106dd2598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106dd25a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106dd25fc; end: 106dd2893; -[SCGallerySendItemsTask _getChatMediaSnapMetadataWithCompletion:snapDetailId:overlay:ctItems:lensId:contextClientInfo:completion:] */

void FUN_106dd25fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106dd2894;
  puStack_88 = &UNK_11097c6d0;
  _objc_retain();
  puStack_80 = puVar1;
  func_0x00010be4e080(param_1);
  _objc_initWeak(auStack_a8,param_1);
  puStack_108 = puVar3;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_106dd28a8;
  puStack_f0 = &UNK_11097c700;
  _objc_retain(param_8);
  uStack_e8 = param_8;
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(param_3);
  uStack_e0 = param_3;
  _objc_retain(param_4);
  uStack_d8 = param_4;
  _objc_retain(param_5);
  uStack_d0 = param_5;
  _objc_retain(param_6);
  uStack_c8 = param_6;
  _objc_retain(param_7);
  uStack_c0 = param_7;
  _objc_retain(param_9);
  uStack_b8 = param_9;
  ppuVar2 = &puStack_108;
  _objc_retainBlock(ppuVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d2988;
  func_0x00010c22bde0(PTR_PTR_1126d2988);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puStack_80);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dd2894; end: 106dd28a7;  */

void FUN_106dd2894(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106dd28a8; end: 106dd2a6b;  */

void FUN_106dd28a8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_68 [24];
  
  _objc_retain(param_2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 == 0) {
    puVar6 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar6);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010c277e80(param_2);
    func_0x00010c0df880(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126b5c10;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = PTR_PTR_1126bfac0;
    _objc_opt_new(PTR_PTR_1126bfac0);
    func_0x00010c277e80(param_2);
    func_0x00010c218f80(puVar1);
    func_0x00010bf0ffa0(auStack_68,param_2);
    _CMTimeGetSeconds(auStack_68);
    func_0x00010c209700(puVar1);
    lVar2 = param_2;
    func_0x00010bf93480();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126b25f8;
      _objc_alloc(PTR_PTR_1126b25f8);
      lVar2 = param_2;
      func_0x00010bf93480(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360(puVar4);
      func_0x00010c182620(puVar1);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    func_0x00010c1ca400(puVar6);
    _objc_release(puVar1);
  }
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1dbe0();
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 106dd2a6c; end: 106dd31df; -[SCGallerySendItemsTask _getChatMediaSnapMetadataWithCompletion:snapDetailId:overlay:ctItems:lensId:musicTrackId:contextClientInfo:completion:] */

void FUN_106dd2a6c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar5 = PTR_PTR_1126b2390;
  puVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_7;
  if (param_7 == 0) {
    lVar11 = param_5;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x388);
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (param_7 == 0) {
    _objc_release(lVar11);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c4918;
  _objc_opt_new();
  puVar3 = puVar5;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  if (puVar6 != (undefined *)0x0) {
    puVar3 = puVar5;
    func_0x00010bf4bc60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  puVar3 = param_3;
  func_0x00010bf298a0();
  if ((int)puVar3 != 0) {
    func_0x00010bf298a0(param_3);
    puVar3 = puVar2;
    func_0x00010c2a9d80();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _dispatch_group_create();
  puVar7 = puVar5;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b5c10;
  _objc_opt_class(PTR_PTR_1126b5c10);
  puVar8 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar6);
  puVar6 = puVar7;
  if (((ulong)puVar8 & 1) == 0) {
    puVar6 = (undefined *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar7);
  if (puVar6 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010c0ca7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf529e0();
    _objc_release(puVar8);
    if (puVar9 != (undefined *)0x0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x1c8);
      func_0x00010bf1f440();
      if (iVar1 == 0) {
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        lStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        plStack_170 = (long *)0x0;
        puVar8 = puVar7;
        func_0x00010c0ca7c0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf52a60();
        if (puVar9 != (undefined *)0x0) {
          lVar11 = *plStack_170;
          do {
            puVar12 = (undefined *)0x0;
            do {
              if (*plStack_170 != lVar11) {
                _objc_enumerationMutation(puVar8);
              }
              uVar4 = *(undefined8 *)(lStack_178 + (long)puVar12 * 8);
              _dispatch_group_enter(puVar3);
              lVar10 = param_1;
              _objc_opt_class(param_1);
              func_0x00010c22bde0();
              _objc_retainAutoreleasedReturnValue();
              puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_1b8 = 0xc2000000;
              pcStack_1b0 = FUN_106dd353c;
              puStack_1a8 = &UNK_11084c4a0;
              lStack_1a0 = param_1;
              uStack_198 = uVar4;
              _objc_retain(puVar7);
              puStack_190 = puVar6;
              _objc_retain(puVar3);
              puStack_188 = puVar3;
              func_0x00010c0f7fc0(lVar10);
              _objc_release(lVar10);
              _objc_release(puStack_188);
              _objc_release(puStack_190);
              puVar12 = puVar12 + 1;
            } while (puVar9 != puVar12);
            puVar9 = puVar8;
            func_0x00010bf52a60();
          } while (puVar9 != (undefined *)0x0);
        }
      }
      else {
        puVar9 = puVar7;
        func_0x00010c0ca7c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x000100504554();
        _objc_release(puVar9);
        _dispatch_group_enter(puVar3);
        lVar11 = param_1;
        _objc_opt_class(param_1);
        func_0x00010c22bde0();
        _objc_retainAutoreleasedReturnValue();
        puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_138 = 0xc2000000;
        pcStack_130 = FUN_106dd31e8;
        puStack_128 = &UNK_11084c4a0;
        lStack_120 = param_1;
        puStack_118 = puVar8;
        _objc_retain(puVar7);
        puStack_110 = puVar6;
        _objc_retain(puVar3);
        puStack_108 = puVar3;
        func_0x00010c0f7fc0(lVar11);
        _objc_release(lVar11);
        _objc_release(puStack_108);
        _objc_release(puStack_110);
      }
      _objc_release(puVar8);
    }
  }
  puVar7 = PTR_PTR_1126d2a18;
  func_0x00010bfdbfe0();
  if ((int)puVar7 != 0) {
    _dispatch_group_enter(puVar3);
    puVar7 = PTR_PTR_1126d2a18;
    lVar11 = param_5;
    FUN_106dd3708(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_106dd384c;
    puStack_1d0 = &UNK_11097c780;
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_106dd3858;
    puStack_218 = &UNK_11097c7b0;
    lStack_1c8 = param_1;
    _objc_retain(puVar6);
    puStack_210 = puVar6;
    _objc_retain(param_5);
    lStack_208 = param_5;
    _objc_retain(param_6);
    uStack_200 = param_6;
    lStack_1f8 = param_1;
    _objc_retain(puVar3);
    puStack_1f0 = puVar3;
    func_0x00010c109ee0(puVar7);
    _objc_release(lVar11);
    _objc_release(puStack_1f0);
    _objc_release(uStack_200);
    _objc_release(lStack_208);
    _objc_release(puStack_210);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1c8);
  _objc_retain(uVar4);
  uVar13 = *(undefined8 *)(param_1 + 0x338);
  _objc_retain(uVar13);
  puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_106dd38cc;
  puStack_268 = &UNK_110866740;
  uStack_238 = param_10;
  puStack_260 = puVar6;
  puStack_258 = param_3;
  uStack_250 = uVar4;
  puStack_248 = puVar2;
  uStack_240 = uVar13;
  _objc_retain(param_10);
  _objc_retain(uVar13);
  _objc_retain(puVar2);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  _objc_retain(puVar6);
  puVar7 = PTR___dispatch_main_q_11034be20;
  func_0x000100bc0718(puVar3,PTR___dispatch_main_q_11034be20,&puStack_280);
  _objc_release(uStack_238);
  _objc_release(uStack_240);
  _objc_release(puStack_248);
  _objc_release(uStack_250);
  _objc_release(puStack_258);
  _objc_release(puStack_260);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(param_10);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0b5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_lowercaseString_11260b0c8);
    return;
  }
  return;
}



/* Entry: 106dd31e0; end: 106dd31e7;  */

void FUN_106dd31e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lowercaseString_11260b0c8);
  return;
}


