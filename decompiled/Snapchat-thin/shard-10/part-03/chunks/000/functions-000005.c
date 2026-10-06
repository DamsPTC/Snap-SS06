/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d0e420; end: 107d0e42b; -[SCPreferences setCtaPromoLastViewedValues:] */

void FUN_107d0e420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110eb8938);
  return;
}



/* Entry: 107d0e42c; end: 107d0e51b; -[SCPreferences observePromoLastViewedValuesWithDefaultValue:] */

void FUN_107d0e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d0e51c; end: 107d0e76f;  */

void FUN_107d0e51c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar1);
  if ((puVar2 == (undefined *)0x0) &&
     (puVar1 = *(undefined **)(param_1 + 0x28), puVar1 == (undefined *)0x0)) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  }
  else {
    _objc_retain(puVar1);
  }
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  func_0x00010c0d9840(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_copyWeak(auStack_78,param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  func_0x00010c0e06e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107d0e770; end: 107d0e7e7;  */

void FUN_107d0e770(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be47280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0d9840(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d0e7e8; end: 107d0e7ef;  */

void FUN_107d0e7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_unobserve_11267e0c0);
  return;
}



/* Entry: 107d0e7f0; end: 107d0e937; -[SCPreferences _lastViewedPromoValuesWithChangedValues:defaultValue:] */

void FUN_107d0e7f0(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d3c80(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  if (((uVar4 & 1) == 0) || (uVar2 == 0)) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    if ((uVar2 == 0) && (param_4 == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010c1d0640(uVar1);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c1d0640(uVar1);
    }
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d0e938; end: 107d0e9b3;  */

undefined * FUN_107d0e938(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113727a28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eb8a78,
                        &UNK_10dee5a00,&UNK_10dee5c10,0x33,FUN_107d0e9b4,0);
    do {
      if (puRam0000000113727a28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113727a28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113727a28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113727a28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113727a28;
}



/* Entry: 107d0e9b4; end: 107d0e9d3;  */

uint FUN_107d0e9b4(ulong param_1)

{
  return (uint)((uint)param_1 < 0x39) & (uint)(0x1ffff89ff7fffff >> (param_1 & 0x3f));
}



/* Entry: 107d0e9d4; end: 107d0ea3b; +[CtaPromoData descriptor] */

void FUN_107d0e9d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727a30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b7b1b8,
                        &PTR____CFConstantStringClassReference_110eb8a98,
                        &PTR_s_snapchat_bitmoji_api_113244330,&PTR_DAT_113244348,4,0x28,0x1c);
    puRam0000000113727a30 = puVar1;
  }
  return;
}



/* Entry: 107d0ea3c; end: 107d0ead7; +[CtaPromoData_CtaPromoItem descriptor] */

undefined * FUN_107d0ea3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727a38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b7b1e0,
                        &PTR____CFConstantStringClassReference_110eb8ab8,
                        &PTR_s_snapchat_bitmoji_api_113244330,&PTR_DAT_1132443c8,9,0x48,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b7b1b8);
    puRam0000000113727a38 = puVar1;
  }
  return puRam0000000113727a38;
}



/* Entry: 107d0ead8; end: 107d0eb67; -[SCOurStorySpotlightViewCountNotificationActionHandler initWithSnapViewerDataCoordinator:] */

undefined1 * FUN_107d0ead8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa9e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),0);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = 0;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d0eb68; end: 107d0ec77; -[SCOurStorySpotlightViewCountNotificationActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_107d0eb68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    if ((int)uVar1 == 0) {
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c071ae0();
      _objc_release(uVar2);
      if ((int)uVar1 == 0) {
        uVar2 = 0;
        goto LAB_107d0ec54;
      }
      func_0x00010be9cd60(param_1,param_2,param_4);
    }
    else {
      func_0x00010be6e7a0(param_1,param_2,param_4);
    }
  }
  else {
    func_0x00010bdfea40(param_1,param_2,param_4);
  }
  uVar2 = 1;
LAB_107d0ec54:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107d0ec78; end: 107d0ed63; -[SCOurStorySpotlightViewCountNotificationActionHandler _didOpenNotificationWithActionModel:] */

void FUN_107d0ec78(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b43a8;
  _objc_opt_class(PTR_PTR_1126b43a8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar2 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      _objc_retain(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(ulong *)(param_1 + 8) = uVar2;
      _objc_release(uVar4);
      func_0x00010be136c0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107d0ed64; end: 107d0ee4b; -[SCOurStorySpotlightViewCountNotificationActionHandler _ourStorySectionUpdateWithActionModel:] */

void FUN_107d0ed64(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d78d0;
  _objc_opt_class(PTR_PTR_1126d78d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf20da0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  if (uVar4 != 0) {
    uVar3 = uVar1;
    func_0x00010bf20da0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1554e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 0x10,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    *(undefined8 *)(param_1 + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d0ee4c; end: 107d0efe7; -[SCOurStorySpotlightViewCountNotificationActionHandler _sectionDidLoadWithActionModel:] */

void FUN_107d0ee4c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar3 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d78d0;
  _objc_opt_class(PTR_PTR_1126d78d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf20da0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c1554e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar6 = uVar5;
  func_0x00010010fab4(uVar5,PTR_DAT_1126a59f8);
  uVar3 = uVar5;
  if ((int)uVar6 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if ((uVar2 == uVar3) && (*(long *)(param_1 + 0x18) - 1U < 2)) {
    *(undefined8 *)(param_1 + 0x18) = 2;
    if (*(long *)(param_1 + 8) != 0) {
      _objc_initWeak(auStack_48,param_1);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_107d0efe8;
      puStack_58 = &UNK_1108434b0;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x000100c749e0(0x3ee978d5,"APPSTORE",&puStack_70);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107d0efe8; end: 107d0f013;  */

void FUN_107d0efe8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9c1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d0f014; end: 107d0f067; -[SCOurStorySpotlightViewCountNotificationActionHandler _scrollToSectionIfAlreadyReady] */

void FUN_107d0f014(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) == 2) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    _objc_release();
    if ((lVar1 != 0) && (*(long *)(param_1 + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be6d6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openStoriesSection_112578f50);
      return;
    }
  }
  return;
}



/* Entry: 107d0f068; end: 107d0f0b7; -[SCOurStorySpotlightViewCountNotificationActionHandler _openStoriesSection] */

void FUN_107d0f068(long param_1)

{
  if ((1 < *(long *)(param_1 + 0x18)) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined8 *)(param_1 + 0x18) = 3;
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1987e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107d0f0b8; end: 107d0f1eb; -[SCOurStorySpotlightViewCountNotificationActionHandler _fetchReadReceiptViewInfoFor:] */

void FUN_107d0f0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126cf370;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e2e0(puVar1,param_2,5,puVar2,&PTR__OBJC_CLASS___NSConstantArray_111181a90);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfab580(uVar3,param_2,puVar2,0,&PTR____CFConstantStringClassReference_110eb8b98);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(puVar1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0f1ec; end: 107d0f203; -[SCOurStorySpotlightViewCountNotificationActionHandler parentActionHandler] */

void FUN_107d0f1ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0f204; end: 107d0f20f; -[SCOurStorySpotlightViewCountNotificationActionHandler setParentActionHandler:] */

void FUN_107d0f204(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107d0f210; end: 107d0f227; -[SCOurStorySpotlightViewCountNotificationActionHandler ourStoriesSection] */

void FUN_107d0f210(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0f228; end: 107d0f233; -[SCOurStorySpotlightViewCountNotificationActionHandler setOurStoriesSection:] */

void FUN_107d0f228(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107d0f234; end: 107d0f273; -[SCOurStorySpotlightViewCountNotificationActionHandler .cxx_destruct] */

void FUN_107d0f234(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0f274; end: 107d0f3c7; -[SCUnifiedProfileStoriesViewMoreStoriesGroupActionHandler initWithExpandableBehaviorSubject:] */

undefined8 * FUN_107d0f274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fa9f0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_retain(puVar3);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar2 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d0f3c8; end: 107d0f427;  */

void FUN_107d0f3c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be33840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d0f428; end: 107d0f42f; -[SCUnifiedProfileStoriesViewMoreStoriesGroupActionHandler _handledExpandedObservableValue:] */

void FUN_107d0f428(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107d0f430; end: 107d0f493; -[SCUnifiedProfileStoriesViewMoreStoriesGroupActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_107d0f430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((int)uVar1 != 0) {
    func_0x00010beccba0(param_1);
  }
  return uVar1;
}



/* Entry: 107d0f494; end: 107d0f4e3; -[SCUnifiedProfileStoriesViewMoreStoriesGroupActionHandler _toggleExpandedState] */

void FUN_107d0f494(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(byte *)(param_1 + 0x18) ^ 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d0f4e4; end: 107d0f513; -[SCUnifiedProfileStoriesViewMoreStoriesGroupActionHandler .cxx_destruct] */

void FUN_107d0f4e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0f514; end: 107d0f61b; -[SCUnifiedProfileMyStorySnapActionMenuDataProvider initWithStoryType:storyId:snapClientId:isSavable:isDeletable:isShareable:] */

undefined1 *
FUN_107d0f514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fa9f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 0x21) = param_7;
    *(undefined1 *)((long)puVar1 + 0x22) = param_8;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107d0f61c; end: 107d0f96f; -[SCUnifiedProfileMyStorySnapActionMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_107d0f61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b02a8;
  if (*(char *)(param_1 + 0x21) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar5);
    _objc_retain(uVar7);
    _objc_alloc(puVar2);
    FUN_107d0fa64(uVar6,uVar5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
    func_0x00010c01b460(puVar2);
    _objc_release(uVar6);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e1edd8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1edd8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x000107d4bde8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(puVar2);
    func_0x00010befa120(puVar1);
    _objc_release(ppuVar4);
  }
  puVar2 = PTR_PTR_1126b02a8;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar5);
    _objc_retain(uVar7);
    _objc_alloc(puVar2);
    FUN_107d0fa64(uVar6,uVar5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
    func_0x00010c01b460(puVar2);
    _objc_release(uVar6);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e61258;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e61258,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(puVar2);
    func_0x00010befa120(puVar1);
    _objc_release(ppuVar4);
  }
  puVar2 = PTR_PTR_1126b02a8;
  if (*(char *)(param_1 + 0x22) == '\x01') {
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar5);
    _objc_retain(uVar7);
    _objc_alloc(puVar2);
    FUN_107d0fa64(uVar6,uVar5,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
    func_0x00010c01b460(puVar2);
    _objc_release(uVar6);
    func_0x000108f5827c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(puVar2);
    func_0x00010befa120(puVar1);
    _objc_release(uVar5);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 107d0f970; end: 107d0f9fb;  */

void FUN_107d0f970(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eb93d8;
  FUN_107d4bf04(&PTR____CFConstantStringClassReference_110eb93d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar1);
  _objc_release(ppuVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107d0f9fc; end: 107d0fa13; -[SCUnifiedProfileMyStorySnapActionMenuDataProvider delegate] */

void FUN_107d0f9fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0fa14; end: 107d0fa1f; -[SCUnifiedProfileMyStorySnapActionMenuDataProvider setDelegate:] */

void FUN_107d0fa14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 107d0fa20; end: 107d0fa63; -[SCUnifiedProfileMyStorySnapActionMenuDataProvider .cxx_destruct] */

void FUN_107d0fa20(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d0fa64; end: 107d0fae3;  */

void FUN_107d0fa64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b11d0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04e320();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d0fae4; end: 107d0faff; -[SCUnifiedProfileExportButtonResource urlForScale:] */

undefined ** FUN_107d0fae4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb8d78;
  if (param_3 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb8d98;
  }
  return ppuVar1;
}



/* Entry: 107d0fb00; end: 107d0fb57; -[SCUnifiedProfileExportButtonResource url] */

void FUN_107d0fb00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28f550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_urlForScale__112681778,(int)(double)CONCAT44(uVar3,uVar2));
  return;
}



/* Entry: 107d0fb58; end: 107d0fbc7;  */

void FUN_107d0fb58(ulong param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_PTR_110a08fc8;
  if ((param_1 < 10) && ((1L << (param_1 & 0x3f) & 0x3e3U) != 0)) {
    if (param_2 - 1U < 3) {
      ppuVar1 = (undefined **)(&PTR_PTR_110a08c20)[param_2 - 1U];
    }
    else {
      ppuVar1 = &PTR_PTR_110a08fc8;
    }
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d0fbc8; end: 107d0ff23; -[SCProfileMyCustomStoryDataSource initWithStoryId:storyType:myStoriesDataCoordinator:snapViewerDataCoordinator:readReceiptCoordinator:customStoriesDataFetcher:snapchattersDataFetcher:shortcutsDataFetcher:currentUserId:circumstanceEngine:] */

undefined8 *
FUN_107d0fbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_70 = PTR_PTR_1126faa00;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_3;
    _objc_release(uVar2);
    puVar1[0x11] = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[1];
    puVar1[1] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[9];
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b4a0(puVar1[10]);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = puVar1[9];
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d0ff24; end: 107d0ff4f;  */

void FUN_107d0ff24(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d0ff50; end: 107d10397; -[SCProfileMyCustomStoryDataSource _setUp] */

void FUN_107d0ff50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0d4c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c258b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c241380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  lVar6 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf62580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar6);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c22d840();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar8);
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010bf3d040();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010bf3d000();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar10);
    _objc_initWeak(auStack_68,param_1);
    uVar1 = uVar3;
    func_0x00010bf41860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    uVar15 = uVar14;
    func_0x00010c25ff60(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return;
}



/* Entry: 107d10398; end: 107d10483;  */

void FUN_107d10398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126d78d8;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar6 = puVar2;
  func_0x00010c036fa0();
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126d78d8;
    _objc_retain(puVar6);
    _objc_retain(uVar5);
    _objc_alloc(puVar1);
    uVar3 = uVar5;
    func_0x00010c100120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c2413c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c036fa0(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d10484; end: 107d10647;  */

void FUN_107d10484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d78d8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c100120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2413c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c036fa0(puVar1);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d10648; end: 107d109bf;  */

void FUN_107d10648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d78d8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c100120(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2413c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c241360(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf624a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar5;
  FUN_107d15e78(uVar5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c036fa0(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d109c0; end: 107d10a07;  */

void FUN_107d109c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bb60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d10a08; end: 107d10e13; -[SCProfileMyCustomStoryDataSource _onStoryUpdate:] */

void FUN_107d10a08(long param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **unaff_x25;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf624a0();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
  func_0x00010c071ae0();
  if (iVar1 == 0) {
    _objc_retain(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = lVar2;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lVar5 = lVar2;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar10 = *plStack_1a0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1a0 != lVar10) {
            _objc_enumerationMutation(lVar5);
          }
          uVar3 = *(undefined8 *)(lStack_1a8 + lVar11 * 8);
          func_0x00010c2923e0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar3);
          lVar11 = lVar11 + 1;
        } while (lVar6 != lVar11);
        lVar6 = lVar5;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010c27dd80();
    if (lVar5 == 10) {
      lVar5 = lVar2;
      func_0x00010bf5a820();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      _objc_release(lVar5);
      if (lVar10 != 0) {
        lVar5 = lVar2;
        func_0x00010bf5a820(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      lVar5 = lVar2;
      func_0x00010c0d02e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar10 = *plStack_1e0;
        do {
          lVar11 = 0;
          do {
            if (*plStack_1e0 != lVar10) {
              _objc_enumerationMutation(lVar5);
            }
            lVar9 = *(long *)(lStack_1e8 + lVar11 * 8);
            func_0x00010c08fa60();
            if (lVar9 != 0) {
              func_0x00010befa120(puVar4);
            }
            lVar11 = lVar11 + 1;
          } while (lVar6 != lVar11);
          lVar6 = lVar5;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar5);
    }
    _objc_initWeak(auStack_1f8,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf00560(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_107d10e14;
    puStack_210 = &UNK_110853590;
    unaff_x25 = &puStack_228;
    param_2 = auStack_1f8;
    _objc_copyWeak(auStack_200,param_2);
    _objc_retain(param_3);
    lStack_208 = param_3;
    func_0x00010c244e80(uVar3);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release(lStack_208);
    _objc_destroyWeak(auStack_200);
    _objc_destroyWeak(auStack_1f8);
    _objc_release(puVar4);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010bf85d80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee4dc0(param_1);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_1f8);
  __Unwind_Resume();
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110ad45a0,
                      &PTR___NSConcreteGlobalBlock_110ad45c0);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010bee4de0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d10e14; end: 107d10e7b;  */

void FUN_107d10e14(long param_1,undefined8 param_2)

{
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110ad45a0,
                      &PTR___NSConcreteGlobalBlock_110ad45c0);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4de0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107d10e7c; end: 107d10f67; -[SCProfileMyCustomStoryDataSource _updateWithStoryUpdate:userIdToSnapchatter:] */

void FUN_107d10e7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf624a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  FUN_107d16a9c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf624a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee4dc0(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107d10f68; end: 107d11213; -[SCProfileMyCustomStoryDataSource _updateWithStoryUpdate:subtext:displayName:] */

void FUN_107d10f68(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf624a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27dd80();
  if (uVar2 < 0xb) {
    uVar11 = *(undefined8 *)(&UNK_10dee5ce0 + uVar2 * 8);
  }
  else {
    uVar11 = 5;
  }
  *(undefined8 *)(param_1 + 0x88) = uVar11;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c100120(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar11);
  _objc_release(puVar4);
  uVar1 = param_3;
  func_0x00010c100120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2413c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf3d020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf3cfe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c241360(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c25aa80();
  uVar8 = param_3;
  func_0x00010bf624a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar9 = uVar8;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  uVar10 = uVar2;
  func_0x000107d14310(uVar2,uVar3,uVar5,uVar6,uVar7,uVar11,param_4,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 107d11214; end: 107d1121b; -[SCProfileMyCustomStoryDataSource storiesSectionDataModelObservable] */

void FUN_107d11214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 107d1121c; end: 107d11223; -[SCProfileMyCustomStoryDataSource storySavableObservable] */

void FUN_107d1121c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 107d11224; end: 107d11227; -[SCProfileMyCustomStoryDataSource dismissTooltip] */

void FUN_107d11224(void)

{
  return;
}



/* Entry: 107d11228; end: 107d1122f; -[SCProfileMyCustomStoryDataSource storyId] */

undefined8 FUN_107d11228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107d11230; end: 107d11237; -[SCProfileMyCustomStoryDataSource storyType] */

undefined8 FUN_107d11230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107d11238; end: 107d1130f; -[SCProfileMyCustomStoryDataSource .cxx_destruct] */

void FUN_107d11238(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d11310; end: 107d1160b; -[SCProfileMyOurStoryDataSource initWithMyStoriesDataCoordinator:snapViewerDataCoordinator:readReceiptCoordinator:ourStoriesAttributionManager:storiesGrapheneMetricsEmitter:currentUserId:circumstanceEngine:updatesTracker:spotlightRepliesViewCountManager:] */

undefined8 *
FUN_107d11310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126faa08;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(&PTR____CFConstantStringClassReference_110e43098);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = &PTR____CFConstantStringClassReference_110e43098;
    _objc_release(uVar2);
    puVar1[0x14] = 2;
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
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[7];
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b4a0(puVar1[8]);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x0001005929c0();
    *(char *)(puVar1 + 0xc) = (char)uVar2;
    puVar1[0xd] = 0;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    func_0x00010bea9760(puVar1);
  }
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



/* Entry: 107d1160c; end: 107d11927; -[SCProfileMyOurStoryDataSource _setUpNonCombinedObservables] */

void FUN_107d1160c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
  func_0x0001005929c0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    uVar3 = uVar2;
    func_0x00010c2332c0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_107d116c4;
    *(undefined8 *)(param_1 + 0x68) = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec3a0();
  }
  else {
    uVar3 = uVar2;
    func_0x00010c233ec0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_107d116c4;
    *(undefined8 *)(param_1 + 0x68) = 2;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec6e0();
  }
  _objc_release(uVar2);
LAB_107d116c4:
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c276b20(uVar2);
  func_0x00010c218860(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c241380();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107d11928;
  puStack_68 = &UNK_1108531d0;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  uVar2 = uVar4;
  func_0x00010c0d4b20(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  _objc_copyWeak(auStack_88,auStack_58);
  uVar4 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107d11928; end: 107d1199b;  */

void FUN_107d11928(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d1199c; end: 107d11a33; -[SCProfileMyOurStoryDataSource _onPlaybackSequences:] */

void FUN_107d1199c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c25b880(uVar1);
  func_0x00010c20df60(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107d175a4(uVar2,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDataModels_112593430);
  return;
}



/* Entry: 107d11a34; end: 107d11a6b; -[SCProfileMyOurStoryDataSource _onViewerInfo] */

void FUN_107d11a34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c29efa0(uVar1);
  func_0x00010c2230c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDataModels_112593430);
  return;
}



/* Entry: 107d11a6c; end: 107d11c87; -[SCProfileMyOurStoryDataSource _updateDataModels] */

/* WARNING: Possible PIC construction at 0x000107d11afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107d11c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107d11b00) */
/* WARNING: Removing unreachable block (ram,0x000107d11b54) */
/* WARNING: Removing unreachable block (ram,0x000107d11b14) */
/* WARNING: Removing unreachable block (ram,0x000107d11b58) */
/* WARNING: Removing unreachable block (ram,0x000107d11c54) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_107d11a6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    puVar3 = PTR____kCFBooleanFalse_11034ab60;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x000108f41710(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_next__112614028,puVar3);
  return;
}



/* Entry: 107d11c88; end: 107d11c8f; -[SCProfileMyOurStoryDataSource storiesSectionDataModelObservable] */

void FUN_107d11c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 107d11c90; end: 107d11c97; -[SCProfileMyOurStoryDataSource storySavableObservable] */

void FUN_107d11c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 107d11c98; end: 107d11ccf; -[SCProfileMyOurStoryDataSource dismissTooltip] */

void FUN_107d11c98(long param_1)

{
  if (*(long *)(param_1 + 0x68) == 1) {
    func_0x00010c0aba20(*(undefined8 *)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateDataModels_112593430);
  return;
}



/* Entry: 107d11cd0; end: 107d11dbb; -[SCProfileMyOurStoryDataSource didUpdateMyStoriesDataRequest:] */

void FUN_107d11cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x107d11d60;
  puStack_20 = &UNK_1108dc368;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107d11df8;
  puStack_48 = &UNK_1108467a0;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0be260(param_3,param_2,0,0,0,0,&puStack_38,&puStack_60,0,0,0,0);
  return;
}



/* Entry: 107d11dbc; end: 107d11df7;  */

void FUN_107d11dbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010c1059e0(uVar1);
  func_0x00010c1df800(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDataModels_112593430);
  return;
}



/* Entry: 107d11df8; end: 107d11e53;  */

void FUN_107d11df8(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107d11e54;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 107d11e54; end: 107d11e8f;  */

void FUN_107d11e54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010c105960(uVar1);
  func_0x00010c1df7a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDataModels_112593430);
  return;
}



/* Entry: 107d11e90; end: 107d11eef; -[SCProfileMyOurStoryDataSource didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_107d11e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107d11ef0;
  puStack_20 = &UNK_1108450f8;
  uStack_18 = param_1;
  func_0x00010c0bc800(param_3,param_2,0,&puStack_38,0,0);
  return;
}



/* Entry: 107d11ef0; end: 107d11fc7;  */

void FUN_107d11ef0(long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0720c0();
  if ((((param_2 & 1) != 0) || (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) != 0)) ||
     (uVar2 = param_4, func_0x00010c0720c0(), (int)uVar2 != 0)) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107d11fc8;
    puStack_40 = &UNK_110842e18;
    uStack_38 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000d76cc("APPSTORE",&puStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107d11fc8; end: 107d12003;  */

void FUN_107d11fc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  func_0x00010c29e2e0(uVar1);
  func_0x00010c222c60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDataModels_112593430);
  return;
}



/* Entry: 107d12004; end: 107d1200b; -[SCProfileMyOurStoryDataSource storyId] */

undefined8 FUN_107d12004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107d1200c; end: 107d12013; -[SCProfileMyOurStoryDataSource storyType] */

undefined8 FUN_107d1200c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107d12014; end: 107d120f7; -[SCProfileMyOurStoryDataSource .cxx_destruct] */

void FUN_107d12014(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 107d120f8; end: 107d12187; -[SCProfileMyOurStoryUpdatesTracker initWithGrapheneMetricsEmitter:] */

undefined1 * FUN_107d120f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126faa10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d12188; end: 107d12227; -[SCProfileMyOurStoryUpdatesTracker flushMetrics] */

void FUN_107d12188(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0aa9a0(uVar1);
  func_0x00010c0aaa20(*(undefined8 *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010c0aa900(*(undefined8 *)(param_1 + 8));
  }
  func_0x00010c0aaa00(*(undefined8 *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0aa8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_logMyOurStory0ViewTotalSnaps_sho_112608448,
               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    return;
  }
  return;
}



/* Entry: 107d12228; end: 107d1222f; -[SCProfileMyOurStoryUpdatesTracker liveSnapsMissingViews] */

undefined8 FUN_107d12228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d12230; end: 107d12237; -[SCProfileMyOurStoryUpdatesTracker totalSetups] */

undefined8 FUN_107d12230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d12238; end: 107d1223f; -[SCProfileMyOurStoryUpdatesTracker setTotalSetups:] */

void FUN_107d12238(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107d12240; end: 107d12247; -[SCProfileMyOurStoryUpdatesTracker storyUpdates] */

undefined8 FUN_107d12240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d12248; end: 107d1224f; -[SCProfileMyOurStoryUpdatesTracker setStoryUpdates:] */

void FUN_107d12248(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107d12250; end: 107d12257; -[SCProfileMyOurStoryUpdatesTracker viewStateUpdates] */

undefined8 FUN_107d12250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d12258; end: 107d1225f; -[SCProfileMyOurStoryUpdatesTracker setViewStateUpdates:] */

void FUN_107d12258(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107d12260; end: 107d12267; -[SCProfileMyOurStoryUpdatesTracker viewerInfoUpdates] */

undefined8 FUN_107d12260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d12268; end: 107d1226f; -[SCProfileMyOurStoryUpdatesTracker setViewerInfoUpdates:] */

void FUN_107d12268(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107d12270; end: 107d12277; -[SCProfileMyOurStoryUpdatesTracker postingStateUpdates] */

undefined8 FUN_107d12270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d12278; end: 107d1227f; -[SCProfileMyOurStoryUpdatesTracker setPostingStateUpdates:] */

void FUN_107d12278(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 107d12280; end: 107d12287; -[SCProfileMyOurStoryUpdatesTracker postingProgressUpdates] */

undefined8 FUN_107d12280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d12288; end: 107d1228f; -[SCProfileMyOurStoryUpdatesTracker setPostingProgressUpdates:] */

void FUN_107d12288(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 107d12290; end: 107d12297; -[SCProfileMyOurStoryUpdatesTracker totalSnaps] */

undefined8 FUN_107d12290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d12298; end: 107d1229f; -[SCProfileMyOurStoryUpdatesTracker setTotalSnaps:] */

void FUN_107d12298(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 107d122a0; end: 107d122a7; -[SCProfileMyOurStoryUpdatesTracker showingSnaps] */

undefined8 FUN_107d122a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d122a8; end: 107d122af; -[SCProfileMyOurStoryUpdatesTracker setShowingSnaps:] */

void FUN_107d122a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107d122b0; end: 107d122b7; -[SCProfileMyOurStoryUpdatesTracker totalViewerInfo] */

undefined8 FUN_107d122b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d122b8; end: 107d122bf; -[SCProfileMyOurStoryUpdatesTracker setTotalViewerInfo:] */

void FUN_107d122b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 107d122c0; end: 107d122c7; -[SCProfileMyOurStoryUpdatesTracker totalViewCount] */

undefined8 FUN_107d122c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d122c8; end: 107d122cf; -[SCProfileMyOurStoryUpdatesTracker setTotalViewCount:] */

void FUN_107d122c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107d122d0; end: 107d122ff; -[SCProfileMyOurStoryUpdatesTracker .cxx_destruct] */

void FUN_107d122d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


