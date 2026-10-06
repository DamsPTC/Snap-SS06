/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bbbd20; end: 107bbbd27; -[SCWebBrowsingScriptDisableSharedWorker injectionTime] */

undefined8 FUN_107bbbd20(void)

{
  return 0;
}



/* Entry: 107bbbd28; end: 107bbbd2f; -[SCWebBrowsingScriptDisableSharedWorker forMainFrameOnly] */

undefined8 FUN_107bbbd28(void)

{
  return 0;
}



/* Entry: 107bbbd30; end: 107bbbd33; -[SCWebBrowsingScriptDisableSharedWorker userContentController:didReceiveScriptMessage:] */

void FUN_107bbbd30(void)

{
  return;
}



/* Entry: 107bbbd34; end: 107bbbd4b; -[SCWebBrowsingScriptDisableSharedWorker javaScriptExecutionDelegate] */

void FUN_107bbbd34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbbd4c; end: 107bbbd57; -[SCWebBrowsingScriptDisableSharedWorker setJavaScriptExecutionDelegate:] */

void FUN_107bbbd4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107bbbd58; end: 107bbbd5f; -[SCWebBrowsingScriptDisableSharedWorker .cxx_destruct] */

void FUN_107bbbd58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107bbbd60; end: 107bbbdeb; -[SCWebBrowsingScriptGAMetrics initWithWebBrowsingConfigProvider:] */

undefined1 * FUN_107bbbd60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa1d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = &PTR____CFConstantStringClassReference_110eb2538;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bbbdec; end: 107bbbe3f; -[SCWebBrowsingScriptGAMetrics injectedJavaScript] */

void FUN_107bbbdec(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb2558);
  return;
}



/* Entry: 107bbbe40; end: 107bbbeab; -[SCWebBrowsingScriptGAMetrics nativeCallbackNames] */

undefined * FUN_107bbbe40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb2478;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 107bbbeac; end: 107bbbeb3; -[SCWebBrowsingScriptGAMetrics injectionTime] */

undefined8 FUN_107bbbeac(void)

{
  return 0;
}



/* Entry: 107bbbeb4; end: 107bbbebb; -[SCWebBrowsingScriptGAMetrics forMainFrameOnly] */

undefined8 FUN_107bbbeb4(void)

{
  return 0;
}



/* Entry: 107bbbebc; end: 107bbc093; -[SCWebBrowsingScriptGAMetrics userContentController:didReceiveScriptMessage:] */

void FUN_107bbbebc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_5);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf1e9c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar2;
  func_0x00010bf64920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  if (puVar5 != (undefined *)0x0) {
    puVar7 = puVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar8 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar6);
    puVar6 = puVar7;
    if (((ulong)puVar8 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar7);
    if (puVar6 != (undefined *)0x0) {
      puVar8 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar9 = puVar8;
      _objc_opt_isKindOfClass(puVar8,puVar7);
      puVar7 = puVar8;
      if (((ulong)puVar9 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar8);
      func_0x00010c26f320(puVar1);
      func_0x00010be2a1c0(param_1 * 1000.0,param_2);
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bbc094; end: 107bbc2f3; -[SCWebBrowsingScriptGAMetrics _handleGAHit:hitTimestampMs:pageURLString:] */

void FUN_107bbc094(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_5);
  func_0x00010bdc3460(ppuVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0720c0();
  bVar1 = (int)ppuVar4 == 0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110df4e98;
  if (bVar1) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110eb2518;
  }
  ppuVar7 = &PTR____CFConstantStringClassReference_110de3318;
  if (bVar1) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e63b58;
  }
  ppuVar5 = ppuVar2;
  func_0x00010c11db20(ppuVar2,param_3,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c08fa60();
  ppuVar9 = &PTR____CFConstantStringClassReference_110db8b78;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar6 = ppuVar2;
    func_0x00010c11db20(ppuVar2,param_3,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar9 = ppuVar6;
    }
    _objc_retain(ppuVar9);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar5);
  ppuVar7 = ppuVar9;
  func_0x00010c0720c0(ppuVar9,param_3,ppuVar4);
  ppuVar4 = ppuVar9;
  func_0x00010c0d3c80(ppuVar9);
  if ((*(char *)(param_2 + 0x10) == '\x01') &&
     (ppuVar5 = ppuVar9,
     func_0x00010c0720c0(ppuVar9,param_3,&PTR____CFConstantStringClassReference_110daee38),
     (int)ppuVar5 != 0)) {
    ppuVar5 = ppuVar2;
    func_0x00010c11db20(ppuVar2,param_3,&PTR____CFConstantStringClassReference_110eb24d8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    if (ppuVar6 != (undefined **)0x0) {
      func_0x00010bf06ba0(ppuVar4,param_3,&PTR____CFConstantStringClassReference_110dcaff8);
    }
    ppuVar6 = ppuVar2;
    func_0x00010c11db20(ppuVar2,param_3,&PTR____CFConstantStringClassReference_110eb24f8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar8 != (undefined **)0x0) {
      func_0x00010bf06ba0(ppuVar4,param_3,&PTR____CFConstantStringClassReference_110dcaff8);
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf51e00(ppuVar4);
  func_0x00010bfbcaa0(param_1,param_2,param_3,ppuVar5,ppuVar7,param_5);
  _objc_release(param_5);
  _objc_release(ppuVar5);
  _objc_release(param_2);
  _objc_release(ppuVar4);
  _objc_release(ppuVar9);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 107bbc2f4; end: 107bbc30b; -[SCWebBrowsingScriptGAMetrics javaScriptExecutionDelegate] */

void FUN_107bbc2f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbc30c; end: 107bbc317; -[SCWebBrowsingScriptGAMetrics setJavaScriptExecutionDelegate:] */

void FUN_107bbc30c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107bbc318; end: 107bbc32f; -[SCWebBrowsingScriptGAMetrics delegate] */

void FUN_107bbc318(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbc330; end: 107bbc33b; -[SCWebBrowsingScriptGAMetrics setDelegate:] */

void FUN_107bbc330(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107bbc33c; end: 107bbc37b; -[SCWebBrowsingScriptGAMetrics .cxx_destruct] */

void FUN_107bbc33c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bbc37c; end: 107bbc3e7; -[SCWebBrowsingScriptGetPerformanceEntries initWithDelegate:] */

undefined1 * FUN_107bbc37c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa1e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bbc3e8; end: 107bbd09f; -[SCWebBrowsingScriptGetPerformanceEntries _processPayload:error:] */

void FUN_107bbc3e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  if (param_4 != 0) {
    return;
  }
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900();
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
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    if (puVar3 != (undefined *)0x0) {
      puVar6 = puVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar7 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar5);
      puVar5 = puVar6;
      if (((ulong)puVar7 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar6);
      if (puVar5 != (undefined *)0x0) {
        func_0x000100504554(puVar6,&PTR___NSConcreteGlobalBlock_1109ff200);
        if (puVar6 != (undefined *)0x0) {
          lVar8 = param_1 + 0x10;
          _objc_loadWeakRetained(lVar8);
          func_0x00010c0f9720();
          _objc_release(lVar8);
          param_1 = param_1 + 0x10;
          _objc_loadWeakRetained(param_1);
          func_0x00010c0b4fe0(puVar4);
          func_0x00010c11aea0(param_1);
          _objc_release(param_1);
        }
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bbd0a0; end: 107bbd18b; -[SCWebBrowsingScriptGetPerformanceEntries reportPerformanceEntries] */

void FUN_107bbd0a0(long param_1)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c085400(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf999e0(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 107bbd18c; end: 107bbd1f3;  */

void FUN_107bbd18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81bc0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bbd1f4; end: 107bbd1f7; -[SCWebBrowsingScriptGetPerformanceEntries userContentController:didReceiveScriptMessage:] */

void FUN_107bbd1f4(void)

{
  return;
}



/* Entry: 107bbd1f8; end: 107bbd1ff; -[SCWebBrowsingScriptGetPerformanceEntries forMainFrameOnly] */

undefined8 FUN_107bbd1f8(void)

{
  return 1;
}



/* Entry: 107bbd200; end: 107bbd207; -[SCWebBrowsingScriptGetPerformanceEntries injectionTime] */

undefined8 FUN_107bbd200(void)

{
  return 0;
}



/* Entry: 107bbd208; end: 107bbd213; -[SCWebBrowsingScriptGetPerformanceEntries nativeCallbackNames] */

undefined * FUN_107bbd208(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 107bbd214; end: 107bbd21f; -[SCWebBrowsingScriptGetPerformanceEntries injectedJavaScript] */

undefined ** FUN_107bbd214(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 107bbd220; end: 107bbd227; -[SCWebBrowsingScriptGetPerformanceEntries browserDidReset] */

void FUN_107bbd220(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 107bbd228; end: 107bbd23f; -[SCWebBrowsingScriptGetPerformanceEntries javaScriptExecutionDelegate] */

void FUN_107bbd228(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbd240; end: 107bbd24b; -[SCWebBrowsingScriptGetPerformanceEntries setJavaScriptExecutionDelegate:] */

void FUN_107bbd240(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107bbd24c; end: 107bbd273; -[SCWebBrowsingScriptGetPerformanceEntries .cxx_destruct] */

void FUN_107bbd24c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107bbd274; end: 107bbd3cb; -[SCWebBrowsingScriptPerformanceMetrics initWithCompletionHandler:payloadKeyURL:payloadKeyLeaveFirstPage:payloadKeyTiming:payloadKeyHitAnalyticsCount:payloadKeyHitAnalyticsFirstTimestamp:] */

undefined1 *
FUN_107bbd274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fa1e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
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



/* Entry: 107bbd3cc; end: 107bbd45f; -[SCWebBrowsingScriptPerformanceMetrics reportPerformance] */

void FUN_107bbd3cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb2838);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c085400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf999e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bbd460; end: 107bbd4e7; -[SCWebBrowsingScriptPerformanceMetrics didOpenPrefetchHintDocument] */

void FUN_107bbd460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb2838);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c085400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf999e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bbd4e8; end: 107bbd5bf; -[SCWebBrowsingScriptPerformanceMetrics userContentController:didReceiveScriptMessage:] */

void FUN_107bbd4e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x00010bf1e9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  *(undefined1 *)(param_1 + 0x10) = 1;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bbd5c0; end: 107bbd5c7; -[SCWebBrowsingScriptPerformanceMetrics forMainFrameOnly] */

undefined8 FUN_107bbd5c0(void)

{
  return 1;
}



/* Entry: 107bbd5c8; end: 107bbd5cf; -[SCWebBrowsingScriptPerformanceMetrics injectionTime] */

undefined8 FUN_107bbd5c8(void)

{
  return 0;
}



/* Entry: 107bbd5d0; end: 107bbd63b; -[SCWebBrowsingScriptPerformanceMetrics nativeCallbackNames] */

void FUN_107bbd5d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb2818;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eb2878);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = PTR_PTR_1126b9450;
    func_0x00010c0f97e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b9450;
    func_0x00010c0f9800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b9450;
    func_0x00010c0f9880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110eb2898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbd63c; end: 107bbd763; -[SCWebBrowsingScriptPerformanceMetrics injectedJavaScript] */

void FUN_107bbd63c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb2878);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR_PTR_1126b9450;
  func_0x00010c0f97e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b9450;
  func_0x00010c0f9800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9450;
  func_0x00010c0f9880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110eb2898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107bbd764; end: 107bbd76b; -[SCWebBrowsingScriptPerformanceMetrics browserDidReset] */

void FUN_107bbd764(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 107bbd76c; end: 107bbd783; -[SCWebBrowsingScriptPerformanceMetrics javaScriptExecutionDelegate] */

void FUN_107bbd76c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbd784; end: 107bbd78f; -[SCWebBrowsingScriptPerformanceMetrics setJavaScriptExecutionDelegate:] */

void FUN_107bbd784(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 107bbd790; end: 107bbd7f7; -[SCWebBrowsingScriptPerformanceMetrics .cxx_destruct] */

void FUN_107bbd790(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bbd7f8; end: 107bbd80b; +[SCWebBrowsingScriptScrolling new] */

void FUN_107bbd7f8(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_init_11034d1b8)();
  return;
}



/* Entry: 107bbd80c; end: 107bbd84b; -[SCWebBrowsingScriptScrolling init] */

void FUN_107bbd80c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fa1f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 1;
  }
  return;
}



/* Entry: 107bbd84c; end: 107bbd853; -[SCWebBrowsingScriptScrolling forMainFrameOnly] */

undefined8 FUN_107bbd84c(void)

{
  return 0;
}



/* Entry: 107bbd854; end: 107bbd85b; -[SCWebBrowsingScriptScrolling injectionTime] */

undefined8 FUN_107bbd854(void)

{
  return 1;
}



/* Entry: 107bbd85c; end: 107bbd8c7; -[SCWebBrowsingScriptScrolling nativeCallbackNames] */

undefined ** FUN_107bbd85c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110eb28b8;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110eb28d8;
}



/* Entry: 107bbd8c8; end: 107bbd8d3; -[SCWebBrowsingScriptScrolling injectedJavaScript] */

undefined ** FUN_107bbd8c8(void)

{
  return &PTR____CFConstantStringClassReference_110eb28d8;
}



/* Entry: 107bbd8d4; end: 107bbd99f; -[SCWebBrowsingScriptScrolling userContentController:didReceiveScriptMessage:] */

void FUN_107bbd8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_4;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_4;
      func_0x00010bf1e9c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1b41e0(param_1);
      _objc_release(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bbd9a0; end: 107bbda43; -[SCWebBrowsingScriptScrolling isURLSupported:] */

undefined * FUN_107bbd9a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4bb00();
  if ((int)puVar4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x00010bfe4420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf4bb00();
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 107bbda44; end: 107bbda5b; -[SCWebBrowsingScriptScrolling javaScriptExecutionDelegate] */

void FUN_107bbda44(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbda5c; end: 107bbda67; -[SCWebBrowsingScriptScrolling setJavaScriptExecutionDelegate:] */

void FUN_107bbda5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107bbda68; end: 107bbda6f; -[SCWebBrowsingScriptScrolling isScrolledToTop] */

undefined1 FUN_107bbda68(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107bbda70; end: 107bbda77; -[SCWebBrowsingScriptScrolling setIsScrolledToTop:] */

void FUN_107bbda70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107bbda78; end: 107bbda7f; -[SCWebBrowsingScriptScrolling .cxx_destruct] */

void FUN_107bbda78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107bbda80; end: 107bbdb23; -[SCWebBrowsingSridSessionStorageScript initWithServeItemId:said:] */

undefined1 *
FUN_107bbda80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa1f8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bbdb24; end: 107bbdb5b; -[SCWebBrowsingSridSessionStorageScript injectedJavaScript] */

void FUN_107bbdb24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb2938);
  return;
}



/* Entry: 107bbdb5c; end: 107bbdb67; -[SCWebBrowsingSridSessionStorageScript nativeCallbackNames] */

undefined * FUN_107bbdb5c(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 107bbdb68; end: 107bbdb6f; -[SCWebBrowsingSridSessionStorageScript injectionTime] */

undefined8 FUN_107bbdb68(void)

{
  return 0;
}



/* Entry: 107bbdb70; end: 107bbdb77; -[SCWebBrowsingSridSessionStorageScript forMainFrameOnly] */

undefined8 FUN_107bbdb70(void)

{
  return 0;
}



/* Entry: 107bbdb78; end: 107bbdb7b; -[SCWebBrowsingSridSessionStorageScript userContentController:didReceiveScriptMessage:] */

void FUN_107bbdb78(void)

{
  return;
}



/* Entry: 107bbdb7c; end: 107bbdb93; -[SCWebBrowsingSridSessionStorageScript javaScriptExecutionDelegate] */

void FUN_107bbdb7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbdb94; end: 107bbdb9f; -[SCWebBrowsingSridSessionStorageScript setJavaScriptExecutionDelegate:] */

void FUN_107bbdb94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107bbdba0; end: 107bbdbd7; -[SCWebBrowsingSridSessionStorageScript .cxx_destruct] */

void FUN_107bbdba0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bbdbd8; end: 107bbe1a3; -[SCWebBrowsingPerformanceEntry initWithName:entryType:startTime:duration:connectEnd:connectStart:decodedBodySize:domainLookupEnd:domainLookupStart:encodedBodySize:fetchStart:initiatorType:nextHopProtocol:redirectEnd:redirectStart:requestStart:responseEnd:responseStart:secureConnectionStart:transferSize:workerStart:domComplete:domContentLoadedEventEnd:domInteractive:loadEventStart:loadEventEnd:redirectCount:type:unloadEventEnd:unloadEventStart:] */

undefined8 *
FUN_107bbdbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_13);
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126fa200;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    puVar1[2] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_30;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_31;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = uVar2;
    _objc_release(uVar3);
  }
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
  _objc_release(param_13);
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



/* Entry: 107bbe1a4; end: 107bbe1c7; -[SCWebBrowsingPerformanceEntry copyWithZone:] */

undefined8 FUN_107bbe1a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107bbe1c8; end: 107bbe38b; -[SCWebBrowsingPerformanceEntry hash] */

undefined8 * FUN_107bbe1c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_108 = *(undefined8 *)(param_1 + 0x18);
  lStack_110 = -lVar5;
  if (-1 < lVar5) {
    lStack_110 = lVar5;
  }
  uStack_118 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_100 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_f8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_f0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 200);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_118;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,0x1e);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107bbe6a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107bbe6b0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[10];
                      if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[0xb];
                        if ((lVar5 == param_3[0xb]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = puVar3[0xc];
                          if ((lVar5 == param_3[0xc]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = puVar3[0xd];
                            if ((lVar5 == param_3[0xd]) || (func_0x00010c071ae0(), (int)lVar5 != 0))
                            {
                              lVar5 = puVar3[0xe];
                              if ((lVar5 == param_3[0xe]) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = puVar3[0xf];
                                if ((lVar5 == param_3[0xf]) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = puVar3[0x10];
                                  if ((lVar5 == param_3[0x10]) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = puVar3[0x11];
                                    if ((lVar5 == param_3[0x11]) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = puVar3[0x12];
                                      if ((lVar5 == param_3[0x12]) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        lVar5 = puVar3[0x13];
                                        if ((lVar5 == param_3[0x13]) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = puVar3[0x14];
                                          if ((lVar5 == param_3[0x14]) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = puVar3[0x15];
                                            if ((lVar5 == param_3[0x15]) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              lVar5 = puVar3[0x16];
                                              if ((lVar5 == param_3[0x16]) ||
                                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                lVar5 = puVar3[0x17];
                                                if ((lVar5 == param_3[0x17]) ||
                                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                  lVar5 = puVar3[0x18];
                                                  if ((lVar5 == param_3[0x18]) ||
                                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = puVar3[0x19];
                                                    if ((lVar5 == param_3[0x19]) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      lVar5 = puVar3[0x1a];
                                                      if ((lVar5 == param_3[0x1a]) ||
                                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                        lVar5 = puVar3[0x1b];
                                                        if ((lVar5 == param_3[0x1b]) ||
                                                           (func_0x00010c071ae0(), (int)lVar5 != 0))
                                                        {
                                                          lVar5 = puVar3[0x1c];
                                                          if ((lVar5 == param_3[0x1c]) ||
                                                             (func_0x00010c071ae0(), (int)lVar5 != 0
                                                             )) {
                                                            lVar5 = puVar3[0x1d];
                                                            if ((lVar5 == param_3[0x1d]) ||
                                                               (func_0x00010c071ae0(),
                                                               (int)lVar5 != 0)) {
                                                              puVar6 = (undefined8 *)puVar3[0x1e];
                                                              if (puVar6 != (undefined8 *)
                                                                            param_3[0x1e]) {
                                                                func_0x00010c071ae0();
                                                                goto LAB_107bbe6b0;
                                                              }
                                                              goto LAB_107bbe6a4;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107bbe6b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107bbe38c; end: 107bbe6cb; -[SCWebBrowsingPerformanceEntry isEqual:] */

long FUN_107bbe38c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107bbe6a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107bbe6b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x60);
                          if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x68);
                            if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x70);
                              if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x78);
                                if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x80);
                                  if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0x88);
                                    if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0x90);
                                      if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0x98);
                                        if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xa0);
                                          if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xa8);
                                            if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xb0);
                                              if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xb8);
                                                if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 0xc0);
                                                  if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 200);
                                                    if ((lVar3 == *(long *)(param_3 + 200)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0xd0);
                                                      if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0xd8);
                                                        if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0xe0);
                                                          if ((lVar3 == *(long *)(param_3 + 0xe0))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0xe8);
                                                            if ((lVar3 == *(long *)(param_3 + 0xe8))
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)) {
                                                              lVar3 = *(long *)(param_1 + 0xf0);
                                                              if (lVar3 != *(long *)(param_3 + 0xf0)
                                                                 ) {
                                                                func_0x00010c071ae0();
                                                                goto LAB_107bbe6b0;
                                                              }
                                                              goto LAB_107bbe6a4;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107bbe6b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107bbe6cc; end: 107bbe6d3; -[SCWebBrowsingPerformanceEntry name] */

undefined8 FUN_107bbe6cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107bbe6d4; end: 107bbe6db; -[SCWebBrowsingPerformanceEntry entryType] */

undefined8 FUN_107bbe6d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107bbe6dc; end: 107bbe6e3; -[SCWebBrowsingPerformanceEntry startTime] */

undefined8 FUN_107bbe6dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107bbe6e4; end: 107bbe6eb; -[SCWebBrowsingPerformanceEntry duration] */

undefined8 FUN_107bbe6e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107bbe6ec; end: 107bbe6f3; -[SCWebBrowsingPerformanceEntry connectEnd] */

undefined8 FUN_107bbe6ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107bbe6f4; end: 107bbe6fb; -[SCWebBrowsingPerformanceEntry connectStart] */

undefined8 FUN_107bbe6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107bbe6fc; end: 107bbe703; -[SCWebBrowsingPerformanceEntry decodedBodySize] */

undefined8 FUN_107bbe6fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107bbe704; end: 107bbe70b; -[SCWebBrowsingPerformanceEntry domainLookupEnd] */

undefined8 FUN_107bbe704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107bbe70c; end: 107bbe713; -[SCWebBrowsingPerformanceEntry domainLookupStart] */

undefined8 FUN_107bbe70c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107bbe714; end: 107bbe71b; -[SCWebBrowsingPerformanceEntry encodedBodySize] */

undefined8 FUN_107bbe714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107bbe71c; end: 107bbe723; -[SCWebBrowsingPerformanceEntry fetchStart] */

undefined8 FUN_107bbe71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107bbe724; end: 107bbe72b; -[SCWebBrowsingPerformanceEntry initiatorType] */

undefined8 FUN_107bbe724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107bbe72c; end: 107bbe733; -[SCWebBrowsingPerformanceEntry nextHopProtocol] */

undefined8 FUN_107bbe72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107bbe734; end: 107bbe73b; -[SCWebBrowsingPerformanceEntry redirectEnd] */

undefined8 FUN_107bbe734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107bbe73c; end: 107bbe743; -[SCWebBrowsingPerformanceEntry redirectStart] */

undefined8 FUN_107bbe73c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107bbe744; end: 107bbe74b; -[SCWebBrowsingPerformanceEntry requestStart] */

undefined8 FUN_107bbe744(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107bbe74c; end: 107bbe753; -[SCWebBrowsingPerformanceEntry responseEnd] */

undefined8 FUN_107bbe74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107bbe754; end: 107bbe75b; -[SCWebBrowsingPerformanceEntry responseStart] */

undefined8 FUN_107bbe754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107bbe75c; end: 107bbe763; -[SCWebBrowsingPerformanceEntry secureConnectionStart] */

undefined8 FUN_107bbe75c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107bbe764; end: 107bbe76b; -[SCWebBrowsingPerformanceEntry transferSize] */

undefined8 FUN_107bbe764(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107bbe76c; end: 107bbe773; -[SCWebBrowsingPerformanceEntry workerStart] */

undefined8 FUN_107bbe76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107bbe774; end: 107bbe77b; -[SCWebBrowsingPerformanceEntry domComplete] */

undefined8 FUN_107bbe774(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107bbe77c; end: 107bbe783; -[SCWebBrowsingPerformanceEntry domContentLoadedEventEnd] */

undefined8 FUN_107bbe77c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107bbe784; end: 107bbe78b; -[SCWebBrowsingPerformanceEntry domInteractive] */

undefined8 FUN_107bbe784(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107bbe78c; end: 107bbe793; -[SCWebBrowsingPerformanceEntry loadEventStart] */

undefined8 FUN_107bbe78c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107bbe794; end: 107bbe79b; -[SCWebBrowsingPerformanceEntry loadEventEnd] */

undefined8 FUN_107bbe794(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107bbe79c; end: 107bbe7a3; -[SCWebBrowsingPerformanceEntry redirectCount] */

undefined8 FUN_107bbe79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107bbe7a4; end: 107bbe7ab; -[SCWebBrowsingPerformanceEntry type] */

undefined8 FUN_107bbe7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107bbe7ac; end: 107bbe7b3; -[SCWebBrowsingPerformanceEntry unloadEventEnd] */

undefined8 FUN_107bbe7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107bbe7b4; end: 107bbe7bb; -[SCWebBrowsingPerformanceEntry unloadEventStart] */

undefined8 FUN_107bbe7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107bbe7bc; end: 107bbe92f; -[SCWebBrowsingPerformanceEntry .cxx_destruct] */

void FUN_107bbe7bc(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


