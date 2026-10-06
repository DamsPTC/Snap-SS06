/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bbe930; end: 107bbe95b; +[SCGrapheneWebJsBridgeMetric evalScript] */

void FUN_107bbe930(void)

{
  _objc_alloc(PTR_PTR_1126d6ea0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbe95c; end: 107bbe987; +[SCGrapheneWebJsBridgeMetric receiveMessage] */

void FUN_107bbe95c(void)

{
  _objc_alloc(PTR_PTR_1126d6ea0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbe988; end: 107bbea27; -[SCGrapheneWebJsBridgeMetric description] */

void FUN_107bbe988(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb2958;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110eb2958,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fa208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107bbea28; end: 107bbeb73; -[SCGrapheneRegistry webJsBridgeGraphene] */

void FUN_107bbea28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107bbeab0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113727750 != -1) {
    func_0x00010002a2fc(0x113727750,&puStack_48);
  }
  uVar1 = uRam0000000113727748;
  _objc_retain(uRam0000000113727748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bbeb74; end: 107bbec4b;  */

void FUN_107bbeb74(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  ppuVar1 = param_2;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    _objc_release(param_2);
    param_2 = &PTR____CFConstantStringClassReference_110e4ccb8;
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107bbec4c; end: 107bbec73;  */

undefined ** FUN_107bbec4c(long param_1)

{
  if (param_1 - 1U < 0x21) {
    return (undefined **)(&PTR_PTR_1109ff220)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd34d8;
}



/* Entry: 107bbec74; end: 107bbed23; -[SCWebBrowsingMetricHelper initWithSource:browserName:grapheneRegistry:] */

undefined1 *
FUN_107bbec74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa210;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107bbed24; end: 107bbedbb; -[SCWebBrowsingMetricHelper increment:] */

void FUN_107bbed24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2a3360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60420(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfec2a0(uVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107bbedbc; end: 107bbee5f; -[SCWebBrowsingMetricHelper increment:errorCode:] */

void FUN_107bbedbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110db0dd8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfec2a0(param_1,param_2,uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107bbee60; end: 107bbef03; -[SCWebBrowsingMetricHelper increment:statusCode:] */

void FUN_107bbee60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dde9d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfec2a0(param_1,param_2,uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107bbef04; end: 107bbefab; -[SCWebBrowsingMetricHelper addTimer:durationInMs:] */

void FUN_107bbef04(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2a3360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60420(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010befbfe0(uVar1,param_3,param_2,(long)param_1);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107bbefac; end: 107bbf183; -[SCWebBrowsingMetricHelper addPerformanceTimers:] */

void FUN_107bbefac(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110eb2bd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(lVar1);
    if (0.0 <= param_1) {
      puVar2 = PTR_PTR_1126d6d08;
      func_0x00010bf87d00(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110eb2718);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010bdc7d20(param_2,param_3,puVar2);
      _objc_release(lVar1);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126d6d08;
      func_0x00010bf87ba0(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110eb2bf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010bdc7d20(param_2,param_3,puVar2);
      _objc_release(lVar1);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126d6d08;
      func_0x00010bf87ac0(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110eb26d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010bdc7d20(param_2,param_3,puVar2);
      _objc_release(lVar1);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126d6d08;
      func_0x00010c09b480(PTR_PTR_1126d6d08);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110eb2758);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010bdc7d20(param_2,param_3,puVar2);
      _objc_release(lVar1);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bbf184; end: 107bbf1a7; -[SCWebBrowsingMetricHelper didLoadInitialURL] */

void FUN_107bbf184(undefined8 param_1,long param_2)

{
  func_0x00010028941c();
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 107bbf1a8; end: 107bbf2c3; -[SCWebBrowsingMetricHelper didFinishInitialLoad:] */

void FUN_107bbf1a8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x28) = 1;
  func_0x00010028941c();
  dVar5 = *(double *)(param_2 + 0x20);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c063fc0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010befbfc0((double)(long)((param_1 - dVar5) * 1000.0),param_2,param_3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107bbf2c4; end: 107bbf2cb; -[SCWebBrowsingMetricHelper reset] */

void FUN_107bbf2c4(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 107bbf2cc; end: 107bbf2df; -[SCWebBrowsingMetricHelper _addPerformanceTimerMetric:timestamp:startTimestamp:] */

void FUN_107bbf2cc(double param_1,double param_2,undefined8 param_3)

{
  if (param_1 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 - param_2,param_3,PTR_s_addTimer_durationInMs__11259c998);
  return;
}



/* Entry: 107bbf2e0; end: 107bbf357; -[SCWebBrowsingMetricHelper _metricWithSource:] */

void FUN_107bbf2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  FUN_107bbec4c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110db1138,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bbf358; end: 107bbf387; -[SCWebBrowsingMetricHelper .cxx_destruct] */

void FUN_107bbf358(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107bbf388; end: 107bbf3b3; +[SCGrapheneWebBrowserMetric init] */

void FUN_107bbf388(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf3b4; end: 107bbf3df; +[SCGrapheneWebBrowserMetric loadUrl] */

void FUN_107bbf3b4(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf3e0; end: 107bbf40b; +[SCGrapheneWebBrowserMetric loadHtml] */

void FUN_107bbf3e0(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf40c; end: 107bbf437; +[SCGrapheneWebBrowserMetric loadPrefetchHints] */

void FUN_107bbf40c(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf438; end: 107bbf463; +[SCGrapheneWebBrowserMetric loadingPrefetchHints] */

void FUN_107bbf438(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf464; end: 107bbf48f; +[SCGrapheneWebBrowserMetric loadSuccess] */

void FUN_107bbf464(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf490; end: 107bbf4bb; +[SCGrapheneWebBrowserMetric loadFail] */

void FUN_107bbf490(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf4bc; end: 107bbf4e7; +[SCGrapheneWebBrowserMetric connectionError] */

void FUN_107bbf4bc(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf4e8; end: 107bbf513; +[SCGrapheneWebBrowserMetric connectionErrorRetry] */

void FUN_107bbf4e8(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf514; end: 107bbf53f; +[SCGrapheneWebBrowserMetric navigationError] */

void FUN_107bbf514(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf540; end: 107bbf56b; +[SCGrapheneWebBrowserMetric safeBrowsingSuccess] */

void FUN_107bbf540(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf56c; end: 107bbf597; +[SCGrapheneWebBrowserMetric safeBrowsingSuccessDiscard] */

void FUN_107bbf56c(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf598; end: 107bbf5c3; +[SCGrapheneWebBrowserMetric safeBrowsingFail] */

void FUN_107bbf598(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf5c4; end: 107bbf5ef; +[SCGrapheneWebBrowserMetric policyNaNoUrl] */

void FUN_107bbf5c4(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf5f0; end: 107bbf61b; +[SCGrapheneWebBrowserMetric policyNaDataSchemaMain] */

void FUN_107bbf5f0(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf61c; end: 107bbf647; +[SCGrapheneWebBrowserMetric policyNaDataSchemaAllow] */

void FUN_107bbf61c(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf648; end: 107bbf673; +[SCGrapheneWebBrowserMetric policyNaEmptyUrlAllow] */

void FUN_107bbf648(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf674; end: 107bbf69f; +[SCGrapheneWebBrowserMetric policyNaInterceptAllow] */

void FUN_107bbf674(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf6a0; end: 107bbf6cb; +[SCGrapheneWebBrowserMetric policyNaInterceptAttempt] */

void FUN_107bbf6a0(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf6cc; end: 107bbf6f7; +[SCGrapheneWebBrowserMetric policyNaNoMainAllow] */

void FUN_107bbf6cc(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf6f8; end: 107bbf723; +[SCGrapheneWebBrowserMetric policyNaInterceptNonHttp] */

void FUN_107bbf6f8(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf724; end: 107bbf74f; +[SCGrapheneWebBrowserMetric policyNaAllow] */

void FUN_107bbf724(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf750; end: 107bbf77b; +[SCGrapheneWebBrowserMetric policyNaUrl] */

void FUN_107bbf750(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf77c; end: 107bbf7a7; +[SCGrapheneWebBrowserMetric policyNrFailStatus] */

void FUN_107bbf77c(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf7a8; end: 107bbf7d3; +[SCGrapheneWebBrowserMetric policyNrInitialStatus] */

void FUN_107bbf7a8(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf7d4; end: 107bbf7ff; +[SCGrapheneWebBrowserMetric popupBridgePresentRequest] */

void FUN_107bbf7d4(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf800; end: 107bbf82b; +[SCGrapheneWebBrowserMetric popupBridgeDismissRequest] */

void FUN_107bbf800(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf82c; end: 107bbf857; +[SCGrapheneWebBrowserMetric openInBrowser] */

void FUN_107bbf82c(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf858; end: 107bbf883; +[SCGrapheneWebBrowserMetric share] */

void FUN_107bbf858(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf884; end: 107bbf8af; +[SCGrapheneWebBrowserMetric domInteractiveLatency] */

void FUN_107bbf884(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf8b0; end: 107bbf8db; +[SCGrapheneWebBrowserMetric domContentLoadedLatency] */

void FUN_107bbf8b0(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf8dc; end: 107bbf907; +[SCGrapheneWebBrowserMetric domCompleteLatency] */

void FUN_107bbf8dc(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf908; end: 107bbf933; +[SCGrapheneWebBrowserMetric loadEventEndLatency] */

void FUN_107bbf908(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf934; end: 107bbf95f; +[SCGrapheneWebBrowserMetric firstContentfulPaintLatency] */

void FUN_107bbf934(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf960; end: 107bbf98b; +[SCGrapheneWebBrowserMetric firstContentfulPaintCompleted] */

void FUN_107bbf960(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf98c; end: 107bbf9b7; +[SCGrapheneWebBrowserMetric createWebViewForNavAction] */

void FUN_107bbf98c(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf9b8; end: 107bbf9e3; +[SCGrapheneWebBrowserMetric viewDidLoad] */

void FUN_107bbf9b8(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbf9e4; end: 107bbfa0f; +[SCGrapheneWebBrowserMetric viewDidAppear] */

void FUN_107bbf9e4(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfa10; end: 107bbfa3b; +[SCGrapheneWebBrowserMetric setScriptMetrics] */

void FUN_107bbfa10(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfa3c; end: 107bbfa67; +[SCGrapheneWebBrowserMetric reloadFromToolbar] */

void FUN_107bbfa3c(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfa68; end: 107bbfa93; +[SCGrapheneWebBrowserMetric gaHit] */

void FUN_107bbfa68(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfa94; end: 107bbfabf; +[SCGrapheneWebBrowserMetric mediaPlaybackPaused] */

void FUN_107bbfa94(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfac0; end: 107bbfaeb; +[SCGrapheneWebBrowserMetric mediaPlaybackState] */

void FUN_107bbfac0(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfaec; end: 107bbfb17; +[SCGrapheneWebBrowserMetric onScreen] */

void FUN_107bbfaec(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfb18; end: 107bbfb43; +[SCGrapheneWebBrowserMetric preloadWebViewCacheHit] */

void FUN_107bbfb18(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfb44; end: 107bbfb6f; +[SCGrapheneWebBrowserMetric preloadWebViewCacheMiss] */

void FUN_107bbfb44(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfb70; end: 107bbfb9b; +[SCGrapheneWebBrowserMetric webviewRecycleCacheHit] */

void FUN_107bbfb70(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfb9c; end: 107bbfbc7; +[SCGrapheneWebBrowserMetric webviewRecycleCacheMiss] */

void FUN_107bbfb9c(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfbc8; end: 107bbfbf3; +[SCGrapheneWebBrowserMetric restoreRedirectQueryParam] */

void FUN_107bbfbc8(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfbf4; end: 107bbfc1f; +[SCGrapheneWebBrowserMetric svcInit] */

void FUN_107bbfbf4(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfc20; end: 107bbfc4b; +[SCGrapheneWebBrowserMetric svcLoadUrl] */

void FUN_107bbfc20(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfc4c; end: 107bbfc77; +[SCGrapheneWebBrowserMetric svcInitalLoadComplete] */

void FUN_107bbfc4c(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfc78; end: 107bbfca3; +[SCGrapheneWebBrowserMetric svcOpenInBrowser] */

void FUN_107bbfc78(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfca4; end: 107bbfccf; +[SCGrapheneWebBrowserMetric svcOnScreen] */

void FUN_107bbfca4(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfcd0; end: 107bbfcfb; +[SCGrapheneWebBrowserMetric svcSchemeIncompatible] */

void FUN_107bbfcd0(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfcfc; end: 107bbfd27; +[SCGrapheneWebBrowserMetric initialLoadLatency] */

void FUN_107bbfcfc(void)

{
  _objc_alloc(PTR_PTR_1126d6d08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bbfd28; end: 107bbfdc7; -[SCGrapheneWebBrowserMetric description] */

void FUN_107bbfd28(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb2c18;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110eb2c18,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fa218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 107bbfdc8; end: 107bbfe4f; -[SCGrapheneRegistry webBrowserGraphene] */

void FUN_107bbfdc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_107bbfe50;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113727760 != -1) {
    func_0x00010002a2fc(0x113727760,&puStack_48);
  }
  uVar1 = uRam0000000113727758;
  _objc_retain(uRam0000000113727758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bbfe50; end: 107bc0137;  */

undefined * FUN_107bbfe50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110ddec58;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110eb2c38;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110eb2c58;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110eb2c78;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110eb2c98;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110dfdaf8;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110dfdb18;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110eb2cb8;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110eb2cd8;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110eb2cf8;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110eb2d18;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110eb2d38;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110eb2d58;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110eb2d78;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110eb2d98;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110eb2db8;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110eb2dd8;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110eb2df8;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110eb2e18;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110eb2e38;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110eb2e58;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110eb2e78;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110eb2e98;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110eb2eb8;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110eb2ed8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110eb2ef8;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110eb2f18;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110eb2f38;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110eb2f58;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110eb2f78;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110eb2f98;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110eb2fb8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110eb2fd8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110eb2ff8;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110eb3018;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110eb3038;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110eb3058;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110eb3078;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110eb3098;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110eb30b8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110eb30d8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110eb30f8;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110eb3118;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110eb3138;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110eb3158;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110eb3178;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110eb3198;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110eb31b8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110eb31d8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110eb31f8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eb3218;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110eb3238;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110eb3258;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110eb3278;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb3298;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110eb32b8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1f8,0x38);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c126d60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113727758;
  uRam0000000113727758 = uVar3;
  _objc_release(uVar1);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_230;
  pcStack_208 = FUN_107bc0138;
  puStack_228 = PTR_PTR_1126fa220;
  puStack_230 = puVar4;
  puStack_220 = puVar2;
  uStack_218 = uVar7;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_230,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar6 = (undefined1 *)ppuVar5;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar5 + 8) = puVar6;
  }
  return (undefined *)ppuVar5;
}



/* Entry: 107bc0138; end: 107bc01ab; -[SCGrapheneWebBrowserV2Metric2 init] */

undefined1 * FUN_107bc0138(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa220;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107bc01ac; end: 107bc0223;  */

void FUN_107bc01ac(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff328,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc0224; end: 107bc029b;  */

void FUN_107bc0224(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff378,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc029c; end: 107bc0313;  */

void FUN_107bc029c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff3c8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc0314; end: 107bc038b;  */

void FUN_107bc0314(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff418,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc038c; end: 107bc0403;  */

void FUN_107bc038c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff468,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc0404; end: 107bc047b;  */

void FUN_107bc0404(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff4b8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc047c; end: 107bc06ab;  */

char * FUN_107bc047c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109ff508,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  pcStack_a8 = FUN_107bc06ac;
  puStack_c8 = PTR_PTR_1126fa228;
  pcStack_d0 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    pcVar1 = (char *)ppcVar2;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar2 + 8) = pcVar1;
  }
  return (char *)ppcVar2;
}



/* Entry: 107bc06ac; end: 107bc071f; -[SCGrapheneScbMetric2 init] */

undefined1 * FUN_107bc06ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107bc0720; end: 107bc094f;  */

void FUN_107bc0720(double param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  double dVar13;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 *puStack_318;
  char *pcStack_310;
  char *pcStack_308;
  undefined8 ***pppuStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  char *pcStack_290;
  char *pcStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  char acStack_268 [24];
  char *pcStack_250;
  char acStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [3];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  lVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109ff578,pcVar5,param_5);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    lVar9 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar6 = acStack_120;
  pcStack_a8 = FUN_107bc0950;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar8 = pcVar1;
  dVar13 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (pcVar3 != (char *)0x0) {
    _objc_retain(pcVar1);
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    puVar12 = auStack_100;
    func_0x00010002b838(auStack_100,pcVar5);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    dVar13 = param_1 * 1000.0;
    lVar9 = (long)dVar13;
    pcVar8 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109ff5c8,acStack_120,lVar9);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar5 = pcVar6;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar5 = pcVar6;
    }
    pcVar4 = pcVar1;
    _objc_release();
    pcVar2 = acStack_120;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    pcVar6 = pcVar4;
    __Unwind_Resume();
    pcStack_128 = FUN_107bc0ae4;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar7 = pcVar8;
    pcVar3 = pcVar5;
    puStack_160 = unaff_x24;
    pcStack_158 = unaff_x23;
    puStack_150 = puVar12;
    pcStack_148 = pcVar2;
    pcStack_140 = pcVar4;
    pcStack_138 = pcVar1;
    ppuStack_130 = &puStack_b0;
    _objc_retain(pcVar8);
    pcVar1 = pcVar7;
    if (pcVar6 != (char *)0x0) {
      plVar11 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = pcVar8;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      unaff_x24 = auStack_198;
      func_0x00010002b838(auStack_198,unaff_x23);
      pcVar1 = "true";
      if ((int)pcVar5 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_180,pcVar1);
      acStack_1b8[0] = '\0';
      acStack_1b8[1] = '\0';
      acStack_1b8[2] = '\0';
      acStack_1b8[3] = '\0';
      acStack_1b8[4] = '\0';
      acStack_1b8[5] = '\0';
      acStack_1b8[6] = '\0';
      acStack_1b8[7] = '\0';
      acStack_1b8[8] = '\0';
      acStack_1b8[9] = '\0';
      acStack_1b8[10] = '\0';
      acStack_1b8[0xb] = '\0';
      acStack_1b8[0xc] = '\0';
      acStack_1b8[0xd] = '\0';
      acStack_1b8[0xe] = '\0';
      acStack_1b8[0xf] = '\0';
      acStack_1b8[0x10] = '\0';
      acStack_1b8[0x11] = '\0';
      acStack_1b8[0x12] = '\0';
      acStack_1b8[0x13] = '\0';
      acStack_1b8[0x14] = '\0';
      acStack_1b8[0x15] = '\0';
      acStack_1b8[0x16] = '\0';
      acStack_1b8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
      pcVar1 = "";
      pcVar5 = acStack_1b8;
      pcVar3 = acStack_1b8;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109ff618,pcVar3,lVar9);
      pcStack_1a0 = pcVar5;
      func_0x00010007e5dc(&pcStack_1a0);
      lVar9 = 0;
      do {
        if ((&cStack_169)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
    }
    pcVar2 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar8);
    _objc_release(pcVar8);
    __Unwind_Resume();
    pcStack_1c8 = FUN_107bc0ccc;
    lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar1;
    pcVar8 = pcVar1;
    pcVar4 = pcVar3;
    pppuStack_1d0 = &ppuStack_130;
    _objc_retain();
    if (pcVar2 != (char *)0x0) {
      _objc_retain(pcVar1);
      plVar11 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = pcVar1;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      unaff_x23 = acStack_248;
      func_0x00010002b838(acStack_248,pcVar5);
      pcVar2 = "true";
      if ((int)pcVar3 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_230,pcVar2);
      acStack_268[0] = '\0';
      acStack_268[1] = '\0';
      acStack_268[2] = '\0';
      acStack_268[3] = '\0';
      acStack_268[4] = '\0';
      acStack_268[5] = '\0';
      acStack_268[6] = '\0';
      acStack_268[7] = '\0';
      acStack_268[8] = '\0';
      acStack_268[9] = '\0';
      acStack_268[10] = '\0';
      acStack_268[0xb] = '\0';
      acStack_268[0xc] = '\0';
      acStack_268[0xd] = '\0';
      acStack_268[0xe] = '\0';
      acStack_268[0xf] = '\0';
      acStack_268[0x10] = '\0';
      acStack_268[0x11] = '\0';
      acStack_268[0x12] = '\0';
      acStack_268[0x13] = '\0';
      acStack_268[0x14] = '\0';
      acStack_268[0x15] = '\0';
      acStack_268[0x16] = '\0';
      acStack_268[0x17] = '\0';
      func_0x00010007e1e8(acStack_268,acStack_248,&lStack_218,2);
      pcVar8 = "\x01";
      pcVar4 = acStack_268;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109ff668,pcVar4,(long)(dVar13 * 1000.0));
      pcStack_250 = acStack_268;
      func_0x00010007e5dc(&pcStack_250);
      lVar9 = 0;
      pcVar3 = acStack_248;
      do {
        if ((&cStack_219)[lVar9] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar9));
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar9 != -0x30);
      pcVar6 = pcVar1;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
      ___stack_chk_fail();
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      pcVar7 = pcVar6;
      __Unwind_Resume();
      pcStack_278 = FUN_107bc0edc;
      lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar8;
      puStack_2b0 = unaff_x24;
      pcStack_2a8 = unaff_x23;
      pcStack_2a0 = pcVar5;
      pcStack_298 = pcVar3;
      pcStack_290 = pcVar6;
      pcStack_288 = pcVar1;
      pppuStack_280 = &pppuStack_1d0;
      _objc_retain(pcVar8);
      if (pcVar7 != (char *)0x0) {
        plVar11 = *(long **)(pcVar7 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_2d0,pcVar1);
        uStack_2f0 = 0;
        uStack_2e8 = 0;
        uStack_2e0 = 0;
        func_0x00010007e1e8(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
        pcVar2 = "";
        (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109ff6b8,&uStack_2f0,pcVar4);
        puStack_2d8 = (undefined1 *)&uStack_2f0;
        func_0x00010007e5dc(&puStack_2d8);
        if (cStack_2b9 < '\0') {
          __ZdlPv(auStack_2d0[0]);
        }
      }
      pcVar1 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
        ___stack_chk_fail();
        _objc_release(pcVar8);
        _objc_release(pcVar8);
        pcVar5 = pcVar1;
        __Unwind_Resume();
        puStack_318 = (undefined1 *)&uStack_330;
        pcStack_2f8 = FUN_107bc1050;
        if (pcVar5 != (char *)0x0) {
          uStack_330 = 0;
          uStack_328 = 0;
          uStack_320 = 0;
          pcStack_310 = pcVar1;
          pcStack_308 = pcVar8;
          pppuStack_300 = &pppuStack_280;
          (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
                    (*(long **)(pcVar5 + 8),&UNK_1109ff708,&uStack_330,pcVar2);
          func_0x00010007e5dc(&puStack_318);
        }
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 107bc0950; end: 107bc0ae3;  */

void FUN_107bc0950(double param_1,long param_2,char *param_3,char *param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  char *unaff_x23;
  undefined1 *unaff_x24;
  double dVar9;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 *puStack_278;
  char *pcStack_270;
  char *pcStack_268;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined1 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  char acStack_1c8 [24];
  char *pcStack_1b0;
  char acStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar5 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_3;
  dVar9 = param_1;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    dVar9 = param_1 * 1000.0;
    param_5 = (long)dVar9;
    pcVar2 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109ff5c8,acStack_80,param_5);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    param_4 = pcVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      param_4 = pcVar5;
    }
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    _objc_release(param_3);
    _objc_release(param_3);
    __Unwind_Resume();
    pcStack_88 = FUN_107bc0ae4;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    param_3 = pcVar2;
    pcVar5 = param_4;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar2);
    if (pcVar1 != (char *)0x0) {
      plVar7 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        unaff_x23 = "";
      }
      else {
        unaff_x23 = pcVar2;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      unaff_x24 = auStack_f8;
      func_0x00010002b838(auStack_f8,unaff_x23);
      pcVar1 = "true";
      if ((int)param_4 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(auStack_e0,pcVar1);
      acStack_118[0] = '\0';
      acStack_118[1] = '\0';
      acStack_118[2] = '\0';
      acStack_118[3] = '\0';
      acStack_118[4] = '\0';
      acStack_118[5] = '\0';
      acStack_118[6] = '\0';
      acStack_118[7] = '\0';
      acStack_118[8] = '\0';
      acStack_118[9] = '\0';
      acStack_118[10] = '\0';
      acStack_118[0xb] = '\0';
      acStack_118[0xc] = '\0';
      acStack_118[0xd] = '\0';
      acStack_118[0xe] = '\0';
      acStack_118[0xf] = '\0';
      acStack_118[0x10] = '\0';
      acStack_118[0x11] = '\0';
      acStack_118[0x12] = '\0';
      acStack_118[0x13] = '\0';
      acStack_118[0x14] = '\0';
      acStack_118[0x15] = '\0';
      acStack_118[0x16] = '\0';
      acStack_118[0x17] = '\0';
      func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
      param_3 = "";
      param_4 = acStack_118;
      pcVar5 = acStack_118;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109ff618,pcVar5,param_5);
      pcStack_100 = param_4;
      func_0x00010007e5dc(&pcStack_100);
      lVar8 = 0;
      do {
        if ((&cStack_c9)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
    }
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcStack_128 = FUN_107bc0ccc;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = param_3;
    pcVar2 = param_3;
    pcVar6 = pcVar5;
    ppuStack_130 = &puStack_90;
    _objc_retain();
    if (pcVar1 != (char *)0x0) {
      _objc_retain(param_3);
      plVar7 = *(long **)(pcVar1 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        param_4 = "";
      }
      else {
        param_4 = param_3;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      unaff_x23 = acStack_1a8;
      func_0x00010002b838(acStack_1a8,param_4);
      pcVar2 = "true";
      if ((int)pcVar5 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_190,pcVar2);
      acStack_1c8[0] = '\0';
      acStack_1c8[1] = '\0';
      acStack_1c8[2] = '\0';
      acStack_1c8[3] = '\0';
      acStack_1c8[4] = '\0';
      acStack_1c8[5] = '\0';
      acStack_1c8[6] = '\0';
      acStack_1c8[7] = '\0';
      acStack_1c8[8] = '\0';
      acStack_1c8[9] = '\0';
      acStack_1c8[10] = '\0';
      acStack_1c8[0xb] = '\0';
      acStack_1c8[0xc] = '\0';
      acStack_1c8[0xd] = '\0';
      acStack_1c8[0xe] = '\0';
      acStack_1c8[0xf] = '\0';
      acStack_1c8[0x10] = '\0';
      acStack_1c8[0x11] = '\0';
      acStack_1c8[0x12] = '\0';
      acStack_1c8[0x13] = '\0';
      acStack_1c8[0x14] = '\0';
      acStack_1c8[0x15] = '\0';
      acStack_1c8[0x16] = '\0';
      acStack_1c8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1c8,acStack_1a8,&lStack_178,2);
      pcVar2 = "\x01";
      pcVar6 = acStack_1c8;
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109ff668,pcVar6,(long)(dVar9 * 1000.0));
      pcStack_1b0 = acStack_1c8;
      func_0x00010007e5dc(&pcStack_1b0);
      lVar8 = 0;
      pcVar5 = acStack_1a8;
      do {
        if ((&cStack_179)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x30);
      pcVar3 = param_3;
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      pcVar4 = pcVar3;
      __Unwind_Resume();
      pcStack_1d8 = FUN_107bc0edc;
      lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar2;
      puStack_210 = unaff_x24;
      pcStack_208 = unaff_x23;
      pcStack_200 = param_4;
      pcStack_1f8 = pcVar5;
      pcStack_1f0 = pcVar3;
      pcStack_1e8 = param_3;
      pppuStack_1e0 = &ppuStack_130;
      _objc_retain(pcVar2);
      if (pcVar4 != (char *)0x0) {
        plVar7 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x00010002b838(auStack_230,pcVar1);
        uStack_250 = 0;
        uStack_248 = 0;
        uStack_240 = 0;
        func_0x00010007e1e8(&uStack_250,auStack_230,&lStack_218,1);
        pcVar1 = "";
        (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109ff6b8,&uStack_250,pcVar6);
        puStack_238 = (undefined1 *)&uStack_250;
        func_0x00010007e5dc(&puStack_238);
        if (cStack_219 < '\0') {
          __ZdlPv(auStack_230[0]);
        }
      }
      pcVar5 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
        ___stack_chk_fail();
        _objc_release(pcVar2);
        _objc_release(pcVar2);
        pcVar6 = pcVar5;
        __Unwind_Resume();
        puStack_278 = (undefined1 *)&uStack_290;
        pcStack_258 = FUN_107bc1050;
        if (pcVar6 != (char *)0x0) {
          uStack_290 = 0;
          uStack_288 = 0;
          uStack_280 = 0;
          pcStack_270 = pcVar5;
          pcStack_268 = pcVar2;
          pppuStack_260 = &pppuStack_1e0;
          (**(code **)(**(long **)(pcVar6 + 8) + 0x18))
                    (*(long **)(pcVar6 + 8),&UNK_1109ff708,&uStack_290,pcVar1);
          func_0x00010007e5dc(&puStack_278);
        }
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bc0ae4; end: 107bc0ccb;  */

void FUN_107bc0ae4(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  char *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  char acStack_148 [24];
  char *pcStack_130;
  char acStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      unaff_x23 = "";
    }
    else {
      unaff_x23 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    pcVar4 = "true";
    if ((int)param_4 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(auStack_60,pcVar4);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar4 = "";
    param_4 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1109ff618,pcVar5,param_5);
    pcStack_80 = param_4;
    func_0x00010007e5dc(&pcStack_80);
    lVar8 = 0;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_107bc0ccc;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar4;
  pcVar6 = pcVar4;
  pcVar7 = pcVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain();
  if (pcVar1 != (char *)0x0) {
    _objc_retain(pcVar4);
    plVar9 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      param_4 = "";
    }
    else {
      param_4 = pcVar4;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x23 = acStack_128;
    func_0x00010002b838(acStack_128,param_4);
    pcVar1 = "true";
    if ((int)pcVar5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_110,pcVar1);
    acStack_148[0] = '\0';
    acStack_148[1] = '\0';
    acStack_148[2] = '\0';
    acStack_148[3] = '\0';
    acStack_148[4] = '\0';
    acStack_148[5] = '\0';
    acStack_148[6] = '\0';
    acStack_148[7] = '\0';
    acStack_148[8] = '\0';
    acStack_148[9] = '\0';
    acStack_148[10] = '\0';
    acStack_148[0xb] = '\0';
    acStack_148[0xc] = '\0';
    acStack_148[0xd] = '\0';
    acStack_148[0xe] = '\0';
    acStack_148[0xf] = '\0';
    acStack_148[0x10] = '\0';
    acStack_148[0x11] = '\0';
    acStack_148[0x12] = '\0';
    acStack_148[0x13] = '\0';
    acStack_148[0x14] = '\0';
    acStack_148[0x15] = '\0';
    acStack_148[0x16] = '\0';
    acStack_148[0x17] = '\0';
    func_0x00010007e1e8(acStack_148,acStack_128,&lStack_f8,2);
    pcVar6 = "\x01";
    pcVar7 = acStack_148;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1109ff668,pcVar7,(long)(param_1 * 1000.0));
    pcStack_130 = acStack_148;
    func_0x00010007e5dc(&pcStack_130);
    lVar8 = 0;
    pcVar5 = acStack_128;
    do {
      if ((&cStack_f9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
    pcVar2 = pcVar4;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_158 = FUN_107bc0edc;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  puStack_190 = unaff_x24;
  pcStack_188 = unaff_x23;
  pcStack_180 = param_4;
  pcStack_178 = pcVar5;
  pcStack_170 = pcVar2;
  pcStack_168 = pcVar4;
  ppuStack_160 = &puStack_b0;
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_1b0,pcVar4);
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    func_0x00010007e1e8(&uStack_1d0,auStack_1b0,&lStack_198,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1109ff6b8,&uStack_1d0,pcVar7);
    puStack_1b8 = (undefined1 *)&uStack_1d0;
    func_0x00010007e5dc(&puStack_1b8);
    if (cStack_199 < '\0') {
      __ZdlPv(auStack_1b0[0]);
    }
  }
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  puStack_1f8 = (undefined1 *)&uStack_210;
  pcStack_1d8 = FUN_107bc1050;
  if (pcVar5 != (char *)0x0) {
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    pcStack_1f0 = pcVar4;
    pcStack_1e8 = pcVar6;
    pppuStack_1e0 = &ppuStack_160;
    (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
              (*(long **)(pcVar5 + 8),&UNK_1109ff708,&uStack_210,pcVar1);
    func_0x00010007e5dc(&puStack_1f8);
  }
  return;
}



/* Entry: 107bc0ccc; end: 107bc0edb;  */

void FUN_107bc0ccc(double param_1,long param_2,char *param_3,undefined8 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  char *pcStack_150;
  char *pcStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_3;
  puVar5 = param_4;
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_3);
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar2);
    pcVar2 = "true";
    if ((int)param_4 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_70,pcVar2);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010007e1e8(&uStack_a8,auStack_88,&lStack_58,2);
    pcVar2 = "\x01";
    puVar5 = &uStack_a8;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1109ff668,puVar5,(long)(param_1 * 1000.0));
    puStack_90 = &uStack_a8;
    func_0x00010007e5dc(&puStack_90);
    lVar7 = 0;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
    pcVar1 = param_3;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_b8 = FUN_107bc0edc;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar1 != (char *)0x0) {
    plVar6 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_110,pcVar1);
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    func_0x00010007e1e8(&uStack_130,auStack_110,&lStack_f8,1);
    pcVar4 = "";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1109ff6b8,&uStack_130,puVar5);
    puStack_118 = (undefined1 *)&uStack_130;
    func_0x00010007e5dc(&puStack_118);
    if (cStack_f9 < '\0') {
      __ZdlPv(auStack_110[0]);
    }
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  puStack_158 = (undefined1 *)&uStack_170;
  pcStack_138 = FUN_107bc1050;
  if (pcVar3 != (char *)0x0) {
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    pcStack_150 = pcVar1;
    pcStack_148 = pcVar2;
    ppuStack_140 = &puStack_c0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1109ff708,&uStack_170,pcVar4);
    func_0x00010007e5dc(&puStack_158);
  }
  return;
}



/* Entry: 107bc0edc; end: 107bc104f;  */

void FUN_107bc0edc(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109ff6b8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_107bc1050;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1109ff708,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 107bc1050; end: 107bc10c7;  */

void FUN_107bc1050(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff708,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc10c8; end: 107bc113f;  */

void FUN_107bc10c8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff758,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc1140; end: 107bc11b7;  */

void FUN_107bc1140(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff7a8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc11b8; end: 107bc122f;  */

void FUN_107bc11b8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109ff7f8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc1230; end: 107bc12b3;  */

void FUN_107bc1230(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_1109ff848,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc12b4; end: 107bc1337;  */

void FUN_107bc12b4(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_1109ff898,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc1338; end: 107bc13bb;  */

void FUN_107bc1338(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_1109ff8e8,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc13bc; end: 107bc143f;  */

void FUN_107bc13bc(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_1109ff938,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107bc1440; end: 107bc15b3;  */

void FUN_107bc1440(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
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
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109ff988,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_107bc15b4;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1109ff9d8,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}


