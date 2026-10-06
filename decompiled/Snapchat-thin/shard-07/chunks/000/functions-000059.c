/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10511c014; end: 10511c01f; -[SCSafetyReportContainerViewController defaultSubProjectName] */

undefined ** FUN_10511c014(void)

{
  return &PTR____CFConstantStringClassReference_110dc6718;
}



/* Entry: 10511c020; end: 10511c4b3;  */

void FUN_10511c020(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10511c4b4;
  uStack_40 = 0x10511c4c4;
  uStack_38 = 0;
  func_0x00010c0c1220(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10511c4b4; end: 10511c4cb;  */

void FUN_10511c4b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10511c4cc; end: 10511d1cb;  */

void FUN_10511c4cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b4fc8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c03e860();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21edc0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10511d1cc; end: 10511d3fb; -[SCSafetyReportV3EntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511d1cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4fd0;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11271caa8;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11271caac;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271cab0;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf44ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271cab4;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271cab8;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e7e0(puVar2);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010bf17a60(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10511d3fc; end: 10511d43b;  */

void FUN_10511d3fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10511d43c; end: 10511d613; -[SCSafetyReportV3EntryPoint _createReportedChatMessageFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511d43c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = (long)_DAT_11271cabc;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar10 = (long)_DAT_11271cac0;
    lVar1 = param_1 + lVar10;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar11 = (long)_DAT_11271cac4;
      lVar1 = param_1 + lVar11;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar1 != 0) {
        puVar9 = PTR_PTR_1126b4fd8;
        _objc_alloc();
        lVar8 = param_1 + lVar8;
        _objc_loadWeakRetained();
        lVar2 = lVar8;
        func_0x00010bf50420();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_1 + lVar10;
        _objc_loadWeakRetained();
        lVar3 = lVar10;
        func_0x00010bf50600();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010beee460();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = param_1 + lVar11;
        _objc_loadWeakRetained(lVar11);
        lVar5 = lVar11;
        func_0x00010bf50160();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1 + _DAT_11271cac8;
        _objc_loadWeakRetained(lVar1);
        lVar6 = lVar1;
        func_0x00010c0cb840();
        _objc_retainAutoreleasedReturnValue();
        param_1 = param_1 + _DAT_11271cacc;
        _objc_loadWeakRetained(param_1);
        lVar7 = param_1;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c005640(puVar9,param_2,lVar2,lVar4,lVar5,lVar6,lVar7);
        _objc_release(lVar7);
        _objc_release(param_1);
        _objc_release(lVar6);
        _objc_release(lVar1);
        _objc_release(lVar5);
        _objc_release(lVar11);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar10);
        _objc_release(lVar2);
        _objc_release(lVar8);
        goto LAB_10511d5f0;
      }
    }
  }
  puVar9 = (undefined *)0x0;
LAB_10511d5f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10511d614; end: 10511d6ab; -[SCSafetyReportV3EntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10511d614(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271cab8);
  _objc_destroyWeak(param_1 + _DAT_11271cac4);
  _objc_destroyWeak(param_1 + _DAT_11271cac0);
  _objc_destroyWeak(param_1 + _DAT_11271cabc);
  _objc_destroyWeak(param_1 + _DAT_11271cacc);
  _objc_destroyWeak(param_1 + _DAT_11271cab4);
  _objc_destroyWeak(param_1 + _DAT_11271cac8);
  _objc_destroyWeak(param_1 + _DAT_11271cab0);
  _objc_destroyWeak(param_1 + _DAT_11271caac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271caa8);
  return;
}



/* Entry: 10511d6ac; end: 10511d7ff; -[SCSafetyReportV3Router initWithReportScope:valdiRuntimeProvider:customReportComposerFactory:composerGrpcServiceFactory:reportedChatMessageFetcher:cofStore:] */

undefined1 *
FUN_10511d6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e6428;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
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



/* Entry: 10511d800; end: 10511d97f; -[SCSafetyReportV3Router begin] */

void FUN_10511d800(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040b80(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf55860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar4 = param_2;
  func_0x00010c0b76e0(param_2,param_3,uVar3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b4fe0;
  _objc_alloc(PTR_PTR_1126b4fe0);
  func_0x00010c0601e0();
  puVar6 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  func_0x00010c1c8b80();
  puVar7 = PTR_PTR_1126b4fe0;
  _objc_opt_class(PTR_PTR_1126b4fe0);
  func_0x00010c181960(puVar1,param_3,puVar7);
  func_0x00010c1c1bc0(puVar1,param_3,puVar5);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c27ece0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(puVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10511d980; end: 10511da47; -[SCSafetyReportV3Router makeSafetyReportDepsStartedAtMs:] */

void FUN_10511d980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b4fe8;
  _objc_alloc_init(PTR_PTR_1126b4fe8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4d00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb620(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c17df40(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209cc0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10511da48; end: 10511dbb7; -[SCSafetyReportV3Router makeReportPageV2WithCoreDeps:startedAtMs:] */

void FUN_10511da48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0b7820(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b4ff0;
  _objc_alloc(PTR_PTR_1126b4ff0);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c133700(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  FUN_10511c020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033820(puVar4,param_2,uVar2,param_1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010be221c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196be0(puVar4,param_2,param_1);
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126b4ff8;
  _objc_alloc(PTR_PTR_1126b4ff8);
  func_0x00010c0412c0();
  _objc_release(param_3);
  puVar7 = PTR_PTR_1126b5000;
  _objc_alloc(PTR_PTR_1126b5000);
  func_0x00010c061d40();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10511dbb8; end: 10511dc93; -[SCSafetyReportV3Router _getReportAttribution] */

void FUN_10511dbb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c29d360();
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (lVar1 < 0) {
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c29d360();
    func_0x00010511a660();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c247980();
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126b5008;
    _objc_alloc(PTR_PTR_1126b5008);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25eb00(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c247980(uVar3);
    func_0x00010511a560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b5008;
    _objc_alloc(PTR_PTR_1126b5008);
  }
  func_0x00010c011900();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10511dc94; end: 10511dd23; -[SCSafetyReportV3Router reportDidCompleteWithCancelled:] */

void FUN_10511dc94(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10511dd24;
  puStack_38 = &UNK_110845ce0;
  uStack_30 = uVar1;
  uStack_28 = param_3;
  _objc_retain();
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(uVar1);
  return;
}



/* Entry: 10511dd24; end: 10511dd33;  */

void FUN_10511dd24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c132b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reportDidCompleteWithCancelled__11262a4f0,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10511dd34; end: 10511dddb; -[SCSafetyReportV3Router reportDidSubmitWithReasonId:comment:] */

void FUN_10511dd34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c132b60();
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10511dddc; end: 10511dde7; -[SCSafetyReportV3Router pushToValdiMarshaller:] */

undefined8 FUN_10511dddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df2d0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010afc53fc();
  return param_3;
}



/* Entry: 10511dde8; end: 10511de47; -[SCSafetyReportV3Router .cxx_destruct] */

void FUN_10511dde8(long param_1)

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



/* Entry: 10511de48; end: 10511debb; -[SCGrapheneSafetyReportNativeMetric2 init] */

undefined1 * FUN_10511de48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6430;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10511debc; end: 10511e0eb;  */

undefined ** FUN_10511debc(long param_1,undefined **param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
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
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108699d0,&uStack_98,param_4);
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
  ppuVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(ppuVar2);
  return &PTR____CFConstantStringClassReference_110dc6738;
}



/* Entry: 10511e0ec; end: 10511e0f7; +[SelfHarmResourcesPage componentPath] */

undefined ** FUN_10511e0ec(void)

{
  return &PTR____CFConstantStringClassReference_110dc6738;
}



/* Entry: 10511e0f8; end: 10511e12b; -[SelfHarmResourcesPage initWithViewModel:componentContext:runtime:] */

void FUN_10511e0f8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6438;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10511e12c; end: 10511e17b; -[SelfHarmResourcesPage setViewModel:] */

void FUN_10511e12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10511e17c; end: 10511e1bf; -[SelfHarmResourcesPage viewModel] */

void FUN_10511e17c(undefined8 param_1)

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



/* Entry: 10511e1c0; end: 10511e1f3; -[SelfHarmResourcesContext initWithHandleAction:] */

void FUN_10511e1c0(void)

{
  func_0x00010511e324();
  func_0x00010511e2e0(PTR_PTR_1126e6440);
  func_0x00010511e330();
  return;
}



/* Entry: 10511e1f4; end: 10511e207; +[SelfHarmResourcesContext valdiMarshallableObjectDescriptor] */

void FUN_10511e1f4(undefined8 *param_1)

{
  *param_1 = &PTR_s_handleAction_110869a40;
  param_1[1] = &PTR_s_SupportResourceActionData_110869a70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511e208; end: 10511e23b; -[SelfHarmResourcesViewModel initWithOnDismiss:] */

void FUN_10511e208(void)

{
  func_0x00010511e324();
  func_0x00010511e2e0(PTR_PTR_1126e6448);
  func_0x00010511e330();
  return;
}



/* Entry: 10511e23c; end: 10511e24b; +[SelfHarmResourcesViewModel valdiMarshallableObjectDescriptor] */

void FUN_10511e23c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onDismiss_110869a80;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511e24c; end: 10511e27f; -[SupportResourceActionData init] */

void FUN_10511e24c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6450;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10511e280; end: 10511e293; +[SupportResourceActionData valdiMarshallableObjectDescriptor] */

void FUN_10511e280(undefined8 *param_1)

{
  *param_1 = &PTR_s_call_110869ab0;
  param_1[1] = &PTR_s_SupportResourceActionDataText_110869b10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511e294; end: 10511e2cf; -[SupportResourceActionDataText initWithNumber:] */

void FUN_10511e294(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6458;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10511e2d0; end: 10511e33b; +[SupportResourceActionDataText valdiMarshallableObjectDescriptor] */

void FUN_10511e2d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_number_110869b20;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511e33c; end: 10511e347; +[SCCSaturnBillboardPrivacySettingsTakeoverView componentPath] */

undefined ** FUN_10511e33c(void)

{
  return &PTR____CFConstantStringClassReference_110dc6758;
}



/* Entry: 10511e348; end: 10511e37b; -[SCCSaturnBillboardPrivacySettingsTakeoverView initWithViewModel:componentContext:runtime:] */

void FUN_10511e348(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6460;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10511e37c; end: 10511e3cb; -[SCCSaturnBillboardPrivacySettingsTakeoverView setViewModel:] */

void FUN_10511e37c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10511e3cc; end: 10511e40f; -[SCCSaturnBillboardPrivacySettingsTakeoverView viewModel] */

void FUN_10511e3cc(undefined8 param_1)

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



/* Entry: 10511e410; end: 10511e4db; -[SCCSaturnBillboardPrivacySettingsTakeoverViewContext initWithOnTapSetPrivacySettings:onTapOKButton:onTapOutsideToDismiss:] */

undefined8 *
FUN_10511e410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126e6468;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10511e4dc; end: 10511e4eb; +[SCCSaturnBillboardPrivacySettingsTakeoverViewContext valdiMarshallableObjectDescriptor] */

void FUN_10511e4dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onTapSetPrivacySettings_110869b68;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511e4ec; end: 10511e52b; -[SCCSaturnBillboardPrivacySettingsTakeoverViewModel initWithTitle:subtitle:] */

void FUN_10511e4ec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6470;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10511e52c; end: 10511e547; +[SCCSaturnBillboardPrivacySettingsTakeoverViewModel valdiMarshallableObjectDescriptor] */

void FUN_10511e52c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_title_110869bc8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511e548; end: 10511e553; +[SCCCountdownProfileCellView componentPath] */

undefined ** FUN_10511e548(void)

{
  return &PTR____CFConstantStringClassReference_110dc6778;
}



/* Entry: 10511e554; end: 10511e587; -[SCCCountdownProfileCellView initWithViewModel:componentContext:runtime:] */

void FUN_10511e554(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6478;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10511e588; end: 10511e5d7; -[SCCCountdownProfileCellView setViewModel:] */

void FUN_10511e588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10511e5d8; end: 10511e61b; -[SCCCountdownProfileCellView viewModel] */

void FUN_10511e5d8(undefined8 param_1)

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



/* Entry: 10511e61c; end: 10511e64f; -[SCCCountdownProfileCellViewContext init] */

void FUN_10511e61c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6480;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10511e650; end: 10511e66f; +[SCCCountdownProfileCellViewContext valdiMarshallableObjectDescriptor] */

void FUN_10511e650(undefined8 *param_1)

{
  *param_1 = &PTR_s_onOpenCountdown_110869c28;
  param_1[1] = &PTR_s_SCCFriendStoring_110869c88;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511e670; end: 10511e6b7; -[SCCCountdownProfileCellViewModel initWithCountdownId:countdownName:creatorId:startTimestamp:userId:] */

void FUN_10511e670(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e6488;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10511e6b8; end: 10511e6cf; +[SCCCountdownProfileCellViewModel valdiMarshallableObjectDescriptor] */

void FUN_10511e6b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_countdownId_110869ca0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511e6d0; end: 10511e743; -[SCCountdownsNetworkServices initWithCountdownsNetworkRequester:] */

undefined1 * FUN_10511e6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6490;
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



/* Entry: 10511e744; end: 10511e74b; -[SCCountdownsNetworkServices countdownsNetworkRequester] */

undefined8 FUN_10511e744(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10511e74c; end: 10511e757; -[SCCountdownsNetworkServices .cxx_destruct] */

void FUN_10511e74c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10511e758; end: 10511eb57; +[SCCountdownsBitmojiHelper snapchatterWithBitmojiInfoFromSnapchatter:userInfoServices:] */

void FUN_10511e758(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b14b8;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010bf1ad00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf1c0e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar6 = uVar5;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7be0(puVar1,param_2,uVar4,uVar7,0,0,0,0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar8 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar9 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c07a6a0();
  uVar13 = param_3;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf8e9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010c06d560();
  uVar16 = param_3;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c08f840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102000();
  uVar23 = param_3;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010beef400();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010c105040();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010c1022a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0(puVar8,param_2,uVar9,uVar10,uVar11,uVar12 & 0xffffffff,uVar13,puVar1,uVar14,
                      (char)uVar15);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10511eb58; end: 10511ebcb; -[SCGrapheneSaturnUpsellMetric2 init] */

undefined1 * FUN_10511eb58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6498;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10511ebcc; end: 10511ee8b;  */

/* WARNING: Removing unreachable block (ram,0x00010511ee54) */
/* WARNING: Removing unreachable block (ram,0x00010511f344) */

undefined **
FUN_10511ebcc(long param_1,undefined **param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined **ppuStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  undefined **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar4 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_2;
  pcVar1 = param_3;
  pcVar7 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    ppuVar5 = (undefined **)&UNK_110869d30;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar10 = 0;
    pcVar1 = pcVar4;
    pcVar7 = param_5;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_10511ee8c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar5;
  pcVar4 = pcVar1;
  pcVar8 = pcVar7;
  puStack_100 = (undefined8 *)unaff_x24;
  ppuStack_f0 = ppuVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  ppuStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar5);
  _objc_retain(pcVar1);
  if (ppuVar3 != (undefined **)0x0) {
    plVar11 = (long *)ppuVar3[1];
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)ppuVar5;
      _objc_retainAutorelease(ppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar5);
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar4);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(pcVar1);
      pcVar4 = pcVar1;
      func_0x00010bdc3520(pcVar1);
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_120,pcVar4);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    ppuVar6 = (undefined **)&UNK_110869d80;
    pcVar4 = acStack_158;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcStack_140 = acStack_158;
    func_0x00010007e5dc(&pcStack_140);
    lVar10 = 0;
    pcVar8 = pcVar7;
    do {
      if ((&cStack_109)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar1);
  ppuVar2 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar1);
    _objc_release(ppuVar5);
    __Unwind_Resume();
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar6);
    _objc_retain(pcVar4);
    _objc_retain(pcVar8);
    if (ppuVar2 != (undefined **)0x0) {
      plVar11 = (long *)ppuVar2[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = (char *)ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_200,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_1e8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1d0,pcVar1);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110869dd0,&uStack_220,pcVar9);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x00010007e5dc(&puStack_208);
      lVar10 = 0;
      do {
        if ((&cStack_1b9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
        unaff_x24 = (char *)&uStack_220;
      } while (lVar10 != -0x48);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar4);
    ppuVar5 = ppuVar6;
    _objc_release(ppuVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      do {
        unaff_x24 = (char *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (char *)auStack_200);
      _objc_release(pcVar8);
      _objc_release(pcVar4);
      _objc_release(ppuVar6);
      __Unwind_Resume(ppuVar5);
      return &PTR____CFConstantStringClassReference_110dc6798;
    }
    return ppuVar5;
  }
  return ppuVar2;
}



/* Entry: 10511ee8c; end: 10511f0bb;  */

/* WARNING: Removing unreachable block (ram,0x00010511f344) */

undefined **
FUN_10511ee8c(long param_1,undefined **param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined **ppuVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2;
  pcVar1 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
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
    ppuVar4 = (undefined **)&UNK_110869d80;
    pcVar1 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    pcVar5 = param_4;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar4);
    _objc_retain(pcVar1);
    _objc_retain(pcVar5);
    if (ppuVar2 != (undefined **)0x0) {
      plVar7 = (long *)ppuVar2[1];
      _objc_retain(ppuVar4);
      if (ppuVar4 == (undefined **)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)ppuVar4;
        _objc_retainAutorelease(ppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar4);
      func_0x00010002b838(auStack_140,pcVar3);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar1);
        pcVar3 = pcVar1;
        func_0x00010bdc3520(pcVar1);
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_128,pcVar3);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar3 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_110,pcVar3);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110869dd0,&uStack_160,param_5);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x00010007e5dc(&puStack_148);
      lVar6 = 0;
      do {
        if ((&cStack_f9)[lVar6] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
        unaff_x24 = &uStack_160;
      } while (lVar6 != -0x48);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar1);
    ppuVar2 = ppuVar4;
    _objc_release(ppuVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_140);
      _objc_release(pcVar5);
      _objc_release(pcVar1);
      _objc_release(ppuVar4);
      __Unwind_Resume(ppuVar2);
      return &PTR____CFConstantStringClassReference_110dc6798;
    }
    return ppuVar2;
  }
  return ppuVar2;
}



/* Entry: 10511f0bc; end: 10511f37b;  */

/* WARNING: Removing unreachable block (ram,0x00010511f344) */

undefined **
FUN_10511f0bc(long param_1,undefined **param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
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
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
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
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110869dd0,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(ppuVar2);
    return &PTR____CFConstantStringClassReference_110dc6798;
  }
  return ppuVar2;
}



/* Entry: 10511f37c; end: 10511f387; +[SCCSaturnUpsellTrayTray componentPath] */

undefined ** FUN_10511f37c(void)

{
  return &PTR____CFConstantStringClassReference_110dc6798;
}



/* Entry: 10511f388; end: 10511f3bb; -[SCCSaturnUpsellTrayTray initWithViewModel:componentContext:runtime:] */

void FUN_10511f388(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e64a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10511f3bc; end: 10511f40b; -[SCCSaturnUpsellTrayTray setViewModel:] */

void FUN_10511f3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10511f40c; end: 10511f44f; -[SCCSaturnUpsellTrayTray viewModel] */

void FUN_10511f40c(undefined8 param_1)

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



/* Entry: 10511f450; end: 10511f4fb; -[SCCSaturnUpsellTrayTrayContext initWithOnDismiss:] */

undefined8 * FUN_10511f450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126e64a8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10511f4fc; end: 10511f50b; +[SCCSaturnUpsellTrayTrayContext valdiMarshallableObjectDescriptor] */

void FUN_10511f4fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onDismiss_110869ea0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511f50c; end: 10511f53f; -[SCCSaturnUpsellTrayTrayViewModel init] */

void FUN_10511f50c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e64b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10511f540; end: 10511f55b; +[SCCSaturnUpsellTrayTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_10511f540(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_skOverlayVisible_11086a188;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511f55c; end: 10511f59b; +[SCCSaturnSettingsSaturnPrivacyStore valdiMarshallableObjectDescriptor] */

void FUN_10511f55c(undefined8 *param_1)

{
  *param_1 = &PTR_s_observeSaturnPrivacy_11086a200;
  param_1[1] = &PTR_s_SCBridgeObservable_11086a248;
  param_1[2] = &PTR_s_ooi_o_11086a1d0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10511f59c; end: 10511f617;  */

void FUN_10511f59c(undefined8 param_1)

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
  pcStack_38 = FUN_10511f6e4;
  puStack_30 = &UNK_11086a270;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  FUN_10511f714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10511f618; end: 10511f623; +[SCCSaturnSettingsSaturnSettingsComponent componentPath] */

undefined ** FUN_10511f618(void)

{
  return &PTR____CFConstantStringClassReference_110dc67b8;
}



/* Entry: 10511f624; end: 10511f657; -[SCCSaturnSettingsSaturnSettingsComponent initWithViewModel:componentContext:runtime:] */

void FUN_10511f624(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e64b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10511f658; end: 10511f6a3; -[SCCSaturnSettingsSaturnSettingsComponent setViewModel:] */

void FUN_10511f658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_10511f714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10511f6a4; end: 10511f6e3; -[SCCSaturnSettingsSaturnSettingsComponent viewModel] */

void FUN_10511f6a4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10511f714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10511f6e4; end: 10511f713;  */

void FUN_10511f6e4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10511f714; end: 10511f71b;  */

void FUN_10511f714(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10511f71c; end: 10511f723; -[SCCSaturnSettingsSaturnPrivacyOption__Enum init] */

void FUN_10511f71c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10511f724; end: 10511f75f; -[SCCSaturnSettingsObserveSaturnPrivacyResponse initWithSaturnPrivacyOption:] */

void FUN_10511f724(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e64c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10511f760; end: 10511f773; +[SCCSaturnSettingsObserveSaturnPrivacyResponse valdiMarshallableObjectDescriptor] */

void FUN_10511f760(undefined8 *param_1)

{
  *param_1 = &PTR_s_saturnPrivacyOption_11086a2a0;
  param_1[1] = &PTR_s_SCCSaturnSettingsSaturnPrivacyOp_11086a2d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511f774; end: 10511f80f; -[SCCSaturnSettingsSaturnSettingsContext initWithOnBackButtonTapped:saturnPrivacyStore:notificationPresenter:] */

undefined8 *
FUN_10511f774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126e64c8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10511f810; end: 10511f823; +[SCCSaturnSettingsSaturnSettingsContext valdiMarshallableObjectDescriptor] */

void FUN_10511f810(undefined8 *param_1)

{
  *param_1 = &PTR_s_onBackButtonTapped_11086a2e0;
  param_1[1] = &PTR_s_SCCSaturnSettingsSaturnPrivacySt_11086a340;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511f824; end: 10511f857; -[SCCSaturnSettingsSetSaturnPrivacyResponse init] */

void FUN_10511f824(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e64d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10511f858; end: 10511f87f; +[SCCSaturnSettingsSetSaturnPrivacyResponse valdiMarshallableObjectDescriptor] */

void FUN_10511f858(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_error_11086a358;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10511f880; end: 10511fa3f; -[SCChangePWTakeoverRouter initWithUIContainer:lazyBlizzardUserLogger:lazyGrapheneRegistry:changePasswordScopeExposer:passwordSettingsScopeServices:delegate:resourceDownloader:] */

long FUN_10511f880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_1 != 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_4;
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + 0x38,param_8);
    _objc_release(param_8);
    puVar1 = PTR_PTR_1126b5010;
    _objc_alloc();
    func_0x00010c00ac80();
    _objc_release(param_9);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_alloc();
    func_0x00010c0402e0();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1cb760(*(undefined8 *)(param_1 + 0x40));
    puVar1 = PTR_PTR_1126aead0;
    _objc_alloc();
    func_0x00010c02e4c0();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10511fa40; end: 10511faa7; -[SCChangePWTakeoverRouter presentTakeoverModal] */

void FUN_10511fa40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d5e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be56c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logPageImpression_1125734c0);
  return;
}



/* Entry: 10511faa8; end: 10511fadb; -[SCChangePWTakeoverRouter dismissTakeoverModal] */

void FUN_10511faa8(undefined8 param_1)

{
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10511fadc; end: 10511fb77; -[SCChangePWTakeoverRouter presentChangePasswordFeature] */

void FUN_10511fadc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0f55c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0d5e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf24220(uVar1,param_2,uVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf34fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10511fb78; end: 10511fb9b; -[SCChangePWTakeoverRouter didTapChangePassword] */

void FUN_10511fb78(undefined8 param_1)

{
  func_0x00010c10b820();
                    /* WARNING: Could not recover jumptable at 0x00010be51670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logChangePasswordButtonTapped_112571f38);
  return;
}



/* Entry: 10511fb9c; end: 10511fbd7; -[SCChangePWTakeoverRouter didTapDismissWithoutChangingPassword] */

void FUN_10511fb9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1420c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be52670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logDismissButtonTapped_112572338);
  return;
}



/* Entry: 10511fbd8; end: 10511fc33; -[SCChangePWTakeoverRouter passwordSettingsDidCompleteChange] */

void FUN_10511fbd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf34fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1420c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10511fc34; end: 10511fc6b; -[SCChangePWTakeoverRouter passwordSettingsDidExitWithoutCompletion] */

void FUN_10511fc34(undefined8 param_1)

{
  func_0x00010bf34fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10511fc6c; end: 10511fd97; -[SCChangePWTakeoverRouter _logChangePasswordButtonTapped] */

void FUN_10511fc6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b5018;
  func_0x00010c23c840(PTR_PTR_1126b5018);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c08d620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c268720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c21acc0();
  func_0x00010c197620(puVar1,param_2,2);
  func_0x00010c08d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10511fd98; end: 10511fec3; -[SCChangePWTakeoverRouter _logDismissButtonTapped] */

void FUN_10511fd98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b5018;
  func_0x00010c23c860(PTR_PTR_1126b5018);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c08d620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c268720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c21acc0();
  func_0x00010c197620(puVar1,param_2,4);
  func_0x00010c08d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10511fec4; end: 10511ffef; -[SCChangePWTakeoverRouter _logPageImpression] */

void FUN_10511fec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b5018;
  func_0x00010c268760(PTR_PTR_1126b5018);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c08d620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c268720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126aebe8;
  _objc_opt_new(PTR_PTR_1126aebe8);
  func_0x00010c21acc0();
  func_0x00010c197620(puVar1,param_2,0);
  func_0x00010c08d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10511fff0; end: 10511fff7; -[SCChangePWTakeoverRouter lazyBlizzardUserLogger] */

undefined8 FUN_10511fff0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10511fff8; end: 105120027; -[SCChangePWTakeoverRouter setLazyBlizzardUserLogger:] */

void FUN_10511fff8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105120028; end: 10512002f; -[SCChangePWTakeoverRouter lazyGrapheneRegistry] */

undefined8 FUN_105120028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105120030; end: 10512005f; -[SCChangePWTakeoverRouter setLazyGrapheneRegistry:] */

void FUN_105120030(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105120060; end: 105120067; -[SCChangePWTakeoverRouter uiContainer] */

undefined8 FUN_105120060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105120068; end: 105120097; -[SCChangePWTakeoverRouter setUiContainer:] */

void FUN_105120068(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105120098; end: 10512009f; -[SCChangePWTakeoverRouter changePasswordScopeExposer] */

undefined8 FUN_105120098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1051200a0; end: 1051200cf; -[SCChangePWTakeoverRouter setChangePasswordScopeExposer:] */

void FUN_1051200a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051200d0; end: 1051200d7; -[SCChangePWTakeoverRouter passwordSettingsScopeServices] */

undefined8 FUN_1051200d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1051200d8; end: 105120107; -[SCChangePWTakeoverRouter setPasswordSettingsScopeServices:] */

void FUN_1051200d8(long param_1,undefined8 param_2,undefined8 param_3)

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


