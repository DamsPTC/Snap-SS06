/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10677d5f4; end: 10677d60b; -[SCMemoriesDebugViewerScope delegate] */

void FUN_10677d5f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10677d60c; end: 10677d617; -[SCMemoriesDebugViewerScope setDelegate:] */

void FUN_10677d60c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10677d618; end: 10677d61f; -[SCMemoriesDebugViewerScope uiContainer] */

undefined8 FUN_10677d618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10677d620; end: 10677d663; -[SCMemoriesDebugViewerScope .cxx_destruct] */

void FUN_10677d620(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10677d664; end: 10677d66b; -[SCMemoriesCollageFeaturedStoryManagerFactoryServices memoriesCollageFeaturedStoryManagerFactory] */

undefined8 FUN_10677d664(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10677d66c; end: 10677d677; -[SCMemoriesCollageFeaturedStoryManagerFactoryServices .cxx_destruct] */

void FUN_10677d66c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10677d678; end: 10677d6eb; -[SCMemoriesCollageFeaturedStoryManagerServices initWithMemoriesMashupStyleCollageFeaturedStoryManager:] */

undefined1 * FUN_10677d678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2fc0;
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



/* Entry: 10677d6ec; end: 10677d6f3; -[SCMemoriesCollageFeaturedStoryManagerServices memoriesMashupStyleCollageFeaturedStoryManager] */

undefined8 FUN_10677d6ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10677d6f4; end: 10677d6ff; -[SCMemoriesCollageFeaturedStoryManagerServices .cxx_destruct] */

void FUN_10677d6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10677d700; end: 10677d7a3; -[SCMemoriesBackupUIScope initWithUIContainer:isBackupNowOnAppear:delegate:] */

undefined1 *
FUN_10677d700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f2fc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10677d7a4; end: 10677d7bb; -[SCMemoriesBackupUIScope delegate] */

void FUN_10677d7a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10677d7bc; end: 10677d7c3; -[SCMemoriesBackupUIScope uiContainer] */

undefined8 FUN_10677d7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10677d7c4; end: 10677d7cb; -[SCMemoriesBackupUIScope isBackupNowOnAppear] */

undefined1 FUN_10677d7c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10677d7cc; end: 10677d7f7; -[SCMemoriesBackupUIScope .cxx_destruct] */

void FUN_10677d7cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 10677d7f8; end: 10677d997; -[SCGalleryMediaSendingServicesEntryPoint _initializeGalleryMediaSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677d7f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126cdbd8;
  _objc_alloc(PTR_PTR_1126cdbd8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11274fb04;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010c26c760(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11274fb08;
    _objc_loadWeakRetained(lVar9);
  }
  lVar3 = lVar9;
  func_0x00010bf9e360(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11274fb10;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010c0c8940(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_11274fb0c;
    _objc_loadWeakRetained(lVar5);
  }
  lVar6 = lVar5;
  func_0x00010c2431e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11093a5b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051980(puVar1,param_2,lVar2,lVar3,lVar4,lVar6,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10677d998; end: 10677d9b3;  */

void FUN_10677d998(void)

{
  _objc_opt_new(PTR_PTR_1126cdbe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10677d9b4; end: 10677d9f3;  */

void FUN_10677d9b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be3b560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10677d9f4; end: 10677da5f; -[SCGalleryMediaSendingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677d9f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274fafc,0);
  _objc_destroyWeak(param_1 + _DAT_11274fb10);
  _objc_destroyWeak(param_1 + _DAT_11274fb0c);
  _objc_destroyWeak(param_1 + _DAT_11274fb08);
  _objc_destroyWeak(param_1 + _DAT_11274fb04);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fb00);
  return;
}



/* Entry: 10677da60; end: 10677dac3; -[SCMemoriesMediaSenderLogger init] */

undefined1 * FUN_10677da60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2fd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cdbf0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10677dac4; end: 10677db67; -[SCMemoriesMediaSenderLogger logSendGalleryMediaWithFormat:result:source:count:] */

void FUN_10677dac4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 in_x5;
  
  lVar1 = param_1;
  func_0x00010bec55e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bec5620(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bec5640(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10677f1ec(*(undefined8 *)(param_1 + 8),lVar1,lVar2,lVar3,in_x5);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10677db68; end: 10677db83; -[SCMemoriesMediaSenderLogger _stringForFormat:] */

undefined ** FUN_10677db68(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5de78;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbddd8;
  }
  return ppuVar1;
}



/* Entry: 10677db84; end: 10677dbab; -[SCMemoriesMediaSenderLogger _stringForResult:] */

undefined ** FUN_10677db84(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xc) {
    return (undefined **)(&PTR_PTR_11093a608)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dab0d8;
}



/* Entry: 10677dbac; end: 10677dd53; -[SCMemoriesMediaSenderLogger _stringForSource:] */

undefined ** FUN_10677dbac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 0x48) {
    if (param_3 < 9) {
      if (param_3 < 1) {
        if (param_3 == -1) {
          return &PTR____CFConstantStringClassReference_110dd2518;
        }
        if (param_3 == 0) {
          return &PTR____CFConstantStringClassReference_110e5dfb8;
        }
      }
      else {
        if (param_3 == 1) {
          return &PTR____CFConstantStringClassReference_110dad4b8;
        }
        if (param_3 == 5) {
          return &PTR____CFConstantStringClassReference_110dcadf8;
        }
      }
    }
    else if (param_3 < 0x29) {
      if (param_3 == 9) {
        return &PTR____CFConstantStringClassReference_110e5dfd8;
      }
      if (param_3 == 0xd) {
        return &PTR____CFConstantStringClassReference_110e5dff8;
      }
    }
    else {
      if (param_3 == 0x29) {
        return &PTR____CFConstantStringClassReference_110e5e018;
      }
      if (param_3 == 0x30) {
        return &PTR____CFConstantStringClassReference_110e5e038;
      }
      if (param_3 == 0x38) {
        return &PTR____CFConstantStringClassReference_110e5e058;
      }
    }
  }
  else if (param_3 < 0x76) {
    if (param_3 < 0x5a) {
      if (param_3 == 0x48) {
        return &PTR____CFConstantStringClassReference_110e3c018;
      }
      if (param_3 == 0x57) {
        return &PTR____CFConstantStringClassReference_110de7498;
      }
    }
    else {
      if (param_3 == 0x5a) {
        return &PTR____CFConstantStringClassReference_110e5e078;
      }
      if (param_3 == 0x5b) {
        return &PTR____CFConstantStringClassReference_110e5e098;
      }
    }
  }
  else if (param_3 < 0x8d) {
    if (param_3 == 0x76) {
      return &PTR____CFConstantStringClassReference_110e5e0b8;
    }
    if (param_3 == 0x77) {
      return &PTR____CFConstantStringClassReference_110e5e0d8;
    }
  }
  else {
    if (param_3 == 0x8d) {
      return &PTR____CFConstantStringClassReference_110e5e118;
    }
    if (param_3 == 0x8e) {
      return &PTR____CFConstantStringClassReference_110e5e0f8;
    }
    if (param_3 == 0xa7) {
      return &PTR____CFConstantStringClassReference_110e5e138;
    }
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 10677dd54; end: 10677dd5f; -[SCMemoriesMediaSenderLogger .cxx_destruct] */

void FUN_10677dd54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10677dd60; end: 10677dd9b;  */

void FUN_10677dd60(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10677dd9c; end: 10677de2b;  */

void FUN_10677dd9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c240200(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x000107d6ae7c(uVar1,uVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10677de2c; end: 10677df4f; -[SCGalleryMediaSender initWithTextMessageSender:externalMediaPreparer:memoriesExperimentService:snapSender:memoriesMediaSenderLogger:] */

undefined1 *
FUN_10677de2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2fd8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10677df50; end: 10677e1d3; -[SCGalleryMediaSender sendGalleryMedia:conversationIds:massSnapRecipients:snapModesInfo:platformAnalytics:additionalTextPlatformAnalytics:format:completionQueue:completionHandler:] */

void FUN_10677df50(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if ((param_3 != 0) &&
     (((lVar1 = param_4, func_0x00010bf529e0(), lVar2 = param_7, lVar1 != 0 ||
       (lVar2 = param_5, func_0x00010bf529e0(), param_7 != 0)) && (lVar2 != 0)))) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_3;
    func_0x00010bfbd240();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar2);
          }
          uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          lVar3 = param_7;
          func_0x00010c294d60(param_7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be79680(param_1,param_2,uVar4,lVar3,param_4);
          _objc_release(lVar3);
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    if (param_9 == 2) {
      func_0x00010beb1f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                          param_11);
    }
    else if (param_9 == 1) {
      func_0x00010beb1ae0(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_10,param_11)
      ;
    }
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010c15bea0();
    return;
  }
  return;
}



/* Entry: 10677e1d4; end: 10677e207; -[SCGalleryMediaSender sendGalleryMedia:conversationIds:massSnapRecipients:platformAnalytics:additionalTextPlatformAnalytics:format:] */

void FUN_10677e1d4(void)

{
  func_0x00010c15bea0();
  return;
}



/* Entry: 10677e208; end: 10677e243; -[SCGalleryMediaSender sendGalleryMedia:conversationIds:massSnapRecipients:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:] */

void FUN_10677e208(void)

{
  func_0x00010c15bea0();
  return;
}



/* Entry: 10677e244; end: 10677e267; -[SCGalleryMediaSender sendGalleryMedia:conversationIds:massSnapRecipients:platformAnalytics:additionalTextPlatformAnalytics:] */

void FUN_10677e244(void)

{
  func_0x00010c15be60();
  return;
}



/* Entry: 10677e268; end: 10677e8b3; -[SCGalleryMediaSender _shareSnapsWithPreparedGalleryMedia:conversationIds:massSnapRecipients:snapModesInfo:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:] */

void FUN_10677e268(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  uVar1 = param_3;
  func_0x00010bfbd240();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2e50;
  func_0x00010c247520(param_7);
  func_0x00010c0c97c0(puVar2);
  uVar19 = uVar1;
  func_0x00010bf529e0();
  if (uVar19 < 2) {
    uVar19 = 0;
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126cdbf8;
  _objc_alloc();
  func_0x00010c044360();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar21 = *plStack_130;
    do {
      uVar22 = 0;
      do {
        if (*plStack_130 != lVar21) {
          _objc_enumerationMutation(uVar1);
        }
        lVar18 = *(long *)(lStack_138 + uVar22 * 8);
        lVar17 = lVar18;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar17 != 0) {
          lVar4 = lVar18;
          func_0x00010c240200();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          _objc_release(lVar17);
          if (lVar5 != 0) {
            uVar23 = *(undefined8 *)(param_1 + 0x28);
            uVar20 = *(undefined8 *)(param_1 + 0x10);
            puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_198 = 0xc2000000;
            pcStack_190 = FUN_10677e8b4;
            puStack_188 = &UNK_11093a6e8;
            uStack_180 = uVar23;
            _objc_retain(param_7);
            uStack_178 = param_7;
            _objc_retain(param_3);
            uStack_170 = param_3;
            _objc_retain(param_8);
            uStack_168 = param_8;
            uStack_160 = uVar20;
            _objc_retain(param_4);
            uStack_158 = param_4;
            _objc_retain(param_5);
            uStack_150 = param_5;
            _objc_retain(param_10);
            uStack_148 = param_10;
            _objc_retain(uVar20);
            _objc_retain(uVar23);
            ppuVar6 = &puStack_1a0;
            _objc_retainBlock();
            lVar17 = lVar18;
            func_0x00010c240200(lVar18);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR_PTR_1126b2e50;
            lVar4 = lVar18;
            func_0x00010c23fe00(lVar18);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c1197a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c243160(puVar7);
            _objc_release(lVar5);
            _objc_release(lVar4);
            puVar7 = PTR_PTR_1126c3300;
            _objc_alloc();
            uVar16 = param_7;
            func_0x00010bf6eca0(param_7);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar18;
            func_0x00010c23f880(lVar18);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = param_7;
            func_0x00010c063ac0(param_7);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = param_7;
            func_0x00010c15cde0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c00bb80();
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(lVar4);
            _objc_release(uVar16);
            puVar10 = PTR_PTR_1126be7b0;
            _objc_alloc_init();
            puVar11 = PTR_PTR_1126b25e8;
            _objc_opt_new(PTR_PTR_1126b25e8);
            lVar4 = lVar18;
            func_0x00010c23fe00(lVar18);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010c0fee00();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar5;
            func_0x00010c0fef80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ac2a0();
            _objc_release(lVar12);
            _objc_release(lVar5);
            _objc_release(lVar4);
            _objc_release(puVar11);
            puVar11 = PTR_PTR_1126c3308;
            func_0x00010c241d60();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar11;
            func_0x00010c2b3e20();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010c2b9520();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar11);
            uVar16 = *(undefined8 *)(param_1 + 0x20);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c23fe00(lVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c15ca40(uVar16);
            _objc_release(lVar18);
            _objc_release(uVar16);
            _objc_release(puVar15);
            _objc_release(puVar10);
            _objc_release(puVar7);
            _objc_release(lVar17);
            _objc_release(ppuVar6);
            _objc_release(uStack_148);
            _objc_release(uStack_150);
            _objc_release(uStack_158);
            _objc_release(uStack_168);
            _objc_release(uStack_170);
            _objc_release(uStack_178);
            _objc_release(uVar20);
            _objc_release(uVar23);
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar3 != uVar22);
      uVar3 = uVar1;
      func_0x00010bf52a60();
    } while (uVar3 != 0);
  }
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar19);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520(*(undefined8 *)(param_3 + 0x28));
  func_0x00010c0af1c0(uVar16);
  _objc_release(uVar16);
  lVar21 = *(long *)(param_3 + 0x30);
  func_0x00010befd440();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 == 0) && (lVar17 = lVar21, func_0x00010c08fa60(), lVar17 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    uVar16 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b620();
    _objc_release(uVar16);
    _objc_release(puVar2);
  }
  lVar17 = *(long *)(param_3 + 0x58);
  if (lVar17 != 0) {
    (**(code **)(lVar17 + 0x10))(lVar17,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar21);
  return;
}



/* Entry: 10677e8b4; end: 10677e9af;  */

void FUN_10677e8b4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0af1c0(uVar1);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010befd440();
  _objc_retainAutoreleasedReturnValue();
  if ((param_2 == 0) && (lVar4 = lVar2, func_0x00010c08fa60(), lVar4 != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b620();
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10677e9b0; end: 10677ef0b; -[SCGalleryMediaSender _shareChatMediaWithPreparedGalleryMedia:conversationIds:massSnapRecipients:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:] */

void FUN_10677e9b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar13);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10677ef0c;
  puStack_90 = &UNK_110895168;
  uStack_88 = uVar13;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retain(param_3);
  lStack_78 = param_3;
  _objc_retain(param_9);
  uStack_70 = param_9;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  ppuVar1 = &puStack_a8;
  _objc_retainBlock();
  lVar2 = param_3;
  func_0x00010bfbd240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_6);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126c33a0;
    _objc_alloc_init();
    lVar3 = lVar2;
    func_0x00010bd86420(lVar2,&PTR___NSConcreteGlobalBlock_11093a688);
    lVar4 = lVar3;
    func_0x00010c0d3c80();
    func_0x00010c206120(puVar14);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    func_0x00010c199640();
    lVar3 = lVar2;
    func_0x000100504554(lVar2,&PTR___NSConcreteGlobalBlock_11093a6c8);
    func_0x00010bf529e0();
    puVar15 = puVar5;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar15;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar15);
    puVar15 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar6 = puVar15;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    puVar7 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar15 = puVar5;
    func_0x00010bf63640(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar15);
    puVar8 = PTR_PTR_1126be7b0;
    _objc_alloc_init(PTR_PTR_1126be7b0);
    func_0x00010c2ad920(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar15 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(puVar5);
    _objc_release(puVar14);
  }
  _objc_release(param_6);
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010befd440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR_PTR_1126be800;
    _objc_alloc(PTR_PTR_1126be800);
    puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    lVar3 = param_3;
    func_0x00010befd440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar5);
    func_0x00010c051920(puVar14);
    _objc_release(puVar5);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c260();
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar12);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_release(lStack_78);
  _objc_release(uStack_80);
  _objc_release(uVar13);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10677ef0c; end: 10677efbf;  */

void FUN_10677ef0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247520(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfbd240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0af1c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010677efa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    return;
  }
  return;
}



/* Entry: 10677efc0; end: 10677f123; -[SCGalleryMediaSender _prepareUploadForGalleryMedia:trackingId:conversationIds:] */

void FUN_10677efc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c240200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10a380(uVar5,param_2,uVar1,uVar2,uVar4,param_4,0,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10677f124; end: 10677f177; -[SCGalleryMediaSender .cxx_destruct] */

void FUN_10677f124(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10677f178; end: 10677f1eb; -[SCGrapheneMemoriesMediaSenderMetric2 init] */

undefined1 * FUN_10677f178(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2fe0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10677f1ec; end: 10677f4ab;  */

/* WARNING: Removing unreachable block (ram,0x00010677f474) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677f1ec(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 *unaff_x24;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar7);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar7 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar7);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar7 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar7);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11093a718,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar5 = 0;
    do {
      if ((&cStack_59)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar5 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_initWeak(auStack_128,pcVar7);
    puVar1 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_130,auStack_128);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = pcVar7 + _DAT_11274fb38;
      _objc_loadWeakRetained();
    }
    pcVar2 = pcVar6;
    func_0x00010c0c8780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar6);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7 = pcVar7 + _DAT_11274fb3c;
      _objc_loadWeakRetained();
    }
    pcVar6 = pcVar7;
    func_0x00010c08f100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar7);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cdc08;
    _objc_alloc(PTR_PTR_1126cdc08);
    func_0x00010c02a9a0();
    _objc_release(puVar3);
    _objc_release(pcVar6);
    _objc_release(pcVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10677f4ac; end: 10677f683; -[SCMemoriesOperaLaunchServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677f4ac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11274fb38;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar5;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11274fb3c;
    _objc_loadWeakRetained();
  }
  lVar5 = param_1;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cdc08;
  _objc_alloc(PTR_PTR_1126cdc08);
  func_0x00010c02a9a0();
  _objc_release(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10677f684; end: 10677f6f7;  */

void FUN_10677f684(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5f320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10677f6f8; end: 10677f863; -[SCMemoriesOperaLaunchServiceProvider _memoriesSnapsOperaPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677f6f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11274fb34;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126b2208;
  _objc_alloc(PTR_PTR_1126b2208);
  func_0x000108ec17a8(lVar1,2);
  func_0x00010bff9720(puVar2);
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_11274fb40;
    _objc_loadWeakRetained(lVar6);
  }
  lVar3 = lVar6;
  func_0x00010c0eada0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf22c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10677f864; end: 10677f8bf; -[SCMemoriesOperaLaunchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10677f864(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274fb40);
  _objc_destroyWeak(param_1 + _DAT_11274fb3c);
  _objc_destroyWeak(param_1 + _DAT_11274fb38);
  _objc_destroyWeak(param_1 + _DAT_11274fb34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274fb30);
  return;
}



/* Entry: 10677f8c0; end: 10677f9f3; -[SCMemoriesOperaLauncherImpl initWithSnapsOperaPresenter:dataObjectContext:galleryLogger:] */

undefined1 *
FUN_10677f8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2fe8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10677f9f4; end: 10677f9fb; -[SCMemoriesOperaLauncherImpl suggestedPlaylistLimit] */

undefined8 FUN_10677f9f4(void)

{
  return 200;
}



/* Entry: 10677f9fc; end: 10677fa73; -[SCMemoriesOperaLauncherImpl dismissMemoriesOpera] */

void FUN_10677f9fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07aae0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10677fa74; end: 10677fc8b; -[SCMemoriesOperaLauncherImpl launchMemoriesOperaFromViewController:memoriesIds:initialIndex:includeRelatedStorySnaps:sourceView:sourcePage:delegate:shouldDismissPresentingOpera:] */

void FUN_10677fa74(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined1 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  func_0x00010bf529e0(param_4);
  func_0x00010c262040(param_1);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) goto LAB_10677fc30;
  if (param_8 == 4) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c29e220();
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222c00();
LAB_10677fb64:
    _objc_release(uVar2);
  }
  else if (param_8 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187c80();
    goto LAB_10677fb64;
  }
  _objc_initWeak(auStack_68,param_1);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_3);
  uStack_70 = param_10;
  uStack_78 = param_5;
  func_0x00010be1b780(param_1);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
LAB_10677fc30:
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10677fc8c; end: 10677fdaf;  */

void FUN_10677fc8c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10677fdb0;
    puStack_78 = &UNK_110906000;
    _objc_copyWeak(auStack_48,param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = uVar3;
    _objc_retain(uVar2);
    uStack_60 = uVar2;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_58 = param_2;
    _objc_retain(uVar2);
    uStack_40 = *(undefined8 *)(param_1 + 0x48);
    uStack_38 = *(undefined1 *)(param_1 + 0x50);
    uStack_50 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_90);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10677fdb0; end: 10677fed7;  */

void FUN_10677fdb0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_storeWeak(lVar1 + 0x30,*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar5;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0f2220(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c10d5e0(0,0,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10677fed8; end: 106780107; -[SCMemoriesOperaLauncherImpl launchMemoriesOperaFromViewController:gallerySnaps:galleryEntries:initialIndex:includeRelatedStorySnaps:sourceView:sourcePage:delegate:shouldDismissPresentingOpera:] */

void FUN_10677fed8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined1 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_10);
  func_0x00010bf529e0(param_4);
  func_0x00010c262040(param_1);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) goto LAB_1067800a4;
  if (param_9 == 4) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c29e220();
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222c00();
LAB_10677ffd4:
    _objc_release(uVar2);
  }
  else if (param_9 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187c80();
    goto LAB_10677ffd4;
  }
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_70 = param_11;
  uStack_78 = param_6;
  func_0x00010be1b7a0(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
LAB_1067800a4:
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106780108; end: 10678022b;  */

void FUN_106780108(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10678022c;
    puStack_78 = &UNK_110906000;
    _objc_copyWeak(auStack_48,param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = uVar2;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = uVar3;
    _objc_retain(uVar2);
    uStack_60 = uVar2;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    lStack_58 = param_2;
    _objc_retain(uVar2);
    uStack_40 = *(undefined8 *)(param_1 + 0x48);
    uStack_38 = *(undefined1 *)(param_1 + 0x50);
    uStack_50 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_90);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10678022c; end: 106780353;  */

void FUN_10678022c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_storeWeak(lVar1 + 0x30,*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar5;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0f2220(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c10d5e0(0,0,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106780354; end: 106780383; -[SCMemoriesOperaLauncherImpl updateOperaSourceView:] */

void FUN_106780354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106780384; end: 106780493; -[SCMemoriesOperaLauncherImpl _generateOperaGroupsWithSnapIds:includeRelatedStorySnaps:completion:] */

void FUN_106780384(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uStack_50 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106780494; end: 106780643;  */

void FUN_106780494(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),PTR____NSArray0__struct_11034ab48);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10678054c;
    puStack_48 = &UNK_11093a828;
    uStack_38 = *(undefined1 *)(param_1 + 0x38);
    lStack_40 = lVar1;
    func_0x000100504554(uVar2,&puStack_60);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106780644; end: 10678077b; -[SCMemoriesOperaLauncherImpl _generateOperaGroupsWithSnaps:entries:includeRelatedStorySnaps:completion:] */

void FUN_106780644(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10678077c; end: 1067808c7;  */

void FUN_10678077c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),PTR____NSArray0__struct_11034ab48);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106780834;
    puStack_48 = &UNK_11093a858;
    uStack_38 = *(undefined1 *)(param_1 + 0x40);
    lStack_40 = lVar1;
    func_0x00010bd86738(uVar2,*(undefined8 *)(param_1 + 0x28),&puStack_60);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067808c8; end: 106780dc7;  */

void FUN_1067808c8(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = param_2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (lVar2 == 0) {
LAB_106780980:
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = param_1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_3 & 1) == 0) {
      lVar2 = param_2;
      func_0x00010bfbdda0();
      if (((uint)lVar2 < 7) && ((1 << (ulong)((uint)lVar2 & 0x1f) & 0x6eU) != 0))
      goto LAB_106780980;
    }
    puVar3 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) goto LAB_106780d70;
  }
  lVar2 = param_2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  puVar4 = puVar3;
  if (lVar2 != 4) {
    lVar2 = param_1;
    func_0x00010c0d21e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_1067810f0;
      puStack_108 = &UNK_1108bbf88;
      _objc_retain(param_1);
      lStack_100 = param_1;
      func_0x0001006372a4(puVar3,&puStack_120);
      _objc_release(puVar3);
      _objc_release(lStack_100);
      if (puVar4 == (undefined *)0x0) goto LAB_106780d70;
    }
  }
  puVar3 = PTR_PTR_1126af4c0;
  lVar2 = param_2;
  func_0x00010bf97200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7b20(puVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126cdc10;
  func_0x00010c0eb500();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR_PTR_1126af4d0;
  func_0x00010bfa7400(PTR_PTR_1126af4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar4);
      }
      puVar9 = PTR_PTR_1126af4d0;
      uVar12 = *(ulong *)((long)puVar13 * 8);
      _objc_retain(uVar12);
      _objc_opt_class(puVar9);
      uVar10 = uVar12;
      _objc_opt_isKindOfClass(uVar12,puVar9);
      uVar1 = uVar12;
      if ((uVar10 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar12);
      if (uVar1 != 0) {
        uVar10 = uVar12;
        func_0x00010c23ff80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar9 = PTR_PTR_1126b2608;
        if (uVar10 == 0) {
          func_0x00010c243fe0(PTR_PTR_1126b2608);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c23fe20();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar6);
        _objc_release(puVar9);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010bf4b900(puVar8);
        func_0x00010c0df6e0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c241220(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7);
        _objc_release(uVar12);
        _objc_release(puVar9);
      }
      _objc_release(uVar1);
      puVar13 = puVar13 + 1;
    } while (puVar3 != puVar13);
    puVar3 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar3 = puVar6;
  func_0x00010bf529e0();
  if (puVar3 != (undefined *)0x0) {
    _objc_alloc();
    puVar3 = puVar4;
    func_0x00010bfb1920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf51e00(puVar6);
    puVar11 = puVar7;
    func_0x00010bf51e00(puVar7);
    func_0x00010c019020();
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar3);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_106780d70:
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126c3b30);
    func_0x00010bff7280(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106780dc8; end: 106780dfb; -[SCMemoriesOperaLauncherImpl operaPresenterDidOpenView] */

void FUN_106780dc8(void)

{
  _objc_alloc(PTR_PTR_1126c3b30);
  func_0x00010bff7280(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106780dfc; end: 106780e93; -[SCMemoriesOperaLauncherImpl operaPresenterDidDismiss] */

void FUN_106780dfc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29e220();
  _objc_release(lVar1);
  if (lVar2 == 0x90) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222c00();
    _objc_release(uVar3);
  }
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf74ec0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,0);
  return;
}



/* Entry: 106780e94; end: 106780f5b; -[SCMemoriesOperaLauncherImpl operaPresenterWillOpenViewWithOperaItem:] */

void FUN_106780e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0bfe40(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106780f5c; end: 10678100f;  */

void FUN_106780f5c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar3);
      uVar4 = param_2;
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08c0a0(lVar3);
      _objc_release(uVar4);
      _objc_release(lVar3);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106781010; end: 106781017;  */

void FUN_106781010(void)

{
  return;
}



/* Entry: 106781018; end: 10678101b; -[SCMemoriesOperaLauncherImpl operaPresenterDidPresent] */

void FUN_106781018(void)

{
  return;
}



/* Entry: 10678101c; end: 106781093; -[SCMemoriesOperaLauncherImpl operaPresenterOverrideTransitionMode] */

long FUN_10678101c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c231c00();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 106781094; end: 1067810ef; -[SCMemoriesOperaLauncherImpl .cxx_destruct] */

void FUN_106781094(long param_1)

{
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



/* Entry: 1067810f0; end: 106781173;  */

undefined8 FUN_1067810f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0d21e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0d21e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 106781174; end: 106781207; -[SCMemoriesOperaEmptyAnimator initWithParentViewController:baseView:] */

undefined1 *
FUN_106781174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2ff0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106781208; end: 10678140b; -[SCMemoriesOperaEmptyAnimator present:] */

void FUN_106781208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c4e0();
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bef7700(lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_6,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar3 = param_5 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf77e80(lVar1,param_6,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  param_5 = param_5 + 0x18;
  _objc_loadWeakRetained(param_5);
  func_0x00010c29c460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10678140c; end: 1067814e3; -[SCMemoriesOperaEmptyAnimator dismiss:] */

void FUN_10678140c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c400();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c29c4c0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2a6740();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12c8e0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29c440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067814e4; end: 1067814e7; -[SCMemoriesOperaEmptyAnimator updateBaseView:baseViewOrientation:topInset:transitionMode:] */

void FUN_1067814e4(void)

{
  return;
}



/* Entry: 1067814e8; end: 1067814eb; -[SCMemoriesOperaEmptyAnimator updateTransitionMode:] */

void FUN_1067814e8(void)

{
  return;
}



/* Entry: 1067814ec; end: 1067814f3; -[SCMemoriesOperaEmptyAnimator transitionMode] */

undefined8 FUN_1067814ec(void)

{
  return 0;
}



/* Entry: 1067814f4; end: 1067814f7; -[SCMemoriesOperaEmptyAnimator resetGestureIfNecessary] */

void FUN_1067814f4(void)

{
  return;
}



/* Entry: 1067814f8; end: 1067814fb; -[SCMemoriesOperaEmptyAnimator enableFadeTransitionInDismissal:fadingViews:] */

void FUN_1067814f8(void)

{
  return;
}



/* Entry: 1067814fc; end: 1067814ff; -[SCMemoriesOperaEmptyAnimator disableFadeTransitionInDismissal] */

void FUN_1067814fc(void)

{
  return;
}



/* Entry: 106781500; end: 106781503; -[SCMemoriesOperaEmptyAnimator updateDismissalAnimationVolumeControl:] */

void FUN_106781500(void)

{
  return;
}



/* Entry: 106781504; end: 10678150b; -[SCMemoriesOperaEmptyAnimator dismissalSwipeDirection] */

undefined8 FUN_106781504(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 10678150c; end: 106781523; -[SCMemoriesOperaEmptyAnimator parentVC] */

void FUN_10678150c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106781524; end: 10678153b; -[SCMemoriesOperaEmptyAnimator childVC] */

void FUN_106781524(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10678153c; end: 106781547; -[SCMemoriesOperaEmptyAnimator setChildVC:] */

void FUN_10678153c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106781548; end: 10678155f; -[SCMemoriesOperaEmptyAnimator delegate] */

void FUN_106781548(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106781560; end: 10678156b; -[SCMemoriesOperaEmptyAnimator setDelegate:] */

void FUN_106781560(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10678156c; end: 106781577; -[SCMemoriesOperaEmptyAnimator baseViewFrame] */

undefined8 FUN_10678156c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106781578; end: 106781583; -[SCMemoriesOperaEmptyAnimator setBaseViewFrame:] */

void FUN_106781578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x30) = param_1;
  *(undefined8 *)(param_5 + 0x38) = param_2;
  *(undefined8 *)(param_5 + 0x40) = param_3;
  *(undefined8 *)(param_5 + 0x48) = param_4;
  return;
}



/* Entry: 106781584; end: 10678159b; -[SCMemoriesOperaEmptyAnimator baseView] */

void FUN_106781584(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10678159c; end: 1067815a7; -[SCMemoriesOperaEmptyAnimator setBaseView:] */

void FUN_10678159c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1067815a8; end: 1067815bf; -[SCMemoriesOperaEmptyAnimator volumeController] */

void FUN_1067815a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067815c0; end: 1067815cb; -[SCMemoriesOperaEmptyAnimator setVolumeController:] */

void FUN_1067815c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1067815cc; end: 10678160b; -[SCMemoriesOperaEmptyAnimator .cxx_destruct] */

void FUN_1067815cc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10678160c; end: 10678198b; -[SCMemoriesOperaPlaylistDataSource initWithDataModels:firstDisplayGroupDataModel:memoriesOperaSessionConfig:memoriesDataObjectContext:memoriesSearchDatabase:memoriesOperaMediaManagerBuilder:memoriesBackupManager:userId:circumstanceEngine:grapheneRegistry:memoriesUserDefaultsManager:memoriesExperimentService:] */

undefined8 *
FUN_10678160c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f2ff8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0x12) = (char)uVar2;
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_14;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010be1fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bdd62e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bdd6400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar2);
  }
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



/* Entry: 10678198c; end: 1067819cb; -[SCMemoriesOperaPlaylistDataSource _internalFeaturedStoryRowsEnabled] */

undefined8 FUN_10678198c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa3460();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1067819cc; end: 106781ffb; -[SCMemoriesOperaPlaylistDataSource currentOperaItemForPage:] */

void FUN_1067819cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined8 *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    puVar11 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined8 *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126cdc18;
      _objc_opt_class(PTR_PTR_1126cdc18);
      puVar11 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar9);
      puVar1 = puVar2;
      if (((ulong)puVar11 & 1) == 0) {
        puVar1 = (undefined8 *)0x0;
      }
      _objc_retain(puVar1);
      puVar9 = PTR_PTR_1126cdc30;
      if (((ulong)puVar11 & 1) == 0) {
        puVar5 = (undefined8 *)PTR_PTR_1126cdc20;
        _objc_alloc();
        puVar11 = puVar2;
        func_0x00010c0844e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079e60(puVar2);
        func_0x00010c047c40();
        _objc_release(puVar11);
        puVar9 = PTR_PTR_1126cdc28;
        puVar11 = puVar5;
        func_0x00010c243f60(PTR_PTR_1126cdc28);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar2);
        _objc_opt_class(puVar9);
        puVar11 = puVar2;
        _objc_opt_isKindOfClass(puVar2,puVar9);
        puVar5 = puVar2;
        if (((ulong)puVar11 & 1) == 0) {
          puVar5 = (undefined8 *)0x0;
        }
        _objc_retain(puVar5);
        _objc_release(puVar2);
        puVar9 = PTR_PTR_1126cdc38;
        puVar15 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        if (puVar5 == (undefined8 *)0x0) {
          _objc_retain(puVar2);
          _objc_opt_class(puVar9);
          puVar11 = puVar2;
          _objc_opt_isKindOfClass(puVar2,puVar9);
          puVar15 = puVar2;
          if (((ulong)puVar11 & 1) == 0) {
            puVar15 = (undefined8 *)0x0;
          }
          _objc_retain(puVar15);
          _objc_release(puVar2);
          puVar9 = PTR_PTR_1126cdc40;
          if (puVar15 == (undefined8 *)0x0) {
            _objc_retain(puVar2);
            _objc_opt_class(puVar9);
            puVar15 = puVar2;
            _objc_opt_isKindOfClass(puVar2,puVar9);
            puVar11 = puVar2;
            if (((ulong)puVar15 & 1) == 0) {
              puVar11 = (undefined8 *)0x0;
            }
            _objc_retain(puVar11);
            _objc_release(puVar2);
            puVar9 = PTR_PTR_1126cdc28;
            puVar15 = (undefined8 *)PTR_PTR_1126cdc20;
            _objc_alloc();
            puVar8 = puVar2;
            func_0x00010c0844e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c6c20(puVar2);
            puVar12 = puVar2;
            func_0x00010c0c5180(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c079e60(puVar2);
            _objc_release(puVar11);
            func_0x00010c047c40();
            puVar11 = puVar15;
            func_0x00010c243f60(puVar9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            _objc_release(puVar12);
            _objc_release(puVar8);
            puVar15 = (undefined8 *)0x0;
          }
          else {
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            plStack_1e0 = (long *)0x0;
            puVar8 = puVar2;
            func_0x00010c0ff4a0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = &uStack_1f0;
            puVar12 = puVar8;
            func_0x00010bf52a60();
            if (puVar12 != (undefined8 *)0x0) {
              lVar10 = *plStack_1e0;
              do {
                puVar11 = (undefined8 *)0x0;
                do {
                  if (*plStack_1e0 != lVar10) {
                    _objc_enumerationMutation(puVar8);
                  }
                  uVar14 = *(ulong *)(lStack_1e8 + (long)puVar11 * 8);
                  uVar6 = uVar14;
                  func_0x00010c0844e0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = uVar6;
                  func_0x00010c0720c0();
                  _objc_release(uVar6);
                  puVar9 = PTR_PTR_1126cdc28;
                  if ((uVar7 & 1) != 0) {
                    puVar12 = (undefined8 *)PTR_PTR_1126cdc20;
                    _objc_alloc();
                    uVar6 = uVar14;
                    func_0x00010c0844e0(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0c6c20(uVar14);
                    uVar7 = uVar14;
                    func_0x00010c0c5180(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c079e60(uVar14);
                    func_0x00010c047c40();
                    puVar11 = puVar12;
                    func_0x00010c243f60(puVar9);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar12);
                    _objc_release(uVar7);
                    _objc_release(uVar6);
                    _objc_release(puVar8);
                    goto LAB_106781e9c;
                  }
                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                } while (puVar12 != puVar11);
                puVar11 = &uStack_1f0;
                puVar12 = puVar8;
                func_0x00010bf52a60();
              } while (puVar12 != (undefined8 *)0x0);
            }
            _objc_release(puVar8);
            puVar9 = (undefined *)0x0;
          }
        }
        else {
          puVar11 = puVar2;
          func_0x00010c0ff4a0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010bf0a0e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          lStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          plStack_1a0 = (long *)0x0;
          puVar11 = puVar2;
          func_0x00010c0ff4a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar11;
          func_0x00010bf52a60();
          if (puVar8 != (undefined8 *)0x0) {
            lVar10 = *plStack_1a0;
            do {
              puVar12 = (undefined8 *)0x0;
              do {
                if (*plStack_1a0 != lVar10) {
                  _objc_enumerationMutation(puVar11);
                }
                uVar13 = *(undefined8 *)(lStack_1a8 + (long)puVar12 * 8);
                puVar9 = PTR_PTR_1126cdc20;
                _objc_alloc(PTR_PTR_1126cdc20);
                uVar3 = uVar13;
                func_0x00010c0844e0(uVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0c6c20(uVar13);
                uVar4 = uVar13;
                func_0x00010c0c5180(uVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c079e60(uVar13);
                func_0x00010c047c40(puVar9);
                func_0x00010befa120(puVar15);
                _objc_release(puVar9);
                _objc_release(uVar4);
                _objc_release(uVar3);
                puVar12 = (undefined8 *)((long)puVar12 + 1);
              } while (puVar8 != puVar12);
              puVar8 = puVar11;
              func_0x00010bf52a60();
            } while (puVar8 != (undefined8 *)0x0);
          }
          _objc_release(puVar11);
          puVar9 = PTR_PTR_1126cdc28;
          puVar11 = puVar15;
          func_0x00010c2702e0(PTR_PTR_1126cdc28);
          _objc_retainAutoreleasedReturnValue();
        }
LAB_106781e9c:
        _objc_release(puVar15);
      }
      _objc_release(puVar5);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == (undefined8 *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = (undefined *)param_3[7];
      func_0x00010c0e00e0(puVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106781ffc; end: 10678205b; -[SCMemoriesOperaPlaylistDataSource currentOperaGroupDataModelForPage:] */

void FUN_106781ffc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10678205c; end: 10678205f; -[SCMemoriesOperaPlaylistDataSource handleShakeAtPage] */

void FUN_10678205c(void)

{
  return;
}



/* Entry: 106782060; end: 10678206b; -[SCMemoriesOperaPlaylistDataSource itemType] */

undefined ** FUN_106782060(void)

{
  return &PTR____CFConstantStringClassReference_110dbaad8;
}



/* Entry: 10678206c; end: 10678207b; -[SCMemoriesOperaPlaylistDataSource currentPlaybackItem] */

void FUN_10678206c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_objectForKeyedSubscript__112615a50,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10678207c; end: 10678208b; -[SCMemoriesOperaPlaylistDataSource currentPlaybackGroup] */

void FUN_10678207c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_objectForKeyedSubscript__112615a50,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10678208c; end: 1067820d3; -[SCMemoriesOperaPlaylistDataSource setCurrentItemIdForPage:] */

void FUN_10678208c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067820d4; end: 10678210b; -[SCMemoriesOperaPlaylistDataSource setPlaylistItemController:] */

void FUN_1067820d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


